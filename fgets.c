#include <stdio.h>
#define N 64
int main(int argc, char * argv[])
{
	FILE * fp;
	char buf[N] = {0};
	if((fp = fopen("test.txt","r")) == NULL){
		perror("fail to fopen");
		return -1;
	}

	if(fgets(buf,N,fp) != NULL){
		printf("buf = %s\n",buf);
	}
	return 0;
}
