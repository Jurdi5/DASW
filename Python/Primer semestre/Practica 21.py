"""Un productor de leche lleva el registro de lo que produce en litros, pero cuando
entrega le pagan en galones. Realice un programa en Python que ayude al
productor a saber cuánto recibirá por la entrega de su producción de un día
"""

litros = eval(input("De cuantos litros fue la producción del dia: "))
Precio_galon = eval(input("Cual es el precio por galon: "))

Galones = litros/3.785
Ganancia = Galones * Precio_galon
print("la ganancia del día fue de", round(Ganancia,2),"pesos")

