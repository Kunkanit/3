#include<stdio.h>
int main() {
	float C, c, F, f,lak;
	printf("Temperature Conversion\n");
	printf("Press '1' if you to change Celsius to Fahrenheit\n");
	printf("Press '2' if you to change Fahrenheit to Celsius \n");
	printf("What do you want ? :");
	scanf_s("%f", &lak);
	if (lak==1) {
		printf("Celsius :");
		scanf_s("%f", &C);
		printf("Fahrenheit : %.2f", f = (1.8)*C+32);

	}else if(lak==2){
		printf("Fahrenheit :");
		scanf_s("%f", &F);
		printf("Celsius : %.2f", c =((F-32)/180)*100);

	}
	else {
		printf("You enter wrong number");
	}

	return 0;
}