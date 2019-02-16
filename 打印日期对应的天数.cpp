#include <stdio.h>
#define DAYS1 28
#define DAYS2 29
#define DAYS3 30
#define DAYS4 31
int judge(int year) {
	if(year%4==0) {
		return DAYS2;
	} else {
		return DAYS1;
	}
}
int main() {
	/* 定义需要计算的日期 */
	int year = 2008;
	int month = 8;
	int day =8;
	int sum;
	switch(month) {
		case 1:
			sum=day;
			break;
		case 2:
			sum=DAYS4+day;
			break;
		case 3:
			sum=DAYS4+judge(year)+day;
			break;
		case 4:
			sum=DAYS4+judge(year)+DAYS4+day;
			break;
		case 5:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+day;
			break;
		case 6:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+day;
			break;
		case 7:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+DAYS3+day;
			break;
		case 8:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+DAYS3+DAYS4+day;
			break;
		case 9:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+DAYS3+DAYS4+DAYS4+day;
			break;
		case 10:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+DAYS3+DAYS4+DAYS4+DAYS3+day;
			break;
		case 11:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+DAYS3+DAYS4+DAYS4+DAYS3+DAYS4+day;
			break;
		case 12:
			sum=DAYS4+judge(year)+DAYS4+DAYS3+DAYS4+DAYS3+DAYS4+DAYS4+DAYS3+DAYS4+DAYS3+day;
			break;

			/*
			 * 请使用switch语句，if...else语句完成本题
			 * 如有想看小编思路的，可以点击左侧任务中的“不会了怎么办”
			 * 小编还是希望大家独立完成哦~
			 */


	}
	printf("%d年的%d月%d日是该年的第%d天\n",year,month,day,sum);
	return 0;
}
