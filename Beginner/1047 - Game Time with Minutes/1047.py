input_data = input().split(' ')
start = int(input_data[0]) * 60 + int(input_data[1])
end = int(input_data[2]) * 60 + int(input_data[3])

if end <= start:
    end += 1440

duration = end - start
hours = duration // 60
minutes = duration % 60

print(f"O JOGO DUROU {hours} HORA(S) E {minutes} MINUTO(S)")