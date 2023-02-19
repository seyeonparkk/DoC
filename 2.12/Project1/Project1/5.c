#define	CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stats {
	float health, healthRegen;
	unsigned int mana;
	float manaRegen;
	float attackdamage;
		float armor;
		float attackspeed;
		float magicresist;
		unsigned int movementspeed;
};
struct champion {
	struct stats stats;
	char name[5];
	double abilitypower;
};
int main() {
	strcpy(swain->name, "swain");
	swain->stats->health = 463.000000;

	swain->stats->mana = 290;
	swain->stats->manaregen = 1.49f;
	swain->stats->range = 500;
	swain->stats->attackdamage =52.0f;
	swain->stats->attackspeed = 0.625f;
	swain->stats->armor = 20.0f;
	swain->stats->magicResist = 30;
	swain->stats->movementSpeed = 335;
	swain->abilityPower = 0;
	printf("%s %f\n", swain->name, swain->stats->health);
	free(swain->stats);
	free(swain);

}