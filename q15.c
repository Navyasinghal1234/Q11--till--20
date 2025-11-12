//WAp to input the character and cheack wheater it uppercase,lowercase,digits,special numbers.
#include <stdio.h>
int main() {
    char ch;
    printf("enter a character: ");
scanf(" %c",&ch);
if (ch >='A'&& ch <= 'Z') {
    printf("% c is an uppercase alphabet.\n",ch);
}
    else if (ch>='a' && ch<='z') {
        printf("%c is an lowercase alphabet.\n",ch);
    }
    else if (ch >='0' && ch <='z') {
        printf("%c is a digit.\n",ch);
    }
    else {
        printf("%c is a special character.\n",ch);
    }
    return 0;
}
