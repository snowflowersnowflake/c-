//编程题：输入3个数a,b,c，按大小顺序输出(利用指针方法)
#include<stdio.h>
int max(double *a,double *b,double *c);
int swap(double *a,double *b);
int main() {
	double a,b,c;
	puts("ples input 3 number!\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	max(&a,&b,&c);
	printf("the new 3 number is %.1lf %.1lf %.1lf\n",a,b,c);
	return 0;
}
int max(double *a,double *b,double *c) {
	if(*a<*b)
		swap(a,b);
	if(*b<*c)
		swap(b,c);
	if(*a<*b)
		swap(a,b);
	return 0;
}
int swap(double *a,double *b) {
	double temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return 0;
}
