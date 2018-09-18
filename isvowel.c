#include <stdio.h>

void  main() 
{
	char c;
	printf("Input: ");
	scanf("%c",&c);
	printf("Output\n");
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	 printf("Vowel");
	else if(c=='#'||c=='@'||c=='&'||c=='$'||c=='!'||c=='|'||c=='+'||c=='='||c=='_'||c=='-'||c==')'||c=='('||c=='*'||c=='^'||c=='?')
	 printf("invalid");
	else
	 printf("Consonant");
	
}
	

