% Método da Bisseção
%%% Subdivisões sucessivas para intervalo entre A e B, mantendo sempre um positivo e um negativo.
format long

%% definindo uma função e tolerância
f = @(x)sin(x);
tolerancia = 0.0001;

%% valores de A e B
a = 2;
b = 4;
fa = f(a);
fb = f(b);

% verifica se são valores válidos (um positivo e um negativo
if (fa*fb < 0) 
    fprintf('fa = %d, fb = %d. Portanto, A e B podem ser utilizados para esse método\n',fa, fb);
else 
    fprintf('Valores inválidos'\n);
end

%% definindo intervalos
while (abs(a-b) > tolerancia)
   % pegando um intervalo menor
   x = (a+b)/2;
   fx = f(x);
   
    
   if (fa > 0 && fb < 0 && fx > 0)
       a = x;
   elseif (fa > 0 && fb < 0 && fx < 0)
       b = x;
   elseif (fa < 0 && fb > 0 && fx < 0)
       a = x;
   elseif (fa < 0 && fb > 0 && fx > 0)
       b = x;
   end
   

   % recalculando valores
   fa = f(a);
   fb = f(b);
   fx = f(x);
   
end

%% mostrando em uma matriz
[a b x; fa fb fx;] 