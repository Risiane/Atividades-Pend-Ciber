# Solicitação pelo Bash

# python3 gerenciador.py listar
# python3 gerenciador.py criar minha_pasta
#*********************************************

# Código em Python
import os     # Biblioteca para interagir com o sistema operacional
import sys    # Biblioteca para acessar argumentos da linha de comando

# Verifica se o usuário passou pelo menos um argumento
if len(sys.argv) < 2:
    print("Uso: python3 gerenciador.py [listar | criar nome]")
    sys.exit(1)  # Encerra o programa com código de erro

acao = sys.argv[1]  # Primeiro argumento: ação ('listar' ou 'criar')

if acao == "listar":
    # Lista os itens no diretório atual
    for item in os.listdir("."):
        # Mostra apenas se for diretório
        if os.path.isdir(item):
            print(f"[DIR] {item}")

elif acao == "criar":
    if len(sys.argv) < 3:
        print("Erro: informe o nome da pasta")
    else:
        nome = sys.argv[2]  # Segundo argumento: nome da pasta
        try:
            os.mkdir(nome)  # Tenta criar o diretório
            print(f"Pasta '{nome}' criada.")
        except FileExistsError:
            print("Essa pasta já existe.")  # Caso o diretório já exista

else:
    print("Ação inválida. Use 'listar' ou 'criar'.")
