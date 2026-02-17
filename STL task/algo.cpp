#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>     

using namespace std;

int main() {
    int size;
   
    cout << "size: ";
    cin >> size;

    vector<int> v(size);

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> v[i];
    }

    int total = accumulate(v.begin(), v.end(), 0);

    int maxElement = *max_element(v.begin(), v.end());
    int minElement = *min_element(v.begin(), v.end());

    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    cout << "\nTotal (Accumulate) = " << total << endl;
    cout << "Maximum Element = " << maxElement << endl;
    cout << "Minimum Element = " << minElement << endl;

    cout << "\nFinal Vector Elements (Sorted + Reversed):\n";
    for(int val : v) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}