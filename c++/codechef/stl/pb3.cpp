#include<bits/stdc++.h>
using namespace std;


int main() { 
    int N,x;
    cin>>N;
    cin>>x;
    vector<int>no ;
    for(int i=0;i<N;i++){
        int c;
        cin>>c;
        no.push_back(c);
    }
    replace(no.begin(),no.end(),x,x+1);
    for(int j=0;j<N;j++){
        cout<<no[j]<<" ";
    }
    return 0;
}
