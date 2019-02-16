//定义一个函数char * fun(char * s),
//判断一个字符串s是否是回文，当字符串是回文时，
//函数返回字符串：yes!，否则函数返回字符串：no!。
//所谓回文即正向与反向的拼写都一样，例如：adgda。
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLINE 1000
char* judge(char *str);
int rever(char *str,int len);
int main() {
	char str[MAXLINE];
	char result[MAXLINE];
	gets(str);
    strcpy(result,judge(str));
	puts(result);
	return 0;
}
char* judge(char *str) {
	static char yes[]="yes!";
	static char no[]="no!";
	char *a=(char *)malloc((strlen(str)+1)*sizeof(char));
	char *b=(char *)malloc( (strlen(strcpy(a,str))+1)*sizeof(char) );
	strcpy(b,a);
	rever(a,strlen(a));
	int result =strcmp(a,b);
	if(result==0)
		return yes;
	else
		return no;
}
int rever(char *str,int len) {
	char *p1=str;
	char *p2=str+len-1;
	int temp;
	for(; p1<p2; p1++,p2--)
	{
		temp=*p1;
	*p1=*p2;
	*p2=temp;}
	return 0;
}

