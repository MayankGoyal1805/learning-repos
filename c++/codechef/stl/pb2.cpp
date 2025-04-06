#include <bits/stdc++.h>
using namespace std;

// can just use long long eveywhere with product and vector to ensure no confusion

long long mul(int x,long long y){
    return x*y;
}


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
    vector<int> part(nc);
    partial_sum(c.begin(),c.end(),part.begin());
    long long prod = accumulate(part.begin(),part.end(),1LL,mul);
    auto min_max = minmax_element(c.begin(),c.end());
    cout<<prod<<" ";
    if (prod % *min_max.first==0 && prod % *min_max.second==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }

}

