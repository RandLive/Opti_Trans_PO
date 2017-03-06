clear
clc
tic
global  Anz_Spulen...
        I f C A_Empfang m r funktionscount zeit U...
        max_abstand Nummer...
        StartX StartY StartZ StartPhi StartTheta N_Channel

   N_Channel=8;
   f=1e3;  
   
 load testtest
    
    POR=POR; %#ok<*ASGSL>
    U1=U_Measured;
   
    omega=2*pi*f;
    
StartX =0;
StartY =0;
StartZ = 0.35;
StartPhi = -180;
StartTheta = -180;

Anz_Punkte=1;                         % Anzahl der Testpunkte ?Number of testing point?
Anz_Spulen=8;                           % Anzahl der Spulen    (Number of coils)                       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% required

mu0=4*pi*10^-7;                         % ?                   (Permeability)
mur_sende=1;                            % relative Permeabilität Sendespule  (Permeability of emitting coils)
mur_empfang=898.4;                      % relative Permeabilität Empfangsspule  (Permeability of sensing coils)

N_sende=207;                            % Windungszahl Sendespule  (number of windings - emitting coil)
N_empfang=500;                          % Windungszahl Empfangsspule (number of windings - sensing coil)
R_sende=0.015;                           % Radius Sendespule (Radius of emitting coils)
R_empfang=283.2*10^-6;                  % Radius Empfangsspule (Radius of sensing coils)
% I=0.7201;                                	% Strom Sendespule (current in the sensing coils)
% I=0.11435;

% I=0.030282398842848;
I=0.6602;
       



% Frequenz Sendespule (frequency of signal on sensing coil)

A_Empfang=pi*R_empfang^2;               % Normalenfläche Empfangsspule (normal area of the sensing coil) %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign

C1=mu0/(4*pi)*mur_sende;                % Konstande für B-Feld (constant of B field)
C2=2*pi*f;                              % Konstante für Ableitung nach t (constant for w)
C3=-mur_empfang*N_empfang*A_Empfang;      % Konstante für Spannungsberechnung (constant for voltage calculation)


% Verstaerkung=6739.7*3.295*2/4;


% Verstaerkung=1.573943202562500e+03;
Verstaerkung= 144.3985;
% Verstaerkung=6889.10446; 
C=Verstaerkung*C1*C2*C3;                % (Constant C)       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign
K=pi*N_sende*I*R_sende^2;               % Vorfaktor magnetisches Dipol (factor of magnetic dipol)  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign

funktionscount=2000;                    % Abbruchbedingung für fsolve (stop option for fsolve functon)

zeit=0.5;                               % Zeitbegrenzung für fsolve (time limitation for fsolve)

max_abstand=2;

m=zeros(Anz_Spulen,3);
r=zeros(Anz_Spulen,3);
                           
faktor= [1 1 1 1 1 1 1 1]';            % (factor for calibration calculation)


  
%   oo_ = [1 0 0;...
%       1 20 30;...
%       1 40 60;...
%       1 60 90;...
%       1 80 120;...
%       1 100 150;...
%       1 120 180;...
%       1 140 210];
  


coord_shift=[ 0 225.0000  162.2494    0.3772    0.3772   -0.0088;
   0 45.0000 -377.7506    0.3772    0.3772    0.0088;
   0 45.0000  702.2494   -0.3772   -0.3772   -0.0088;
  0 101.1713  436.9302   -0.3770   -0.0088    0.1273;
  0 -45.0000  557.7506    0.3772   -0.3772   -0.0088;
 0 -101.1713  -76.9302    0.3770   -0.0088    0.1273;
 0 -45.0000 -557.7506   -0.3772    0.3772   -0.0088;
 0 191.1713  643.0698   -0.0088    0.3770    0.1273];


oo_ = [1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0];

oo = oo_+coord_shift(:,1:3);
% oo=oo_;

% magnetisches Dipol 
phie=oo(1,2);    thetae=oo(1,3);       m(1,:)=faktor(1)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(2,2);     thetae=oo(2,3);       m(2,:)=faktor(2)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(3,2);     thetae=oo(3,3);    	m(3,:)=faktor(3)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(4,2);    thetae=oo(4,3);   	m(4,:)=faktor(4)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(5,2);    thetae=oo(5,3);      m(5,:)=faktor(5)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(6,2);	thetae=oo(6,3);    	m(6,:)=faktor(6)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(7,2);      thetae=oo(7,3);     	m(7,:)=faktor(7)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
phie=oo(8,2);      thetae=oo(8,3);      m(8,:)=faktor(8)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];

% Ortskoordinaten der Spulen (position coordinate of the emitting coils)
% r(1,:)=[-0.06 0.05 0];
% r(2,:)=[-0.02 0.05 0];
% r(3,:)=[0.02 0.05 0];
% r(4,:)=[0.06 0.05 0];
% r(5,:)=[-0.06 -0.05 0];
% r(6,:)=[-0.02 -0.05 0];
% r(7,:)=[0.02 -0.05 0];
% r(8,:)=[0.06 -0.05 0];
% 
%   r = [-0.06 0.05 0.02;...
%      -0.02 0.05 0.02;...
%       0.02 0.05 0.02;...
%       0.06 0.05 0.02;...
%      -0.06 -0.05 0.02;...
%      -0.02 -0.05 0.02;...
%       0.02 -0.05 0.02;...
%       0.06 -0.05 0.02];

r_ =[-0.28  -0.28 0.58;...
    -0.28  -0.28 0.02;...
    0.28   0.28 0.58;...
    0.28   0.28 0.02;...
    -0.28   0.28 0.58;...
    -0.28   0.28 0.02;...
    0.28  -0.28 0.58;...
    0.28  -0.28 0.02];

r=r_+coord_shift(:,4:6);
% r=r_;
% % 
% load  KOOD_PODrand_0dB
% % % 
% faktor= [1+koord_alle_alle(1,1)/100 1+koord_alle_alle(2,1)/100 1+koord_alle_alle(3,1)/100 1+koord_alle_alle(4,1)/100 1+koord_alle_alle(5,1)/100 1+koord_alle_alle(6,1)/100 1+koord_alle_alle(7,1)/100 1+koord_alle_alle(8,1)/100]';   
% %    
% % magnetisches Dipol 
% phi=-90+koord_alle_alle(1,2)/5;    theta=90+koord_alle_alle(1,3)/5;       m(1,:)=faktor(1)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=30+koord_alle_alle(2,2)/5;     theta=60+koord_alle_alle(2,3)/5;       m(2,:)=faktor(2)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=90+koord_alle_alle(3,2)/5;     theta=30+koord_alle_alle(3,3)/5;       m(3,:)=faktor(3)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=120+koord_alle_alle(4,2)/5;    theta=60+koord_alle_alle(4,3)/5;   	  m(4,:)=faktor(4)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=120+koord_alle_alle(5,2)/5;    theta=90+koord_alle_alle(5,3)/5;       m(5,:)=faktor(5)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=240+koord_alle_alle(6,2)/5;	   theta=30+koord_alle_alle(6,3)/5;    	  m(6,:)=faktor(6)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=0+koord_alle_alle(7,2)/5;      theta=koord_alle_alle(7,3)/5;     	  m(7,:)=faktor(7)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% phi=0+koord_alle_alle(8,2)/5;      theta=90+koord_alle_alle(8,3)/5;       m(8,:)=faktor(8)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
% 
% % % Ortskoordinaten der Spulen
% r(1,:)=[-0.05-koord_alle_alle(1,4)/1000 0.10-koord_alle_alle(1,5)/1000 0-koord_alle_alle(1,6)/1000];
% r(2,:)=[-0.15-koord_alle_alle(2,4)/1000 0-koord_alle_alle(2,5)/1000 0-koord_alle_alle(2,6)/1000];
% r(3,:)=[-0.05-koord_alle_alle(3,4)/1000 -0.10-koord_alle_alle(3,5)/1000 0-koord_alle_alle(3,6)/1000];
% r(4,:)=[0.05-koord_alle_alle(4,4)/1000 -0.10-koord_alle_alle(4,5)/1000 0-koord_alle_alle(4,6)/1000];
% r(5,:)=[0.15-koord_alle_alle(5,4)/1000 0-koord_alle_alle(5,5)/1000 0-koord_alle_alle(5,6)/1000];
% r(6,:)=[0.05-koord_alle_alle(6,4)/1000 0.10-koord_alle_alle(6,5)/1000 0-koord_alle_alle(6,6)/1000];
% r(7,:)=[0.05-koord_alle_alle(7,4)/1000 0-koord_alle_alle(7,5)/1000 0-koord_alle_alle(7,6)/1000];
% r(8,:)=[-0.05-koord_alle_alle(8,4)/1000 0-koord_alle_alle(8,5)/1000 0-koord_alle_alle(8,6)/1000];

% xv=[0.0629 0.0310 0.2834 177.4494 64.0365];
% 
% n=[sind(xv(5))*cosd(xv(4)) sind(xv(5))*sind(xv(4)) cosd(xv(5))];
% 
% 
% F(1)= U(1)-C*dot(Bfeld(m(1,:),xv(1:3)-r(1,:)),n);
% F(2)= U(2)-C*dot(Bfeld(m(2,:),xv(1:3)-r(2,:)),n);
% F(3)= U(3)-C*dot(Bfeld(m(3,:),xv(1:3)-r(3,:)),n);
% F(4)= U(4)-C*dot(Bfeld(m(4,:),xv(1:3)-r(4,:)),n);
% F(5)= U(5)-C*dot(Bfeld(m(5,:),xv(1:3)-r(5,:)),n);
% F(6)= U(6)-C*dot(Bfeld(m(6,:),xv(1:3)-r(6,:)),n);
% F(7)= U(7)-C*dot(Bfeld(m(7,:),xv(1:3)-r(7,:)),n);
% F(8)= U(8)-C*dot(Bfeld(m(8,:),xv(1:3)-r(8,:)),n);

% [x,y,z,phi,theta]=POS(U,Nummer,StartX,StartY,StartZ,StartPhi,StartTheta)

for i=1:11*11*6*3
    
StartX = POR(i,1);
StartY = POR(i,2);
StartZ = POR(i,3);
StartPhi = POR(i,4);
StartTheta = POR(i,5);


% U=U1(i,:)+wgn(1,8,-100,'dBW');
U=U1(i,:);
[x,y,z,phi,theta]=POS(U,StartX,StartY,StartZ,StartPhi,StartTheta);
coord(i,:)=[x,y,z,phi,theta]; %#ok<*SAGROW>

% StartX =POR(i,1)+0.01*(1-2*rand(1));
% StartY =POR(i,2)+0.01*(1-2*rand(1));
% StartZ = z;
% StartPhi = phi;
% StartTheta = theta;
% pause(0.5);
i
end
scatter3(coord(:,1),coord(:,2),coord(:,3));hold on;scatter3(POR(:,1),POR(:,2),POR(:,3),'r.');
P_Error=mean(std(coord(:,1:3)-POR(:,1:3)))
toc