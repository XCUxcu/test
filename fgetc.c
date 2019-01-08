#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;

	if(argc != 2){
	printf("Usage: %s + filename\n", argv[0]);
	}
	if((fp = fopen(argv[1], "r")) == NULL){
		perror("fail to fopen");
		return -1;
	}
	int ch;
	if((ch = fgetc(fp)) != EOF){
	printf("ch = %c\n", ch);
	}
	return 0;
}

