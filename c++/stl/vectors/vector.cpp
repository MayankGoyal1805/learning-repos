#include "methods.h"
using namespace std;
int main(){
    vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout<<cars[0]<<std::endl;
    cout<<cars[1]<<std::endl;
    cars.push_back("HUHA");
    for(string car : cars){
        cout<<car<<"\n";
    }
    cout<<cars.at(3)<<std::endl;
    cout<<cars.size()<<std::endl;

    return 0;


}