#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include "client.h"

using namespace std;

class Admin : protected Client
{
   private:
    string Username;
    int mdp;
      
   public:
      // Constructeurs

      // Services
       void Modification();
       void Creation();

        
};

#endif 

