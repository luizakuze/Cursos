% Método do Ponto Fixo
format long
%% Definição da função phi
phi = @(x) 2*exp(x) + 4*x;

%% Valor inicial - "um chute"
x1 = 1.9;

%% Iterações
x2 = phi(x1);
while (abs(x1 - x2) > 0.0001)
    x1 = x2;
    x2 = phi(x1); % Avalia phi em x2
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