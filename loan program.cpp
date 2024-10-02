//program to calculate loan program
/*Author:Linus
Reg No:CT102/G/22937/24
Date:2/10/2024
*/
#include <stdio.h>
int main() {
	int age;
	int income;
	
	printf("enter your age");
	scanf("%d", &age);
		   
	// income;
	printf("Enter your annual income (in sh): ");
	scanf("%d", &income);
	
	// check if the customer meets creteria;
	if (age>= 21 && income>= 21000) {
        printf("congrutulations you qualify for loan.\n");
    } else {
        printf("unfortunately, we are unable to offer you loan at this time.\n");
    }
return 0;
}
