#include <stdio.h>

#define LOWER 3800
#define UPPER 4000
#define STEP 20

int main(){
	float  fahr;
	for(int celc = 0; celc <=UPPER; celc+=STEP){
		fahr = (5*(celc -32))/9.0;
		printf("%d %.4f\n", celc, fahr);
	}
	return 0;
}
