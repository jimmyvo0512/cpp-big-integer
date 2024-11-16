#include "big_int.hpp"
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  vector<vector<BigInt>> v;
  v.push_back({2, 123456789, 987654321, BigInt("121932631112635269")});
  v.push_back({2, -123456789, 9876, BigInt("-1219259248164")});
  v.push_back({2, 0, -123456789, BigInt("0")});
  v.push_back({2, -1234, 98765, BigInt("-121876010")});
  v.push_back(
      {2,
       BigInt(
           "3141592653589793238462643383279502884197169399375105820974944592"),
       BigInt(
           "2718281828459045235360287471352662497757247093699959574966967627"),
       BigInt(
           "8539734222673567065463550869546574495034888535765114961879601127067"
           "743044893204848617875072216249073013374895871952806582723184")});

  for (const auto &t : v) {
    BigInt actual;
    string op;
    if (t[0] == 2) {
      op = "*", actual = t[1] * t[2];
    }

    bool ok = actual == t[3];
    cout << (ok ? "Passed" : "Failed") << " (" << t[1] << ", " << t[2] << ", "
         << op << "): ";
    if (!ok) {
      cout << "actual=" << actual << " - expected=" << t[3] << endl;
    } else {
      cout << "result=" << actual << endl;
    }
  }

  return 0;
}
