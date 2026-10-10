#include <iostream>

void runArrays();
void runFahrzeug();
void runDoubleLinkedList();
void runStl();

int main()
{
    std::cout << "Hello World!\n\n";

    std::cout << "--- Running Arrays ---" << '\n';
    runArrays();

    std::cout << "\n--- Running Fahrzeug ---" << '\n';
    runFahrzeug();

    std::cout << "\n--- Running Linked List ---" << '\n';
    runDoubleLinkedList();

    std::cout << "\n--- Running STL ---" << '\n';
    runStl();

    return 0;
}