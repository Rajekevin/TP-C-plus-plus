#include <iostream>
#include <string>


using namespace std;


void afficheVariable(int nbreEntier1, int nbreEntier2, int *nbrePointeur1, int *nbrePointeur2, int nbreEntierPointeur1,int nbreEntierPointeur2)
{
	cout<<"Variable A :"<<endl;
	cout<<nbreEntier1<<endl;

	cout<<"Variable B :"<<endl;
	cout<<nbreEntier2<<endl;

	cout<<"Pointeur p1 :"<<endl;
	cout<<nbrePointeur1<<endl;

	cout<<"Pointeur p2 :"<<endl;
	cout<<nbrePointeur2<<endl;

	cout<<" p1 :"<<endl;
	cout<<nbreEntierPointeur1<<endl;

	cout<<" p2 :"<<endl;
	cout<<nbreEntierPointeur2<<endl;

}


int main()
{
	int a=2;
	int b=14;

	int *p1=&a;
	int *p2=&b;

	afficheVariable(a, b, p1, p2, *p1, *p2);

	p2=p1;
	cout<<"PERMUTATION P2=P1 :"<<endl;

	afficheVariable(a, b, p1, p2, *p1, *p2);

	(*p1)++;
	b--;

	cout<<"incrementation P1 et B-- :"<<endl;
	afficheVariable(a, b, p1, p2, *p1, *p2);
}



/***Exercice 2 : Pointeurs
1) Déclarer 2 variables entieres (a=2,b=14) et 2 pointeurs sur entiers (p1,p2) ;
2) Insérer les instructions suivantes : p1 = &a ; p2 =&b ;
3) Afficher par lignes les valeurs suivantes : a,b,*p1,*p2, p1, p2. Que remarquez-vous ?
4) Insérer les instructions suivantes : (*p1)++ ; b-- ;
5) Afficher par lignes les valeurs suivantes : a,b,*p1,*p2, p1, p2. Que remarquez-vous ?
6) Insérer l’instruction suivante : p2=p1 ;
7) Afficher par lignes les valeurs suivantes : a,b,*p1,*p2, p1, p2. Que remarquez-vous ?
8) Insérer les instructions suivantes : (*p1)++ ; b-- ;
9) Afficher par lignes les valeurs suivantes : a,b,*p1,*p2, p1, p2. Que remarquez-vous ?

Exercice 3 : Pointeurs et fonctions
Reprendre l’exercice précédent. Remplacer les affichages (points 3,5,7 et 9) par des appels à une fonction d’affichage qui attend 2 variables et 2 pointeurs.*/