#include "gradientdescent.h"
#include <cmath>

using namespace std;

GradianDecent::GradianDecent(functionlist funclist,Xparam *x,double esp,double lr){
    this -> funclist = funclist;
    this -> esp = esp;
    this -> lr = lr;
    this -> x = x;
}
Xparam GradianDecent::diffunc(functiontype func){
    Xparam dy = *(this->x);

    Xparam xplusdx = *(this->x);
    for(unsigned i=0;i<(*(this->x)).size();i++){
        xplusdx[i] = (*(this->x))[i]+this->esp;

        double dre=(real(pow(func(xplusdx),2))-real(pow(func(*(this->x)),2)))/this->esp;

        double dim=(imag(pow(func(xplusdx),2))-imag(pow(func(*(this->x)),2)))/this->esp;
        complexnumber comp(dre,dim);
        dy[i] = comp;
    }
    return dy;
}
void GradianDecent::gradiandecent(){
    for(unsigned i=0;i<this->funclist.size();i++){
        Xparam dy = diffunc((this->funclist)[i]);
        for(unsigned i=0;i<(*(this->x)).size();i++){
            (*(this->x))[i] = (*(this->x))[i] - lr*conj(dy[i]);
        }
    }



}

void GradianDecent::run(int times){

    for(int i=0;i<times;i++){
        this->gradiandecent();
        for(unsigned i=0;i<(*(this->x)).size();i++){


        }

    }

}


