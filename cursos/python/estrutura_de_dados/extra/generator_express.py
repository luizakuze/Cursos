from sys import getsizeof

# Generator Expression
    # Forma eficiente para criar sequências (listas, dicionários, etc.)
    # Menos memória alocada comparado a estruturas similares
    # Valores gerados sob demanda, economizando recursos







# List Comprehension
numeros_lista = [x * 10 for x in range(10)]  # Cria uma lista completa
print(type(numeros_lista))  # Tipo de dados: list
print(numeros_lista)
print(getsizeof(numeros_lista))  # Tamanho em bytes ocupado pela lista





# Generator Expression
numeros_gerador = (x * 10 for x in range(10))  # Gera valores sob demanda
print(type(numeros_gerador))  # Tipo de dados: generator
print(numeros_gerador)
print(getsizeof(numeros_gerador))  # Tamanho em bytes ocupado pelo gerador





# se precisar gerar valores na lista, é melhor. 

# Os Generator Expressions são úteis quando você precisa de uma sequência de valores, 
# mas não quer armazenar todos os valores na memória de uma vez. Em vez disso,
# ele gera os valores conforme necessário, economizando memória. 
# Isso é especialmente vantajoso quando lidamos com conjuntos grandes de dados.