D = float(input('Dívida R$: '))
DA = int(input('Dias atrasados: '))
MD = float(input('Multa diária R$: '))

V = D + (DA * MD)

print("\nValor a ser pago por dívida em atraso: {:.2f}".format(V), "R$")
