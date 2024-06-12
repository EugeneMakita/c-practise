#include <stdio.h>

int main(){
	int farh;
	for(int celcious =0 ;celcious <=300; celcious+=20){
		farh = (5*(celcious-32)) /9;
		printf("%d %d\n", celcious, farh);
	}
	return 0;
}
