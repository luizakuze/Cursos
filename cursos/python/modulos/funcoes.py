def somar():
    print('esta função vai somar valores')

def multi():
    print('esta função vai multiplicar valores')

def find_index(to_find, item):
    for i, valor in enumerate(to_find): # enumarate = iterar sobre listas, tuples, ... não precisando saber quantos índices a lista tem
        if valor == item:
            return i
    return -1

## sem o enumarate seria assim

def find_index2(to_find, item):
    for i, valor in range(len(to_find)): # enumarate = iterar sobre listas, tuples, ... não precisando saber quantos índices a lista tem
        if valor == item:
            return i
    return -1