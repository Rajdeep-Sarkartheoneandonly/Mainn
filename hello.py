s = "Hello, World!"
with open ("hello.txt", "r") as f:
    while True:
        i = f.read(1)
        if i == '1':
            x = f.tell()
            print(x)
            print(x-1)
            f.seek(x-1)
            print(f.read(1))
            break