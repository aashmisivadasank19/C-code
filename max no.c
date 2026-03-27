#include <stdio.h>
int main() {
    int i,n;
   
   float  num, max;
    printf("Enter the number: ");
    scanf("%f", &num);
    max = num;
    
    for (i = 1; i < n; i++)
     {
        scanf("%f", &num);
        if (num > max) {
            max = num;
        }
    }
    
    printf("Maximum number is: %2f\n", max);
    
    return 0;
}