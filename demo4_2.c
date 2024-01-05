#include <stdio.h>
int main ()
{
	int i=3;
	int tong=0;
		while(i<=6){
			tong=tong + i;
			if (i==6)
				printf("%d", i);
			else
				printf("%d+", i);
			i=i+1;
		}
		printf("%d", tong);
}
