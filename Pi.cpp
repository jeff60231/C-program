// 20140310-2.cpp : 定義主控台應用程式的進入點。
//


#include <stdio.h>

int main(){


	int i;
	int times;
	double denominator;
	double tempAnswer = 2.0/3 ;
	double Pi ;


printf("enter how many times you want to calculate");
scanf("%d" , &times);

for(i = 2 ; i <= times ; i++){
	if((i % 2) == 0)
	{
	denominator = 1 + 4 * (i / 2);
	}
	else
	{
	denominator = -3 - 4 * (int)(i / 2) ; 
	}

	tempAnswer = tempAnswer + (1 / denominator);
	Pi = 4 * tempAnswer ;
	
	if( (int)(Pi * 100) == 314 ){
	printf("When we calculate %d times , we will get 3.14\t\n", i);
	break;
	}
}
	i = 0 ;
	denominator = 0;
	tempAnswer = 2.0/3 ;
	Pi  = 0;
for(i = 2 ; i <= times ; i++){
	if((i % 2) == 0)
	{
	denominator = 1 + 4 * (i / 2);
	}
	else
	{
	denominator = -3 - 4 * (int)(i / 2) ; 
	}

	tempAnswer = tempAnswer + (1 / denominator);
	Pi = 4 * tempAnswer ;
	
	if( (int)(Pi * 1000) == 3141){
	printf("When we calculate %d times , we will get 3.141\t\n", i);
	break;
	}
}
	i = 0 ;
	denominator = 0;
	tempAnswer = 2.0/3 ;
	Pi  = 0;
for(i = 2 ; i <= times ; i++){
	if((i % 2) == 0)
	{
	denominator = 1 + 4 * (i / 2);
	}
	else
	{
	denominator = -3 - 4 * (int)(i / 2) ; 
	}

	tempAnswer = tempAnswer + (1 / denominator);
	Pi = 4 * tempAnswer ;
	
	if( (int)(Pi * 10000) == 31415){
	
	printf("When we calculate %d times , we will get 3.1415\t\n", i);
	break;
	}
}	
	i = 0 ;
	denominator = 0;
	tempAnswer = 2.0/3 ;
	Pi  = 0;
for(i = 2 ; i <= times ; i++){
	if((i % 2) == 0)
	{
	denominator = 1 + 4 * (i / 2);
	}
	else
	{
	denominator = -3 - 4 * (int)(i / 2) ; 
	}

	tempAnswer = tempAnswer + (1 / denominator);
	Pi = 4 * tempAnswer ;
	
	if( (int)(Pi * 100000) == 314159){
	
	printf("When we calculate %d times , we will get 3.14159\t\n", i);
	break;
	}
}

	
	
}

