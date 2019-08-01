

#include <conio.h>
#include <stdio.h>
#include <iostream>
//============================================================
class TFactorial	
{
	private:
		unsigned long long  int fact;	
	public:	
		unsigned long long int Get(int n);	
};

unsigned long long int
TFactorial::Get(int n)	
{
    if (n == 0 || n == 1) return 1;
    return n * Get(n - 1);
  	
}

//============================================================
/*Egerde birinshi almaydi
unsigned long long int TFactorial::Get(int n)	
{
	fact=1;
	if (n==0) return fact;	//0!=1
	for (int i=1; i<=n; i++)
		fact*=i;		
	return fact;		
}*/

//============================================================
int main()
{
	int n;
	TFactorial factorial;	 
	printf("Enter the number:");
	scanf("%d",&n);		
	printf("Factorial value:%llu",factorial.Get(n));	
	_getch();
	return 0;
}

