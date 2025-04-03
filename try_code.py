def isValid(s:str) -> bool:
    stack = []
    mapping = {')':'(', '}':'{', ']':'['}
    
    for char in s:
        if char in mapping.values():
            stack.append(char)
        elif char in mapping.keys():
            if stack == [] or mapping[char] != stack.pop():
                return False
        else:
            return False
            
    return stack == []


# Test cases
print(isValid("()"))         # True
print(isValid("()[]{}"))     # True
print(isValid("(]"))         # False
print(isValid("([)]"))       # False
print(isValid("{[]}"))       # True