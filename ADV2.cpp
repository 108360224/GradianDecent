#include"ADV2.h"


namespace SAD {


    ADV2::ADV2(complexnumber v, complexnumber d, complexnumber dd) : val(ADV(v,d)), dval(ADV(d,dd)) {}

    ADV2 ADV2::operator+(const ADV2 &x) const
    {
        ADV2 y;
        y.val = val + x.val;
        y.dval = dval + x.dval;
        return y;
    }

    ADV2 ADV2::operator-(const ADV2 &x) const
    {
        ADV2 y;
        y.val = val - x.val;
        y.dval = dval - x.dval; // sum rule
        return y;
    }

    ADV2 ADV2::operator*(const ADV2 &x) const
    {
        ADV2 y;
        y.val = val*x.val;
        y.dval = x.val*dval + val*x.dval; // product rule
        return y;
    }
    ADV2 ADV2::operator/(const ADV2 &x) const
    {
        ADV2 y;
        y.val = val/x.val;
        y.dval = (dval*x.val-val*x.dval)/(x.val*x.val); // product rule
        return y;
    }
    ADV2 pow(const ADV2 &x,const double &p)
    {
        ADV2 y;
        y.val = pow(x.val,p);
        y.dval = p*pow(x.val,p-1)*x.dval;
        return y;
    }
    ADV2 exp(const ADV2 &x)
    {
        ADV2 y;
        y.val = exp(x.val);
        y.dval = exp(x.val)*x.dval;
        return y;
    }
    ADV2 sin(const ADV2 &x)
    {
        ADV2 y;
        y.val = sin(x.val);
        y.dval = cos(x.val)*x.dval; // chain rule
        return y;
    }

    ADV2 cos(const ADV2 &x)
    {
        ADV2 y;
        y.val = cos(x.val);
        y.dval = sin(x.val)*x.dval; // chain rule
        return y;
    }
    ADV2 log(const ADV2 &x)
    {
        ADV2 y;
        y.val = log(x.val);
        y.dval = (1.0/x.val)*x.dval; // chain rule
        return y;
    }
    ADV2 operator + (const ADV2 &x, const complexnumber val)
    {
        ADV2 y;
        y.val = x.val+val;
        y.dval = x.dval;
        return y;
    }
    ADV2 operator + (const complexnumber val, const ADV2 &x)
    {
        ADV2 y;
        y.val = x.val+val;
        y.dval = x.dval;
        return y;
    }
    ADV2 operator - (const ADV2 &x, const complexnumber val)
    {
        ADV2 y;
        y.val = x.val-val;
        y.dval = x.dval;
        return y;
    }
    ADV2 operator - (const complexnumber val, const ADV2 &x)
    {
        ADV2 y;
        y.val = val-x.val;
        y.dval = x.dval;
        return y;
    }
    ADV2 operator * (const ADV2 &x, const complexnumber val)
    {
        ADV2 y;
        y.val = x.val*val;
        y.dval = x.dval*val;
        return y;
    }
    ADV2 operator * (const complexnumber val, const ADV2 &x)
    {
        ADV2 y;
        y.val = x.val*val;
        y.dval = x.dval*val;
        return y;
    }
    ADV2 operator / (const ADV2 &x, const complexnumber val)
    {
        ADV2 y;
        y.val = x.val/val;
        y.dval = x.dval/val;
        return y;
    }
    ADV2 operator / (const complexnumber val, const ADV2 &x)
    {
        ADV2 y;
        y.val = val/x.val;
        y.dval = -1.0*(val*x.dval)/(x.val*x.val);
        return y;
    }
}
