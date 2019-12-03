#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 30
#include "keywords.h"

struct keytab{
	int nums;		//몇번 나오냐
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
		//와플 찍기....... 자료형이 위에있는 구조체 

void count_word(char *word)
{
	int i;
	
	//각 keyword 별로 
	for (i=0;i<13;i++) 
	{
		//	if (word랑 u번째 keyword랑 같으면
		if(strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0)  //ncmp : M개의 문자가 있으면 n개까지만 비교, strncmp ==0 : 같음
			{
				//nums++;
				keywrds[i]. nums++;
			 } 
	}
}

void print_word()
{
 	
	//i번째 keyword에 대해서
	//printf((키워드 이름 : 빈도수);
	int i;
		for (i=0;i<13;i++) 
	{
		
		printf("%s : %i\n", keywrds[i].name, keywrds[i].nums);
	}
	 
}
