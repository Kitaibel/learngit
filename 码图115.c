#include <stdio.h>

void tran(int array[5][3], int out_array[3][5])
{
	int i,j;
	if(array<=0)
	{
		printf("error");
		return;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			if(array[i][j]==0)
			{
				printf("error");
				return;
			}
		}
	}
	
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			out_array[j][i]=array[i][j];
		}
	}
}

int main(int argc, char *argv[])
{
	
	return 0;
}

//
//编写函数，使其能将二维数组（5*3）中的数据进行行列互换。（参考函数原型：void tran(int array[5][3], int out_array[3][5]))
//输入输出格式要求：
//	out_array是用于保存行列交换之后的结果的数组
//	碰到异常情况输出error（参数为null)
//	
//例如：
//array[5][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}}
//调用tran函数之后
//out_array[3][5] = {{1,4,7,10,13},{2 5 8 11 14},{3 6 9 12 15}}
