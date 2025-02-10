"""Programa que pida al usuario una clave de acceso y hasta que sea correcto"""
"""Analisis 
entrada
 -clave
 -contraseña
Salida
 -Bienvenida al sistema
proceso
 -Comprobar si clave es igual a contraseña"""
Clave = "cisco123"
intentos = 10
numerointentos = 1
password = input("Contraseña: ")

while Clave != password or numerointentos <= 10:
    print("Error, Contraseña incorrecta")
    password = input("Intente de nuevo: ")
    numerointentos += 1
if numerointentos > intentos:
    print("Superaste el número de intentos")
else:
    print("Welcome back")
