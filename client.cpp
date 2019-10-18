#include <iostream>
#include "client.h"
#include <string>
#include </usr/include/mysql/mysql.h>

using namespace std;

void Client::Connexion(Compte, int CIN, int mdp, float Solde, float retire)
{
	Compte a;
	Client b;


	int verifCIN, verifMdp;
	cout << "================================================================================" <<endl;
    cout << "===                        Connexion à votre compte                          ===" <<endl;
    cout << "================================================================================" <<endl;

	cout << "CIN:"<<endl;
	cin>> verifCIN;

	if(verifCIN == CIN)
	{
		cout << "Mot de Passe :"<<endl;
		cin>> verifMdp;
		if(verifMdp == mdp)
		{
			cout << "===                               CONNECTE                                   ===" <<endl;
			Solde = 0;
			retire = 0;
			a.menu(b, Solde, retire);
		}
		else
		{
			cout << "Mot de passe incorrect" <<endl;
			Connexion(a, CIN, mdp, Solde, retire);
		}
	}
	else
	{
		cout << "===                        CIN incorrect                            ===" <<endl;
		Connexion(a, CIN, mdp, Solde, retire);
	}

		
}
