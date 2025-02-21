#include<iostream>
#include<set>

using namespace std;
int main(){
    set<string,greater<string>>cars = {"Volva","BMW","Audi","Mercedes"};
    // elements are automatically sorted in sets
    for( string car:cars){
        cout<<car<<endl;
    }

    
}