for _ in range (int(input())):
    n=int(input())
    if n<3:
        print("Bob")
        continue
    if (n&1):
        print("Alice")
    else:
        print("Bob")