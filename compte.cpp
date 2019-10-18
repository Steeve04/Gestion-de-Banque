#include <iostream>
#include "compte.h"
#include "client.h"
#include <string>

using namespace std;

Compte::Compte()
{
	Solde = 0;
	retire = 0;
}
void Compte::menu(Client,float Solde, float retire)
{
	Client z;
	int choix;

	float Depot;

    		cout << "================================================================================" <<endl;  
    		cout << "===                                  LCL                                     ===" <<endl;    
    		cout << "================================================================================" <<endl;
    		cout << "===                                  (1)DEPOSER                              ===" <<endl;
    		cout << "===                                  (2)RETIRER                              ===" <<endl;
    		cout << "===                                  (3)COMMANDER                            ===" <<endl;
    		cout << "===                                  (4)AFFICHER                             ===" <<endl;
    		cout << "===                                  (5)DECONNEXION                          ===" <<endl;
    		cout << "================================================================================" <<endl; 
    		cout << "================================================================================" <<endl;
    		cin >> choix ;
    		switch(choix)
    		{
        	case 1:
                Crediter(Solde);
                menu(z, Solde, retire);
                
                break;

        	case 2:
                Debiter(Solde);
                menu(z, Solde, retire);;
                
                break;

        	case 3:
                Commander();
                menu(z, Solde, retire);
                
                break;

            case 4:
                Afficher(Solde, retire);
                menu(z, Solde, retire);
                
                break;

        	case 5:
               cout << "===                        Vous êtes déconnecté                               ===" <<endl;
               exit;
                break;
        	default:
        	break;

    		}
}


float Compte::Crediter(float Solde)
{
    float Depot, retire;
    Client z;
    Solde = Solde;
    cout << "================================================================================" <<endl;
    cout << "===                                DEPOSER                                   ===" <<endl;
    cout << "================================================================================" <<endl;
    cout << "===  Votre solde est de "<< Solde <<" euros .                                ===" <<endl;
    cout << "===  Déposez une somme :                                                     ===" <<endl;
    cin >> Depot;
    if(Depot < 0)
    {
    cout << "===  Déposez une somme positive                                              ===" <<endl;
    cin >> Depot;
    Solde = Solde + Depot;
    }
    else
    {
    	Solde = Solde + Depot;
    }
    cout << "===  Vous avez déposer "<< Solde <<" euros .                                 ===" <<endl;
    cout << "===  Votre solde est de "<< Solde <<" euros .                                ===" <<endl;
    cout << "===                                                                          ===" <<endl;
    cout << "================================================================================" <<endl;

    menu(z, Solde, retire);

	return 0;
}

float Compte::Debiter(float Solde)
{

	float retire;
	Client z;

	cout << "================================================================================" <<endl;
    cout << "===                                RETIRER                                   ===" <<endl;
    cout << "================================================================================" <<endl;
    cout << "===  Votre solde est de "<< Solde <<" euros .                                ===" <<endl;
    cout << "===  Retirez une somme :                                                     ===" <<endl;
    cin >> retire;
    if(retire < 0)
    {
    cout << "===  Retirez une somme positive                                              ===" <<endl;
    cin >> retire;
    Solde = Solde - retire;
    }
    else
    {
    	Solde = Solde - retire;
    }
    
    cout << "===  Vous avez retiré "<< retire <<" euros .                                 ===" <<endl;
    cout << "===  Votre solde est de "<< Solde <<" euros .                                ===" <<endl;
    cout << "===                                                                          ===" <<endl;
    cout << "================================================================================" <<endl;

    menu(z, Solde, retire);

	return 0;
}

void Compte::Afficher(float Solde,float retire)
{
	int choix;
    cout << "================================================================================" <<endl;
    cout << "===                            Distributeur de billets                       ===" <<endl;
    cout << "================================================================================" <<endl;
    cout<<  "===                      Consulter les dernières opérations                  ===" <<endl;
    cout << "================================================================================" <<endl;
    cout << "===                                (1)DEPOT                                  ===" <<endl;
    cout << "===                                (2)RETIREMENT                             ===" <<endl;
    cout << "===                                (3)VIREMENT                               ===" <<endl;
    cout << "================================================================================" <<endl;
    cin>>choix;
    switch(choix)
    {
        case 1:

                cout << "================================================================================" <<endl;
                cout << "===                                (1)DEPOT                                  ===" <<endl;
                cout << "================================================================================" <<endl;
                cout << "=== Vous avez "<< Solde <<" euros dans votre compte.                         ===" <<endl;
                cout << "===                                                                          ===" <<endl;
                cout << "================================================================================" <<endl;
                
                break;

        case 2:
                cout << "================================================================================" <<endl;
                cout << "===                                (2)RETIREMENT                             ===" <<endl;
                cout << "================================================================================" <<endl;
                cout << "=== Vous avez retiré "<< retire <<" euros .                                  ===" <<endl;
                cout << "=== Vous avez "<< Solde <<" euros dans votre compte.                         ===" <<endl;
                cout << "===                                                                          ===" <<endl;
                cout << "================================================================================" <<endl;
                
                break;

        case 3:
                cout << "================================================================================" <<endl;
                cout << "===                                (3)VIREMENT                               ===" <<endl;
                cout << "================================================================================" <<endl;
                cout << "===                                                                          ===" <<endl;
                cout << "===                                                                          ===" <<endl;
                cout << "================================================================================" <<endl;
                
                break;
	}
}

void Compte::Commander()
{
	int choix;
	Client z;
                cout << "================================================================================" <<endl;
                cout << "===                             COMMANDER CHEQUIER                           ===" <<endl;
                cout << "================================================================================" <<endl;
                cout << "===   Appuyez '1' pour commander un chéquier                                 ===" <<endl;
                cin>>choix;
                if(choix == 1)
                {
                cout << "===   Vous avez commandé un chéquier avec succès                             ==="<<endl;
                }
                else
                cout << "===   ERREUR                                                                 ==="<<endl;
                cout << "===                                                                          ===" <<endl;
                cout << "================================================================================" <<endl;
                menu(z, Solde, retire);

	

        
}
