// Example program
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int main()
{
	//string punitionPharse;
	string punitionPharse = "Je ne parlerai plus pendant le cour";
	int i;

	for(i=0; i<=200; i++ ){
			cout << i << "-" << punitionPharse <<  endl;
	}

 }


/****
Exercice 1
Vous avez beaucoup parlé pendant le cours. Le professeur vous afflige une punition : celle de taper 200 fois la phrase suivante
Je ne parlerai plus pendant le cours.
Il vous demande aussi d’afficher un numéro au début de chaque ligne, comme suit :
1- Je ne parlerai plus pendant le cours.
2- Je ne parlerai plus pendant le cours.
…
200 – Je ne parlerai plus pendant le cours.
Il veut voir ça sur écran sans que vous fassiez copier/coller (il espère ainsi vous occuper pendant 1h !)
Que feriez-vous ?***/