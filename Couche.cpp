#include <iostream>
#include <string>
#include "Couche.h"


using namespace std;

    //displaying state of a player
    void Couche::affichage(int i)
    {
        cout << leJoueur_->getName() << " a " << leJoueur_->getLaPartie()->getJoueur(i).getJetons() << " chips."<<endl;
    }

    //values of player cards
    double Couche::combinaison(MainC  jeu)
    {
        return 0;
    }

    //showing values during player's showdown
    void Couche::showdown(int i)
    {
        cout<<leJoueur_->getName()<<" lay down before the end of the round"<<endl;
    }
