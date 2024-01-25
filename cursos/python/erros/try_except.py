# Erros
    # Tratamento de erros para não realizar o 'stop' do programa 






####### try/except #######

letras = ['a', 'b', 'c', 'd']

try:
    print(letras[4])
except:
    print('problema ao acessar')

try:
    print(letras[4])
except IndexError: # erro relacionado ao índice
    print('problema ao acessar o índice')





####### simulando com inputs #######
try:         
    valor = int(input('digite o valor do produto: '))
    print(type(valor))
except ValueError:
    print('digitar um valor numérico')




####### else/finally #######
    
try:         
    valor = int(input('digite o valor do produto: '))
    print(type(valor))
except ValueError:
    # executa somente se der erro
    print('digitar um valor numérico')
else: 
    # é executado caso não gere erro
    print('usuário digitou um valor correto')
    print(f'{valor} válido')
finally:
    # é executado caso gere erro ou não
    print('fim...')