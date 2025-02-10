"""Analisis
Entrada
 -número
 -acumulador
Salida
 -suma de números
proceso
 -Pedir número
 -acumular mientras número no sea cero
 -Mostrar lo acumulado en pantalla"""
total = 0
numero = eval(input("Dame un numero: "))
while numero != 0:
    total = total + numero
    numero = eval(input("Dame un número: "))
print("Suma de los números: ", total)
