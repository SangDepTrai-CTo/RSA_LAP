#include "Gen_int.h"
#include "Gen_string.h"

class RSA
{
public:
  string Encrypt(string mess, long long e, long long n);
  string Decrypt(string mess, long long d, long long n);
  string convertToString(long long num);
  long long convertToInt(string str);
  long long make_ACSII(string a);
  long long Encrypt(long long mess, long long e, long long n);
  long long Decrypt(long long mess, long long d, long long n);
};
