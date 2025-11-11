//WAP to input an integers and check whether it is positive ,negative or zero using nested if else 
#include <stdio.h>

int main() {
    int num;
    printf("enter an integers: ");
    scanf("%d",&num);
    if (num >=0) {
       if(num == 0) {   
           printf("the number is zero\n");
    } else 
    {  printf("the number is positive.\n");
    }
    } else {
        printf("the number is negative.\n");
    }
    
    return 0;
    }
