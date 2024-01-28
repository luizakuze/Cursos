# bulit-in functions in python - funções que o próprio python já tem disponível
# função: map()


# Map Function
    # Muito utilizado com listas
    # Aplicar uma função a um Iterable, por item. (list, tuple, dic, etc...)

lista1 = [1, 2, 3, 4]

def multi(x):
    return x * 2

#### quero fazer isso (aplicar multi) para todos os itens da lista :
lista2 = map(multi, lista1) 
print(type(lista2))

print(list(lista2)) # somente mostrando como lista
print(type(lista2)) # ainda é um map



#### função map com lambda
lista2 = map(lambda x: x * 2, lista1)
print(list(lista2))
# print(list(map(lambda x: x * 2, lista1))) tudo em uma linhas