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
        printf("��%d����ʣ����%d��\n", 10-n, num); //??,??????
    }
    return num;
}
int main()
{  
    int num = getPeachNumber(1);
    printf("���ӵ�һ��ժ��:%d�����ӡ�\n", num);
    return 0;
}
