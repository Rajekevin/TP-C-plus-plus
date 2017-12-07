// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int somme(int taille, int *operateurs){
		int resultatSomme=0;
			
		for(int i=1; i<=taille; i++){		
			resultatSomme += operateurs[i];		
			}
			return resultatSomme;
		}		

int main()
{
	const int taille = 3;
	int operateurs[taille];
	for(int i=1; i<=taille; i++){
		cout<<"Saisir l'opérateur"<<i<<":"<<endl;
		cin>>operateurs[i];
		cout<<somme(taille, operateurs)<<endl;
	}
}

/***
Exercice 1
1) Créer un programme 01.cpp qui contient une fonction qui somme 3 entiers
2) Ecrire un code qui appelle cette fonction avec les valeurs suivante (2, 5, 1) et affiche son résultat.
3) Demander à l’utilisateur de rentrer 3 entiers, sommer les avec la fonction et afficher le résultat./

