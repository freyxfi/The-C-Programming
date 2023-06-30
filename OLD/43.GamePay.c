#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){

	int i;
	int player[5] = {69, 108, 7, 8, 1}; /* player numbers */
	int goals[5] = {24, 2, 42, 45, 6}; /* Player No:7 scores most goals xD you know what i mean*/
	int gameplay[5] = {30, 30, 28, 12, 25};
	float PPG[5];
	float bestPPG = 0.0; /* Points per game */
	int bestplayer;

	for (i = 0; i < 5; i++){
		PPG[i] = (float)goals[i] / (float)gameplay[i];
		printf("%d \t %d \t %d \t %.2f\n", player[i], goals[i], gameplay[i], PPG[i]);

		if(PPG[i] > bestPPG){
			bestPPG = PPG[i];
			bestplayer = player[i];

		}

	}

	printf("\nThe Best Player is %d\n", bestplayer);	

	return 0;

}


