//program to calculate library program
/*Author:Linus
Reg No:CT102/G/22937/24
Date:1/10/2024
*/
#include <stdio.h>
int main () {
	int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
	
	printf("Enter bookID");
	scanf("%d", &bookID);
	printf("Enter DueDate");
	scanf("%d", &dueDate);
	printf("Enter returnDate");
	scanf("%d", &returnDate);
	
// Calculate overdue days
    printf("daysOverdue is %d \n", daysOverdue);


 // Determine the fine based on the number of overdue days
        if(daysOverdue<= 7){
            fineRate=20; 
            printf("fineRate is %d \n", fineRate);
            fineAmount=fineRate*daysOverdue;
		}
   else if(daysOverdue <= 14){
            fineRate = 50;  
            printf("fineRate is %d \n", fineRate);
            fineAmount=fineRate*daysOverdue;
        } else {
            fineRate = 100; 
            printf("fineRate is %d \n", fineRate);
            fineAmount=fineRate*daysOverdue;
        }

	return 0;
	}
	
