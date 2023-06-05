cod1, qtd1, valor1 = input().split(' ')
qtd1 = int(qtd1)
valor1 = float(valor1)

cod2, qtd2, valor2 = input().split(' ')
qtd2 = int(qtd2)
valor2 = float(valor2)

total = (qtd1 * valor1) + (qtd2 * valor2)
print(f"VALOR A PAGAR: R$ {total:.2f}")