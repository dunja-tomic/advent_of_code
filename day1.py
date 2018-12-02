def frequency():
    freq = 0
    while True:
        op = input()
        print("Current frequency " + str(freq) + ", ")
        print("Change of " + op[0] + op[1:] + "; ")
        if op[0] == '+':
            freq += int(op[1:])
        elif op[0] == '-':
            freq -= int(op[1:])
        print("Resulting frequency: " + str(freq))
    return freq
    
frequency()
