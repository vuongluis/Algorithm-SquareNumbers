#include <stdio.h>
#include <conio.h>
int isChinhPhuong(int n);
int main(){
	int n,i;
	printf("Nhap gia tri n: ");
	scanf("%d",&n);
	i = 0;
	do{
		if(isChinhPhuong(i) == 1){
			printf("%d ",i);
		}
		i++;
	}while(i < n);
}
int isChinhPhuong(int n){
	int result = 0;
	if(n >= 0){
		for(int i = 0;i <= n; i++){
			if(i*i == n){
				result = 1;
			}
		}
	}
	return result;
}
