/*The code shows how many byte the data type covers in memory */
#include<stdio.h>

int main(){
	printf("Size of char is %d byte\n" , sizeof(char));
	printf("Size of int is %d byte\n" , sizeof(int));
	printf("Size of short int is %d byte\n" , sizeof(short int));
	printf("Size of long int is %d byte\n" , sizeof(long int));
	printf("Size of float is %d byte\n" , sizeof(float));
	printf("Size of double is %d byte\n" , sizeof(double));    
	return 0; 
}
