#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int elem;
    cout << "Enter 10 elements:\n";
    for (int i = 0; i < 10; i++) {
        cin >> elem;
        v.push_back(elem);
    }


    int index;
    cout << "Enter index to print element:";
    cin >> index;
    cout << "Element at index " << index << " is: " << v[index] << endl;

    cout << "Enter index to remove element: ";
    cin >> index;

        v.erase(v.begin() + index);
   

    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout<< v.size() << endl;

    return 0;
}
