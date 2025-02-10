nlapices = int(input("Cuantos lapices vas a comprar: "))
if nlapices >= 1000:
    total = nlapices * .85
else:
    total = nlapices * .90

print("Total a pagar",total,"pesos")

