% Método do Ponto Fixo
format long
%% Definição da função g(x)
g = @(x) 2*exp(x) + 4*x;

%% Valor inicial - "um chute"
x1 = 1.9;

%% Iterações
x2 = g(x1);
while (abs(x1 - x2) > 0.0001)
    x1 = x2;
    x2 = g(x1); % Avalia g em x2
end

x2

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%% Refazendo
g = @(x)2*exp(x) + 4*x;

x2 = g(x1);
x1 = 1.99;
while (abs(x1-x2) > 0.0001)
	x1 = x2;
    x2 = g(x1);
end

x2