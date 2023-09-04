#include <stdio.h>
#include <stdlib.h>
//------------------------------
long sum(int n){  
  //Write your statements here 
  long s = 0;
  for (int i = 1; i <= n; i++) {
  	s += (i * i);
  }
  return s;
  //End your statements
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main()
{  
   system("cls");
   printf("\nTEST Q2 (3 marks):\n");
   int i, n;
   long s;   
   printf("\nEnter n: ");
   scanf("%d", &n);   
   printf("\nOUTPUT:\n");
   s = sum(n);    
   printf("%ld\n", s); 
   printf("\n");
   system ("pause");
   return(0);
}
//==========================================================================
