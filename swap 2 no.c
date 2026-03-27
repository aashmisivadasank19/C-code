#include <stdio.h>

void main ()
 {
    int a,b,t;
   
    // Prompt the user to enter two numbers
    printf("Enter : ");
    scanf("%d %d",&a ,&b);
    t=a;
    a=b;
    b=t;

    // Display numbers after swapping
    printf("After swap: %d %d",a,b);
 }
        
 