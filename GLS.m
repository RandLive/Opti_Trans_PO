function F=GLS(x)
% This function calculates the difference between
% simulated and measured voltages

global U m r C

xv(1)=x(1);
xv(2)=x(2);
xv(3)=x(3);
n=[sind(x(5))*cosd(x(4)) sind(x(5))*sind(x(4)) cosd(x(5))];
% F=zeros(1,5);


% for i=1:8
%     F(i)= U(i)-C*dot(Bfeld(m(i,:),xv-r(i,:)),n);
% end

% F(1)= U(1)-C*dot(Bfeld(m(1,:),xv-r(1,:)),n);
% F(2)= U(2)-C*dot(Bfeld(m(2,:),xv-r(2,:)),n);
% F(3)= U(3)-C*dot(Bfeld(m(3,:),xv-r(3,:)),n);
% F(4)= U(4)-C*dot(Bfeld(m(4,:),xv-r(4,:)),n);
% F(5)= U(5)-C*dot(Bfeld(m(5,:),xv-r(5,:)),n);
% F(6)= U(6)-C*dot(Bfeld(m(6,:),xv-r(6,:)),n);
% F(7)= U(7)-C*dot(Bfeld(m(7,:),xv-r(7,:)),n);
% F(8)= U(8)-C*dot(Bfeld(m(8,:),xv-r(8,:)),n);

    for i=1:8
         F(i)= U(i)-C*dot(Bfeld(m(i,:),xv-r(i,:)),n);
    end
end