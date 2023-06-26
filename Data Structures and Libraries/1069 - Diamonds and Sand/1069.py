N = int(input())

for _ in range(N):
    input_str = input()
    Pilha = list(input_str)
    diamonds = 0

    for i2 in range(len(Pilha)):
        if Pilha[i2] == '<':
            for i3 in range(i2, len(Pilha)):
                if Pilha[i3] == '>':
                    diamonds += 1
                    Pilha[i3] = '.'
                    break

    print(diamonds)