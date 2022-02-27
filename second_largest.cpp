#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int arr[5];
  int largest = INT_MIN;
  int second = INT_MIN;
  for(int i = 0;i<5;i++){
    cin>>arr[i];
    largest=max(largest,arr[i]);
  }
  for(int i = 0;i<5;i++){
    if(arr[i]<largest){
      second=max(second,arr[i]);
    }
  }
  if(second!=INT_MIN){
  cout<<second<<endl;
  }
  else{
    cout<<largest<<endl;
  }
  return 0;
}
