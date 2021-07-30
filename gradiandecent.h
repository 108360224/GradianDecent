#ifndef GRADIENTDESCENT_H
#define GRADIENTDESCENT_H

#endif // GRADIENTDESCENT_H
#include <iostream>
#include <array>
#include <vector>
#include <complex>
#include "ADV.h"
using namespace std;
using namespace SAD;
typedef complex<double> complexnumber;
typedef vector <ADV> adXparam;
typedef ADV (*functiontype)(adXparam);
typedef vector<functiontype> functionlist;
class GradianDecent{
public:
    GradianDecent(functionlist funclist,vector<complexnumber> &x,double lr);
    void run(int times);
    vector<complexnumber> particularDiff(vector<complexnumber> x,functiontype func);
    void gradiandecent();
private:
    functionlist funclist;
    double esp;
    double lr;
    vector<complexnumber> *x;

};

