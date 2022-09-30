#include <stdio.h>
#include <stdlib.h>

int calculateBonus(int yearworked);

int main(){

	int FreyBonus = calculateBonus(13);
	int EmmaBonus = calculateBonus(5);

	printf("Frey Gets %d of Bonus\n", FreyBonus);
	// Now there is new chick in the office emma
	printf("Emma Gets %d of Bonus\n", EmmaBonus);

	return 0;
}

int calculateBonus(int yearworked){

	int bonus = yearworked * 300;

	if(yearworked > 10){
		bonus += 1000;
	}

	return bonus;

}
