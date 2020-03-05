/*wap to remove last occurance of substring in string*/
#include<stdio.h>
void lastRemove(char *a,char *b)
{
	int index = -1;
	int i,j = 0,len;
	for(i = 0;a[i];i++)
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
			j = 0;
		}
		if(b[j] =='\0')
		{
			index = i+1-j;
			len = j;
			j = 0;
		}
	}
	if(index != -1)
	{
		printf("%d\n",len);
		for(index;a[index] = a[index+len];index++);
	}
}
int main()
{
	char a[] = "I AM raushan tiwari";
	char b[] = "raushan";
	lastRemove(a,b);
	printf("%s",a);
}
	
	
