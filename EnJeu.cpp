#include <iostream>
#include <string>
#include "EnJeu.h"


using namespace std;

    //affichage de l'�tat du joueur
   void EnJeu::affichage(int i)
    {
        cout << leJoueur_->getName() << " a " << leJoueur_->getLaPartie()->getJoueur(i).getJetons() << " chips."<<endl;
    }

    //valeur de la combinaison de la main du joueur
    double EnJeu::combinaison(MainC  jeu)
    {
        return jeu.combinaison();
    }

    //affichage du joueur lors du showdown
    void EnJeu::showdown(int i)
    {
        cout<<leJoueur_->getName()<<" has on hand : ";
        leJoueur_->getLaPartie()->getJoueur(i).getCarte(0).afficher();
        cout << " and ";
        leJoueur_->getLaPartie()->getJoueur(i).getCarte(1).afficher();
        cout << endl;
    }


