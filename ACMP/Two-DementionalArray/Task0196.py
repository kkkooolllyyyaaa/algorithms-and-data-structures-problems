n = int(input())
arr = [[0] * n for i in range(n)]
ans = [[0] * n for i in range(n)]
direction = ['r', 'd', 'l', 'u']
i = 0
j = 0
number = 1
dir_ind = 0
while number < n * n:
    ans[i][j] = number
    if direction[dir_ind % 4] == 'r':
        j += 1
        if j == n or ans[i][j] != 0:
            number -= 1
            dir_ind += 1
            j -= 1
    elif direction[dir_ind % 4] == 'd':
        i += 1
        if i == n or ans[i][j] != 0:
            number -= 1
            dir_ind += 1
            i -= 1

    elif direction[dir_ind % 4] == 'l':
        j -= 1
        if j == -1 or ans[i][j] != 0:
            number -= 1
            dir_ind += 1
            j += 1
    else:
        i -= 1
        if i == -1 or ans[i][j] != 0:
            number -= 1
            dir_ind += 1
            i += 1
    number += 1
if n % 2 == 0:
    ans[n // 2][n // 2 - 1] = n * n
else:
    ans[n // 2][n // 2] = n * n
for i in ans:
    for j in i:
        print(j, end=' ')
    print()

