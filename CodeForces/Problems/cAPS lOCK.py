s = input()
if len(s) > 1:
    if s.isupper(): print(s.lower())
    elif s[1:].isupper(): print(s[0].upper() + s[1:].lower())
    else: print(s)
else:
    print(s.swapcase())
