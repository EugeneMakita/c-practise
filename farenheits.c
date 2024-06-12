#include<stdio.h>

int main(){
	int celcious, farenhets;
	int step, lower, upper;
	step = 20;
	lower = 0;
	upper =300;
	celcious = lower;
	while(celcious <= upper){
		farenhets= (celcious - 32)*5/9;
		printf("%d %d\n",celcious, farenhets);
		celcious += step;
	}

	return 0;
}
