% Método da Bisseção
%%% Subdivisões sucessivas para intervalo entre A e B, mantendo sempre um positivo e um negativo.

%% definindo uma função e valores em que a função dê um positivio e um negativo
f = @(x)sin(x);
a = 2;
b = 4;
fa = f(a);
fb = f(b);
disp("Valores: %d %d", fa fb);

