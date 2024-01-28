# crie uma lista c 3 cidades e indique a existência de uma cidade informada pelo usuário nessa lista
## obs. não usar list[]

cidades = ('floripa', 'sao jose', 'palhoca')

cidade_escolhida = input('entre com a cidade: ')

if cidade_escolhida in cidades:
    print('está aqui')