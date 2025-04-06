#include<bits/stdc++.h>
using namespace std;

int mul(int x, int y) { // custom multiplication function
    return x * y;
};

int myop (int x, int y) {
    return x+y+1;
 }
void printVector(vector<int>& v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
};

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int sum = accumulate(v.begin(), v.end(), 0);
    cout<<sum<<endl;

    int product = accumulate(v.begin(), v.end(), 1, mul); 
    cout<<product<<endl;

    vector<int> result1(v.size()); // creating a new vector with same size as v
    partial_sum(v.begin(), v.end(), result1.begin()); 
    printVector(result1);


    vector<int> result2(v.size());
    partial_sum(v.begin(), v.end(), result2.begin(), myop); 
    printVector(result2);

}    



