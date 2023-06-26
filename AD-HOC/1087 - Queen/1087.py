while True:
    input_data = input().split()
    x1 = int(input_data[0])
    y1 = int(input_data[1])
    x2 = int(input_data[2])
    y2 = int(input_data[3])

    if x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0:
        break

    dx = abs(x2 - x1)
    dy = abs(y2 - y1)

    if dx == 0 and dy == 0:
        print(0)
    elif dx == dy or dx == 0 or dy == 0:
        print(1)
    else:
        print(2)