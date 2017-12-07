// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
    char saisieUser; 
    string punitionPharse;

    //Menu
    cout << "Veuillez sélectionner votre menu :  " << endl;
    cout << "1 - 'P' - Punition :  " << endl;
    cout << "2 - 'C' - Calcul Puissance :  " << endl;
    cout << "3 - 'Q' - Quitter :  " << endl;
    cin >> saisieUser;
    

    switch(saisieUser){

        case 'P':
            cout << "Punition " << endl;
      
            punitionPharse = "Je ne parlerai plus pendant le cour";
            int i;

            for(i=0; i<=200; i++ ){
                    cout << i << "-" << punitionPharse <<  endl;
            }
 
            break;

        case 'C':

        cout << "Puissance " << endl;

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
                cin >> n;
             }


            //Calcul de la puissance avec la boucle for
            for(int i=1; i<n; i++ ) {
                puissance += a *a; 
                cout << "La puissance de "<<a<<"^"<<n<<"="<<puissance  << endl;
             }

            break;                  
    }
 
}
/***
Exercice 4 : Notre 1er jeu : Qui est le meilleur devin ?
1) Créer un programme 04.cpp dans lequel vous déclarez une variable x de type int et vous lui affectez un nombre entre 0 et 100 inclus (vous serez le seul à connaître sa valeur, nom de la variable x signifie inconnu…).
2) Déclarez une autre variable d (comme devinette) de type int.
3) Déclarez une 3ème variable cp (comme compteur : nombre de tentatives) de type int et affectez lui la valeur 1 ;
4) Afficher un message pour inviter l’utilisateur à deviner quelle serait la valeur à trouver (entre 0 et 100 inclus).
5) Entrer la valeur de l’utilisateur et stocker la dans d (utilisation de cin)
6) Si la valeur est fausse :
 afficher un message dans ce sens en indiquant si la valeur saisie est plus grande ou plus petite que la valeur à trouver
 incrémenter le compteur cp et répéter les opérations 4 et 5 et 6 tant que c’est faux.
7) Si la valeur est correcte, afficher un bravo et le valeur du compteur cp (nombre de tentatives)
8) Une fois votre programme marche, demander à vos voisin de l’essayer.
9) Qui est le meilleur devin ?
****/

