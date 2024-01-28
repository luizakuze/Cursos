cores = ['azul', 'amarelo', 'rosa']

cor_escolhida = input('insira a cor escolhida: ')

if cor_escolhida in cores:
    print('essa cor está disponível')


##########
    

# previnindo entrada de dados c letras maiúsculas

if cor_escolhida.lower() in cores:
    print('tá aqui')