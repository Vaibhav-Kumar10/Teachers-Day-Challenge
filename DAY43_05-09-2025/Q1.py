def fix_caps_lock(word):
    if word.isupper():
        return word.swapcase()
    
    if len(word) == 1 and word.islower():
        return word.swapcase()

    if word[0].islower() and word[1:].isupper():
        return word.swapcase()

    return word

s = input().strip()
print(fix_caps_lock(s))