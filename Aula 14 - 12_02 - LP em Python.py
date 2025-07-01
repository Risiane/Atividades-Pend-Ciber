# 2- Crie uma Lista com 10 valores inicie com os valores de 11 até 20 e imprima na tela - Python.

lista = list(range(11, 21))
for valor in lista:
    print(valor, end=' ')

# 4- Crie uma lista bidimensional 10x10 inicie com os valores de 100 até 0 e imprima os elementos na ordem inversa na tela - Python.

matriz = []
valor = 100

# Preenche a matriz
for i in range(10):
    linha = []
    for j in range(10):
        linha.append(valor)
        valor -= 1
    matriz.append(linha)

# Imprime em ordem inversa
for i in range(9, -1, -1):
    for j in range(9, -1, -1):
        print(f"{matriz[i][j]:3}", end=' ')
    print()
