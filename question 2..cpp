#include<stdio.h>
int main() {
    float x1, x2, x3;
    
    // Input angles of triangle 
    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &x1, &x2, &x3);
    
    // Check condition for validity by suming the three angles that is equal to 180
    if (x1 >0 && x2> 0 && x3 > 0 && (x1 + x2 + x3) == 180) {
      
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
