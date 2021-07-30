#include "gradientdescent.h"
#include <cmath>

using namespace std;
using namespace SAD;
GradianDecent::GradianDecent(functionlist funclist,vector<complexnumber> &x,double lr){
    this -> funclist = funclist;

    this -> lr = lr;
    this -> x = &x;
}

vector<complexnumber> GradianDecent::particularDiff(vector<complexnumber> x,functiontype func){
    vector<complexnumber> y;
    for(unsigned i=0;i<x.size();i++){
        vector <ADV> ax;
        for(unsigned j=0;j<x.size();j++){
            if(i==j){
                ax.emplace_back(x[i],1);
            }else{
                ax.emplace_back(x[i],0);
            }

        }
        y.emplace_back(pow(func(ax),2).dval);
    }
    return y ;

}
void GradianDecent::gradiandecent()
{
    vector<complexnumber> dy=particularDiff(*x,funclist[0]);
    for(unsigned i=0;i<(*x).size();i++){
        (*x)[i]=(*x)[i]-lr*dy[i];
    }
}
void GradianDecent::run(int times)
{
    for(int i=0;i<times;i++){
        gradiandecent();
    }
}

