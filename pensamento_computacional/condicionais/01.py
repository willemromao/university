anodenascimento = int(input('Ano de nascimento: '))
idade = 2022 - anodenascimento
print(idade , "anos")

if idade >= 16:
  print("\nPode votar")
else:
    print("N�o pode votar")

if idade >= 18:
  print("Pode ter CNH")
else:
  print("N�o pode ter CNH")
