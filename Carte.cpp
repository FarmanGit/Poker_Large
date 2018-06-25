#include <iostream>
#include <string>
#include "Carte.h"


using namespace std;

        //default contructor
        Carte::Carte()
        {
            couleur_=Couleur();
            valeur_=Valeur();
        }

        //constructor with  color and a value
         Carte::Carte (Couleur coul, Valeur val)
        {
            couleur_=coul;
            valeur_=val;
        }

        //show card on a console
        void Carte::afficher()
        {
            cout<<valeur_.getName()+" of "+couleur_.getName();
        }

        //access routine for value
        Valeur Carte::getValeur()
        {
            return valeur_;
        }

        //access routine for a color
        Couleur Carte::getCouleur()
        {
            return couleur_;
        }

