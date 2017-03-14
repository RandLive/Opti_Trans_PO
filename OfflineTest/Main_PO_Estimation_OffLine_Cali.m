clear
clc
tic
global  Anz_Spulen...
    I f C A_Empfang m r funktionscount zeit U...
    max_abstand ...
    StartX StartY StartZ StartPhi StartTheta N_Channel

N_Channel=8;
f=1e3;

cd 'DataSave'
load POR_pmm
load U_pmm
load CaliTable_pmm_a
% load coord_shift_VOI_optiPose

cd ..

POR=POR_pmm; %#ok<*ASGSL>
U1=U_pmm;
omega=2*pi*f;


Anz_Punkte=1;                         % Anzahl der Testpunkte ?Number of testing point?
Anz_Spulen=8;                           % Anzahl der Spulen    (Number of coils)                       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% required

mu0=4*pi*10^-7;                         % ?                   (Permeability)
mur_sende=1;                            % relative Permeabilität Sendespule  (Permeability of emitting coils)
mur_empfang=898.4;                      % relative Permeabilität Empfangsspule  (Permeability of sensing coils)

N_sende=207;                            % Windungszahl Sendespule  (number of windings - emitting coil)
N_empfang=500;                          % Windungszahl Empfangsspule (number of windings - sensing coil)
R_sende=0.015;                           % Radius Sendespule (Radius of emitting coils)
R_empfang=283.2*10^-6;                  % Radius Empfangsspule (Radius of sensing coils)
I=0.6602;


% Frequenz Sendespule (frequency of signal on sensing coil)

A_Empfang=pi*R_empfang^2;               % Normalenfläche Empfangsspule (normal area of the sensing coil) %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign

C1=mu0/(4*pi)*mur_sende;                % Konstande für B-Feld (constant of B field)
C2=2*pi*f;                              % Konstante für Ableitung nach t (constant for w)
C3=-mur_empfang*N_empfang*A_Empfang;      % Konstante für Spannungsberechnung (constant for voltage calculation)
Verstaerkung= 144.3985;
C=Verstaerkung*C1*C2*C3;                % (Constant C)       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign
K=pi*N_sende*I*R_sende^2;               % Vorfaktor magnetisches Dipol (factor of magnetic dipol)  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign
funktionscount=2000;                    % Abbruchbedingung für fsolve (stop option for fsolve functon)
zeit=0.5;                               % Zeitbegrenzung für fsolve (time limitation for fsolve)
max_abstand=2;
m=zeros(Anz_Spulen,3);
% r=zeros(Anz_Spulen,3);

% %% No cali
% faktor= [1 1 1 1 1 1 1 1]';            % (factor for calibration calculation)

%% Cali
faktor= [1+koord_alle_alle(1,1)/100 1+koord_alle_alle(2,1)/100 1+koord_alle_alle(3,1)/100 1+koord_alle_alle(4,1)/100 1+koord_alle_alle(5,1)/100 1+koord_alle_alle(6,1)/100 1+koord_alle_alle(7,1)/100 1+koord_alle_alle(8,1)/100]';   

%% 1P1O
% oo_ = [1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0];
  
%% 1PMO  
oo_ = [1 0 0;...
    1 20 30;...
    1 40 60;...
    1 60 90;...
    1 80 120;...
    1 100 150;...
    1 120 180;...
    1 140 210];
%% Cali
oo_ = oo_ + [ones(8,1), koord_alle_alle(:,2:3)/5];

% VOI
% 
% oo_ = [1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0;...
%       1 0 0];

%% with or without optimization
% oo = oo_+coord_shift(:,1:3);
oo=oo_;

% magnetisches Dipol
phie=oo(1,2);    thetae=oo(1,3);        m(1,:)=faktor(1)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(2,2);    thetae=oo(2,3);        m(2,:)=faktor(2)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(3,2);    thetae=oo(3,3);    	m(3,:)=faktor(3)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(4,2);    thetae=oo(4,3);   	    m(4,:)=faktor(4)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(5,2);    thetae=oo(5,3);        m(5,:)=faktor(5)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(6,2);	 thetae=oo(6,3);    	m(6,:)=faktor(6)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(7,2);    thetae=oo(7,3);     	m(7,:)=faktor(7)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(8,2);    thetae=oo(8,3);        m(8,:)=faktor(8)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];

% % Ortskoordinaten der Spulen (position coordinate of the emitting coils)
%% 1P1O, 1PMO
r_ = [-0.06 0.05 0;...
     -0.02 0.05 0;...
      0.02 0.05 0;...
      0.06 0.05 0;...
     -0.06 -0.05 0;...
     -0.02 -0.05 0;...
      0.02 -0.05 0;...
      0.06 -0.05 0];

%% Cali
r_ = r_ - koord_alle_alle(:,4:6)/1000;
  
%% VOI
% r_ =[-0.28  -0.28 0.58;...
%     -0.28  -0.28 0.02;...
%     0.28   0.28 0.58;...
%     0.28   0.28 0.02;...
%     -0.28   0.28 0.58;...
%     -0.28   0.28 0.02;...
%     0.28  -0.28 0.58;...
%     0.28  -0.28 0.02];

% r_ =[-0.3  -0.3 0.6;...
%     -0.3  -0.3 0.0;...
%     0.3   0.3 0.6;...
%     0.3   0.3 0.06;...
%     -0.3   0.3 0.6;...
%     -0.3   0.3 0.0;...
%     0.3  -0.3 0.6;...
%     0.3  -0.3 0.0];

%% with or without optimization
% r=r_+coord_shift(:,4:6);
r=r_;

for i=1:11*11*6
    
    StartX = POR(i,1);StartY = POR(i,2);StartZ = POR(i,3);StartPhi = POR(i,4);StartTheta = POR(i,5);
    U=U1(i,:);
    [x,y,z,phi,theta]=POS(U,StartX,StartY,StartZ,StartPhi,StartTheta);
    POM(i,:)=[x,y,z,phi,theta]; %#ok<*SAGROW>
    
    % StartX =POR(i,1)+0.01*(1-2*rand(1));
    % StartY =POR(i,2)+0.01*(1-2*rand(1));
    % StartZ = z;
    % StartPhi = phi;
    % StartTheta = theta;
    % pause(0.5);
    fprintf('Number of %2i Positions\n',i);
end
scatter3(POM(:,1),POM(:,2),POM(:,3));hold on;scatter3(POR(:,1),POR(:,2),POR(:,3),'r.');
P_Error=rms(sqrt((POM(:,1)-POR(:,1)).^2+(POM(:,2)-POR(:,2)).^2+(POM(:,3)-POR(:,3)).^2))*1000;
fprintf('The Positional RMSE is %2.3f mm \n', P_Error);
toc