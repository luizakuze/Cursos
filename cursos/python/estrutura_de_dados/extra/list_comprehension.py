# List Comprehension
    # Mais simples de escrever
    # Utilizado quando precisar criar uma nova lista a partir de uma pré existente
    # [expressão for item in itens]
    # expressão = o que tem que fazer

frutas1 =['abacate', 'banana', 'morango', 'kiwi']
frutas2 = []

for item in frutas1:
    if 'b' in item:
        frutas2.append(item)
print(frutas2)


# utilizando o list comprehension, expressão é o 'item'
frutas3 = [item for item in frutas1 if 'n' in item]
print(frutas3)



##### utlizando o list comprehension para números
valores = []

for x in range(6):
    valores.append(x*10)

print(valores)

# com o list comprehension
dados = [x*10 for x in range(6)]
print(dados)