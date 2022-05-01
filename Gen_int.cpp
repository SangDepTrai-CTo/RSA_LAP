#include "Gen_int.h"

long long Gen_int::retrun_n_int(long long p, long long q)
{
  return p * q;
}

long long Gen_int::return_Pi_n_int(long long p, long long q)
{
  return (p - 1) * (q - 1);
}

bool Gen_int::check_prime(long long n)
{
  for (long long i = 2; i < sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

long long Gen_int::generate_e_int(long long n, long long pi)
{
  long long e = 0;
  long long i = 0;

  while (e == 0)
  {
    i++;
    e = rand() % pi;
    if (e < 2)
    {
      e = rand() % pi;
    }
    if (check_prime(e) == false)
    {
      e = 0;
    }
  }
  return e;
}

long long Gen_int::generate_d_int(long long e, long long pi)
{
  long long d = 0;
  long long check = 0;
  while (check != 1)
  {
    d = rand() % pi;
    check = (e * d) % pi;
  }
  return d;
}
int Gen_int::mol(unsigned long long a, unsigned long long b, unsigned long long c)
{
  unsigned long long m = 1;
  a %= c;
  b %= c - 1;
  while (b > 0)
  {
    if (b % 2 > 0)
      m = m * a % c;
    a = a * a % c;
    b /= 2;
  }
  return (int)m;
}