#include <stdio.h>
int main()
{
	int a;
	a=10;
	do 
	{
		if (a==15)
		{
			a=a+1;
			continue;
		}
		printf("value of a is:%d\n",a);
        a++;
	}	
    while (a<20);
	return 0;
}
