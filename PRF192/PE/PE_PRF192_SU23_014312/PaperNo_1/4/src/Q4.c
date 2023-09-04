#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101
char* lTrim(char* s);
char* rTrim(char* s);
char* trim(char* s);

//----------------------------------------
void printReverseString(char* inStr){	
	//Begin your statements here
	inStr = strlwr(inStr);
	inStr = strrev(inStr);
	printf("%s", inStr);
	//End your statements here
}

//===============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION===========
int main() {
 
  char s[MAX_SIZE];  
  system("cls");
  printf("\nTEST Q4 (3 marks):\n");
  printf("\nEnter a string:");
  scanf("%100[^\n]",s); 
  trim(s);      
  //=====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE=====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM== 
  printf("\nOUTPUT:\n");
  printReverseString(s);	
  printf("\n");
  system ("pause");
  return(0);
}
//=== Do not add new or change statements in this function.===
char* lTrim(char* s) {
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
//=== Do not add new or change statements in this function.===
char* rTrim(char* s) {
	int i = strlen(s)-1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}
//=== Do not add new or change statements in this function.===
char* trim(char* s) {
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL) {
		strcpy(ptr, ptr+1);
		ptr = strstr(s, "  ");
	}
	return s;
}
