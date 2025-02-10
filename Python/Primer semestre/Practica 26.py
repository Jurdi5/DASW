"""Convertir dolares a pesos, dada una cantidad en dolares y el
tipo de cambio."""

segundos = int(input("Cuantos segundos son: "))
horas = segundos // 3600
segundos = segundos % 3600 #segundos %= 3600
minutos = segundos // 60
segundos = segundos % 60
print(horas,":",minutos,":",segundos)
