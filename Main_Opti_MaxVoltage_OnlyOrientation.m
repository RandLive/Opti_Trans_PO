close all; clear; clc;

global searchRangeCoef varMaxIter StartPosition StartOrientation ub lb funToSolve


funToSolve = @outfun_PoseError_U_multiOri_mex;

searchRangeCoef = 1;
varMaxIter = 20000;

% Define Original Position and orientation of the transmitter coils
StartPosition = 1*[-0.06  0.05 0;...
    -0.02  0.05 0;...
    0.02  0.05 0;...
    0.06  0.05 0;...
    -0.06 -0.05 0;...
    -0.02 -0.05 0;...
    0.02 -0.05 0;...
    0.06 -0.05 0];
%
% StartOrientation = 1*[ 1 0 0;...
%                      1 20 30;...
%                      1 40 60;...
%                      1 60 90;...
%                      1 80 120;...
%                      1 100 150;...
%                      1 120 360;...
%                      1 140 210];


StartOrientation = 1*[ 1 0 0;...
    1 0 0;...
    1 0 0;...
    1 0 0;...
    1 0 0;...
    1 0 0;...
    1 0 0;...
    1 0 0];

ub=searchRangeCoef*...
    [360 360 0 0 0;...
    360 360 0 0 0;...
    360 360 0 0 0;...
    360 360 0 0 0;...
    360 360 0 0 0;...
    360 360 0 0 0;...
    360 360 0 0 0;...
    360 360 0 0 0];

% Search uppper boundary
lb=searchRangeCoef*...
    [0 0 -0 -0 0;...
    0 0 -0 -0 0;...
    0 0 -0 -0 0;...
    0 0 -0 -0 0;...
    0 0 -0 -0 0;...
    0 0 -0 -0 0;...
    0 0 -0 -0 0;...
    0 0 -0 -0 0];



History=HistorySave_OptTranPose;
