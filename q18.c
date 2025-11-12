//WAP that accepts a percentage of students according to criteria.
#include <stdio.h>

int main() {
    int per;   // variable to store percentage

    // input percentage
    printf("Enter your percentage (0-100): ");
    scanf("%d", &per);

    // check grade using if-else ladder
    if (per >= 90 && per <= 100)
        printf("Grade A\n");
    else if (per >= 80 && per <= 89)
        printf("Grade B\n");
    else if (per >= 70 && per <= 79)
        printf("Grade C\n");
    else if (per >= 60 && per <= 69)
        printf("Grade D\n");
    else if (per < 60 && per >= 0)
        printf("Grade F\n");
    else
        printf("Invalid percentage! Please enter between 0 and 100.\n");

    return 0;
}
