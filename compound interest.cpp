//program to calculate compound interest
/*Author:Linus
Reg No:CT102/G/22937/24
Date:1/10/2024
*/
#include <stdio.h>

int main()
{
    float p, r, t, n, A, CI;

    printf("Enter p: ");
    scanf("%f", &p);
    printf("p: %f \n", p);

    printf("Enter t: ");
    scanf("%f", &t);
    printf("t is: %f \n", t);

    printf("Enter r: ");
    scanf("%f", &r);
    printf("r=r/100");
    printf("r: %f \n",r);

    
    printf("Enter N:");
    scanf("%f",&n);
    printf("n: %f \n",n);

    A=p*((1 + r/n)*(n*t));
    printf("A is %f \n",A);
    
    CI=A-p;
    printf("CI = %f", CI);
    
    return 0;
}
