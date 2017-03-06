function F_out = outfun_PoseError_U_multiOri(x)

global mu0 muR_sende mur_empfang R_sende N_sende Ia varTotalNum StartPosition StartOrientation

global f C A_Empfang m r ...
    
%% Add noise
U_g = 1;
f = 1000; %signal frequency of sine-wave excitation signal

flag = 0; % sine-wave excitation

%% Relevent Constants
mu0=4*pi*10^-7;			% Permeability of vacumm
muR_sende=1;			% Relative permeability of transmitter coils
mur_empfang=898.4;      % Relative permeability of the sensor coil
Gain_tr=10.9;           % The gain of the pre amplifier for the transmitter coil array
s=1001;                 % Sample length

%% Cross-section area and gain for the sensor coil
N_sende=207;                            % Windungszahl Sendespule  (number of windings - emitting coil)
N_empfang=500;                          % Windungszahl Empfangsspule (number of windings - sensing coil)
R_sende=0.015;                           % Radius Sendespule (Radius of emitting coils)
Height_Sende=0.03/2;
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
    % elseif flag == 1
    %     T = max(t);
    %     I = U_g*100*t/(sqrt(14.8^2+(2*pi*(1/max(t))*1.165*10^-3)^2))*Gain_tr;
    %     Ia = I(max(size(I)));										 	% The maximum value of the ramp current
    %     Omega = 1/T;													% Angular speed - general caculation: d(Phi)/d(t). Here, we have 1 rad over total time T in ramp. The gradient remains.
    %     % Select DC signal?
    % elseif flag == 2
    %     T = max(t);
    %     I = U_g*100*t/(sqrt(14.8^2+(2*pi*(1/max(t))*1.165*10^-3)^2))*Gain_tr;
    %     Ia = mean(I);													% The mean value of the DC current
    %     Omega = 1/T;
end

%% Orientations of each transmitter coil
% StartOrientation = [ 1 0 0;...
%     1 20 30;...
%     1 40 60;...
%     1 60 90;...
%     1 80 120;...
%     1 100 150;...
%     1 120 180;...
%     1 140 210];

% Add Shift
oo = StartOrientation + [0 x(1,1) x(1,2);...
    0 x(2,1) x(2,2);...
    0 x(3,1) x(3,2);...
    0 x(4,1) x(4,2);...
    0 x(5,1) x(5,2);...
    0 x(6,1) x(6,2);...
    0 x(7,1) x(7,2);...
    0 x(8,1) x(8,2)];
% oo = oo1

%% Distances between sensor and enmitter
% StartPosition = [-0.06 0.05 0;...
%     -0.02 0.05 0;...
%     0.02 0.05 0;...
%     0.06 0.05 0;...
%     -0.06 -0.05 0;...
%     -0.02 -0.05 0;...
%     0.02 -0.05 0;...
%     0.06 -0.05 0];

r =   StartPosition+[x(1,3) x(1,4) x(1,5);...
    x(2,3) x(2,4) x(2,5);...
    x(3,3) x(3,4) x(3,5);...
    x(4,3) x(4,4) x(4,5);...
    x(5,3) x(5,4) x(5,5);...
    x(6,3) x(6,4) x(6,5);...
    x(7,3) x(7,4) x(7,5);...
    x(8,3) x(8,4) x(8,5)];

% r = r1;

rs = zeros(varTotalNum,3);
os = zeros(varTotalNum,3);

x_max = 11;
y_max = 11;
z_max = 6;
ori_max = 3;

for i_z = 1:z_max
    for i_y = 1:y_max
        for i_x = 1:x_max
            for ori = 1:ori_max
                varLine = (i_z-1)*x_max*y_max*ori_max+(i_y-1)*x_max*ori_max+(i_x-1)*ori_max+ori;
                rs(varLine,:) = [-0.25+(i_x-1)*0.05; -0.25+(i_y-1)*0.05; 0.05+(i_z-1)*0.1];
                %     os(varLine,:) = [1; -180+360/(x_max*y_max*z_max)*varLine; -180+360/(x_max*y_max*z_max)*varLine];
                    if ori==1
                        os(varLine,:) = [1; 0; 0];
                    elseif ori==2
                        os(varLine,:) = [1; 0; 90];
                    else
                        os(varLine,:) = [1; 90; 90];
                    end                
            end
            %             os(varLine,:) = [1; 90; 90];
        end
    end
end


varTotalNum = i_x*i_y*i_z*ori_max;

rr1 = zeros(varTotalNum,3);rr2 = zeros(varTotalNum,3);rr3 = zeros(varTotalNum,3);rr4 = zeros(varTotalNum,3);
rr5 = zeros(varTotalNum,3);rr6 = zeros(varTotalNum,3);rr7 = zeros(varTotalNum,3);rr8 = zeros(varTotalNum,3);
rr = zeros(varTotalNum,8,3);

for varNum = 1:varTotalNum
    rr1(varNum,:)=rs(varNum,:)-r(1,:);rr2(varNum,:)=rs(varNum,:)-r(2,:);rr3(varNum,:)=rs(varNum,:)-r(3,:);rr4(varNum,:)=rs(varNum,:)-r(4,:);
    rr5(varNum,:)=rs(varNum,:)-r(5,:);rr6(varNum,:)=rs(varNum,:)-r(6,:);rr7(varNum,:)=rs(varNum,:)-r(7,:);rr8(varNum,:)=rs(varNum,:)-r(8,:);
    rr(varNum,:,:)=[rr1(varNum,:);rr2(varNum,:);rr3(varNum,:);rr4(varNum,:);rr5(varNum,:);rr6(varNum,:);rr7(varNum,:);rr8(varNum,:)];
end



if (sqrt(sum((r(1,:)-r(2,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(1,:)-r(3,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(1,:)-r(4,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(1,:)-r(5,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(1,:)-r(6,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(1,:)-r(7,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(1,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(2,:)-r(3,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(2,:)-r(4,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(2,:)-r(5,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(2,:)-r(6,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(2,:)-r(7,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(2,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(3,:)-r(4,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(3,:)-r(5,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(3,:)-r(6,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(3,:)-r(7,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(3,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(4,:)-r(5,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(4,:)-r(6,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(4,:)-r(7,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(4,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(5,:)-r(6,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&& sqrt(sum((r(5,:)-r(7,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&& sqrt(sum((r(5,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(6,:)-r(7,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&sqrt(sum((r(6,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2)&&...
        sqrt(sum((r(7,:)-r(8,:)).^2))>sqrt(R_sende^2+Height_Sende^2))...
        &&...
        (...
        ((r(1,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(1,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(1,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(1,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(1,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(1,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(2,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(2,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(2,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(2,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(2,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(2,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(3,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(3,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(3,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(3,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(3,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(3,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(4,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(4,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(4,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(4,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(4,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(4,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(5,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(5,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(5,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(5,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(5,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(5,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(6,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(6,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(6,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(6,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(6,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(6,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(7,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(7,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(7,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(7,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(7,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(7,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))&&...
        ((r(8,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(8,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(8,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(8,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(8,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(8,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)))...
        )
    
    % ((r(1,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(1,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(1,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(1,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(1,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(1,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(2,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(2,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(2,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(2,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(2,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(2,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(3,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(3,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(3,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(3,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(3,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(3,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(4,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(4,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(4,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(4,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(4,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(4,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(5,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(5,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(5,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(5,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(5,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(5,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(6,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(6,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(6,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(6,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(6,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(6,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(7,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(7,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(7,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(7,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(7,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(7,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2))&&...
    %         (r(8,1)<min(rs(:,1))-sqrt(R_sende^2+Height_Sende^2)||(r(8,1))>max(rs(:,1))+sqrt(R_sende^2+Height_Sende^2))||((r(8,2))<min(rs(:,2))-sqrt(R_sende^2+Height_Sende^2)||(r(8,2))>max(rs(:,2))+sqrt(R_sende^2+Height_Sende^2))||((r(8,3))<min(rs(:,3))-sqrt(R_sende^2+Height_Sende^2)||(r(8,3))>max(rs(:,3))+sqrt(R_sende^2+Height_Sende^2)));
    %
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
    C1 = mu0/(4*pi)*muR_sende;                                                   % Constant of B-field
    C2 = Omega;																   % Value of angular frequency
    % C2=2*pi*f;
    C3 = -mur_empfang*N_empfang*A_Empfang;                                       % Constant for calculating the voltage
    %% B-filed Calculation
    % B = zeros(varTotalNum,8,3);
    % U2 = zeros(s,8);
    % U1 = zeros(726,8);
    % U1_nonoise = zeros(1,8);
    
    % if flag == 0
    %     PHI = zeros(s-1,8);
    %     dPHI = zeros(s-2,8);
    %     dt = zeros(8,s-2);
    %     V = zeros(s-2,8);
    %     V_Visual = zeros(s-2,8);
    % else
    %     PHI = zeros(s,8);
    %     dPHI = zeros(s-1,8);
    %     dt = zeros(8,s-1);
    %     V = zeros(s-1,8);
    %     V_Visual = zeros(s-1,8);
    % end
    C = C1*C2*C3*Verstaerkung;
    % Ca = -muR_sende*mur_empfang*N_empfang*A_Empfang*Verstaerkung;
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
%     U_add_noise = zeros(varTotalNum,8);
%     %% noise level
%     nl = -100;
    
%     for varNum=1:varTotalNum
%         U_noise = wgn(1,8,nl,'dBW','real');
%         U_add_noise(varNum,:) = U_norm(varNum,:) + U_noise;
%     end
    
    % U_Measured = U_add_noise;
    % U_Measured = U_norm;
    % POR = [rs, os(:,2:3)];
    %
    %
    % %%
    % % global  Anz_Spulen...
    % %     I f C A_Empfang m r funktionscount zeit U...
    % %     max_abstand Nummer...
    % %     StartX StartY StartZ StartPhi StartTheta N_Channel
    %
    % N_Channel=8;
    % f=1e3;
    %
    %
    % POR=POR; %#ok<*ASGSL>
    % U2=U_Measured;
    %
    % % omega=2*pi*f;
    %
    % StartX =0;
    % StartY =0;
    % StartZ = 0.35;
    % StartPhi = -180;
    % StartTheta = -180;
    %
    % % Anz_Punkte=1;                         % Anzahl der Testpunkte ?Number of testing point?
    % Anz_Spulen=8;                           % Anzahl der Spulen    (Number of coils)                       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% required
    %
    % mu0=4*pi*10^-7;                         % ?                   (Permeability)
    % muR_sende=1;                            % relative Permeabilität Sendespule  (Permeability of emitting coils)
    % mur_empfang=898.4;                      % relative Permeabilität Empfangsspule  (Permeability of sensing coils)
    %
    % N_sende=207;                            % Windungszahl Sendespule  (number of windings - emitting coil)
    % N_empfang=500;                          % Windungszahl Empfangsspule (number of windings - sensing coil)
    % R_sende=0.015;                           % Radius Sendespule (Radius of emitting coils)
    % R_empfang=283.2*10^-6;                  % Radius Empfangsspule (Radius of sensing coils)
    % % I=0.7201;                                	% Strom Sendespule (current in the sensing coils)
    % % I=0.11435;
    %
    % % I=0.030282398842848;
    % % I=0.6602;
    %
    %
    % % Frequenz Sendespule (frequency of signal on sensing coil)
    % A_Empfang=pi*R_empfang^2;               % Normalenfläche Empfangsspule (normal area of the sensing coil) %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign
    %
    % C1=mu0/(4*pi)*muR_sende;                % Konstande für B-Feld (constant of B field)
    % C2=2*pi*f;                              % Konstante für Ableitung nach t (constant for w)
    % C3=-mur_empfang*N_empfang*A_Empfang;      % Konstante für Spannungsberechnung (constant for voltage calculation)
    %
    %
    % % Verstaerkung=6739.7*3.295*2/4;
    %
    %
    % % Verstaerkung=1.573943202562500e+03;
    % Verstaerkung= 144.3985;
    % % Verstaerkung=6889.10446;
    % C=Verstaerkung*C1*C2*C3;                % (Constant C)       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign
    % % K=pi*N_sende*I*R_sende^2;               % Vorfaktor magnetisches Dipol (factor of magnetic dipol)  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% direct value assign
    %
    % funktionscount=2000;                    % Abbruchbedingung für fsolve (stop option for fsolve functon)
    %
    % zeit=0.5;                               % Zeitbegrenzung für fsolve (time limitation for fsolve)
    %
    % max_abstand=2;
    %
    % % m=zeros(Anz_Spulen,3);
    % % r=zeros(Anz_Spulen,3);
    %
    % % faktor= [1 1 1 1 1 1 1 1]';            % (factor for calibration calculation)
    %
    % % % magnetisches Dipol
    % % phie=0;    thetae=0;       m(1,:)=faktor(1)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=20;     thetae=30;       m(2,:)=faktor(2)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=40;     thetae=60;    	m(3,:)=faktor(3)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=60;    thetae=90;   	m(4,:)=faktor(4)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=80;    thetae=120;       m(5,:)=faktor(5)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=100;	 thetae=150;    	m(6,:)=faktor(6)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=120;      thetae=180;     	m(7,:)=faktor(7)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % % phie=140;      thetae=210 ;      m(8,:)=faktor(8)*K*[sind(thetae)*cosd(phie)      sind(thetae)*sind(phie)        cosd(thetae)];
    % %
    % % % Ortskoordinaten der Spulen (position coordinate of the emitting coils)
    % % r(1,:)=[-0.06 0.05 0];
    % % r(2,:)=[-0.02 0.05 0];
    % % r(3,:)=[0.02 0.05 0];
    % % r(4,:)=[0.06 0.05 0];
    % % r(5,:)=[-0.06 -0.05 0];
    % % r(6,:)=[-0.02 -0.05 0];
    % % r(7,:)=[0.02 -0.05 0];
    % % r(8,:)=[0.06 -0.05 0];
    % % %
    % % load  KOOD_PODrand_0dB
    % % % %
    % % faktor= [1+koord_alle_alle(1,1)/100 1+koord_alle_alle(2,1)/100 1+koord_alle_alle(3,1)/100 1+koord_alle_alle(4,1)/100 1+koord_alle_alle(5,1)/100 1+koord_alle_alle(6,1)/100 1+koord_alle_alle(7,1)/100 1+koord_alle_alle(8,1)/100]';
    % % %
    % % % magnetisches Dipol
    % % phi=-90+koord_alle_alle(1,2)/5;    theta=90+koord_alle_alle(1,3)/5;       m(1,:)=faktor(1)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=30+koord_alle_alle(2,2)/5;     theta=60+koord_alle_alle(2,3)/5;       m(2,:)=faktor(2)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=90+koord_alle_alle(3,2)/5;     theta=30+koord_alle_alle(3,3)/5;       m(3,:)=faktor(3)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=120+koord_alle_alle(4,2)/5;    theta=60+koord_alle_alle(4,3)/5;   	  m(4,:)=faktor(4)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=120+koord_alle_alle(5,2)/5;    theta=90+koord_alle_alle(5,3)/5;       m(5,:)=faktor(5)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=240+koord_alle_alle(6,2)/5;	   theta=30+koord_alle_alle(6,3)/5;    	  m(6,:)=faktor(6)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=0+koord_alle_alle(7,2)/5;      theta=koord_alle_alle(7,3)/5;     	  m(7,:)=faktor(7)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % % phi=0+koord_alle_alle(8,2)/5;      theta=90+koord_alle_alle(8,3)/5;       m(8,:)=faktor(8)*K*[sind(theta)*cosd(phi)      sind(theta)*sind(phi)        cosd(theta)];
    % %
    % % % % Ortskoordinaten der Spulen
    % % r(1,:)=[-0.05-koord_alle_alle(1,4)/1000 0.10-koord_alle_alle(1,5)/1000 0-koord_alle_alle(1,6)/1000];
    % % r(2,:)=[-0.15-koord_alle_alle(2,4)/1000 0-koord_alle_alle(2,5)/1000 0-koord_alle_alle(2,6)/1000];
    % % r(3,:)=[-0.05-koord_alle_alle(3,4)/1000 -0.10-koord_alle_alle(3,5)/1000 0-koord_alle_alle(3,6)/1000];
    % % r(4,:)=[0.05-koord_alle_alle(4,4)/1000 -0.10-koord_alle_alle(4,5)/1000 0-koord_alle_alle(4,6)/1000];
    % % r(5,:)=[0.15-koord_alle_alle(5,4)/1000 0-koord_alle_alle(5,5)/1000 0-koord_alle_alle(5,6)/1000];
    % % r(6,:)=[0.05-koord_alle_alle(6,4)/1000 0.10-koord_alle_alle(6,5)/1000 0-koord_alle_alle(6,6)/1000];
    % % r(7,:)=[0.05-koord_alle_alle(7,4)/1000 0-koord_alle_alle(7,5)/1000 0-koord_alle_alle(7,6)/1000];
    % % r(8,:)=[-0.05-koord_alle_alle(8,4)/1000 0-koord_alle_alle(8,5)/1000 0-koord_alle_alle(8,6)/1000];
    %
    % % xv=[0.0629 0.0310 0.2834 177.4494 64.0365];
    % %
    % % n=[sind(xv(5))*cosd(xv(4)) sind(xv(5))*sind(xv(4)) cosd(xv(5))];
    % %
    % %
    % % F(1)= U(1)-C*dot(Bfeld(m(1,:),xv(1:3)-r(1,:)),n);
    % % F(2)= U(2)-C*dot(Bfeld(m(2,:),xv(1:3)-r(2,:)),n);
    % % F(3)= U(3)-C*dot(Bfeld(m(3,:),xv(1:3)-r(3,:)),n);
    % % F(4)= U(4)-C*dot(Bfeld(m(4,:),xv(1:3)-r(4,:)),n);
    % % F(5)= U(5)-C*dot(Bfeld(m(5,:),xv(1:3)-r(5,:)),n);
    % % F(6)= U(6)-C*dot(Bfeld(m(6,:),xv(1:3)-r(6,:)),n);
    % % F(7)= U(7)-C*dot(Bfeld(m(7,:),xv(1:3)-r(7,:)),n);
    % % F(8)= U(8)-C*dot(Bfeld(m(8,:),xv(1:3)-r(8,:)),n);
    %
    % % [x,y,z,phi,theta]=POS(U,Nummer,StartX,StartY,StartZ,StartPhi,StartTheta)
    %
    % for i=1:i_x*i_y*i_z
    %
    %     StartX = POR(i,1);
    %     StartY = POR(i,2);
    %     StartZ = POR(i,3);
    %     StartPhi = POR(i,4);
    %     StartTheta = POR(i,5);
    %
    %
    %     % U=U1(i,:)+wgn(1,8,-100,'dBW');
    %     U=U2(i,:);
    %     [x,y,z,phi,theta]=POS(U,StartX,StartY,StartZ,StartPhi,StartTheta);
    %     POM(i,:)=[x,y,z,phi,theta]; %#ok<AGROW,*SAGROW>
    %
    %     % StartX =POR(i,1)+0.01*(1-2*rand(1));
    %     % StartY =POR(i,2)+0.01*(1-2*rand(1));
    %     % StartZ = z;
    %     % StartPhi = phi;
    %     % StartTheta = theta;
    %     % pause(0.5);
    % %     i;
    % end
    % % scatter3(coord(:,1),coord(:,2),coord(:,3));hold on;scatter3(POR(:,1),POR(:,2),POR(:,3),'r.');
    
    %     F_out = 1/mean(rms(U_norm));
    F_out = 1/mean(mean(abs(U_norm)));
    
else
    F_out = inf;
end

%     figure(2)
%     scatter3(r(:,1),r(:,2),r(:,3));axis([-1 1 -1 1 -0.5 1])
% oo

end

