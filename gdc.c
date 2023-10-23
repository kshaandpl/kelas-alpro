#include <stdio.h>
int main() {
	int m,n,r;
	printf("Masukan nilai M : ");
	scanf("%d",&m);
	printf("Masukan nilai N : ");
	scanf("%d",&n);
	while (n != 0) {
		r = m%n;
		m=n;
		n=r;
	}
	printf("Nilai GCD nya adalah : %d\n",m);
}
