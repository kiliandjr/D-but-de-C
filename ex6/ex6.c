#include <stdlib.h>
#include <stdio.h>

int main()
{


char prenom[100];
int age;

printf("Bonjour quel est votre prénom? ");

scanf("%s", prenom);

printf("Bonjour quel est votre âge? ");

scanf("%d", &age);

int t=2024-age;

printf("Votre âge est %d.\n", t);

exit(0);
}

