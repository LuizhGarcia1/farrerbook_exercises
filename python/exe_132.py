X, Y, Z = list(map(int, input().split()))
if (X < Y + Z and Y < X + Z and Z < X + Y):
    if (X == Y and X == Z):
        print("Equilateral Triangle!")
    elif (X == Y or Y == Z or X == Z):
        print("Isosceles Triangle!")
    else:
        print("Escalene Triangle!")
else:
    print("Is not a Triangle!")
