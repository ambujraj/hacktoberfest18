#include<stdio.h>
 
int main(){
	int st1[8]={2,4,7,4,8,5,5,2},st2[8]={3,2,7,5,2,4,1,1},st3[8]={2,4,4,1,5,1,2,4},st4[8]={3,2,5,4,3,2,1,3};
	int i,st1f,st2f,st3f,st4f;
/*	printf("Enter  st1: ");
	for(i=0;i<8;i++)
		scanf("%d",&st3[i]);
*/
	printf("ST1 : ");
	for(i=0;i<8;i++){
			printf("%d ",st1[i]);
	}
	printf("\nST2 : ");
		for(i=0;i<8;i++){
			printf("%d ",st1[i]);
	}
	printf("\nST3 : ");
		for(i=0;i<8;i++){
			printf("%d ",st1[i]);
	}
	printf("\nST4 : ");
		for(i=0;i<8;i++){
			printf("%d ",st1[i]);
	}
	printf("\nEnter fitness functions of st1, st2, st3 and st4 : ");
	scanf("%d%d%d%d",&st1f,&st2f,&st3f,&st4f);
	printf("Fitness function :\n st1=%d\t st2=%d\t st3=%d\t st4=%d ",st1f,st2f,st3f,st4f);
	
	return 0;
	
}
