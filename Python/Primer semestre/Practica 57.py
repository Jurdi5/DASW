print("\t\t\tTabla de Multiblicar")
print("\t",end="")
for x in range(1,10,1):
    print(x,end="\t")
print()
print("------------------------------------")
for y in range(1,10,1):
    print(y,"| ",end="")
    for x in range(1,10,1):
        print(x * y,end="\t")
    print()