#include <stdio.h>
int main (){
	int CustomerID;
	char customerName;
	float Charges, UnitConsumed, totalBills;
	
	printf("Enter customerID");
	scanf("%d",&CustomerID)
	
	;printf("Enter customerName");
	scanf("%s", &customerName);
	
	printf("Enter umitConsumed");
	scanf("%f", &UnitConsumed);
	
	
if(UnitConsumed <= 199){
		Charges=1.20;
		printf("Enter Charges is %f\n" ,Charges);
		totalBills= Charges*UnitConsumed;
		printf("totalBills is %f\n", totalBills);
	}		printf("Enter Charges is %f\n" ,Charges);
	
;if(UnitConsumed<=399){
			Charges=1.5;
			printf("Enter Charges is %f\n" ,Charges);
			totalBills= Charges*UnitConsumed;
			printf("totalBills is %f\n", totalBills);
}

else if (UnitConsumed<=599) {
			Charges=1.8
			;printf("Enter Charges is %f\n" ,Charges);
			totalBills=Charges*UnitConsumed;
			printf("totalBills is %f\n", totalBills);
}
else{
	Charges=2.00
	;printf("Enter Charges is %f\n" ,Charges);
	totalBills= Charges*UnitConsumed;
		printf("totalBills is %f\n", totalBills);	
}
	
	if(totalBills<100) {
		printf("Minimum bill should be 1oo")
	;}
	return 0;
}		

		
		