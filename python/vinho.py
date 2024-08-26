#
# Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)
#
# Data de Criação:     19/08/24
# Data de Modificação: 19/08/24
#
# Objetivo: Write a program that reads a number and print the Fibonacci number 
# corresponding to this read number. Remember that the first elements of the 
# Fibonacci series are 0 and 1 and each next term is the sum of the two 
# preceding it. All the Fibonacci numbers calculated in this program must 
# fit in a unsigned 64 bits number.
#

def main():
    # Guarda quantos testes serão executados
    numero_testes = int(input())
    for i in range(numero_testes):
        number = int(input())
        print(f"Fib({number}) = {fibonacci(number)}")

# Função que vamos executar, por recursão, para obter o número de fibonacci
def fibonacci(number):
    # Valores iniciais da sequencia
    lista = [0, 1]
    for i in range(2, number + 1):
        # Regra da sequência de fibonacci, como explicado no problema
        lista.append(lista[i - 1] + lista[i - 2])

    return lista[number]
  

if __name__ == "__main__":
  main()