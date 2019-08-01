// 2.cpp : Defines the entry point for the console application.
//

#include<conio.h>
#include<stdio.h>
#include<iostream>

class Bil
{
	private:
		int *m;	
	public:
		int Search(int *m, int n);
		int Sorting(int *m, int n);
};

int Bil::Sorting(int *m, int n)
{   
    int var, i, j;
    for(i=0;i<n-1;++i)
	{            
		for(j=0;j<n-1;++j) 
		{     
			if (m[j+1]<m[j]){
				var=m[j+1]; 
				m[j+1]=m[j]; 
				m[j]=var;}
		}
	}
	printf("\nSorted array:");
	for (int i=0; i<n; i++)
		printf("%d ",m[i]);
	return 0;
}

int Bil::Search(int *m, int n)
{	int smnm=0;
	int bul=1;
	printf("\nEnter the required value:");
	scanf("%dn/",&bul);
	for (int i=0; i<n; i++)
	{
		if(m[i]==bul)
		smnm++;
	}
	printf("\nIs this value present  in the array?\n");
	if(smnm!=0)
	{
		printf("Yes,master \n");
		printf("\nNumber of repetitions:%d", smnm);
	}
	else
		printf("No,master \n");

	return 0;
}

int main()
{
	Bil buh;	
	int n;
	printf("Enter the number of elements to the array:");
	scanf("%dn/",&n);		
	int *mas;
	mas = new int[n];	
	for (int i=0; i<n; i++){
		printf("Enter array's element N_%d:",i);
		scanf("%dn/",&mas[i]);}	
	printf("\nArray elements are:");
	for (int i=0; i<n; i++)
		printf("%d ",mas[i]);
	buh.Sorting(mas,n);
	buh.Search(mas,n);
	_getch();
	return 0;
}


