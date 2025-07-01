# Declarar variáveis
soma = 0

# Ler a quantidade de números a serem processados
n = int(input("Digite a quantidade de números: "))

# Loop para ler os números e somá-los
for i in range(1, n + 1):
    num = int(input("Digite um número: "))
    soma += num

# Verificar se a soma é par ou ímpar
if soma % 2 == 0:
    print("A soma dos números é par.")
else:
    print("A soma dos números é ímpar.")