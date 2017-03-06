function B=Bfeld(m,x)

B=3*x*dot(m,x)/(norm(x)^5)- m/(norm(x)^3);
% B=3*x*dot(m,x)/(sqrt(sum(x.^5)))- m/(sqrt(sum(x.^3)));