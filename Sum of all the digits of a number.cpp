#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int getsum(int n){
  if(n==0){
    return 0;
  }
  return n%10 + getsum(n/10);
}
int main()
{int t;
 cin>>t;
 while(t--){
  int n;
 cin>>n;
 cout<<getsum(n)<<endl;
 }
    return 0;
}
