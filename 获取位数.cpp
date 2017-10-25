#include<stdio.h>
int main(){
    int n = 123456;
    int unitPlace = n / 1 % 10;
    int tenPlace = n / 10 % 10;
    int hundredPlace = n / 100 % 10;
    int thousandPlace = n / 1000 % 10;
    printf("个位:%d\n十位:%d\n百位:%d\n千位:%d\n", unitPlace, tenPlace, hundredPlace, thousandPlace);
 
    getchar();
    return 0;
}
