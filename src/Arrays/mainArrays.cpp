#include <iostream>
#include <vector>

void printVec(std::vector<int> *vec);
void vecBubblesort(std::vector<int> &vec);
void vecBogosort(std::vector<int> &vec);

void runArrays()
{
    std::vector<int> sortMe{10, 20, 500, 0, 8, 5, 3, 6, 3, 1, 3, 2, 1633, 41, 123, 61};

    // Bubblesort
    std::cout << "Before Bubblesort: " << '\n';
    printVec(&sortMe);
    vecBubblesort(sortMe);
    std::cout << "After Bubblesort: " << '\n';
    printVec(&sortMe);

    // Bogosort
    // TODO
}

void printVec(std::vector<int> *vec)
{
    for (auto a : *vec)
    {
        std::cout << a << " ";
    }
    std::cout << '\n';
}

// Bubblesort
void vecBubblesort(std::vector<int> &vec)
{
    for (int i{0}; i + 1 < vec.size(); i++)
    {
        for (int j{0}; j + 1 < vec.size() - i; j++)
        {
            if (vec.at(j) > vec.at(j + 1))
            {
                int temp = vec.at(j + 1);
                vec.at(j + 1) = vec.at(j);
                vec.at(j) = temp;
            }
        }
    }
}

// Bogosort
void vecBogosort(std::vector<int> &vec)
{
}