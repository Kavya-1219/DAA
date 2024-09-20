#include<stdio.h>
int main(){
	int n,rev,sum=0;
	printf("enter a number:");
	scanf("%d",n);
	int original=n;
	while(original!=0){
	rev=n%10;
	sum+=rev*rev*rev;
	n/=10;
	}
	
	if(original==sum){
		printf("%d is armstrong num",n);
	}
	else{
		printf("%d is not armstrong num",n);
	}
	return 0;
}
