#ifndef ADV2_H
#define ADV2_H

#endif // ADV2_H
#ifndef ADV_H
#define ADV_H

#endif // ADV_H

#include "ADV.h"
namespace SAD  // Simple Automatic Differentiation
{
    class ADV2
    {
    public:
        ADV2(complexnumber v = 0, complexnumber d = 0, complexnumber dd = 0);

        // overloaded unary and binary operators
        ADV2 operator + (const ADV2 &x) const;
        ADV2 operator - (const ADV2 &x) const;
        ADV2 operator * (const ADV2 &x) const;
        ADV2 operator / (const ADV2 &x) const;

        friend ADV2 pow (const ADV2 &x,const double &p);
        friend ADV2 exp (const ADV2 &x);
        friend ADV2 sin(const ADV2 &x);
        friend ADV2 cos(const ADV2 &x);
        friend ADV2 log(const ADV2 &x);
        friend ADV2 operator + (const ADV2&, const complexnumber);
        friend ADV2 operator + (const complexnumber, const ADV2&);
        friend ADV2 operator - (const ADV2&, const complexnumber);
        friend ADV2 operator - (const complexnumber, const ADV2&);
        friend ADV2 operator * (const ADV2&, const complexnumber);
        friend ADV2 operator * (const complexnumber, const ADV2&);
        friend ADV2 operator / (const ADV2&, const complexnumber);
        friend ADV2 operator / (const complexnumber, const ADV2&);
        ADV val;  // value of the variable
        ADV dval;
    };


}
