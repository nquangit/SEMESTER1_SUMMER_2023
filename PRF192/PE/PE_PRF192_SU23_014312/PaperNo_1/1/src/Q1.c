#include <stdio.h>
#include <stdlib.h>
int findMaxNumber(int a, int b, int c){
   //Write your statements here
   if (a > b && a > c) {
   	return a;
   } else if (b > c) {
   	return b;
   } else {
   	return c;
   }
   //End your statements   
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main()
{
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int a, b, c;
	int max;
	printf("Enter a = "); scanf("%d",&a);
	printf("Enter b = "); scanf("%d",&b);
	printf("Enter c = "); scanf("%d",&c);      
	printf("\nOUTPUT:\n");
	max = findMaxNumber(a,b,c);
	printf("%d",max); 
	printf("\n");
	system ("pause");
	return(0);  
}
//==================================================================================
