/*Shifting character 'k' to 2 step right in given string*/
#include<stdio.h>
int main()
{
	int i,k = 2,n = 6;
	char s2[10];
	char s[] = "hacker";
	for(i = 0;i<n;i++)
	{
		s2[(i+k)%n] = s[i];
	}
	s2[n] = '\0';
	printf("%s",s2);
}
	
