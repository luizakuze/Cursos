# Filter Function
    # Muito utilizado com listas
    # Aplicar em func Iterable

valores = [1, 2, 3, 4, 500]

def remover20(x):
    return x > 20

print(list(map(remover20, valores))) # aplicando p toda a lista, mas mostra apenas o resultado e não os valores da lista

print(list(filter(remover20, valores))) # aqui mostra somente quem for True
print(list(filter(lambda x: x > 20, valores))) # em uma linha somente