#include <stdio.h>

int main() {
    // Declare two integer variables to store the numbers.
    int a, b;

    // To enter the first number.
    printf("Enter value of A: ");
    scanf("%d", &a);

    // To enter the second number.
    printf("Enter value of B: ");
    scanf("%d", &b);

    // Add two numbers and display the result.
    // a and b are operands, while + is the arithmetic operator.
    printf("Sum of A + B = %d\n", a + b);







    // Variable to store the side of the square.
    float side;

    // Ask the user to enter the side.
    printf("Enter the side of the square: ");
    scanf("%f", &side);

    // Formula for area of square = side × side.
    printf("Area of square = %.2f Sq Ft\n", side * side);





    // Variable to store the radius of the circle.
    float radius;

    // Constant value of Pi.
    const float PI = 3.14159;

    // To enter the radius.
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Formula: Area = Pi × radius sq.
    printf("Area of circle = %.2f Sq Ft\n", PI * radius * radius);

    return 0;
}



