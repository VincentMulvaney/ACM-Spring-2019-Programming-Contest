def calculate( num_1, num_2, oper):
    if oper == '+':
        result = 0
        x = num_1
        while(x < num_2):
            result = result + x
            x = x + 1
        return result
    if oper == '-':
        result = num_1
        x = num_1
        while(x < num_2):
            result = result - x
            x = x + 1
            return x
    if oper == '*':
        result = 1
        x = 1
        while ( x < num_2):
            result = result * x
            return x

attempt_1 = input()
number_1, number_2, op = attempt_1.split()
number_1 =  int(number_1)
number_2 = int(number_2)
result = calculate(number_1, number_2, op)
print(str(result))
