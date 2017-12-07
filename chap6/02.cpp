// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


int factorielle(int nbreEntier){
	int resultatFacto=1;
	for(int i=1; i <= nbreEntier; i++){
		resultatFacto = resultatFacto * i;		
	}
	return resultatFacto;
}

int factoRecursive(int nbreEntier){

	int resultat; 

	if(nbreEntier>1){
		resultat = nbreEntier * factoRecursive(nbreEntier-1);
	}else{
		resultat =1;
	}

	return resultat;
}


int min(int taille, int *operateurs){
	int MIN = 0;
	int MAX = 0;
			//cout<<taille<<endl;
		for(int i=1; i<=taille; i++){		
			 if(operateurs[i]> operateurs[MAX]) MAX=i;		
			 if(operateurs[i]< operateurs[MIN]) MIN=i;	
			}
			cout<<"MIN==>"<<MIN<<endl;
			cout<<"MAX==>"<<MAX<<endl;
		}


int maxValeur(int operateur1, int operateur2, int operateur3){
			return (operateur1 > operateur2) ? ((operateur2 < operateur3) ? operateur3 : operateur2) : ((operateur1 < operateur3) ? operateur3 : operateur1);
		}

int minValeur(int operateur1, int operateur2, int operateur3){		
			return (operateur1 < operateur2) ? ((operateur2 < operateur3) ? operateur1 : operateur3) : ((operateur2 < operateur3) ? operateur2 : operateur3);
		}		

int main()
{
	int nbreEntier;
	char choixUser; 

	cout<<"Veuillez saisir votre nombre pour calculer la factorielle"<<endl;
	cin>>nbreEntier;

	cout<<"Comment vous voulez calculer votre Factorielle (N)ormale ou (R)écursive"<<endl;
	cin>>choixUser;

		switch(choixUser){
		case 'N':
				cout<<"Factorielle"<<endl;
		        cout<<factorielle(nbreEntier)<<endl;
			break; 
		case 'R':
			cout<<"Fonction Recursive"<<endl;
	        cout<<factoRecursive(nbreEntier)<<endl;
			break; 
	}

	// const int taille = 3;
	// int operateurs[taille];
	// for(int i=1; i<=taille; i++){
	// 	cout<<"Saisir l'opérateur"<<i<<":"<<endl;
	// 	cin>>operateurs[i];
	// 	cout<<min(taille, operateurs)<<endl;
	// }

	int operateurs1;
	int operateurs2;
	int operateurs3;
	cout<<"Saisir l'opérateur1:"<<endl;
	cin>>operateurs1;

	cout<<"Saisir l'opérateur2:"<<endl;
	cin>>operateurs2;

	cout<<"Saisir l'opérateur3:"<<endl;
	cin>>operateurs3;

	cout<<"Maximun"<<endl;
	cout<<maxValeur(operateurs1, operateurs2, operateurs3)<<endl;
	cout<<"Minimun"<<endl;
	cout<<minValeur(operateurs1, operateurs2, operateurs3);

	// cout<<"Fonction Recursive"<<endl;
	// cout<<factoRecursive(nbreEntier)<<endl;

	// cout<<"Factorielle"<<endl;
	// cout<<factorielle(nbreEntier)<<endl;

}


/****
Exercice 2
1) Dans le même programme, écrire une fonction qui calcule le factoriel d’un nombre de 2 façons différentes : une récursive (factorielRec) et une non récursive (factorielNonRec)
factoriel d’un nombre entier n = n*(n-1)*(n-2)*...* 1
2) A l’aide des commentaires, désactiver le code dans main() qui concerne l’utilisation de la fonction somme
3) Demander à l’utilisateur de rentrer un nombre et calculer son factoriel de 2 façons
***/