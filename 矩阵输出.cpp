//输入一个2×3矩阵，并3行2列输出矩阵
#include<stdio.h>
	int main()
	{   int i,j;
	    float s[2][3];
	    printf("please input 6 numbers:\n");
	    for(i=0; i<2;i++)
	         for(j=0;j<3;j++)
	               scanf("%f",&s[i][j]);
		printf("\n the final matrix is:\n");
		for(i=0;i<3;i++)
		{    for(j=0;j<2;j++){
		
	     	printf("%2.0f\t",s[j][i]);
	       }
	       printf("\n");
		}
		return 0;
 	}
