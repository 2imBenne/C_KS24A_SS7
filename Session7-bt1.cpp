#include <stdio.h>

int main(){
	
	long int arrayInt[]={45,30,22,3,8,6};
	int length = sizeof( arrayInt) / sizeof(arrayInt[0]);
	printf("Cac phan tu trong mang la: "); 
	for (int i=0;i < length;i++){
		printf("%ld ",arrayInt[i]); 
	}
	printf("\n"); 
	
	printf("Do dai cua mang la: %d ",length);
	return 0; 
} 

