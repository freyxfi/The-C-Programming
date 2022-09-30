#include <stdio.h>
#include <stdlib.h>

void converttoINR(float USD);
void AnimeYEN(float YEN);

int main(){
	
	float USDAmount = 10.00;
	float USDAmount1 = 34.64;

	converttoINR(USDAmount);
	converttoINR(USDAmount1);
	converttoINR(42.32);
	
	float JapanYeah = 10.00;
	float JapanYeah1 = 415.20;
	AnimeYEN(JapanYeah);
	AnimeYEN(JapanYeah1);
	return 0;

}

void converttoINR(float USD){

	float INR = USD * 81.56;
	printf("%.2f USD - %.2f INR\n", USD, INR); 

	return;
}
/* Just because i watch anime */
void AnimeYEN(float YEN){
	float INR = YEN * 0.56;
	printf("%.2f YEN - %.2f INR\n", YEN, INR);
	
	return;
}	

