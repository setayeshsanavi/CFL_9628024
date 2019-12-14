#include <stdio.h>
#include <math.h>
char a[100];
int n[10];
int i,r,j,k;
int main(){
	while(k<=8){
	printf("\nplayer X:\n");
	scanf("%d",&n[k]);
	if(n[k]>=1 && n[k]<=9){
	for(i=1;i<=9;i++){
	if(n[k]==n[k-i])
	return 0;
	if(n[k]==i){
	a[i]='X';
	}
	else
	if(n[k-1]==i)
	a[i]='O';
	else
	if(n[k-2]==i)
	a[i]='X';
	else{
	a[i]=' ';
	}
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
	k++;
	printf("\nplayer O:\n");
	scanf("%d",&n[k]);
	if(n[k]==n[k-1])
	return 0;
	if(n[k]>=1 && n[k]<=9){
	for(i=1;i<=9;i++){
			if(i==n[k])
			a[i]='O';
			else
			if(i==n[k-1])
			a[i]='X';
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
	k++;
	}
	return 0;
}
