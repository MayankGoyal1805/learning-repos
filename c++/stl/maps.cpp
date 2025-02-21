#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people) {
        cout << person.first << " is: " << person.second << "\n";
    }
}