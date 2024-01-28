# break e continue

# para de contar no 5
for i in range(1, 11):
    print(i)
    if i == 5:
        break

print('---------------')

# ignora o 5
for i in range(1, 11):
    if i == 5:
        continue
    print(i)