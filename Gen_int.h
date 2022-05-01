#ifndef Gen_int_H
#define Gen_int_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <numeric>

using namespace std;

class Gen_int
{
public:
  long long retrun_n_int(long long, long long);
  long long return_Pi_n_int(long long, long long);
  bool check_prime(long long);
  long long generate_e_int(long long, long long);
  long long generate_d_int(long long, long long);
  int mol(unsigned long long, unsigned long long, unsigned long long);
};
#endif