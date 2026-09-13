#include <stdio.h>
#include <math.h>

float median(float r1, float r2){
	float xi=(r1+r2)/2;
	return xi;
}

float xitimesfi(float xi, int freq){
	float xifi=xi*freq;
	return xifi;
} 

int main(){
	int i = 0;
	
	printf("How to use:\n");
	printf("- First space is min range\n");
	printf("- Second space is max range\n");
	printf("- Third space is frequency\n");
	printf("\n");
	printf("Example: '3 6 10' \n");
	printf("\n");
	printf("--------------------------------\n");
	printf("Input amount of entries first\n");
	printf("\n");
	printf("Input how many entries: ");
	
	scanf("%d", &i);
	printf("\n");
	printf("Entries: %d \n", i);
	printf("\n");
	
	int freq[i]; //count is counter
	float r1[i],r2[i]; //R1 = RANGE 1, //R2 = RANGE 2, FREQ = FREQUENCY
	
	for (int j=1;j<=i;j++){
		printf("Entry %d: ", j);
		scanf("%f %f %d", &r1[j], &r2[j], &freq[j]);
//		printf("Debug row %d: r1 = %.2f, r2 = %.2f, freq = %d \n",j, r1[j], r2[j], freq[j]);
//		printf("Debug row %d: r1 = %.2f, r2 = %.2f, freq = %d \n",j-1, r1[j-1], r2[j-1], freq[j-1]);
	}
	
	float xi[i];
	float xifi[i];
	
	printf("\n");
	
	for (int j=1;j<=i;j++){
		printf("Row %d: r1 = %.2f, r2 = %.2f, freq = %d \n",j, r1[j], r2[j], freq[j]);
		xi[j] = median(r1[j],r2[j]);
		printf("Xi Row %d = %.2f\n", j, xi[j]);
		xifi[j] = xitimesfi(xi[j],freq[j]);
		printf("Xi.Fi Row %d = %.2f\n", j, xifi[j]);
		printf("\n");
	}
	
	float sumxifi;
	
	for (int j=1;j<=i;j++){
		sumxifi += xifi[j];
//		printf("Debug Total XiFi: %.2f\n", sumxifi);
	}
	
	printf("\n");
	printf("Total XiFi: %.2f\n", sumxifi);
	
	printf("\n");	
	printf("Enter any key to exit..");
	getchar();
	getchar();
}