#include<stdio.h>
int main(){
	int n,sum=0,a,b;

	printf("Enter the number : ");
	scanf("%d",n);

	for(int i=1;i<=n;i++){
	 sum = 2*i;
	}
	printf("The result is : %d",sum);
	return 0;
}
