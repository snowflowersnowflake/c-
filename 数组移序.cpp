//����⣺��n����Χ��һȦ��˳���źš�
//�ӵ�һ���˿�ʼ��������1��3��������
//������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
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
