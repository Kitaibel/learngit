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
//��д������ʹ���ܽ���ά���飨5*3���е����ݽ������л��������ο�����ԭ�ͣ�void tran(int array[5][3], int out_array[3][5]))
//���������ʽҪ��
//	out_array�����ڱ������н���֮��Ľ��������
//	�����쳣������error������Ϊnull)
//	
//���磺
//array[5][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}}
//����tran����֮��
//out_array[3][5] = {{1,4,7,10,13},{2 5 8 11 14},{3 6 9 12 15}}
