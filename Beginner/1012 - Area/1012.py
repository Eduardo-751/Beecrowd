A, B, C = input().split(' ')
A = float(A)
B = float(B)
C = float(C)

triangulo = (A * C) / 2
circulo = (C * C) * 3.14159
trapezio = (A + B)/2 * C
quadrado = B * B
retangulo = A * B

print(f"TRIANGULO: {triangulo:.3f}")
print(f"CIRCULO: {circulo:.3f}")
print(f"TRAPEZIO: {trapezio:.3f}")
print(f"QUADRADO: {quadrado:.3f}")
print(f"RETANGULO: {retangulo:.3f}")
