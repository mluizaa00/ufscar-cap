"""
 Autor: Maria Luiza Fernandes Prestes Cesar (RA: 832374)

 Data de Criação:     17/07/24
 Data de Modificação: 17/07/24

 Objetivo: calcular a faixa etaria da pessoa de acordo com a idade
"""


def main():
  # Ler a idade
  age = int(input("Digite a idade: "))
  # Caso a idade seja inválida, dê erro
  if age <= 0:
    raise ValueError("Idade inválida (< 0)")

  age_intervals = {
    range(0, 13): "infância",
    range(13, 18): "adolescência",
    range(18, 26): "juventude",
    range(26, 36): "adulto jovem",
    range(36, 46): "adulto",
    range(46, 61): "meia-idade",
  }

  for key in age_intervals:
    if age in key:
      print(f"A faixa é: {age_intervals[key]}")


if __name__ == "__main__":
  main()