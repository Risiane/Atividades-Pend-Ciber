# main.py

from operacoes import soma, subtracao, multiplicacao, divisao
from utils import exibir_resultado

def main():
    print("Calculadora Básica")
    print("Operações disponíveis: +  -  *  /")
    operacao = input("Escolha a operação: ")

    if operacao not in ['+', '-', '*', '/']:
        print("Operação inválida.")
        return

    try:
        a = float(input("Digite o primeiro número: "))
        b = float(input("Digite o segundo número: "))
    except ValueError:
        print("Entrada inválida. Digite números válidos.")
        return

    if operacao == '+':
        resultado = soma(a, b)
    elif operacao == '-':
        resultado = subtracao(a, b)
    elif operacao == '*':
        resultado = multiplicacao(a, b)
    elif operacao == '/':
        resultado = divisao(a, b)

    exibir_resultado(operacao, resultado)

if __name__ == "__main__":
    main()