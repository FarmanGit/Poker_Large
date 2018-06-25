#include <iostream>
#include <string>
#include "Carre.h"

#include "Carte.h"
#include "MainC.h"

using namespace std;

	// return 7 if the carts correspond to a square, -1 id not
    int Carre::identifier(vector<Carte> lesCartes)
    {
        int retour=0;
        unsigned int i=0;
        int valeurs[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int carreV;
        bool carre=false;
        string couleurC;

        while(i<lesCartes.size())
        {
            valeurs[lesCartes.at(i).getValeur().getPoints()]++;
            i++;
        }
        valeurs[14]=valeurs[1];
        for (i=1; i<14; i++)
        {
            if (valeurs[i]==4)
            {
                carre=true;
                carreV=i;
            }
        }

        if (carreV==1)
            carreV=14;

      if (carre)
        {
            retour=7;
        }
        if (retour==7)
        {
            return 7;
        }
        else
        {
            return -1;
        }
    }
