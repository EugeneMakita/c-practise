#include <stdio.h>

int main(){
	int c, nl;
	while((c=getchar())!=EOF){ 
		if (c=='\n'){
			++nl;
		}
	}

	printf("There are %d number of lines", nl);
	return 0;
}
