while True:
    N = int(input())

    if N == 0:
        break

    samples = [0] * (N + 2)
    input_data = input().split()

    for i in range(N):
        samples[i] = int(input_data[i])

    samples[N] = int(input_data[0])
    samples[N+1] = int(input_data[1])

    waves = 0

    for i in range(1, N+2 - 1):
        if (samples[i] > samples[i - 1] and samples[i] > samples[i + 1]) or (samples[i] < samples[i - 1] and samples[i] < samples[i + 1]):
            waves += 1

    print(waves)