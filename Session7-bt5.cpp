#include <stdio.h>

int main(){
	int n;
	printf("Moi nhap vao so phan tu mong muon cho mang: ") ;
	scanf("%d",&n) ;
	int arrayInt[n];
	for(int i= 0;i < n;i++){
		printf("Moi nhap vao phan tu thu %d: ", i+1);
		scanf("%d",&arrayInt[i]); 
	} 
		int max= arrayInt[0],min= arrayInt[0]; 
		
		for(int j = 0; j<n;j++){
			if(arrayInt[j]> max){
				max = arrayInt[j]; 
			}
			if(arrayInt[j]< min){
				min = arrayInt[j]; 
			} 
		}
		printf("Phan tu lon nhat trong mang co gia tri la: %d \n",max);
		printf("Phan tu nho nhat trong mang co gia tri la: %d \n",min);
		 	
	return 0; 
}
 

