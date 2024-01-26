'''
Criar um programa que gera 3 listas de acordo com a necessidade logo abaixo:

- Lista1 = Funcionários que tem carro e trabalham a noite
- Lista2 = Funcionários que tem carro e trabalham durante o dia
- Lista3 = Funcionários que não tem carro

'''

funcionarios = ['Luiza', 'Júlia', 'Gabriel', 'Gustavo', 'Lucas', 'Jasmin']
turno_dia = ['Luiza', 'Júlia', 'Gabriel']
turno_noite = ['Gustavo', 'Lucas', 'Jasmin']
tem_carro = ['Luiza', 'Júlia', 'Jasmin']

######################################

# transformando em set
funcionarios = set(funcionarios)
turno_dia = set(turno_dia)
turno_noite = set(turno_noite)
tem_carro = set(tem_carro)

# funcionários que trabalham de dia e tem carro
lista1 = turno_dia & tem_carro # & mostra duplicações
print(lista1)

# funcionários que trabalham à noite e tem carro
lista2 = turno_noite & tem_carro # & mostra duplicações
print(lista2)

# funcionários que não tem carro
lista3 = funcionarios ^ tem_carro
print(lista3)


#####################################3
# funcionários que trabalham de dia e tem carro
print(set(tem_carro).intersection(turno_noite))

# funcionários que trabalham à noite e tem carro
print(set(tem_carro).intersection(turno_dia))

# funcionários que não tem carro
print(set(funcionarios).difference(tem_carro))


