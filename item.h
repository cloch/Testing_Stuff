#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
#include "structTypes.h"
#include "utilites.h"

using namespace std;

class Item
{
public:
    Item();
    Item(unsigned int _itemID, string _itemName, SlotNames_t _slotName, vector<Stat> _stats);
    vector<Stat>& getStats();
    vector<Stat> getStatsMerged();
    unsigned int getStat(StatNames_t _statName);
    SlotNames_t slot() {return this->slotName;}
private:
    unsigned int itemID;
    string itemName;
    SlotNames_t slotName;
    vector<Stat> stats;

};

#endif // ITEM_H
