# Função Lambda
    # É uma função pequena sem nome
    # Pode conter vários argumentos em 1 expressão
    # Muito utilizada dentro de outras funções
    # Deixa o código mais limpo

def somar(x):
    return x+10
print(somar(2))

# x é o argumento e após ':' vem a expressão
somando = lambda x: x + 10
print(somando(2))

##### função com mais de um argumento
somando = lambda x, y: x + y + 10
print(somando(1, 2))



##### lambda dentro de uma função ######
def somar(x):
    func2 = lambda x: x + 10
    return func2(10) * 4
print(somar(1))