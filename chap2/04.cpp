// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{

	//Définition des variables
	int rayonCercle = 0;
	int aireCercle = 0;
	const float piCercle = 3.1415;
 
    //sortie => affichage
    cout << "Quel est le rayon du Cercle ?" << endl;

    //entrée => saisie
    cin >> rayonCercle;
   
    aireCercle = pow(rayonCercle,2) * piCercle;

    cout << "L'aire du Cercle de "<< rayonCercle<< " est egale "<<rayonCercle<<"*"<<rayonCercle<<"* "<<piCercle<<"=" << aireCercle << "" << endl;
 }


/****
Exercice 4
1) Ecrire un programme 04.cpp qui affiche les 5 lignes suivante :
La superficie d’un cercle de rayon de 0.2 metre(s) est égale à 0.2*0.2*3.14 = ?
La superficie d’un cercle de rayon de 1.23 metre(s) est égale à 1.23*1.23*3.14 = ?
La superficie d’un cercle de rayon de 4 metre(s) est égale à 4*4*3.14 = ?
La superficie d’un cercle de rayon de 5.1 metre(s) est égale à 5.1*5.1*3.14 = ?
La superficie d’un cercle de rayon de 6.5 metre(s) est égale à 6.5*6.5*3.14 = ?
2) Changer la valeur de PI afin qu’elle soit plus précise : de 3.14 à 3.1415
3) Changer La superficie par L’aire.
4) 1ere amélioration : Pour faciliter les modifications futures sur PI, utilisant une constante PI et remplaçons le code existant.
5) 2ème amélioration : le rayon se répète 3 fois pour chaque ligne => utilisons une variable r qu’on initialise avec la bonne valeur avant chaque affichage.
6) 3ème amélioration : remplacer les 2 chaines de caractères longues (« L’aire d’un cercle de rayon de » et « metre(s) est égale à » ) par 2
variables string afin d’éviter de les réécrire à chaque fois. Désormais, un changement de la chaine à afficher sera plus facile à gérer.
7) Il est encore possible de procéder à d’autres améliorations, mais ça nécessite d’autres notions.**/