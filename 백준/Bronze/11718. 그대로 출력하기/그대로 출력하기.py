while True:
    try:
        line = input()
        if line:
            print(line)
        else:
            break
    except EOFError:
        break
