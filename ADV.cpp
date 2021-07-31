#include"ADV.h"
#include <cmath>
#include <vector>
#include <iostream>

namespace SAD {


    ADV::ADV(complexnumber v, complexnumber d) : val(v), dval(d) {}

    ADV ADV::operator+(const ADV &x) const
    {
        ADV y;
        y.val = val + x.val;
        y.dval = dval + x.dval;
        return y;
    }

    ADV ADV::operator-(const ADV &x) const
    {
        ADV y;
        y.val = val - x.val;
        y.dval = dval - x.dval; // sum rule
        return y;
    }

    ADV ADV::operator*(const ADV &x) const
    {
        ADV y;
        y.val = val*x.val;
        y.dval = x.val*dval + val*x.dval; // product rule
        return y;
    }
    ADV ADV::operator/(const ADV &x) const
    {
        ADV y;
        y.val = val/x.val;
        y.dval = (dval*x.val-val*x.dval)/(x.val*x.val); // product rule
        return y;
    }
    ADV pow(const ADV &x,const double &p)
    {
        ADV y;
        y.val = pow(x.val,p);
        y.dval = p*pow(x.val,p-1)*x.dval;
        return y;
    }
    ADV exp(const ADV &x)
    {
        ADV y;
        y.val = exp(x.val);
        y.dval = exp(x.val)*x.dval;
        return y;
    }
    ADV sin(const ADV &x)
    {
        ADV y;
        y.val = std::sin(x.val);
        y.dval = std::cos(x.val)*x.dval; // chain rule
        return y;
    }

    ADV cos(const ADV &x)
    {
        ADV y;
        y.val = std::cos(x.val);
        y.dval = -std::sin(x.val)*x.dval; // chain rule
        return y;
    }
    ADV operator + (const ADV &x, const complexnumber val)
    {
        ADV y;
        y.val = x.val+val;
        y.dval = x.dval;
        return y;
    }
    ADV operator + (const complexnumber val, const ADV &x)
    {
        ADV y;
        y.val = x.val+val;
        y.dval = x.dval;
        return y;
    }
    ADV operator - (const ADV &x, const complexnumber val)
    {
        ADV y;
        y.val = x.val-val;
        y.dval = x.dval;
        return y;
    }
    ADV operator - (const complexnumber val, const ADV &x)
    {
        ADV y;
        y.val = val-x.val;
        y.dval = x.dval;
        return y;
    }
    ADV operator * (const ADV &x, const complexnumber val)
    {
        ADV y;
        y.val = x.val*val;
        y.dval = x.dval*val;
        return y;
    }
    ADV operator * (const complexnumber val, const ADV &x)
    {
        ADV y;
        y.val = x.val*val;
        y.dval = x.dval*val;
        return y;
    }
    ADV operator / (const ADV &x, const complexnumber val)
    {
        ADV y;
        y.val = x.val/val;
        y.dval = x.dval/val;
        return y;
    }
    ADV operator / (const complexnumber val, const ADV &x)
    {
        ADV y;
        y.val = val/x.val;
        y.dval = -(val*x.dval)/(x.val*x.val);
        return y;
    }




    ADV operator * (const DABBA &d, const ADV &x)
    {
        ADV y;
        if(x.val == 0.0 && x.dval == 0.0 && y.dval == 0.0){
            y.val = x.dval;
            y.dval = 0;
        }
        else{
            y.val = x.dval;
            y.dval = (d*y).dval;
        }
        return y;
    }
}
