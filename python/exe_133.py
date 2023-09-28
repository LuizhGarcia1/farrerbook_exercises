A, B, C = list(map(int, input().split()))

if (A > B or A > C):
    if (B < C):
        temp = A
        A = B
        B = temp
    else:
        temp = A
        A = C
        C = temp
if (B > C):
    temp = B
    B = C 
    C = temp
print("{}, {}, {}".format(A, B, C))
    
