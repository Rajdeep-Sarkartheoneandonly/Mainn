import random
class Player:
    def __init__(self, name, level):
        self.name = name
        self.gear = []
        self.level = level
        self.health = 100+(level * 10)
        self.mana = 50+(level * 5)
        self.strength = 10 + (level * 2)
        self.defense = 5 + (level * 1)
        self.armor_check = {
            'helmet': ('helmet' in self.gear),
            'chestplate': ('chestplate' in self.gear),
            'boots': ('boots' in self.gear),
            'leggings': ('leggings' in self.gear)
        }
sword = {'name': 'Sword', 'type': 'weapon', 'damage': random.randint(7,11), 'level_required': 1}
shield = {'name': 'Shield', 'type': 'armor', 'defense': 0.8, 'level_required': 1}
spear = {'name': 'Spear', 'type': 'weapon', 'damage': random.randint(5,15), 'level_required': 2}
helmet = {'name': 'Helmet', 'type': 'armor', 'defense': 0.8 , 'level_required': 2}
chestplate = {'name': 'Chestplate', 'type': 'armor', 'defense': 0.7, 'level_required': 3}
boots = {'name': 'Boots', 'type': 'armor', 'defense': 0.95, 'level_required': 1}
leggings = {'name': 'Leggings', 'type': 'armor', 'defense': 0.85, 'level_required': 2}
def add_gear(player, gear):
    if player.level >= gear['level_required']:
        player.gear.append(gear)
        print(f"{gear['name']} added to {player.name}'s gear.")
    else:
        print(f"{player.name} does not meet the level requirement for {gear['name']}.")
class spider:
    def __init__(self, level):
        self.level = level
        self.health = 50 + (level * 5)
        self.damage = random.randint(5, 10) + (level * 2)
        self.defense = 2 + (level * 0.5)
    def attack(self, player):
        if random.random() > player.defense / (player.defense + self.damage):
            # Calculate total armor defense
            total_armor = 0
            armor_count = 0
            if player.armor_check['helmet']:
                total_armor += helmet['defense']
                armor_count += 1
            if player.armor_check['chestplate']:
                total_armor += chestplate['defense']
                armor_count += 1
            if player.armor_check['boots']:
                total_armor += boots['defense']
                armor_count += 1
            if player.armor_check['leggings']:
                total_armor += leggings['defense']
                armor_count += 1
            avg_armor = total_armor / armor_count if armor_count > 0 else 1
            damage_dealt = (self.damage - player.defense) * avg_armor
            player.health -= damage_dealt
            print(f"{self.__class__.__name__} attacks {player.name} for {damage_dealt:.2f} damage.")