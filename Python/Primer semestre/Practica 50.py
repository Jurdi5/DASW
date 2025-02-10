""" Inicio
base, potencia, contador:REAL
exponente:entero
ESCRIBIR "Base: "
LEER base
Escribir "Exponente:
LEER exponente
potencia = base
PARA contador = 1 HASTA exponente-1 CON PASO 1 HACER
potencia = potencia * base
FINPARA
ESCRIBIR potencia
FIN
"""
base = eval(input("Base: "))
exponente = int(input("Exponente: "))
potencia = base #acumulador
for contador in range(1, exponente,1):
    potencia = potencia * base
print("potencia:", potencia)
