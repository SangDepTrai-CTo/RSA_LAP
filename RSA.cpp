#ifndef RSA_H
#define RSA_H

#include "RSA.h"

long long RSA::convertToInt(string str)
{
  int num = 0;
  for (int i = 0; i < str.length(); i++)
  {
    num = num * 10 + (str[i] - '0');
  }
  return num;
}

long long RSA::make_ACSII(string a)
{
  int num = 0;
  for (int i = 0; i < a.length(); i++)
  {
    num = num + int(a[i]);
  }
  return num;
}

long long RSA::Encrypt(long long mess, long long e, long long n)
{
  Gen_int a;
  return a.mol(mess, e, n);
}

long long RSA::Decrypt(long long mess, long long d, long long n)
{
  Gen_int a;
  return a.mol(mess, d, n);
}

#endif