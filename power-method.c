#include <stdio.h>

int power(int base, int power){
	int pow=1;
	for(int i=0;i<power;i++){
		pow = pow * base;
	}

	return pow;
}


int main(){
	int i;
	for(i=1;i<10;i++){
		printf("%d, %d, %d\n",i, power(2,i), power(-3,i));
	}
	return 0;
}
