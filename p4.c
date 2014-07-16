#include<stdio.h>

#define MAX 998001
#define MIN 900000

int isPalindrome(int a)
{
	int arr[100];
	while(a)
	{
		 
	}
}

int main(int argc, char const *argv[])
{
	int i,pal=0;
	for(i=MIN;i<MAX;i++)
	{
		if(isPalindrome(i))
		{
			pal = i;
		}
	}
	printf("%d\n",pal);
	return 0;
}