C = int(input())
for _ in range(C):
    attack = input()
    group1 = attack.index('m') - 1
    group2 = attack.count('a', attack.index('k'))
    print('k' + 'a' * (group1 * group2))