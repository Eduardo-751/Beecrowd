N = int(input())
X = list(map(int, input().split()))

R = min(X)
print(f"Menor valor: {R}")
print(f"Posicao: {X.index(R)}")