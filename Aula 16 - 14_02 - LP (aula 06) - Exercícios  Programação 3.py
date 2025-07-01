# Exercício 3:

# Usando uma lista
lista_numeros = list(range(1, 101))
print("Lista (Ordem inversa):", lista_numeros[::-1])

# Usando um dicionário (chave: índice, valor: número)
dicionario_numeros = {i: i for i in range(1, 101)}
print("Dicionário (Ordem inversa):", {k: dicionario_numeros[k] for k in reversed(dicionario_numeros)})

# Usando uma tupla
tupla_numeros = tuple(range(1, 101))
print("Tupla (Ordem inversa):", tupla_numeros[::-1])