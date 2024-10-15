#include <iostream>
#include <vector>
#include <set>

void findUniqueElementsInA() {
    std::cout << "task1" << std::endl;

    int sizeA, sizeB;

    std::cout << "Enter the size of array A: ";
    std::cin >> sizeA;
    std::cout << "Enter the size of array B: ";
    std::cin >> sizeB;

    std::vector<int> arrayA(sizeA);
    std::vector<int> arrayB(sizeB);

    std::cout << "Enter elements of array A(separated by space): ";
    for (int i = 0; i < sizeA; ++i) {
        std::cin >> arrayA[i];
    }

    std::cout << "Enter elements of array B(separated by space): ";
    for (int i = 0; i < sizeB; ++i) {
        std::cin >> arrayB[i];
    }

    std::set<int> uniqueResult1;
    std::set<int> setB(arrayB.begin(), arrayB.end());

    for (const int& element : arrayA) {
        if (setB.find(element) == setB.end()) {
            uniqueResult1.insert(element);
        }
    }

    std::cout << "Result of task 1: ";
    for (const int& element : uniqueResult1) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

void findUniqueElementsInAAndB() {
    std::cout << "task2" << std::endl;

    int sizeA, sizeB;

    std::cout << "Enter the size of array A: ";
    std::cin >> sizeA;
    std::cout << "Enter the size of array B: ";
    std::cin >> sizeB;

    std::vector<int> arrayA(sizeA);
    std::vector<int> arrayB(sizeB);

    std::cout << "Enter elements of array A(separated by space): ";
    for (int i = 0; i < sizeA; ++i) {
        std::cin >> arrayA[i];
    }

    std::cout << "Enter elements of array B(separated by space): ";
    for (int i = 0; i < sizeB; ++i) {
        std::cin >> arrayB[i];
    }

    std::set<int> uniqueElements;
    std::set<int> setB(arrayB.begin(), arrayB.end());

    for (const int& element : arrayA) {
        if (setB.find(element) == setB.end()) {
            uniqueElements.insert(element);
        }
    }

    for (const int& element : arrayB) {
        if (std::find(arrayA.begin(), arrayA.end(), element) == arrayA.end()) {
            uniqueElements.insert(element);
        }
    }

    std::cout << "Result of task 2: ";
    for (const int& element : uniqueElements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    findUniqueElementsInA();
    findUniqueElementsInAAndB();
    return 0;
}
