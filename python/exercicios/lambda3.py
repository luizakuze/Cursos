# criar uma função lambda que leve um número ao quadrado e em seguida 
## calcule o quadrado de todos os números em uma lista usando o loop for

potencia = lambda x: x ** 2

lista = [10, 20, 30, 40, 50]

resultados = []

for item in lista:
    resultados.append((potencia(item)))

print(resultados)