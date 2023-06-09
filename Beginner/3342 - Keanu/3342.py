N = int(input())

totalCells = N * N
cPreta = totalCells // 2
cBranca = totalCells - cPreta

print(f"{cBranca} casas brancas e {cPreta} casas pretas")