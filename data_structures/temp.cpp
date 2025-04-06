#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int countNodes(int i) {
          return pow(2,i);
      }
      
      long long pow(int x, int y){
          long long pow = 1LL;
          for(int i=0;i<y-1;i++){
            pow *= x;
          }
          return pow;
      }
  };
  
int main(){
    Solution tryt;
    cout<<tryt.countNodes(5)<<endl;
    return 0;
}