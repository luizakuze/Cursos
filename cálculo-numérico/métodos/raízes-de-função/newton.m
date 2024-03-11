% Método de Newton - Versão 2

%% Definindo uma função f e sua derivada df
%f = @(x)(1+x)*exp(x);
%df = @(x)(2+x)*exp(x);

f = @(x)x^2-3;
df = @(x)2*x;

%% x
x1 = 1;
x2 = 1.2;

x3 = x2 - f(x2)/df(x2);
%% Aplicando o método
while (abs(x3-x2) > 0.001)
    x1 = x2;
    x2 = x3;
    x3 = x2 - f(x2)/df(x2);

end
x3 % resposta de X aproximado para a função = 0