#include <stdio.h>

int main() {
    char name[50];
    int age;
    float weight;
    float height;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f feet\n", height);

    return 0;
}