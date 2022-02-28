void decimalToBinary(int n)
{ int i=0;
 int m[32];
  while(n>0){
  m[i] = n%2;
  n =n/2;
  i++;
  }
  for(int j=i-1;j>=0;j--){
    cout<<m[j];
  }
}
