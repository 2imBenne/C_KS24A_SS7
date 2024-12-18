#include <stdio.h>

int main(){
	int arrayInt[5];
	int even = 0; 
	for(int i= 0;i < 5;i++){
		printf("Moi nhap vao phan tu thu %d: ", i+1);
		scanf("%d",&arrayInt[i]); 
	} 
		for(int j = 0; j<5;j++){
			if(arrayInt[j] %2 == 0){
			printf("%d ",arrayInt[j]);
			even =1; 
		}
		} 
				if(!even){
				printf("Mang khong chua so chan "); 
			} 	
	return 0; 
}
 

