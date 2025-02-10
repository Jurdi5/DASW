Base = int(input("Cuanto mide la Base: "))
LadoA = int(input("Cuanto mide el lado A: "))
LadoB = int(input("Cuanto mide el lado B: "))

if Base > LadoA + LadoB:
    print("No Valido")
else:
    if Base == LadoA and LadoA == LadoB:
        print("Equilatero")
    else:
        if LadoA == LadoB:
            print("Isósceles")
        else:
            print("Escaleno")