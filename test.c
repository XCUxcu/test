#include <stdio.h>
int main(void)
{
	printf("%d %d %d \n",12,0x12,012);
	printf("%s \n","Hello world");
	printf("%d %d %d \n",12,0x12,012);       //整型
	printf("%f\n",3.1415926);                //浮点型
	printf("%e %f\n",314.1593,3.141593e+2);  //指数方式
	printf("%c %d %c \n",'a','a','a'+1);     //字符
	printf("Hellow world\n");                //字符串
	printf("%s\n","Hellow world");           //字符串
	return 0; //
}
