#include <stdio.h>
int main(){
    int R,m1,m2,m3;
    char Name, Grade;
    printf("Enter Your Name:  \n");
    scanf("%c", &Name);
    printf("Enter your Rol No: \n");
    scanf("%d",&R);
    printf("Enter Marks in Subject 1:  \n");
    scanf("%d", &m1);
    printf("Enter Marks in Subject 2: \n");
    scanf("%d", &m2);
    printf("Enter Marks in Subject 3: \n");
    scanf("%d",&m3);


    float sum = m1+m2+m3;
    float avg = sum/3;

    if(avg>=90)
    Grade='A';
 
    else if(avg>=80)
    Grade = 'B';

    else if(avg>=70)
    Grade = 'C';

    else if(avg>=60)
    Grade = 'D';

    else if (avg<33.33)
    Grade = 'F';



    printf("STUDENT MARKSHEET \n");
    printf("Name of Student: %c ", &Name);
    printf("\n Roll No: %d",R);
    printf("\n Total Marks: %.2f out of 300", sum);
    printf("\n Grade: %c", Grade);
    return 0;

}
