#include<iostream>
#include<vector>
// using namespace std;
int main(){
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    std::cout<<cars[0]<<std::endl;
    std::cout<<cars[1]<<std::endl;
    cars.push_back("HUHA");
    for(std::string car : cars){
        std::cout<<car<<"\n";
    }
    std::cout<<cars.at(3)<<std::endl;
    std::cout<<cars.size()<<std::endl;
    return 0;
}