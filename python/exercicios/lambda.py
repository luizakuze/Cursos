# 2 funções:
# 1 - aceitar um número e retornar o dobro desse número
# 2 - aceitar um número e retornar o quadrado desse número

def dobro(numero):
    return numero * 2


def quadrado(numero):
    return numero ** 2


print(dobro(5))
print(quadrado(5))

##############
# com lambda

dobro = lambda x: x * 2
quadrado = lambda x: x ** 2

print(dobro(5))
print(quadrado(5))