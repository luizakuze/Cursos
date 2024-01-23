# funções
# deixar dios espaços após término de funções!

def boas_vindas():
    print('Olá')
    print('Tudo bem?')


def somar_dois_numeros(numero1, numero2):
    resultado = numero1 + numero2
    print(resultado)


somar_dois_numeros(1, 2)
boas_vindas()




# non-default e default
def boas_vindas2(quantidade, nome='Luiza'): # quantidade = non-default; nome = default, deve ser e
    print(f'Olá {nome}')
    print(f' temos {str(quantidade)} de produtos em estoque')








def cliente1(nome):
    print(f'Olá{nome}')


cliente1('Luiza')





# função com retorno
def cliente2(nome):
    return f'Olá{nome}'


nome_retornado = cliente2('Luiza')
print(nome_retornado)




# xargs para números - vários argumentos

## DRY - Dont't repeat yourself
## vários argumentos (xargs)

def retorna_numeros (*numeros): # identifica a flexibilidade de parâmetros
    return numeros

x = retorna_numeros(1, 2, 3, 4)
print(x)




def soma_numeros (*numeros):
    resultado = 0
    for n in numeros:
        resultado += n
    return resultado

x = soma_numeros(2, 3, 5)
print(x)



# xargs identificando parâmetros - para string e números
def agencia(**info_carro): #** passa os parâmetros identificados na chamada da função 
    return info_carro

print(agencia(marca='Gol',  cor='Branca', motor=1.0))




# importando um módulo
import math

# fatorial = 4 * 3 * 2 * 1
print(math.factorial(4))


print(math.floor(2.7)) # arredonda p baixo
print(math.ceil(2.7)) # arredonda p cima
