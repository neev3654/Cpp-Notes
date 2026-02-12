#include<iostream>
#include<list>

using namespace std;
int main(){
    
    list<int> l1 = {1,2,3,4,2,6,2,7,2};
    list<int> l2;
    
    l1.push_back(56);

    l1.push_front(234);
    
    l1.push_front(674);
    
    l1.pop_front();
    
    auto a = l1.begin();
    
    ++a;
    
    l1.insert(a, 578);
    
    l1.remove(2);
    
    l1.sort();
    
        l1.reverse();
    
    for(int value : l1){
        cout << value << endl;
    }
    
    return 0;
}