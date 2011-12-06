#include "char.h"

Char::Char() {
}


// Twohand => Mainhand
// Onehand => Mainhand || Offhand
void Char::equipItem(Item _item, SlotNames_t _slot) {
    if (_item.slot() == _slot ||
       (_item.slot() == Onehand && (_slot == Mainhand || _slot == Offhand)) ||
       (_item.slot() == Twohand && (_slot == Mainhand))) {
        switch (_slot) {
        case Head:
            this->head = _item;
            break;
        case Neck:
            this->neck = _item;
            break;
        case Shoulder:
            this->shoulder = _item;
            break;
        case Chest:
            this->chest = _item;
            break;
        case Back:
            this->back = _item;
            break;
        case Wrist:
            this->wrist = _item;
            break;
        case Hands:
            this->hands = _item;
            break;
        case Waist:
            this->waist = _item;
            break;
        case Legs:
            this->legs = _item;
        case Feet:

            this->feet = _item;
            break;
        case Finger1:
            this->finger1 = _item;
            break;
        case Finger2:
            this->finger2 = _item;
            break;
        case Trinket1:
            this->trinket1 = _item;
            break;
        case Trinket2:
            this->trinket2 = _item;
            break;
        case Mainhand:
            if (_item.slot() == Twohand) {
                this->offhand = Item();
            }
            this->mainhand = _item;
            break;
        case Offhand:
            if (this->mainhand.slot() == Twohand) {
                this->mainhand = Item();
            }
            this->offhand = _item;
            break;
        default:
            break;
        }
    } else {
        qDebug() << "Warning: Tried to equip item into wrong slot!";
    }
}

int Char::getStatFromItems(StatNames_t _stat) {
    int result = 0;
    result += this->head.getStat(_stat);
    result += this->neck.getStat(_stat);
    result += this->shoulder.getStat(_stat);
    result += this->chest.getStat(_stat);
    result += this->back.getStat(_stat);
    result += this->wrist.getStat(_stat);
    result += this->hands.getStat(_stat);
    result += this->waist.getStat(_stat);
    result += this->legs.getStat(_stat);
    result += this->feet.getStat(_stat);
    result += this->finger1.getStat(_stat);
    result += this->finger2.getStat(_stat);
    result += this->trinket1.getStat(_stat);
    result += this->trinket2.getStat(_stat);
    result += this->mainhand.getStat(_stat);
    result += this->offhand.getStat(_stat);
    return result;
}
