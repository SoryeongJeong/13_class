#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "keywords.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_whitespace(char c)
{
	if(c==' ' ||
		c=='\n'||
		c=='\r'||
		c=='\t'||
		c=='\(' ) 
		
	{
		return 1;
	}
	
	return 0;
}
int fget_word(FILE*fp, char *word)
{
	char c;
	int cnt;
	
	while ((c = fgetc(fp)) != EOF)
	{
		if (is_whitespace(c) ==0)
			break;
	}
	// 공백 글자 끝
	
	if (c==EOF) //fail
	{
		return 0;
	 } 
	


	cnt = 0;  //prepare to read word
	word[cnt++] = c;
	word[cnt] = '\0';
	
	while((word[cnt] = fgetc(fp)) != EOF)
	{
		if (is_whitespace(word[cnt]) ==1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt ++;
	}
	
	return cnt;
	
	
}


int main(void) {
	
	
	
	FILE *fp; 
	char filepath[100];
	char word[100];
	
	//file open	
	printf("input the file path : ");
	scanf("%s", filepath);
	fp = fopen(filepath, "r"); 
	
	//방어 code // 오류 나면 바로 끝낼 수 있도록 한다 
	if (fp == NULL)
	{
		printf("file path is wrong! %s\n", filepath);
		return -1;
	 } 
	 
	
	// word readint & anlaysis
	
	while (fget_word(fp,word) !=0)
	{
		count_word(word);
	}
	
	//output
	
	print_word();
	fclose(fp);
	
	return 0;
}
