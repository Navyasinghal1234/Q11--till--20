//WAP to classify a triangle as equilateral,issoceles,scalene based on its side length.
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the three sides of the triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a + b > c && a + c > b && b + c >a) {
        if (a == b && b == c) 
        printf("the triangle is equilateral.\n");
        else if ( a == b || b == c || a == c )
        printf(" the triangle is issoceles.\n");
        else printf("the triangle is scalene.\n");
    }
     else { printf("the given sides do  not form a triangle.\n");
     }

    return 0;
}
