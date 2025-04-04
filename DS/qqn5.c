//WAP to find the fibonacci series

#include <stdio.h>
int main() {

  int i, n;
  int t1 = 0, t2 = 1;
 // int c = t1 + t2;
 int c=0;
  printf("Enter the no.of terms: ");
  scanf("%d", &n);
  // printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; i++) {
    printf("%d, ", c);
   
    t1 = t2;
    t2 = c;
    c = t1 + t2;
    
  }
  for(int i ; i < 0 ; i++){
    int a ;
     a = a+1;
     printf("Enter ")
  }
  return 0;
}