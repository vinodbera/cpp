#include <stdio.h>
int main() {
	int T;
	scanf("%d",&T);
	int i;
	for (i=0;i<T;i++){
		long long A, B;
		scanf("%lld %lld \n", &A,&B);
		if (A==B){
			printf("=\n");
		}
		if (A>B) {
			printf(">\n");
		}
		if (A<B){
			printf("<\n");
		}
	}
    return 0;
}