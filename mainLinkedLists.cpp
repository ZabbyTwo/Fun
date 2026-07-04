// to compile and run:
// g++ mainLinkedLists.cpp linkedLists.cpp -o mainLinkedLists && ./mainLinkedLists
#include <iostream>
#include "linkedLists.h"

int main()
{
    LinkedList myList;

    myList.insert(123);
    myList.insert(456);
    myList.insert(789);
    myList.insert(147);
    myList.insert(471);

    std::cout << "--- Komplette Liste ---\n";
    myList.listNodes();

    std::cout << "\n--- Entferne Knoten mit Wert 789 ---\n";
    if (myList.remove(789))
    {
        std::cout << "Knoten erfolgreich entfernt und Speicher freigegeben.\n";
    }

    std::cout << "\n--- Aktualisierte Liste ---\n";
    myList.listNodes();

    return 0;
}