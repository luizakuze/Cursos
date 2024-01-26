# if elif else
## programa verifica o ponto da carne dada sua temperatura

temperatura = int(input('Qual a temperatura da carne?'))

if temperatura < 48:
    print('cozinhar mais alguns minutos...')
elif temperatura in range(48, 54):
    print('selada')
elif temperatura in range(55, 100):
    print('ao ponto')
else:
    print('queimada')