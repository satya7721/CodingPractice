#include <iostream>
#include <vector> 
using namespace std; 

int main() {
  vector<int> a {1,2,3,4,5,6,7};
  for(auto i : a){
    cout<<i<<" ";
  }
}