#include <stdio.h>


int main(){
	int c,i,nw, nothers;
	int numbers[10];

	nw= nothers=0;

	for(i=0; i< 10; i++){
		numbers[i]=0;
	}

	while((c=getchar())!=EOF){
		if(c>='0' && c <='9'){
			++numbers[c-'0'];
			continue;
		}

		if (c=='\n' || c==' ' || c=='\t'){
			++nw;
			continue;
		}

		++nothers;
	}

	printf("digits=");
	for(i=0;i<10;i++){
		printf("%d ",numbers[i]);
	}

	printf(" white space=%d, nothers=%d", nw, nothers);

	return 0;
}
