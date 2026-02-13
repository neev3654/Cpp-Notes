#include <iostream>
#include <set>

int main() {
    std::set<int> s = {5, 3, 8, 1, 5};

    s.insert(10);
    s.insert(3);

    std::cout << "Elements in the set: ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}