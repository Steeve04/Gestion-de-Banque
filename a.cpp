#include"/usr/include/mysql/mysql.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  MYSQL *conn;
  conn = mysql_init(0);
  conn = mysql_real_connect(conn, "localhost", "root", "1234", "Banque", 3306, NULL, 0);

  if(conn)
  {
    cout << "Connecté à la BDD !" <<endl;
  }

  else
  {
    cout << "Non Connecté !" <<endl;
  }

}