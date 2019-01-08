#include <stdio.h>
int main()
{
	int i=0,j=0,k=0;
	printf("\n");
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			for (k=1;k<5;k++)
//	{
		if(i!=k&&i!=j&&j!=k)
		printf("%d%d%d\n",i,j,k);
//	}
}

