#include<iostream>
#include<list>

using namespace std;
int main(){
    list<string> cars = {"bmw","volvo","mercedes","audi"};
    cout<<cars.front()<<"\n";
    cout<<cars.back()<<"\n";
    cars.push_front("Buggati");
    cars.push_back("Lamborghini") ;
    cout<<cars.front()<<"\n";
    cout<<cars.back()<<"\n";

    for(string car :cars){
        cout<<car<<endl;
    }
}