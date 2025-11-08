some=0

while True:
    
    
    prix=int(input("Entrer le prix ([0] pour exit): "))
    
    if prix==0:
        break

    some=some+prix
    print("Le some:",some)
    
print("Le Total:",some)
