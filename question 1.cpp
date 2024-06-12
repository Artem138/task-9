#include <iostream>
#include <string>

enum class MonsterType { Ogre, Dragon, Orc, GiantSpider, Slime };

struct Monster {
    MonsterType type;
    std::string name;
    int health;
};

void printMonster(const Monster& monster) {
    std::cout << "This " << static_cast<std::underlying_type<MonsterType>::type>(monster.type)
        << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main() {
    Monster ogre{ MonsterType::Ogre, "Torg", 145 };
    Monster slime{ MonsterType::Slime, "Blurp", 23 };

    printMonster(ogre);
    printMonster(slime);

    return 0;
}
