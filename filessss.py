while True:
    f = input()
    try:
        with open(f+'.txt', 'r') as file:
            content = file.read()
            print(content)
    except:
        print("File not found.")