// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


void grandPetit(int a,int b ,int &grand, int &petit){
	if(a>b){
		grand =a;
		petit=b;
	}else{
		grand =b; 
		petit =a;
	}
}

//Ecrire une fonction qui attend un entier et qui « renvoie » son double et son carré, stockées dans 2 variables.
void entierCarre(int nbrEntier,int &nbrDouble,int &nbrCarre){
		nbrCarre = nbrEntier * nbrEntier;
		nbrDouble = nbrEntier * 2 ;
		}

void calculEntier(int a, int b, int &addition, int &soustraction,int &multiplication,int &division ){
	addition = a+b;
	soustraction = a-b;
	multiplication = a*b;
	division = a/b; 
}


int tricroissant( int tab[], int tab_size)                                            
{                                                                              
  int i=0;                                                                     
  int tmp=0;                                                                     
  int j=0;                                                                     
                                                                                 
  for(i = 0; i < tab_size; i++)          //On veut remplir la case i du tableau                            
    {                                                                          
      for(j = i+1; j < tab_size; j++)    //On vérifie s'il n'y a pas de nombre inférieur                    
        {                                //Dans les cases suivantes                      
          if(tab[j] < tab[i])                                                        
            {                                                                  
              tmp = tab[i];              //Si c'est le cas on intervertit les cases
              tab[i] = tab[j];                                                       
              tab[j] = tmp;                                                    
            }                                                                  
        }                                                                      
    }                                                                 
}


void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i,j,tmp,max_temp,max = tailleTableau - 1;
    do
    {
        for(i=0,max_temp = 0;i<max;i++)
        {
            if(tableau[i] > tableau[i+1])
            {
                tmp = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = tmp;
                max_temp = i;
            }
        }
        max = max_temp;
    }while(max > 0);
}


void affiche(int tableau[], int tailleTableau)
{
    int i;
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf ("%d " , tableau[i]);
    }
    printf("\n\n");
}


int main()
{
		int a = 5 ;
		int b =3 ;
		int nbrDouble ;
		int nbrCarre ;
		
		entierCarre(a, nbrDouble, nbrCarre); 
		cout << nbrDouble <<endl; 
		cout << nbrCarre ; 
		int multi;
		int addition;
		int soustraction;
		int division;

		cout<<"Addition"<<addition<<endl;
		cout<<"soustraction"<<soustraction<<endl;
		cout<<"Multiplication"<<multi<<endl;
		cout<<"Division"<<division<<endl;


		int entier1;
		int entier2;
		int entier3;

		cout<<"entier 1 :"<<endl;
		cin>>entier1;
		cout<<"entier 2 :"<<endl;
		cin>>entier2;
		cout<<"entier 3 :"<<endl;
		cin>>entier3;

		int tableau[3] = {entier1, entier2, entier3};
	    affiche (tableau, 3);

	    cout<<"tableau : "<<endl; 
	    ordonnerTableau(tableau , 3);

	    cout<<"Ordonner"<<endl; 
	    affiche (tableau, 3);
 
    	return 0;	
}

/****
Exercice 1 : Passage de paramètres par référence
1) Ecrire une fonction qui attend un entier et qui « renvoie » son double et son carré, stockées dans 2 variables.
2) Ecrire une fonction qui demande à l’utilisateur 2 nombres (a,b) de type double et qui « renvoie » quatre retour : a+b,a-b,a*b,a/b, à stocker dans 4 variables.
3) Ecrire une fonction tri qui attend 3 variables entières (a,b,c) et qui fera en sorte que a,b et c seront triées par ordre croissant (a<=b<=c) ;
Exemple : soit int a= 5 ; int b= 2 ; int c=3 ;
Un appel à tri(a,b,c) aura pour conséquence : a=2,b=3,c=5.
****/