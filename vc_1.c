#include<stdio.h>
int main()

{
	char c;
	int lowercase,uppercase;
	printf("enter any character:");
	scanf("%c",&c);
	lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	
	if(uppercase||lowercase){
	printf("this character is vowel");
	}else{
	printf("this character is constonant");
	}
	return 0;
	}
	