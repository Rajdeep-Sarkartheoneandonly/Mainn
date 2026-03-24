import csv
with open('w.csv','r') as f2:
    rd = csv.reader(f2, delimiter = '|')
    for i in rd:
        for m in i:
            print(m+'\n')
        print()