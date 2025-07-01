from minhasoperacoes import operacoes
from minhasoperacoes import utils

def main():
    print("Escolha uma operação: +, -, *, /")
    operacao = input("Operação: ")

    a = float(input("Digite o primeiro número: "))
    b = float(input("Digite o segundo número: "))

    if operacao == '+':
        resultado = operacoes.soma(a, b)
    elif operacao == '-':
        resultado = operacoes.subtracao(a, b)
    elif operacao == '*':
        resultado = operacoes.multiplicacao(a, b)
    elif operacao == '/':
        resultado = operacoes.divisao(a, b)
    else:
        print("Operação inválida")
        return

    utils.exibir_resultado(operacao, resultado)

if __name__ == "__main__":
    main()
