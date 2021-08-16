#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n,i,ind1;
	unsigned long long max1 = 0, max2 = 0;
	scanf("%d", &n);
	unsigned long long numbers[n];
	
	for(i=0; i<n; i++){
		scanf("%llu", &numbers[i]);
	}
	
	for(i=1; i<n; i++){
		if(max1 < numbers[i]){
			max1 = numbers[i];
			ind1 = i;
		}
	}
	
	for(i=0; i<n; i++){
		if((max2 < numbers[i]) && (ind1 != i)){
			max2 = numbers[i];
		}
	}
	
	printf("%llu", max1*max2);

	return 0;
}
