#ifndef CHAR_H
#define CHAR_H

#include "item.h"
#include <QDebug>

class Char
{
public:
    Char();
    void equipItem(Item _item, SlotNames_t _slot);
    const Item& getItem(SlotNames_t _slot);
    int getStatFromItems(StatNames_t _stat);
private:
    Item head;
    Item neck;
    Item shoulder;
    Item chest;
    Item back;
    Item wrist;
    Item hands;
    Item waist;
    Item legs;
    Item feet;
    Item finger1;
    Item finger2;
    Item trinket1;
    Item trinket2;
    Item mainhand;
    Item offhand;
};

#endif // CHAR_H
