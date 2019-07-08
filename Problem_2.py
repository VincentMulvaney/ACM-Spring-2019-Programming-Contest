def getValue( char):
    if char == 'a':
        x = 97
    elif char == 'b':
        x = 98
    elif char == 'c':
        x = 99
    elif char == 'd':
        x = 100
    elif char == 'e':
        x = 101
    elif char == 'f':
        x = 102
    elif char == 'g':
        x = 103
    elif char == 'h':
        x = 104
    elif char == 'i':
        x = 105
    elif char == 'j':
        x = 106
    elif char == 'k':
        x = 107
    elif char == 'l':
        x = 108
    elif char == 'm':
        x = 109
    elif char == 'n':
        x = 110
    elif char == 'o':
        x = 111
    elif char == 'p':
        x = 112
    elif char == 'q':
        x = 113
    elif char == 'r':
        x = 114
    elif char == 's':
        x = 115
    elif char == 't':
        x = 116
    elif char == 'u':
        x = 117
    elif char == 'v':
        x = 118
    elif char == 'w':
        x = 119
    elif char == 'x':
        x = 120
    elif char == 'y':
        x = 121
    elif char == 'z':
        x = 122
    return x

result_1 = 0
result_2 = 0
n = input("")
n = int(n)
m = n 
for x in range (0, m):
    word = input("")
    temp_1 = getValue(word[x])
    temp_2 = getValue(word[m-1])
    m = m -1
    result_1 = temp_1 + result_1
    result_2 = temp_2 + result_2


result = result_1 + result_2
print(result)

