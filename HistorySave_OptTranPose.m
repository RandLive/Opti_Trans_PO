function history = HistorySave_OptTranPose

% Call global patternsearch function to find the best position and
% orientation of the sensor coil
% Author Mengfei Li
% Copyright, IMT, OvGU, 2017

global varMaxIter ub lb funToSolve

history.x = [];
history.fval = [];

x0=zeros(8,5);

% options = optimoptions(@patternsearch,'OutputFcn',@stopfun,...
%     'Display','iter','TolMesh',10^(-10),'TolCon',10^(-10),'TolX',10^(-10),'TolFun',10^(-10),'MaxIter',varMaxIter,'MaxFunEvals',200000000,'CompleteSearch','on','CompletePoll','on','UseParallel','never',...
%     'PlotFcn',@psplotbestf);

options = psoptimset('OutputFcn',@stopfun,'Cache','on','Display','iter','TolMesh',10^(-10),'TolCon',10^(-10),'TolX',10^(-10),'TolFun',10^(-10),'MaxIter',varMaxIter,'MaxFunEvals',20000000000,'CompleteSearch','on','CompletePoll','on','UseParallel','never','PlotFcn',@psplotbestf,...
    'ScaleMesh','off');

% coord_shift = patternsearch(@outfun_PoseError, x0,[],[],[],[],lb,ub,[],options)  %#ok<NOPRT,NASGU>
coord_shift = patternsearch(funToSolve, x0,[],[],[],[],lb,ub,[],options)  %#ok<NOPRT,NASGU>


    function [stop,options,optchanged] = stopfun(optimvalues,options,flag)
        % output function
        stop = false;
        optchanged = false;
        
        switch flag
            case 'iter'
                history.fval = [history.fval; optimvalues.fval];
                history.x=[history.x; optimvalues.x];
        end
    end

end



