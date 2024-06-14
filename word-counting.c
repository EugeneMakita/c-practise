#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

int main(){

	int c, nl, nw, nc,  state;
	state = OUTSIDE;
	nl=nw=nc=0;

	while((c=getchar())!=EOF){
		++nc;

		if (c=='\n'){
			++nl;
		}

		if (c=='\t' || c==' ' || c=='\n'){
			state=OUTSIDE;
		}

		if (state == OUTSIDE){
			if (c!='\t' || c!=' ' || c!='\n'){
				state=INSIDE;
				++nw;
			}
		}
	}

	printf("\n%d, %d, %d",  nl , nw, nc);

	return 0;
}

