A, B, N = (int(x) for x in raw_input().split())
if N == 1: print(A)
elif N == 2: print(B)
else:
    for i in range(2, N):
        F = A + B*B
        A = B
        B = F
    print(F)