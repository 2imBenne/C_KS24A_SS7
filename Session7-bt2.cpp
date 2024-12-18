#include <stdio.h>

int main(){
	int arrayInt[5];
	for(int i= 0;i < 5;i++){
		printf("Moi nhap vao phan tu thu %d: ", i+1);
		scanf("%d",&arrayInt[i]); 
	} 
		for(int j = 0; j<5;j++){
			printf("%d ",arrayInt[j]); 
		} 	
	return 0; 
}
 

