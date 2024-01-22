# valor exponencial
calculo = 2 ** 3
print(calculo)

# operador de comparação
operador = 10 <= 20
print(operador)

# operador de atribuição
x = 2
x = x + 5
x += 5
print(x)

# operador lógico
renda_5mil = True
nome_limpo = True
cnh_valida = False

if renda_5mil and nome_limpo:
    print('aprovado')
elif renda_5mil or cnh_valida:
    print('aprovado com restrição')
