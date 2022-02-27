#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
void leftRotation(int n, int arr[]){
   int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n-1] = temp;
}
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  int k;
  cin>>k;
	for(int i = 0;i<k;i++){
      leftRotation(n,arr);
    }
  for(int i = 0;i<n-1;i++){
    cout<<arr[i]<<" ";
  }
  cout<<arr[n-1];
 	cout<<endl;
  }
    return 0;
}
