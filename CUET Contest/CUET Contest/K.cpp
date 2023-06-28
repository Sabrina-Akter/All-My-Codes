#include<stdio.h>
#include<math.h>
#include<string.h>
int prime[100000001];
int prefix[100000001];

void SieveOfEratosthenes(int n){
	int p,j;
	
	// set all elements of prime[] to 1
	for(j=0;j<=n;++j)
		prime[j] = 1;
	
	prime[1] = 0; // 1 is not prime
	for(p=2;p<=sqrt(n);++p){
		for(j=p*p;j<=n;j+=p){
			prime[j] = 0;
		}
	}
}

int main() {
	int i;
	int l,r;
		
	SieveOfEratosthenes(100000000);  // sieve of Eratosthenes up to 100000 numbers
	
	printf("Enter Lower Limit, L: ");
	scanf("%d",&l);
	printf("Enter Upper Limit, R: ");
	scanf("%d",&r);
	
	// creating prefix array of prime
	for(i=2;i<=100000;++i){
		prefix[i] = prime[i] + prefix[i-1];
	}
	
	printf("Number of Prime numbers between %d and %d are: %d\n",l,r,prefix[r]-prefix[l-1]);
	
}