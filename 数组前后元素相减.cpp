//编程题：有n个整数，使其前面各数顺序向后移m个位置，
//最后m个数变成最前面的m个数。
#include<stdio.h>
#include<stdlib.h>
int putstr(char *num, int size);
int MOVE(char *num,int size);
int swap(char *a,char *b);
int main()
{
	printf("moving the number!!\n");
	int m, n;
	printf("putinto m & n\n");
	scanf("%d %d", &m, &n);
	char *num;
	num=(char*)malloc(sizeof(int)*n);
	putstr(num,n);
	for(int j=0; j<m;j++)
	MOVE(num,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",num[i]); 
	}
	return 0;
 } 
int putstr(char *num, int size)
{
	printf("ples putinto %d number!\n",size);
	for(int i=0; i<size; i++)
	scanf("%d",num+i);
	return 0;
} 
int MOVE(char *num,int size)
{
	int i;
	for(i=size-1;i>0;i--)
	{
			swap(num+i,num+i-1);
	
	}
	return 0;
}
int swap(char *a,char *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return 0;
}

