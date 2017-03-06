function [x,y,z,phi,theta]=POS(U,x,y,z,phi,theta)

%Strichgrößen sind vorhergehende Werte


[x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,phi,theta);

if flag==0
    StartPhi = 90;
    [x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,StartPhi,theta);
    
end
if flag==0
    StartPhi = -90;
    [x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,StartPhi,theta);
end
if flag==0
    StartPhi = 270;
    [x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,StartPhi,theta);
end
if flag==0
    StartPhi = 360;
    [x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,StartPhi,theta);
end

if flag==0
    StartPhi = 180;
    [x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,StartPhi,theta);
end


if flag==0
    disp('Cannot Estimate')
    [x,y,z,phi,theta,flag]=POS_fast(U,x,y,z,StartPhi,theta);
end

