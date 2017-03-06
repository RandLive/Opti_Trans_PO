function [x,y,z,phi,theta,flag]=POS_fast(~,x_start,y_start,z_start,phi_start,theta_start)

global Auswahl Anz_Spulen funktionscount zeit max_abstand

clear koord
flag=0;
koord_start0=[x_start y_start z_start phi_start theta_start];
koord_start=koord_start0;

options=optimset('Algorithm','trust-region-reflective','TolFun',1e-12,'MaxFunEvals',20000,'MaxIter',20000,'Display','off');   % Option to display output
% options=optimset('Algorithm','levenberg-marquardt','TolFun',1e-12,'MaxFunEvals',20000,'MaxIter',20000,'Display','off');   % Option to display output

clk=clock;
for j=1:100
    [koord,fval,exitflag,output] = fsolve(@GLS,koord_start,options);  % Call optimizer
    C_=clock;
    
    if (C_(6)>clk(6)+zeit)
        flag=0;
        break;
    end
    
    abstand=sqrt((x_start-koord(1))^2+(y_start-koord(2))^2+(z_start-koord(3))^2);
    
    
    if ((output.funcCount<funktionscount)&&(koord(4)<360)&&(koord(4)>=-360)&&(koord(5)<360)&&(koord(5)>=-360)&&(koord(3)>=0)&&(abstand<max_abstand))
        %         if (output.funcCount<funktionscount)
        flag=1;
        break;
    end
    %         koord_start=koord;
    
    koord_start=[koord_start0(1)+0.01*(1-2*rand(1)) koord_start0(2)+0.01*(1-2*rand(1)) koord_start0(3)+0.01*(1-2*rand(1)) koord_start0(4)+1*(1-2*rand(1)) koord_start0(5)+1*(1-2*rand(1))];
end

if flag==1
    x=koord(1);
    y=koord(2);
    z=koord(3);
    phi=koord(4);
    theta=koord(5);
else
    x=x_start;
    y=y_start;
    z=z_start;
    phi=phi_start;
    theta=theta_start;
end
