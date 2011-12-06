#include "item.h"

Item::Item() {
    vector<Stat> stats;
    this->itemID = 0;
    this->itemName = "Dummy";
    this->slotName = Head;
    this->stats = stats;
}

Item::Item(unsigned int _itemID, string _itemName, SlotNames_t _slotName, vector<Stat> _stats) :
    itemID(_itemID),
    itemName(_itemName),
    slotName(_slotName),
    stats(_stats)
{

}

bool statListContains(Stat needle, vector<Stat>& haystack) {
    for (unsigned int i = 0; i < haystack.size(); i++) {
        if (needle.name == haystack.at(i).name) {
            return true;
        }
    }
    return false;
}

unsigned int Item::getStat(StatNames_t _statName) {
    unsigned int result = 0;
    for (unsigned int i = 0; i < this->stats.size(); i++) {
        if (this->stats.at(i).name == _statName) {
            result += this->stats.at(i).value;
        }
    }
    return result;
}

vector<Stat>& Item::getStats() {
    return this->stats;
}

vector<Stat> Item::getStatsMerged() {
    vector<Stat> collected;
    vector<Stat> finished;
    for (unsigned int i = 0; i < this->stats.size(); i++) {
        if (!statListContains(this->stats.at(i), finished)) {
            Stat toCollect(this->stats.at(i).name, this->stats.at(i).value);
            for (unsigned int k = i+1; k < this->stats.size(); k++) {
                if (this->stats.at(k).name == toCollect.name) {
                    toCollect.value += this->stats.at(k).value;
                    finished.push_back(toCollect);
                }
            }
            collected.push_back(toCollect);
        }
    }
    return collected;
}


