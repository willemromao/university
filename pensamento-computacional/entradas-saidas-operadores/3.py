D = float(input('D�vida R$: '))
DA = int(input('Dias atrasados: '))
MD = float(input('Multa di�ria R$: '))

V = D + (DA * MD)

print("\nValor a ser pago por d�vida em atraso: {:.2f}".format(V), "R$")
