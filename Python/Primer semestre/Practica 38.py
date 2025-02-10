"""Diseñe un algoritmo que determine quienes son contemporáneos entre Juan,
Mario y Pedro"""
edadJuan = int(input("Edad de Juan: "))
edadMario = int(input("Edad de Mario: "))
edadPedro = int(input("Edad de Pedro: "))
if edadJuan == edadMario and edadPedro == edadJuan:
    print("Todos son contemporáneos")
else:
    if edadJuan == edadMario:
        print("Mario y Juan son contemporáneos")
    else:
        if edadJuan == edadPedro:
            print("Juan y Pedro son contemporáneos")
        else:
            if edadPedro == edadMario:
                print("Pedro y Mario son contemporáneos")
            else:
                print("Nadie es contemporáneo")
