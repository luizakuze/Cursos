# Set (Listas)
    # Similar as listas
    # Evita itens duplicados
    # Não utiliza índices
    # set = {1, 2, 3}

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



##### funções em sets #####
l1 = [1, 2, 3, 4, 5]
s1 = {1, 2, 3, 4, 5}
print(type(l1))
print(type(s1))

s1.add(7) # adionando um item
print(s1)

s1.add(7)
print(s1)

s1.update([123, 231, 123]) # adicionando vários valores
print(s1)

s1.remove(1) # removendo valor - dá erro se não existir 
print(s1)

s1.discard(90) # remove valor - não dá erro se não existir
print(s1)


##### set com strings #####
set1 = {'a', 'b', 'c'}
set2 = {'d', 'e', 'f'}
set3 = {'g', 'h', 'i'}

set4 = set1.union(set2) # adiciona valores sem repetições de cada 1 
print(set4)

set4 = set1.difference(set2) # mostrando diferenças c 1 set
set4 = set1.intersection(set2) # o que tem de igual nos dois 
set4 = set1.symmetric_difference(set2) # retira os duplicados e tira todos, não mostra nem 1 somente