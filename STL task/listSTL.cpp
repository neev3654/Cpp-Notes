#include <iostream>
#include <list>
using namespace std;

int main() {
    int m,n;
    cout << "enter m : ";
    cin >> m;
    cout << "enter n : ";
    cin >> n;
    list<int> l1;
    list<int> l2;
    int val1,val2;
    cout << "enter for list 1 : " <<endl;
    for (int i = 0; i < m; i++) {
        cin >> val1;
        l1.push_back(val1);
    }
    cout << "enter for list 2 : " <<endl;
    for (int i = 0; i < n; i++) {
        cin >> val2;
        l2.push_back(val2);
    }
    
    
    list <int> l;
    cout << "New merged list created" << endl;
    for(int value3 : l1){
        l.push_back(value3);
    }
    for(int value4 : l2){
        l.push_back(value4);
    }
    cout << "Elements of merged list : " << endl;
    for (int value : l){
        cout << value << endl;
    }
    l.reverse();
    cout << "Elements of reversed merged list : " << endl;
    for (int value : l){
        cout << value << endl;
    }
    
    return 0;
}