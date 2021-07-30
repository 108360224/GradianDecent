#ifndef ADV_H
#define ADV_H

#endif // ADV_H
#include "variabletype.h"
namespace SAD  // Simple Automatic Differentiation
{
    class ADV
    {
    public:
        ADV(complexnumber v = 0, complexnumber d = 0);

        // overloaded unary and binary operators
        ADV operator + (const ADV &x) const;
        ADV operator - (const ADV &x) const;
        ADV operator * (const ADV &x) const;
        ADV operator / (const ADV &x) const;

        friend ADV pow (const ADV &x,const double &p);
        friend ADV exp (const ADV &x);
        friend ADV sin(const ADV &x);
        friend ADV cos(const ADV &x);

        friend ADV operator + (const ADV&, const complexnumber);
        friend ADV operator + (const complexnumber, const ADV&);
        friend ADV operator - (const ADV&, const complexnumber);
        friend ADV operator - (const complexnumber, const ADV&);
        friend ADV operator * (const ADV&, const complexnumber);
        friend ADV operator * (const complexnumber, const ADV&);
        friend ADV operator / (const ADV&, const complexnumber);
        friend ADV operator / (const complexnumber, const ADV&);
        complexnumber val;  // value of the variable
        complexnumber dval;  // derivative of the variable
    };

}
