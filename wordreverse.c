/*Reverse the word of String without using string function*/
#include<stdio.h>
int length(char *a)
{
	int i;
	for(i = 0;a[i];i++);
	return i;
}
char *Reverse(char *a)
{
	int i,j;
	char t;
	for(i = 0,j = length(a)-1;i<j;i++,j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	return a;
}
char *wordReverse(char *s)
{
	int i,j,k;
	char temp;
	for(i = 0,j = 0,k = 0;s[i];i++)
	{
		if(s[i] ==' '||s[i+1] =='\0')
		{		
			for(k=(s[i]==' '?i-1:i);j<k;j++,k--)
			{
				temp = s[j];
				s[j] = s[k];
				s[k] = temp;
			}
			j = i+1;
		}
	}
	return s;
}
int main()
{
	char str[] = "how are you";
	printf("%s",wordReverse(Reverse(str)));
}
