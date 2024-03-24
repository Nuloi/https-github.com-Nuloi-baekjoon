def gcd(m,n):
    while n != 0:
       t = m%n
       (m,n) = (n,t)
    return abs(m)

def mat_mul(R, C) :
    result = [[0,0], [0,0]]
    for i in range(2):
        for j in range(2):
            temp = 0
            for k in range(2):
                temp += R[i][k] * C[k][j]
                temp %= 1000000007
            result[i][j] = temp
    return result

def mat_pow(matrix, n) :
    if n == 1:
        return matrix
    if n % 2 == 0:
        half = mat_pow(matrix, n // 2) 
        return mat_mul(half, half)
    else:
        half = mat_pow(matrix, n // 2)
        return mat_mul(mat_mul(half, half), matrix)

n, m = map(int, input().split())

if n == 0 or m == 0:
    print("0")  
    
gcd_pos = gcd(n, m)
matrix = [[1, 1], [1, 0]]
answer = mat_pow(matrix, gcd_pos)
print(answer[0][1] % 1000000007)
    
