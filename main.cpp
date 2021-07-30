#include <iostream>
#include <cmath>
#include <vector>
#include "gradientdescent.h"





ADV func1(adXparam x){
    ADV y1 = x[1] + 2.0*x[2]+pow(x[0],2)-10.0;
    return y1;
}
complexnumber func1_check(vector<complexnumber> x){
    complexnumber y1 = x[1] + 2.0*x[2]+pow(x[0],2)-10.0;
    return y1;
}
int main()
{
    functionlist funclist={&func1};

    using namespace SAD;
    using namespace std;

    vector<complexnumber> x={{1,1},{1,1},{1,1}};


    GradianDecent gd(funclist,x,0.01);
    gd.run(100);
    cout<<"x0:"<<x[0]<<endl;
    cout<<"x1:"<<x[1]<<endl;
    cout<<"x2:"<<x[2]<<endl;
    cout<<"y:"<<func1_check(x)<<endl;
    }

