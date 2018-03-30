#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h> 
#include <time.h>

int main()
{
	system("color f0");
	
	int i_all,i_round,len_c,len_k;  //声明计数符和长度测试 
	//char temporary; //声明临时存储器 （不必要） 
	char key[1000],ciphertext[1000],plaintext[1000];  //声明明文，密钥和密文存储的变量名 
	
	printf ("Please input the key (lowercase): ");  //让用户输入密钥 
	scanf ("%s",&key);
	//printf("%s\n",key);   //对密钥的测试 
	
	printf ("\nPlease input the ciphertext without any space or punctuation (lowercase): \n");  //让用户输入密文 
	scanf ("%s",&ciphertext);
	//printf("%s\n",ciphertext);  //对密文的测试 
	
	len_c = strlen(ciphertext);  //统计密文和密钥的长度 
	len_k = strlen(key);
	
	i_all = 0;
	while(i_all < len_c)  //开始解密 
	{
		i_round = 0;
		for(i_round = 0 ; i_round < len_k ; i_round++)
		{
			plaintext[i_all] = ciphertext[i_all] - key[i_round] + 'a';  //计算明文的值
			
			if (plaintext[i_all] < 'a')  //防止出现异常符号 
			{
				plaintext[i_all] = plaintext[i_all] + 26;
			}
			
			i_all = i_all + 1;
			
			if (i_all == len_c)  //计算完后快速停止 
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
