#ifndef GRADIENTDESCENT_H
#define GRADIENTDESCENT_H

#endif // GRADIENTDESCENT_H
#include <iostream>
#include <array>
#include <vector>
#include <complex>
using namespace std;
typedef complex<double> complexnumber;
typedef vector <complexnumber> Xparam;
typedef complexnumber (*functiontype)(Xparam);
typedef vector<functiontype> functionlist;
class GradianDecent{
public:
    GradianDecent(functionlist funclist,Xparam *x,double esp,double lr);
    void run(int times);
private:
    functionlist funclist;
    double esp;
    complexnumber lr;
    Xparam *x;
    Xparam diffunc(functiontype func);
    void gradiandecent();
};

