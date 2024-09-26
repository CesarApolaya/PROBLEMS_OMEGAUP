#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
using namespace System;

int main()
{

    int n; cin >> n;
    int veces = 0;
    if (n % 2 == 0) {
        n /= 2;
        veces++;
    }
    else {
        n++;
        veces++;
    }

    if (n >= 100) {
        n /= 100;
        veces++;
    }
    else if ((n < 100) && (n >= 10)) {
        n /= 10;
        veces++;
    }

    if (n % 3 == 0) {
        n--;
        veces++;
    }

    cout << n << " " << veces;



    return 0;
}
