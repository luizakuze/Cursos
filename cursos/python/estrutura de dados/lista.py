# Listas
    # Armazenar mais de uma informação em variáveis
    # Manter a sequência de dados em uma variável
    # Uma lista tem itens

cidades = ['Florianópolis', 'Palhoça', 'São José']
print(cidades)



###### Manipulando listas ######
numeros = [2, 3, 4, 5, 6,]

print(numeros)
print(numeros[0])
print(numeros[3])
print(numeros[-3]) # da direita para esquerda

numeros[0] = 10 # alterando o valor do índice
print(numeros)


# adicionando valor no final da lista
numeros.append(100)
print(numeros)

# removendo um item da lista
numeros.remove(100)
print(numeros)

# inserindo no índice 1 o valor 800
numeros.insert(1, 800)

# remover um item de uma posição
numeros.pop(0)

# organizar em ordem alfabética
numeros.sort()
print(numeros)

###### concatenando listas ######
numeros = [1, 2, 3]

final = numeros * 2 # duplicando a lista
print(final)

letras = ['a', 'b', 'c']
final = numeros + letras # cancatenando
print(final)

numeros.extend(letras) # diretamente na lista
print(numeros)

itens = [['it1', 'it2'], ['it3', 'it4']] # criando uma lista dentro de uma outra lista
print(itens[1])
print(itens[0][1])




###### extraindo variáveis de listas ######
itens = ['arroz', 'feijao', 'macarrao']

item1, item2, item3 = itens

# mesma coisa que 
# # item1 = itens[0]
# # item2 = itens[1]
# # item3 = itens[2]

# e se acontecer de houver um número maior de parâmetros?
itens = ['arroz', 'feijao', 'macarrao', 1, 2, 3, 4]
item1, item2, item3, *outros = itens
print(item1)
print(item2)
print(outros)
print(item3)
print('...')
item1, item2, *outros, item3 = itens
print(item1)
print(item2)
print(outros)
print(item3)
print('...')



###### percorrendo lista ######
valores = [1, 2, 3, 4]
for i in valores:
    print(f'o valor final é: {i}')


###### verificando itens em uma lista ######
# cor_desejada = input('informe a cor desejada')
# cores = ['azul', 'roxo', 'rosa', 'violeta']

# if cor_desejada.lower() in cores: # colocando letra minúscula antes de verificar
#     print('está aqui')
# else:
#     print('não está aqui')




###### agregando duas listas com o zip ######
cores = ['azul', 'roxo', 'rosa', 'violeta']
valores = [10, 20, 30, 40]

# var = list('comprar') # transforma em uma lista
# print(var)

duas_listas = zip(cores, valores) # associando as listas
print(list(duas_listas)) # converte novamente p lista




###### input em uma lista ######
frutas_usuario = input('digite o nome das frutas separados por vígula: ')

frutas_lista = frutas_usuario.split(',') # cria lista considerando a ',' como separador

print(frutas_lista)



