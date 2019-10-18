#include <iostream>
#include "admin.h"
#include <string>

using namespace std;

void Admin::Creation()
{
    int verif;

    Compte a;
    Client b;
    float Solde, retire;
    cout << "================================================================================" <<endl;
    cout << "===                        Création de votre compte                          ===" <<endl;
    cout << "================================================================================" <<endl;

    cout << "CIN :"<<endl;
    cin>> CIN;

    cout << "Nom :"<<endl;
    cin>> Nom;

    cout << "Prenom :"<<endl;
    cin>> Prenom;

    cout << "Numéro de téléphone :"<<endl;
    cin>> Num;

    cout << "Mot de Passe :"<<endl;
    cin>> mdp;

    cout << "Confirmation du Mot de passe :"<<endl;
    cin>> verif;
   if(verif == mdp)
    {
        cout << "Vous avez créer votre compte "<< Nom <<" "<< Prenom <<" ."<<endl;
        b.Connexion(a, CIN, mdp, Solde, retire);
    }
    else
    {
        cout << "Confirmation du Mot de Passe incorrect " <<endl;
        Creation();
    }
}

