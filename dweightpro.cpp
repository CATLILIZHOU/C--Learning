#define _CRT_SECURE_NO_WARNINGS //忽略安全检测，不然使用scanf会报错
#include <stdio.h>       //包含了C语言输出库或输入库的相关信息
int main(void)        //代表主程序
{
	int height, lenghth, width, volume, weight;

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter lenghth of box: ");
	scanf("%d", &lenghth);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height * lenghth * width;
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}


