altura = int(input('informe a sua altura'))
peso = int(input('informe seu peso em kg'))

imc = peso/(altura/100)**2

if imc < 18.5:
    print('......')
elif imc >= 18.5 and imc < 24.9:
    print('normal')


###################
    

if imc < 18.5:
    print('......')
elif imc < 24.9:
    print('normal')