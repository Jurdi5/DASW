""" Dado como dato del usuario el sueldo de un trabajador, aplíquele un aumento del 15% si su
sueldo es inferior a 10,000; sólo en ese caso, imprima el nuevo sueldo del trabajador; si no hay aumento,
no imprima nada. Finalmente, al terminar el programa, imprima “Cálculo de sueldo terminado."""
sueldo = eval(input("Cual es el sueldo actual:"))
if sueldo < 10000:
    sueldo *= 1.15 #sueldo =sueldo * 1.15
    print("Nuevo sueldo:",round(sueldo,2),"pesos")
