#include <iostream>
#include <vector>


int main(){
std::vector<std::string> v1 = {};

v1.push_back("Neev");
v1.push_back("Patel");
 std::cout << v1.size() << '\n';

for(std::string value : v1){
    std::cout << value << '\n';
}
return 0;
}