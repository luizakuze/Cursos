# Set (Listas)
    # Similar as listas
    # Evita itens duplicados
    # Não utiliza índices

list1 = [10,20,30,40,50]
list2 = [10,600,20,400,500]

num1 = set(list1)
num2 = set(list2)

print(num1 | num2) # Union - unifica as duas listas e remove as repetições
print(num1 - num2) # Difference - mostra os valores da primeira lista que não tem na segunda lista
print(num2 - num1)
print(num1 ^ num2) # Symmetric Difference - mostra somente valores sem repetição
print(num1 & num2) # And - mostra duplicações

print(len(num1))
# print(num1[0]) # o set não possui índeices