nllantas = int(input("Cuantas llantas vas a comprar: "))

if nllantas < 5:
    total = nllantas * 500
else:
    total = nllantas * 450

print("El total a pagar es de ")