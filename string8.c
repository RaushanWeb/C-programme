/*Removing first substring in string*/
#include<stdio.h>
void removeFirst(char *a,char *b)
{
	int i,j = 0;
	for(i = 0;a[i]!='\0';i++)
	{
		if(a[i] == b[j])
		{
			j++;
		}
		else if(a[i] == b[0])
		{
			j = 1;
		}
		else 
		{
			j =0;
		}
		if(b[j] == '\0') 
		{
			i = i+1-j;
			for(i;a[i] = a[i+j];i++);
		}
	}
}
int main()
{
	char s[] = "HEELLOPOLLO";
	char b[] = "LOPO";
	removeFirst(s,b);
	printf("%s",s);
}
	
