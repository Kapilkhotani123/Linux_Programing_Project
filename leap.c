#include<stdio.h>
int main(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);

	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				printf("Year is a leap year.");
			}
			else {
				printf("Year is not a leap year.");
			}
		}
		else{
			printf("Year is a leap year.");
		}
}
else {
	printf("Year is not a leap year.");
}
return 0;
}
