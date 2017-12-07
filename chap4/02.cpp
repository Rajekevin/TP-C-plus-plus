// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{

double a=0;
int n=0;	
double puissance;	  


	//Saisie entier A
    cout << "Saisir a compris entre 1 et 100 " << endl;
    cin >> a;
    
    //Verif a
    if(a<1 || a>100){
	   	cout << "Saisir a compris entre 1 et 100 " << endl;
	   	 cin >> a;
	}
   
    //Saisie entier N
    cout << "Saisir n compris entre 1 et 100 " << endl;
    cin >> n;

    if(n<1 || n>100){
	   	cout << "Saisir a compris entre 1 et 100 " << endl;
	   	 cin >> a;
	}


	//Calcul de la puissance avec la boucle for
	for(int i=1; i<n; i++ ) {
 		puissance += a *a; 
 		cout << "La puissance de "<<a<<"^"<<n<<"="<<puissance  << endl;
 	}
  
  //	puissance = pow(a,n);
  //	cout << "La puissance de "<<a<<"^"<<n<<"="<<puissance  << endl;
}


/****
Exercice 2
Ecrivez un programme 02.cpp qui attend 2 entiers en entrée (a et n entre 1 et 100) et calcule a puissance n (c’est-à-dire a*a*a*a … n-fois !)
****/