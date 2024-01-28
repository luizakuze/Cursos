# Array (Matriz)
    # Similar a listas
    # Melhor performance
    # Para muitas quantidades de dados

from array import array

letras = ['a', 'b', 'c']
inteiros = [1, 2, 3]
decimal = [1.2, 2.1, 3.2]

print(letras)
print(inteiros)
print(decimal)

# 'python array - efficient arrays of numeric values'
# unicode, lista
letras = array('u', letras) # u para caracteres
inteiros = array('i', inteiros) # i para inteiros
decimal = array('f', decimal) # f para float

print(letras)
print(inteiros)
print(decimal)

