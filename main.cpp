#include <iostream>
#include "Vector.h"
#include <assert.h>

using namespace std;

int main()
{
    /**
    Vector <int, 4> iV(6);
    Vector <int, 4> iV2(4);
    Vector <int, 4> iV3;

    cout << iV3 << endl;

    iV3 = iV + iV2;
    cout << iV << " + " << iV2 <<  " = " << iV3 << endl;

    iV3 = iV - iV2;
    cout << iV << " - " << iV2 <<  " = " << iV3 << endl;

    cout << "5 * " << iV2 << " = ";
    cout <<  (5*iV2) << endl;

    int produsScalar = iV2*iV3;
    cout << iV2 << " * " << iV3 << " = " << produsScalar << endl;

    Vector<int, 4> v4;
    v4 = iV3;
    cout << v4 << endl;
    */

    Vector<int, 10> v1;
    int i;
    for(i = 0; i < 10; i++)
        v1[i] = i;
    cout << v1;
    Vector<int, 4> v2;
    for(i = 0; i < 4; i++)
        v2[i] = i;
        cout << v2;

    return 0;
}
