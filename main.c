/*
 * main.c
 *
 *  Created on: Feb 7, 2014
 *      Author: luigi
 */


#include<stdio.h>
#include<string.h>

typedef struct{
int number;
char *name;
struct OSOBA *next;
}OSOBA;

OSOBA *pridaj(char* name,int number, OSOBA* prvy)
{
	OSOBA *nova_osoba;
	nova_osoba=(OSOBA*)malloc(sizeof(OSOBA));
	nova_osoba->name=name;
	nova_osoba->number=number;
	nova_osoba->next=prvy;

	return nova_osoba;
}

void vypis(OSOBA *prvy)
{
	OSOBA *temp=prvy;
	while(temp != NULL){
		printf("%s %d \n",temp->name,temp->number);
	temp=temp->next;
	}
}
int main()
{
	OSOBA *prvy;
	prvy=(OSOBA*)malloc(sizeof(OSOBA));
	prvy->name="Robo";
	prvy->number=7;
	prvy->next=NULL;
	prvy=pridaj("Zuza",5,prvy);

	vypis(prvy);

	return 0;
}
