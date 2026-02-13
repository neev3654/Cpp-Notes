#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {5, 3, 8, 1, 5};

    ms.insert(10);
    ms.insert(3);

    std::cout << "Elements in the multiset: ";
    for (int num : ms) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

