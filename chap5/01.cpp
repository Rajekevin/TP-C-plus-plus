// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
    int x=36;        // nombre mystère
    int d;           // nombre à deviner 
    int cp=1;        //compteur
    char choixUser;  //saisieUtilisateur
    int restart = 1; //refaire une partie


    do{
        cout << "Veuillez sélectionner un chiffre :  " << endl; 
        cin >> d; 

         //Si on a pas trouvé le chiffre mystère
         while(x != d && cp <= 10){    
            if(x<d){     
                cout << "Le nombre à deviner est plus petit:  " << endl;  
             }else{     
                cout << "Le nombre à deviner est plus grand " << endl;  
            }              
                cout<<"Tentative : "<<cp<<endl; 
                cout << "Veuillez sélectionner un chiffre :  " << endl; 
                cin >> d;
                cp++;      
            }



            //Si on dépasse le compteur > 10
            if(cp >10){                   
                    cout<< "Fin de partie"<<endl;
                    cout << "Voulez-vous refaire une partie (N)on - (O)ui:  " << endl; 
                    cin >> choixUser;

                    switch(choixUser){
                        case 'N':
                            return 0;
                          break;

                        case 'O':
                                cp = 0;
                                cout << "Veuillez sélectionner un chiffre :  " << endl; 
                                cin >> d;  
                            break;
                        }
                    }

                    if(x==d){
                          cout<< "GAGNE"<<endl;
                          return 0;
                        };             

        }//fin do
        while(restart);//recommence la partie         
}
