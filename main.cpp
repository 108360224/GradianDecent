#include <iostream>
#include <cmath>
#include <vector>
#include "gradientdescent.h"
using namespace std;
double esp=1e-24;
complexnumber c(1e-10,1e-10);
Xparam x = {c};
double lr = 0.01;
complexnumber func(Xparam x){
    complexnumber y = pow(x[0],2) + 4.0;
    return y;
}


int main()
{

    functionlist funclist = {&func};
    GradianDecent g = {funclist,&x,esp,lr};
    g.run(1000);
    for(unsigned i=0;i<x.size();i++){
        cout << "x" << i << ":" << x[i] << " ";
    }
    cout << endl;
    cout << func(x) << " ~= 0" << endl;

}

