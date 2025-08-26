import pickle
import os
def add_rec():
    f = open('data.dat', 'ab')
    id = int(input("Enter ID: "))
    name = input("Enter Name: ")
    tmarks = int(input("Enter total Marks: "))
    rec = [id, name, tmarks]
    pickle.dump(rec, f)
    f.close()
def change_mks():
    f = open('data.dat', 'rb')
    f1 = open('temp.dat', 'wb')
    id = int(input("Enter ID to modify marks: "))
    try:
        while True:
            rec = pickle.load(f)
            if rec[0] == id:
                print("Record Found")
                print("ID:", rec[0])
                print("Name:", rec[1])
                print("Total Marks:", rec[2])
                new_mks = int(input("Enter new marks: "))
                rec[2] = new_mks
                pickle.dump(rec, f1)
                print("Record Updated")
            else:
                pickle.dump(rec, f1)
    except:
        f.close()
        f1.close()
        os.remove('data.dat')
        os.rename('temp.dat', 'data.dat')
def delete_rec():
    f = open('data.dat', 'rb')
    f1 = open('temp.dat', 'wb')
    id = int(input("Enter ID to modify marks: "))
    try:
        while True:
            rec = pickle.load(f)
            if rec[0] == id:
                print("Record Found")
                print("ID:", rec[0])
                print("Name:", rec[1])
                print("Total Marks:", rec[2])
                print("Record Deleted")
            else:
                pickle.dump(rec, f1)
    except:
        f.close()
        f1.close()
        os.remove('data.dat')
        os.rename('temp.dat', 'data.dat')
while True:
    print("1. Add Record")
    print("2. Change Marks")
    print("3. Delete Record")
    print("4. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        add_rec()
    elif choice == 2:
        change_mks()
    elif choice == 3:
        delete_rec()
    elif choice == 4:
        break
    else:
        print("Invalid Choice")