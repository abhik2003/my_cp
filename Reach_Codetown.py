for _ in range (int(input())):
    s=input()
    vowel={'A','E','I','O','U'}
    codeton="CODETOWN"
    possible=True
    for i in range(8):
        if s[i] in vowel and codeton[i] not in vowel:
            possible=False
        elif s[i] not in vowel and codeton[i] in vowel:
            possible=False
    if possible:
        print("YES")
    else:
        print("NO")