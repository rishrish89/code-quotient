int factorial(int n){
  // Wri
  int fact;
  if(n ==1 || n==0){
    return 1;
  }
  fact = n * factorial(n-1);
}
