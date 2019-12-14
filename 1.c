#include <stdio.h>
#include <math.h>
char a[100];
int m[10],n[10],N[10];
int main(){
	int i,r,j,k=0;
	printf("\nplayer X:\n");
	scanf("%d",&n[k]);
	if(n[k]>=1 && n[k]<=9){
	for(i=1;i<=9;i++){
		if(i==n[k]){
		a[i]='X';
		}
		else
		a[i]=' ';
	}
	for(i=1;i<=9;i++){
		r=i%3;
		if(r!=0){
			printf("%c |",a[i]);	
		}
		else
		printf("%c\n",a[i]);
	}
	}
	else return 0;
	return 0;
	}

