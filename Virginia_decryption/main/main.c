#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h> 
#include <time.h>

int main()
{
	system("color f0");
	
	int i_all,i_round,len_c,len_k;  //�����������ͳ��Ȳ��� 
	//char temporary; //������ʱ�洢�� ������Ҫ�� 
	char key[1000],ciphertext[1000],plaintext[1000];  //�������ģ���Կ�����Ĵ洢�ı����� 
	
	printf ("Please input the key (lowercase): ");  //���û�������Կ 
	scanf ("%s",&key);
	//printf("%s\n",key);   //����Կ�Ĳ��� 
	
	printf ("\nPlease input the ciphertext without any space or punctuation (lowercase): \n");  //���û��������� 
	scanf ("%s",&ciphertext);
	//printf("%s\n",ciphertext);  //�����ĵĲ��� 
	
	len_c = strlen(ciphertext);  //ͳ�����ĺ���Կ�ĳ��� 
	len_k = strlen(key);
	
	i_all = 0;
	while(i_all < len_c)  //��ʼ���� 
	{
		i_round = 0;
		for(i_round = 0 ; i_round < len_k ; i_round++)
		{
			plaintext[i_all] = ciphertext[i_all] - key[i_round] + 'a';  //�������ĵ�ֵ
			
			if (plaintext[i_all] < 'a')  //��ֹ�����쳣���� 
			{
				plaintext[i_all] = plaintext[i_all] + 26;
			}
			
			i_all = i_all + 1;
			
			if (i_all == len_c)  //����������ֹͣ 
			{
				break;
			}
		}
	}
	
	printf("\nThe plaintext is '%s'\n",plaintext);
	
	Sleep(2000);
	system("pause");
	return 0;
}
