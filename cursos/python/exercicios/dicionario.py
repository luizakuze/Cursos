# imprimir país e capital 

capitais = {
    'Brasil': 'Brasília',
    'Austrália': 'CAmberra',
    'Canadá': 'Ottawa'
}

pais_escolhido = input('entre c o país: ')

if pais_escolhido in capitais:
    print(f'a capital de {pais_escolhido} é {capitais[pais_escolhido]}')
else:
    print('não encontramos a capital')