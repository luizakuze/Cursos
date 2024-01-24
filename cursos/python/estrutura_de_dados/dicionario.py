# Dicionários
    # Pares de chave e valor, tabela hash do python

aluno = {} # criando dicionário vazio

pessoa = {'nome': 'Luiza', 'idade': 19}
print(pessoa)



##### manipulando dados dicionário #####

pessoa['nome'] = 'Gabriel' # alterando valor
print(pessoa) 

pessoa.update({'nome': 'Rafael', 'idade': 20}) # atualizando mais de um valor em 1 linha

pessoa.update({'endereco': 'Rua A'})
print(pessoa)

print(pessoa['nome'])

# se o campo não existir e vc quiser retornar
print(pessoa.get('rua', 'não existe rua'))

# removendo campo
del pessoa['nome']
print(pessoa)




##### looping dentro do dicionário #####
for i in pessoa.keys(): # pessoa somente já pega pelas keys
    print(i) # imprimindo as chaves

for i in pessoa.values():
    print(i) # imprimindo os valores

for i in pessoa.items():
    print(i) # imprimindo pares de chave e valor em uma tupla
    
for keys, values in pessoa.items():
    print(keys, values) # imprimindo pares de chave e valor fora da tupla



##### visualizando itens, keys, values #####
    
# lista dentro do dicionário    
aluno = {'nome': 'luiza', 'materias': ['fsc', 'mtm', 'bio']}
print(aluno)

aluno = {
    'nome': 'luiza',
    'materias': ['fsc', 'mtm', 'bio']
}

print(aluno.get('materias'))

print(aluno.items())
print(aluno.keys())
print(aluno.values())

