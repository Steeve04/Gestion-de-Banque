#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "compte.h"

using namespace std;
class Compte;
class Client
{
 protected:
     int CIN;
     string Nom;
     string Prenom;
     int Num;
     int mdp;
     Compte *compte;
      
   public:
      	
   	  	//Services
   		void Connexion(Compte, int, int, float, float);
};
#endif 

