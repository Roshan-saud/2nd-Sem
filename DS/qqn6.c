//WAP to find the factorial of number

#include<stdio.h>
 void main(){
    int n,r=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       r = r*i;
    }
    printf("Factorial of %d is %d",n,r);
    
 }