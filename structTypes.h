#ifndef STRUCTTYPES_H
#define STRUCTTYPES_H

enum StatNames_t {
    Strength,
    Agility,
    Stamina,
    Intellect,
    Spirit,
    Mastery,
    Haste,
    Crit,
    Hit,
    Expertise,
    Dodge,
    Parrry,
    Armor
};

enum SlotNames_t {
    Head,
    Neck,
    Shoulder,
    Chest,
    Back,
    Wrist,
    Hands,
    Waist,
    Legs,
    Feet,
    Finger1,
    Finger2,
    Trinket1,
    Trinket2,
    Mainhand,
    Offhand,
    Onehand,
    Twohand
};

enum ArmorTypes_t {
    Cloth,
    Leather,
    Mail,
    Plate,
    Misc
};

enum WeaponTypes_t {
    Axe,
    Sword,
    Mace,
    Dagger,
    Gun,
    Bow,
    Crossbow,
    Shield,
    CasterOffhand
};

struct Stat {
    StatNames_t name;
    int value;
    Stat(StatNames_t _n, int _value) : name(_n), value(_value) {}
};


#endif // STRUCTTYPES_H
