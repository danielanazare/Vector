#include <iostream>
#include "Vector.h"
#include <assert.h>
#include <algorithm>
#include <iterator>

using namespace std;


int main()
{

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

    Vector<int, 10> v1;
    for(int i = 0; i < 10; i++)
        v1[i] = i;
    cout << v1;

    Vector<char, 4> v3;
    for(int i = 0; i < 4; i++)
        v3[i] = char(i + 'a');
    cout << v3;


    Vector<int, 4 > V(3); /// => V.vectorpointer = {3, 3, 3, 3}

    int v5[]{3, 3, 3, 3};

    ///caz reusit
    assert(sizeof(v5)/sizeof(int) == sizeof(V.getSize()));
    for(int i = 0; i < V.getSize(); i++)
        assert(v5[i] == V[i]);

        ///fail
    v5[2] = 7;
    assert(sizeof(v5)/sizeof(int) == sizeof(V.getSize()));
    for(int i = 0; i < V.getSize(); i++)
        assert(v5[i] == V[i]);


    return 0;
}


