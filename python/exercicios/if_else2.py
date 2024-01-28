## programa verifica a quantidade de tinta necessária para pintar uma parede.
## dado o rendimento, a altura e a largura.
## mensagem: 'vc precisa de X qt tinta'

# entrada de dados
rendimento = float(input('Entre com o rendimento da tinta por metro quadrado: '))
altura = float(input('Entre com a altura da parede em metros: '))
largura = float(input('Entre com a largura da parede em metros: '))

# calculando área da parede
area_parede = altura * largura

# Inicializando contador de rendimentos
rendimentos_necessarios = 0

# calculando a quantidade de tinta necessária
area_restante = area_parede
while area_restante > 0:
    area_restante -= rendimento
    rendimentos_necessarios += 1

# saída de dados
print(f'Você precisa de {rendimentos_necessarios} latas de tinta para pintar a parede.')


############################


# entrada de dados
rendimento = float(input('Entre com o rendimento da tinta por metro quadrado: '))
altura = float(input('Entre com a altura da parede em metros: '))
largura = float(input('Entre com a largura da parede em metros: '))

# calculando área da parede
area_parede = altura * largura

# calculando a quantidade de tinta necessária
quantidade_tinta = area_parede / rendimento

# saída de dados
print(f'Você precisa de {quantidade_tinta:.2f} litros de tinta para pintar a parede.')



#############################

rendimento = float(input('Entre com o rendimento da tinta por metro quadrado: '))
altura = float(input('Entre com a altura da parede em metros: '))
largura = float(input('Entre com a largura da parede em metros: '))

def calcula_area_parede(altura, largura):
    area_parede = altura * largura
    
    quantidade_tinta = area_parede / rendimento
    return quantidade_tinta

print(f'Você precisa de {quantidade_tinta:.2f} litros de tinta para pintar a parede.')



#############################

rendimento = float(input('Entre com o rendimento da tinta por metro quadrado: '))
altura = float(input('Entre com a altura da parede em metros: '))
largura = float(input('Entre com a largura da parede em metros: '))

area_parede = altura * largura

def calcula_area_parede(area_parede):
    return area_parede / rendimento

print(f'Você precisa de {quantidade_tinta:.2f} litros de tinta para pintar a parede.')

