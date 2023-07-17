# Introdução ao Python

Variáveis
"""

nome = "Luiza"
print(nome)

nome = "Lulu"
nome

idade = 18
idade

"""Função"""

def mais_um_ano(idade):
  print("ta dentro dessa funcao")
  return idade + 1

mais_um_ano(40)

"""Array"""

filme1 = "Toy Story"
filme2 = "A Culpa é das Estrelas"
filme3 = "One Piece"

filmes = ["Toy Story", "A Culpa é das Estrelas", "One Piece"]
filmes

def imprime_filmes(filmes_imprimir):
  print("A lista de filmes que eu teho disponíveis:")
  print(filmes)

imprime_filmes(filmes)

# O filme no índice 1
print(filmes[1])

# O último
print(filmes[-1])
# O penúltimo
print(filmes[-2])

filmes[-2:]

"""Laço de Repetição

"""

for filme in filmes:
  print(filme)
  print("...")

"""Dicionário, chave e valor"""

dados = {"nome" : "Luiza",
         "idade" : 18,
         "empresa" : "IFSC"}
dados

dados["nome"]
