"""Dada una cantidad sin IVA, calcular el IVA y el total con IVA.
"""
Cantidad = int(input("Cantidad a calcular: "))
Valor_del_IVA = Cantidad * .16
Total_con_IVA = Valor_del_IVA + Cantidad
print("Valor del IVA: ", Valor_del_IVA)
print("Valor total del producto: ", Total_con_IVA)
