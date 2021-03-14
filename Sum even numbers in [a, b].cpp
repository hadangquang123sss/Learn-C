#include<stdio.h>
int main(){
	int a ;
	int b ;
	long long int sum  = 0 ;
	printf("enter the value of a = " );
	
	scanf("%d",&a);
	printf("enter the value of b = " );
	scanf("%d",&b);
	if(a>b)
	{
		printf("Not in the correct condition of the problem");
		return 0 ;
	}
	for(  int i = a ; i<=b ; i+= 2 )
	{
		if(i % 2 == 0){
    
		sum+=i;
		printf("sum = %d ",sum); 
		}

	
	}

 return 0 ;
}

