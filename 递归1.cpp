#include <stdio.h>
int getPeachNumber(int n)
{   
    if(n==1)
     num=1;
	  //???????
    if(n==10)
    {
            //??????
    } 
    else
    {
        num = (num+1)*2; 
        getPeachNumber(n+1);
        //???????????
        printf("第%d天所剩桃子%d个\n", 10-n, num); //??,??????
    }
    return num;
}
int main()
{  
    int num = getPeachNumber(1);
    printf("猴子第一天摘了:%d个桃子。\n", num);
    return 0;
}
