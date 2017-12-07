// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
    int x=36;
    int d;
    int cp=1; //compteur

    cout << "Veuillez sélectionner un chiffre :  " << endl; 
    cin >> d;  

    while(x != d){    
            if(x<d){     
                cout << "Le nombre à deviner est plus petit:  " << endl;  
             }else{     
                cout << "Le nombre à deviner est plus grand " << endl;  
            }
            cout << "Veuillez sélectionner un chiffre :  " << endl; 
            cin >> d;
            cp++;
        } 

    if(x==d){
         cout << "BRAVOOOO " << endl;  
         cout << "nombre de tentative : " << cp << endl;  
    }
 
}

