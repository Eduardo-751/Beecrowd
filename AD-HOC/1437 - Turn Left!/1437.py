while True:
    N = int(input())

    if N == 0:
        break

    commands = input()

    direction = 'N'

    for i in range(N):
        if commands[i] == 'D':
            if direction == 'N':
                direction = 'L'
            elif direction == 'L':
                direction = 'S'
            elif direction == 'S':
                direction = 'O'
            elif direction == 'O':
                direction = 'N'
        elif commands[i] == 'E':
            if direction == 'N':
                direction = 'O'
            elif direction == 'O':
                direction = 'S'
            elif direction == 'S':
                direction = 'L'
            elif direction == 'L':
                direction = 'N'

    print(direction)