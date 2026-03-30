#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Check if triangle is valid
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle - sides don't satisfy triangle inequality\n");
    }
   
  
    
    // Check triangle type based on sides
    if (a == b && b == c) {
        printf("It's a Equilateral Triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("It's aIsosceles Triangle\n");
    }
    else {
        printf("It's a Scalene Triangle\n");
    }
    
    // Check if right-angled triangle
    // Sort sides to identify hypotenuse
    float sides[3] = {a, b, c};
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (sides[i] > sides[j]) {
                float temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }
    
    return 0;
}