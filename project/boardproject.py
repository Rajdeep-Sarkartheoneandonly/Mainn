import pickle
import os

FNAME = "handicrafts.dat"

# Each record: [PCode, Name, Type, Area, Material, Price, Remark]

def add_record():
    """Function 1: store data for a single handicraft"""
    try:
        pcode = int(input("Enter product code (integer): "))
        name = input("Enter name: ")
        htype = input("Enter type: ")
        area = input("Enter area (city): ")
        material = input("Enter material: ")
        price = int(input("Enter price (integer): "))
        remark = input("Enter remark: ")
    except ValueError:
        print("Invalid numeric value.")
        return

    rec = [pcode, name, htype, area, material, price, remark]

    with open(FNAME, "ab") as f:
        pickle.dump(rec, f)
    print("Record added.")


def load_all():
    """Utility: read all records from file into a list"""
    records = []
    if not os.path.exists(FNAME):
        return records
    with open(FNAME, "rb") as f:
        while True:
            try:
                records.append(pickle.load(f))
            except EOFError:
                break
    return records


def save_all(records):
    """Utility: write full list back to file (overwrite)"""
    with open(FNAME, "wb") as f:
        for r in records:
            pickle.dump(r, f)


def delete_record():
    """Function 2: remove data for a single handicraft"""
    try:
        pcode = int(input("Enter product code to delete: "))
    except ValueError:
        print("Invalid product code.")
        return

    records = load_all()
    new_recs = [r for r in records if r[0] != pcode]

    if len(new_recs) == len(records):
        print("No record with that product code.")
    else:
        save_all(new_recs)
        print("Record deleted.")


def display_by_city():
    """Function 3: display handicraft name and price for a given city"""
    city = input("Enter city name (Area): ").strip().lower()
    records = load_all()
    found = False
    for r in records:
        if r[3].strip().lower() == city:
            print(f"Name: {r[1]}, Price: {r[5]}")
            found = True
    if not found:
        print("No records for that city.")


def display_saree_details():
    """Function 4: display name, material, price for 'Saree' type items"""
    records = load_all()
    found = False
    for r in records:
        if r[2].strip().lower() == "saree":
            print(f"Name: {r[1]}, Material: {r[4]}, Price: {r[5]}")
            found = True
    if not found:
        print("No Saree type items found.")


def display_brass_items():
    """Function 5: display item name, area, price for all items made of Brass"""
    records = load_all()
    found = False
    for r in records:
        if r[4].strip().lower() == "brass":
            print(f"Name: {r[1]}, Area: {r[3]}, Price: {r[5]}")
            found = True
    if not found:
        print("No items made of Brass found.")


def count_thanjavur_items():
    """Function 6: count number of items available from city Thanjavur"""
    records = load_all()
    cnt = 0
    for r in records:
        if r[3].strip().lower() == "thanjavur":
            cnt += 1
    print("Number of items from Thanjavur:", cnt)


def average_price_saree():
    """Function 7: display average price of Saree type items"""
    records = load_all()
    total = 0
    count = 0
    for r in records:
        if r[2].strip().lower() == "saree":
            total += r[5]
            count += 1
    if count == 0:
        print("No Saree type items to average.")
    else:
        print("Average price of Saree items:", total / count)


def max_price_sculpture():
    """Function 8: get maximum price for Sculpture type items"""
    records = load_all()
    max_price = None
    max_rec = None
    for r in records:
        if r[2].strip().lower() == "sculpture":
            if max_price is None or r[5] > max_price:
                max_price = r[5]
                max_rec = r
    if max_price is None:
        print("No Sculpture type items found.")
    else:
        print("Maximum priced Sculpture item:")
        print(f"Name: {max_rec[1]}, Area: {max_rec[3]}, Material: {max_rec[4]}, Price: {max_rec[5]}")


def menu():
    while True:
        print("\n--- Handicrafts of Tamil Nadu ---")
        print("1. Add a handicraft record")
        print("2. Delete a handicraft record")
        print("3. Display handicraft name and price for a given city")
        print("4. Display name, material, price for Saree items")
        print("5. Display name, area, price for items made of Brass")
        print("6. Count items from Thanjavur")
        print("7. Display average price of Saree items")
        print("8. Display maximum price for Sculpture items")
        print("9. Exit")

        choice = input("Enter choice (1-9): ").strip()

        if choice == "1":
            add_record()
        elif choice == "2":
            delete_record()
        elif choice == "3":
            display_by_city()
        elif choice == "4":
            display_saree_details()
        elif choice == "5":
            display_brass_items()
        elif choice == "6":
            count_thanjavur_items()
        elif choice == "7":
            average_price_saree()
        elif choice == "8":
            max_price_sculpture()
        elif choice == "9":
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Try again.")

#main
menu()