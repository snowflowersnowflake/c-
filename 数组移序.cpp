//编程题：有n个人围成一圈，顺序排号。
//从第一个人开始报数（从1到3报数），
//凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
#include<stdio.h>
#include<stdlib.h>
int PAUSE(char *num,int lim);
int CALL(char *num,int lim,int *i);
int main() {
	int n,count;
	char *num;
	printf("ples putinto n\n");
	scanf("%d",&n);
	num=(char*)(malloc(sizeof(int)*n));
	for(int i=0; i<n; i++)
		num[i]=i+1;
	int i=;
	while(PAUSE(num,n)) {

		count=3;
		while(count!=0) {
			CALL(num,n,&i);
			count--;
		}
		num[i]=NULL;

	}
	for(int i=0; i<n; i++)
		printf("%d",num[i]);
	return 0;
}
int PAUSE(char *num,int lim) {
	int sum=lim;
	for(int i=0; i<lim; i++)
		if(num[i]==0)
			sum--;
	if(sum==1)
		return 0;
	else
		return 1;
}
int CALL(char *num,int n,int *i) {
	while(num[*i]==0)
		(*i)++;
	if(*i==n)
		*i=0;
	(*i)++;
	if(*i==n)
		*i=0;
	return 0;
}
