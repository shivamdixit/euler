#include<stdio.h>

int main()
{
	long int sum =0;
	int i,first=1, second =2,next=0;
	for(i=1;next<=4000000;i++)
	{
		next = first + second;
		if(next%2 == 0)
		{
			sum+=next;
		}
		first = second;
		second = next;	
	}
	sum+=2;
	printf("%ld\n",sum);
	return 0;
}