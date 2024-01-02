"""# Introdução a Ciência de Dados"""

import pandas as pd

uri = "https://raw.githubusercontent.com/alura-cursos/introducao-a-data-science/master/aula4.1/movies.csv"
filmes = pd.read_csv(uri)
filmes.head()

filmes.columns = ["filmeId", "título", "generos"]
filmes.head()

uri = "https://raw.githubusercontent.com/alura-cursos/introducao-a-data-science/master/aula4.1/ratings.csv"
notas = pd.read_csv(uri)
notas.head()

notas.columns = ["usuárioId", "filmeId", "nota", "momento"]
notas.head()

notas["nota"].head() # series

notas["nota"].unique() # dados únicos

notas["nota"].mean() # média

notas["nota"].min() # mínimo

notas.describe()

# Jupyter nbviewer -> Para abrir um notebook online
