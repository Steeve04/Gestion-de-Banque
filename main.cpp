#include <iostream>
#include <iomanip>

using namespace std;


#include "compte.h"
#include "client.h"
#include "admin.h"

int main() 
{
    Compte a;
    Client b;
    Admin c;
	int choix, CIN, mdp ;
	float Solde, retire;
    cout << "================================================================================" <<endl; 
    cout << "================================================================================" <<endl;  
    cout << "===                                  LCL                                     ===" <<endl;    
    cout << "================================================================================" <<endl;
    cout << "===                                  (1)CONNEXION                            ===" <<endl;
    cout << "===                                  (2)INSCRIPTION                          ===" <<endl;
    cout << "================================================================================" <<endl; 
    cout << "================================================================================" <<endl; 
    cin >> choix ;
    switch(choix)
    {
        case 1:

                b.Connexion(a, CIN, mdp, Solde, retire);
                
                break;

        case 2:
                c.Creation();
            
                break;

        
   default:
   break; 
   
   
   }
   return 0;
}
