# função que calcule a potência de um número.
# a função deve aceitar dois argumentos: a base e o expoente.
# no enteanto, se o expoente não for fornecido ao chamar a função, ele deve assumir o valor padrão de 2


def potencia(base, expoente=2): # = ----> não é um parâmetro obrigatório
    return base ** expoente

user_number = int(input('entre c número base: '))
user_expoente = int(input('entre c expoente (default = 2): '))

if user_expoente:
    print(f'O resultado é: {potencia(user_number, int(user_expoente))}')
else:
    print(f'o resultado é: `{potencia(user_number)}')