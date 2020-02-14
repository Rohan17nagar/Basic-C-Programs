/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num;
    float area;
    printf("Enter the radius of a circle:\n");
    scanf("%f",&num);
    area = 3.14 * num * num;
    printf("%0.2f",area);
    return 0;
}
