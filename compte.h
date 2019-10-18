#ifndef COMPTE_H
#define COMPTE_H
#include <string>

using namespace std;
class Client;
class Compte
{
   private:
     float Solde , retire;
     int NumUnique;
     Client *client;
      
   public:
      // Constructeurs
        

      // Services
   		 Compte();
   		 void menu(Client,float Solde,float retire);
         float Crediter(float Solde);
         float CrediterAutre(float Solde);
         float Debiter(float Solde);
         float Consulter();
         float Virement();
         void Commander();
         void Afficher(float Solde, float retire);

        
};

#endif 

