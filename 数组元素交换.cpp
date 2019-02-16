//编程题：输入数组，最大的与第一个元素交换，
//最小的与最后一个元素交换，输出数组。
#include<stdio.h>
#define MAX 1000
struct num {
	int n;
	int number;
};
int swap(struct num *a,struct num *b);

int main() {

	struct num numtab[MAX];
	int i;
	struct num maxnum,minnum;
	for(i=0;; i++) {
		numtab[i].n=i;
		scanf("%d",&numtab[i].number);
		if(getchar()=='\n')
			break;
	}

	puts("\n");
	const int maxnum_savedata=i;
	const int minnum_savedata=0;
	maxnum.number=minnum.number=numtab[i].number;
	maxnum.n=minnum.n=maxnum_savedata;
	for(; i>0; i--) {

		if(numtab[i-1].number>maxnum.number) {
			maxnum.number=numtab[i-1].number;
			maxnum.n=numtab[i-1].n;
			
		}
		if(numtab[i-1].number<minnum.number){
			
			minnum.number=numtab[i-1].number;
			minnum.n=numtab[i-1].n;
		}
		
	}
	
	swap(&numtab[minnum_savedata],&maxnum);
	swap(&numtab[maxnum_savedata],&minnum);
	for(int j=0; j<maxnum_savedata+1; j++)
		printf("%d ",numtab[j].number);

	return 0;

}
int swap(struct num *a,struct num *b) {

	struct num temp;
	temp.number=a->number;
	temp.n=a->n;
	a->number=b->number;
	a->n=b->n;
	b->number=temp.number;
	b->n=temp.n;
	return 0;
}


