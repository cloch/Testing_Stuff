#include <QtGui/QApplication>
#include "mainwindow.h"

#include "item.h"
#include <iostream>
#include "structTypes.h"
#include "utilites.h"
#include "char.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    vector<Stat> stats;
    stats.push_back(Stat(Strength, 20));
    stats.push_back(Stat(Agility, 25));
    stats.push_back(Stat(Agility, 10));
    stats.push_back(Stat(Strength, 15));
    stats.push_back(Stat(Stamina, 50));

    Char jelena;

    Item item = Item(1, "Testname", Head, stats);
    Item twohand = Item(2, "Twohand test", Twohand , stats);
    Item offhand = Item(3, "Offhand test", Offhand, stats);
    Item mainhand = Item(4, "Mainhand test", Mainhand, stats);
    jelena.equipItem(item, Head);
    jelena.equipItem(twohand, Mainhand);
    jelena.equipItem(offhand, Offhand);
    jelena.equipItem(twohand, Mainhand);
    jelena.equipItem(mainhand, Mainhand);
    jelena.equipItem(offhand, Offhand);
    jelena.equipItem(twohand, Mainhand);

    a.quit();
    return 0;
}
