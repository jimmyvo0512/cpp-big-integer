#include "big_int.hpp"
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	vector<string> files(argv + 1, argv + argc);
	fstream fin(files[0], ios::in), fout(files[1], ios::in);
	int n;
	fin >> n;
	string a, b, r;
	while (fin >> a >> b) {
		BigInt x(a), y(b);
		fout >> r;
		auto expected = BigInt(r);
		auto actual	  = x + y;
		cout << (actual == expected) << endl;
	}
	fin.close(), fout.close();
	return 0;
}
