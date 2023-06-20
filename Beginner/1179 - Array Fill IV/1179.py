par = []
impar = []

for _ in range(15):
    numero = int(input())
    
    if numero % 2 == 0:
        par.append(numero)
        if len(par) == 5:
            for i in range(5):
                print(f"par[{i}] = {par[i]}")
            par = []
    else:
        impar.append(numero)
        if len(impar) == 5:
            for i in range(5):
                print(f"impar[{i}] = {impar[i]}")
            impar = []

for i in range(len(impar)):
    print(f"impar[{i}] = {impar[i]}")

for i in range(len(par)):
    print(f"par[{i}] = {par[i]}")