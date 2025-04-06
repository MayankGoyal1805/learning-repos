#include <bits/stdc++.h>
using namespace std;

int main() {
	int nt;
  cin>>nt;
  for(int i=0;i<nt;i++){
    int nc;
    cin>>nc;
    vector<int> c;
    for(int j=0;j<nc;j++){
      int cs;
      cin>>cs;
      c.push_back(cs);
    }
    if(nc%2!=0 && nc%3==0){
      cout<<c[(c.size()-1)/2]<<"\n";
    }
    else if(nc%2==0 && nc%3==0){
      cout<<c[0]<<" "<<c[c.size()-1]<<"\n";
    }
    else{
      cout<<c[0]+c[c.size()-1]<<"\n";
    }
  }

}
