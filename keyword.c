#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 30
#include "keywords.h"

struct keytab{
	int nums;		//��� ������
	char name[MAX_NAME];
	
};

struct keytab keywrds[13] = {

	{0,"int"},
	{0, "float"	},
	{0, "return"},
	{0, "if"},
	{0, "for"},
	{0, "while"},
	{0,"goto"},
	{0,"switch"},
	{0, "case"},
	{0,"void"},
	{0,"default"},
	{0, "char"},
	{0,"do"}
};
		//���� ���....... �ڷ����� �����ִ� ����ü 

void count_word(char *word)
{
	int i;
	
	//�� keyword ���� 
	for (i=0;i<13;i++) 
	{
		//	if (word�� u��° keyword�� ������
		if(strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0)  //ncmp : M���� ���ڰ� ������ n�������� ��, strncmp ==0 : ����
			{
				//nums++;
				keywrds[i]. nums++;
			 } 
	}
}

void print_word()
{
 	
	//i��° keyword�� ���ؼ�
	//printf((Ű���� �̸� : �󵵼�);
	int i;
		for (i=0;i<13;i++) 
	{
		
		printf("%s : %i\n", keywrds[i].name, keywrds[i].nums);
	}
	 
}
