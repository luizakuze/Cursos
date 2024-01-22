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