A, B, C = list(map(int, input().split()))
if (A < B and A < C):
    lower = A
elif (B < C):
    lower = B
else:
    lower = C
print("\n {} " .format(lower))
