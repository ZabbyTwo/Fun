#include <iostream>
#include <vector>

void sortVecBubble(std::vector<int> &vec);
void printVec(std::vector<int> *vec);

int main()
{
    std::vector<int> sortMe{10, 20, 500, 0, 8, 5, 3, 6, 3, 1, 3, 2, 1633, 41, 123, 61};

    // Bubble Sort
    std::cout << "Before Bubble Sort: " << '\n';
    printVec(&sortMe);
    sortVecBubble(sortMe);
    std::cout << "After Bubble Sort: " << '\n';
    printVec(&sortMe);

    return 0;
}

void printVec(std::vector<int> *vec)
{
    for (auto a : *vec)
    {
        std::cout << a << " ";
    }
    std::cout << '\n';
} 

void sortVecBubble(std::vector<int> &vec)
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