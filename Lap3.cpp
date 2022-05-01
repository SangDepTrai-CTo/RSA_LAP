// Hayati Gonultas
// CopyLeft
#include <iostream>
#include <string>
#include <sstream>
#include "RSA.h"
using namespace std;

string Gennarater_number(int n)
{
  string number;
  static const char alphanum[] = "0123456789";

  for (int i = 0; i < n; i++)
  {
    number += alphanum[rand() % (sizeof(alphanum) - 1)];
  }
  return number;
}

int main()
{
  Gen_int RSA_int;
  RSA RSA_class;
  long long p = 20079993872842322116151219, , q = 676717145751736242170789, ;
  long long n = RSA_int.retrun_n_int(p, q);
  cout << "n = " << n << endl;
  long long pi = RSA_int.return_Pi_n_int(p, q);
  cout << "pi = " << pi << endl;
  long long e = 17; // RSA_int.generate_e_int(n, pi);
  cout
      << "e = " << e << endl;
  long long d = RSA_int.generate_d_int(e, pi);
  cout << "d = " << d << endl;
  long long mess = 5;
  // int mess = RSA_class.make_ACSII(message);
  cout << "mess = " << mess << endl;

  long long encrypt = RSA_class.Encrypt(mess, e, n);
  long long decrypt = RSA_class.Decrypt(encrypt, d, n);
  cout << "Message: " << mess << endl;
  cout << "Encrypt: " << encrypt << endl;
  cout << "Decrypt: " << decrypt << endl;
  return 0;
}
