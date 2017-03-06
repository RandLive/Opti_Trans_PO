function B=Bfeld_Dipole(m,x)

miu0 = 4*pi*10^-7;                               % (Permeability)
miur_transmitter = 1;                            % relative Permeability of the transmitter coils
miu = miu0*miur_transmitter;

B=miu/(4*pi)*(3*x*dot(m,x)/(norm(x)^5)- m/(norm(x)^3));