# if/else
velocidade = 100
if velocidade > 110:
    print('acima da velocidade máxima')
elif velocidade < 55:
    print('abaixo da velocidade mínima')
else:
    print('velocidade ok')

# multiplos operadores
valor = 10
if 20 <= valor < 10:
    print('valor aceito')
else:
    print('valor rejeitado')

# for loop - números
# estrutura = for (nome de uma variável) in range(quantas vezes o loop vai repetir)
for numero in range(2):
    print(numero)

# for loop - strings
for letra in 'Luiza':
    print(letra)

palavra = 'Luiza'
for indice, letra in enumerate(palavra):
    print(f'{letra} no índice {indice} está dentro da palavra Luiza')

# loop - if/else
compra_confirmada = True
dados_compra = 'a compra está confirmada'

for enviar in range(3):
    if compra_confirmada:
        print(dados_compra)
        break # para, caso consiga realizar a compra
    else:
        print('falha na compra')

# loop - nested loop
# outer loop
    # inner loop

for i in range(4):
    print('produto ' + str(i))
    for j in range(5):
        print(i, j)
        for k in range (2,6): #imprime de 2 até 5
            print(i, j, k)

# separando strings
## modificando de LUIZA para L U I Z A 
palavra = 'LUIZA'
for espaco in palavra:
    #print(espaco) # imprime uma letra com quebra de linha
    print(espaco, end = ' ') # aqui não desce uma linha

# criando um retângulo 5x3
# *****
# *****
# *****
    
for i in range(3):
    print()
    for j in range(5):
        print('*', end='')

# while
valor = 2

while valor >= 0:
    print(valor)
    valor -= 1

# operador ternário
idade = 10

# # if idade >= 16:
# #     resultado = print('voto permitido')
# # else:
# #     resultado = print('voto não não permitido')

resultado = 'voto permitido' if idade >= 16 else 'voto não permitido'
print(resultado)

# colocando uma condição no while
n = int(input('digite a sua idade: ')) # faz entrada de dados e já converte para inteiro

while n > 18:
    print(f' {n} ainda está maior que 18!')
    n-=1
   