#include <stdio.h>
#include <stdlib.h>

//-----------------------------------------------
void resetElements(int a[],int *pn,int x){
	//Begin your statements here
    for (int *i = a; i < a + *pn; i++) {
    	if (*i == x) {
    		*i = 0;
		}
	}
   	//End your statements
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void input(int a[],int* pn){
	printf("n=");
	scanf("%d",pn);
	int i;
	printf("Array:\n");
	for(i=0;i<*pn;i++)
		scanf("%d",&a[i]);
}
//DO NOT ADD NEW OR CHANGE STATEMENTS IN THIS FUNCTION
void output(int a[],int* pn){
	int i;
	for(i=0;i<*pn;i++)
		printf("%-5d",a[i]);
}
//==========DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main(){
  	system("cls");
  	printf("\nTEST Q3 (2 marks):\n");
  	int a[100],n,x;
  	input(a,&n);
  	printf("Enter x = ");
  	scanf("%d",&x);
  	printf("OUTPUT:\n");
  	resetElements(a,&n,x);
  	output(a,&n);
  	printf("\n");
  	system("pause");
  	return 0;
  	
}
//===========================================================================
