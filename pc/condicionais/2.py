v1 = int(input('N1: '))
v2 = int(input('N2: '))
v3 = int(input('N3: '))
v4 = int(input('N4: '))

print()

maior = v1

if v2 > maior:
  maior = v2
if v3 > maior:
  maior = v3
if v4 > maior:
  maior = v4

print('Maior valor:' , maior)

menor = v1

if v2 < menor:
  menor = v2
if v3 < menor:
  menor = v3
if v4 < menor:
  menor = v4

print('Menor valor:' , menor)
