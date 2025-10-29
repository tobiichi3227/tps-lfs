#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

    for (int i = 0; i < 1110 * 1110; i++) {
        cout << rnd.next(1110, 1110 * 1110) << endl;
    }

	return 0;
}
