
"""# Introdução a visualização de dados"""

notas.describe()

# Histograma da coluna 'nota'
notas['nota'].hist()

# Histograma de todas as colunas
notas.hist()

# notas arredondadas em 1 casa decimal
arredondadas = notas["nota"].round(1)
notas.head()

arredondadas.sample(5)

# Conta quantas vezes apareceu cada número
arredondadas.value_counts()

"""Gráfico de Pizza"""

# Faz um gráfico de pizza com os valores encontrados
arredondadas.value_counts().plot.pie()

"""O gráfico em barra é bom para comparar números, já o de pizza nem tanto!!

Gráfico de barras
"""

import seaborn as sns

import matplotlib.pyplot as plt

sns.countplot(arredondadas)
plt.title("Distribuição de Notas"); # ';' tira a descrição

"""Link "https://seaborn.pydata.org/tutorial/color_palettes.html" para paleta de cores do gráfico"""

palette = sns.color_palette("Blues") # Selecionando uma paleta de cores
palette

sns.countplot(arredondadas, palette=palette) # Colocando a paleta de cores no gráfico

import matplotlib.pyplot as plt  # ou import seaborn as sns

###### Teste

# Criando um DataFrame de exemplo
dados = {'coluna_x': [1, 2, 3, 4, 5],
         'coluna_y': [10, 8, 12, 6, 9]}
df = pd.DataFrame(dados)

# Plotando um gráfico de linhas
df.plot(x='coluna_x', y='coluna_y', kind='line')
plt.title('Gráfico de Linhas')
plt.xlabel('Eixo X')
plt.ylabel('Eixo Y')
plt.show()
