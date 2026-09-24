#include <stdio.h>
int main(){
    int Rn;
    float AF, Mrk, SD, DF;
    char name[100], Eligibility;

    printf("Enter Your Name: ");
    scanf("%99s", name);
    printf("Enter Your Roll No: ");
    scanf("%d", &Rn);
    printf("Enter Your Annual Fees: ");
    scanf("%f", &AF);
    printf("Enter Your Marks in %%: ");
    scanf("%f", &Mrk);

    SD = AF * 0.1f;
    if (Mrk > 90)
    {                                  // biggest mistake :- {  } --> Use very carefully while giving inst in if and else if
        DF = AF - SD;
            Eligibility = 'Y';
    }
    else
    {
        DF = AF;
        Eligibility = 'N';
    }

    printf("Student Scholarship Eligibility\n");
    printf("Student Name: %s\n", name);
    printf("Student Roll No: %d\n", Rn);
    printf("Eligibility: %c\n", Eligibility);
    printf("Net fees to be Paid: %.2f\n", DF);




    return 0;
}