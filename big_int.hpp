#ifndef BIG_INT_HPP
#define BIG_INT_HPP

#include <cstring>
#include <iostream>
using namespace std;

class BigInt {
private:
  string value;
  bool sign;

  void trim();
  BigInt shiftLeftTen(int p) const;

  static BigInt fromReversedStr(string s);

public:
  BigInt();
  BigInt(int n);
  BigInt(float n);
  BigInt(string s);
  BigInt abs() const;
  BigInt operator+(const BigInt &number) const;
  BigInt operator-(const BigInt &number) const;
  BigInt operator-() const;
  BigInt operator*(const BigInt &number) const;
  BigInt operator/(const BigInt &number) const;
  bool operator>(const BigInt &n) const;
  bool operator<(const BigInt &n) const;
  bool operator>=(const BigInt &n) const;
  bool operator<=(const BigInt &n) const;
  bool operator==(const BigInt &n) const;
  bool operator!=(const BigInt &n) const;
  void operator+=(const BigInt &n);
  void operator-=(const BigInt &n);
  void operator*=(const BigInt &n);
  void operator/=(const BigInt &n);
  void operator++();
  void operator--();
  friend istream &operator>>(istream &fin, BigInt &n);
  friend ostream &operator<<(ostream &fout, const BigInt &n);
};

#endif
