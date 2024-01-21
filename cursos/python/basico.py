# Básicos
## imprimindo dados

print('ola')

## variáveis

x = 10
print(x)

## "A Luiza tem 19 anos de idade e nasceu na cidade de São José"
nome = 'Luiza'
idade = 19
cidade = 'São José'

print(f'A {nome} tem {idade} anos de idade e nasceu na cidade de {cidade}')

### o python não consegue concatenar um número com uma string
print('A ' + nome + ' tem ' + str(idade) + ' anos de idade e nasceu na cidade de ' + cidade)
### poderia converter assim: idade = str(idade)

## input
nome = input('Qual é o seu nomes: ') # com uma mensagem
idade = input() # sem uma mensagem
print(f'A {nome} tem {idade} anos de idade')

## operação 
ano_nascimento = input('em que ano você nasceu?')
print(type(ano_nascimento)) # recebe como string!
ano_nascimento = int(ano_nascimento) # tem que converter par tipo numérico...
idade = 2024 - ano_nascimento # ...para conseguir realizar a operação
print(idade)

## slice
fruta = 'Abacate'
print(fruta)
print(fruta[0])
print(fruta[0:3]) # letra do índice 0 até o 3 (não mostra o último)
print(fruta[-1]) # contando de trás para frente

## métodos para strings
mensagem = 'oi tudo bem'
print(mensagem.lower()) # letra minúscula
print(mensagem.upper()) # letra maiúscula
print(mensagem.capitalize()) # primeira letra maiúscula
print(mensagem.find()) # procurar por uma letra, método retorna o índice
#print(mensagem.replace('oi', 'tchau')) # parâmetros: o que tem na frase, alteração na frase
print(mensagem.strip()) # remove o primeiro espaço extra na palavra