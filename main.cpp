#include <iostream>
#include "BC.h"
#include "FC.h"


using namespace std;

int main()
{
    string p1,t1;
    BC bc1;
    FC fc1;

    p1 = bc1.b_c();
    cout << "\n" << p1;

    t1 = fc1.f_C(p1);
    cout << "\n" << t1;

    return 0;
}
