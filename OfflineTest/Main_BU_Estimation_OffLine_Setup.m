clear;clc;

global mu0 mur_sende mur_empfang R_sende N_sende Ia varTotalNum 

cd 'DataSave'
load coord_shift_VOI_optiPose
cd ..
%% Add noise
U_g = 1;
f = 1000; %signal frequency of sine-wave excitation signal
flag = 0; % sine-wave excitation

%% noise level
nl = -100;

%% Relevent Constants
mu0=4*pi*10^-7;			% Permeability of vacumm
mur_sende=1;			% Relative permeability of transmitter coils
mur_empfang=898.4;      % Relative permeability of the sensor coil
Gain_tr=10.9;           % The gain of the pre amplifier for the transmitter coil array
s=1001;                 % Sample length

%% Cross-section area and gain for the sensor coil
N_sende=207;                            % Windungszahl Sendespule  (number of windings - emitting coil)
N_empfang=500;                          % Windungszahl Empfangsspule (number of windings - sensing coil)
R_sende=0.015;                           % Radius Sendespule (Radius of emitting coils)
R_empfang=283.2*10^-6;                                              % Turns of the sensor

A_Empfang=pi*R_empfang^2;                                   % Cross-section area of the transmitter coil
% Verstaerkung=567*3.295*3/4*6739.7/6000/Gain_tr;			% The gain of
% the amplifier for the sensor coil, 14.8 it the resistance of the circuit
Verstaerkung=1.573943202562500e+03/Gain_tr;

%% Calculation of current flow in the transmitter coils
t = linspace(0,1/100,s);
% Select sinewave?

if flag == 0
    I = U_g*sin(2*pi*f*t)/(sqrt(14.8^2+(2*pi*f*1.165*10^-3)^2))*Gain_tr;			% 14.8 is the circuit resistance and 1.165e-3 is the inductance
    Ia = sqrt(2)*rms(I(1:1000));									% The amplitude of sinewave current
    Omega = 2*pi*f;												    % Angular speed for circuilar wave
    % Select ramp signal?
elseif flag == 1
    T = max(t);
    I = U_g*100*t/(sqrt(14.8^2+(2*pi*(1/max(t))*1.165*10^-3)^2))*Gain_tr;
    Ia = I(max(size(I)));										 	% The maximum value of the ramp current
    Omega = 1/T;													% Angular speed - general caculation: d(Phi)/d(t). Here, we have 1 rad over total time T in ramp. The gradient remains.
    % Select DC signal?
elseif flag == 2
    T = max(t);
    I = U_g*100*t/(sqrt(14.8^2+(2*pi*(1/max(t))*1.165*10^-3)^2))*Gain_tr;
    Ia = mean(I);													% The mean value of the DC current
    Omega = 1/T;
end

%% Orientations of each transmitter coil

%% 1PMO
% oo_ = [1 -90 90;...
%       1 30 60;...
%       1 90 30;...
%       1 120 60;...
%       1 120 90;...
%       1 240 30;...
%       1 0 0;...
%       1 0 90];
  
% % % 1P1O, VOI
oo_ = [1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0;...
      1 0 0];


%% standard
r_ =[-50  100 0;...
    -150  0 0;...
    -50  -100 0;...
    50   -100 0;...
    150   0 0;...
    50    100 0;...
    50    0 0;...
    -50   0 0]/1000;

% r_ =[-0.3  -0.3 0.6;...
%     -0.3  -0.3 0.0;...
%     0.3   0.3 0.6;...
%     0.3   0.3 0.06;...
%     -0.3   0.3 0.6;...
%     -0.3   0.3 0.0;...
%     0.3  -0.3 0.6;...
%     0.3  -0.3 0.0];

%% with or without shift
r=r_+coord_shift(:,4:6);
% r=r_;
oo = oo_+coord_shift(:,1:3);
% oo=oo_;

rs = zeros(varTotalNum,3);
os = zeros(varTotalNum,3);

x_max = 11;
y_max = 11;
z_max = 6;
% 
for i_z = 1:z_max
    for i_y = 1:y_max
        for i_x = 1:x_max
            varLine = (i_z-1)*x_max*y_max+(i_y-1)*x_max+i_x;
            rs(varLine,:) = [-0.25+(i_x-1)*0.05; -0.25+(i_y-1)*0.05; 0.05+(i_z-1)*0.1];
            os(varLine,:) = [1; -180+360/(x_max*y_max*z_max)*varLine; -180+360/(x_max*y_max*z_max)*varLine];
        end
    end
end

% x_max = 11;
% y_max = 11;
% z_max = 6;
% ori_max = 3;
% 
% for i_z = 1:z_max
%     for i_y = 1:y_max
%         for i_x = 1:x_max
%             for ori = 1:ori_max
%                 varLine = (i_z-1)*x_max*y_max*ori_max+(i_y-1)*x_max*ori_max+(i_x-1)*ori_max+ori;
%                 rs(varLine,:) = [-0.25+(i_x-1)*0.05; -0.25+(i_y-1)*0.05; 0.05+(i_z-1)*0.1];
%                 %     os(varLine,:) = [1; -180+360/(x_max*y_max*z_max)*varLine; -180+360/(x_max*y_max*z_max)*varLine];
%                     if ori==1
%                         os(varLine,:) = [1; 0; 0];
%                     elseif ori==2
%                         os(varLine,:) = [1; 0; 90];
%                     else
%                         os(varLine,:) = [1; 90; 90];
%                     end                
%             end
%             %             os(varLine,:) = [1; 90; 90];
%         end
%     end
% end

varTotalNum = i_x*i_y*i_z;

rr1 = zeros(varTotalNum,3);rr2 = zeros(varTotalNum,3);rr3 = zeros(varTotalNum,3);rr4 = zeros(varTotalNum,3);
rr5 = zeros(varTotalNum,3);rr6 = zeros(varTotalNum,3);rr7 = zeros(varTotalNum,3);rr8 = zeros(varTotalNum,3);
rr = zeros(varTotalNum,8,3);

for varNum = 1:varTotalNum   
    rr1(varNum,:)=rs(varNum,:)-r(1,:);rr2(varNum,:)=rs(varNum,:)-r(2,:);rr3(varNum,:)=rs(varNum,:)-r(3,:);rr4(varNum,:)=rs(varNum,:)-r(4,:);
    rr5(varNum,:)=rs(varNum,:)-r(5,:);rr6(varNum,:)=rs(varNum,:)-r(6,:);rr7(varNum,:)=rs(varNum,:)-r(7,:);rr8(varNum,:)=rs(varNum,:)-r(8,:);
    rr(varNum,:,:)=[rr1(varNum,:);rr2(varNum,:);rr3(varNum,:);rr4(varNum,:);rr5(varNum,:);rr6(varNum,:);rr7(varNum,:);rr8(varNum,:)];   
end

m=zeros(8,3);
K = pi*N_sende*Ia*R_sende^2;

thetae=oo(1,3);phie=oo(1,2);
m(1,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(2,3);phie=oo(2,2);
m(2,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(3,3);phie=oo(3,2);
m(3,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(4,3);phie=oo(4,2);
m(4,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(5,3);phie=oo(5,2);
m(5,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(6,3);phie=oo(6,2);
m(6,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(7,3);phie=oo(7,2);
m(7,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;
thetae=oo(8,3);phie=oo(8,2);
m(8,:)=[sind(thetae)*cosd(phie) sind(thetae)*sind(phie) cosd(thetae)]*K;

%% Constant values for voltage (induced in sensor coil) calculation
C1 = mu0/(4*pi)*mur_sende;                                                   % Constant of B-field
C2 = Omega;																   % Value of angular frequency
% C2=2*pi*f;
C3 = -mur_empfang*N_empfang*A_Empfang;                                       % Constant for calculating the voltage
%% B-filed Calculation
% B = zeros(varTotalNum,8,3);
U2 = zeros(s,8);
% U1 = zeros(726,8);
U1_nonoise = zeros(1,8);

if flag == 0
    PHI = zeros(s-1,8);
    dPHI = zeros(s-2,8);
    dt = zeros(8,s-2);
    V = zeros(s-2,8);
    V_Visual = zeros(s-2,8);
else
    PHI = zeros(s,8);
    dPHI = zeros(s-1,8);
    dt = zeros(8,s-1);
    V = zeros(s-1,8);
    V_Visual = zeros(s-1,8);
end
C = C1*C2*C3*Verstaerkung;
Ca = -mur_sende*mur_empfang*N_empfang*A_Empfang*Verstaerkung;
% n_sensor = [sind(os(3))*cosd(os(2)); sind(os(3))*sind(os(2));
% cosd(os(3))];
rR = zeros(8,3);
B = zeros(varTotalNum,8,3);
U1 = zeros(varTotalNum,8);

for varNum=1:varTotalNum   
    for i=1:8
        rR(i,:) = [rr(varNum,i,1),rr(varNum,i,2),rr(varNum,i,3)];
        B(varNum,i,:)=Bfeld(m(i,:),rR(i,:));
        Bx=B(varNum,i,1);
        By=B(varNum,i,2);
        Bz=B(varNum,i,3);
        B_norm=[Bx By Bz];
        n_sensor = [sind(os(varNum,3))*cosd(os(varNum,2)); sind(os(varNum,3))*sind(os(varNum,2)); cosd(os(varNum,3))];
        U1(varNum,i) = C*dot(B_norm,n_sensor);
    end   
end

U_norm = U1;
U_add_noise = zeros(varTotalNum,8);

%%
for varNum=1:varTotalNum
        U_noise = wgn(1,8,nl,'dBW','real');       
        U_add_noise(varNum,:) = U_norm(varNum,:) + U_noise;     
end

U_Measured = U_add_noise;
POR = [rs, os(:,2:3)];

cd 'DataSave'
save TestData
cd ..
