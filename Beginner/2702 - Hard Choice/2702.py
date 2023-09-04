available = list(map(int, input().split()))
requested = list(map(int, input().split()))

difference = [requested[i] - available[i] for i in range(3)]

R = (max(0, difference[0]) + max(0, difference[1]) + max(0, difference[2]))

print(R)