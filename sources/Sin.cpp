#include "Sin.h"
#include <cmath>

double Sinus(double val)
{
    const double eps = 0.0001;
    double rowElement; 
    double deviation = val;
    double sinus = val;
    int counter = 1;
    while (abs(deviation) > eps)
    {
        rowElement = - val * val / (2 * counter * (2 * counter + 1));
        deviation *=rowElement;
        sinus +=deviation;
        counter++;
    }
    return sinus;
}
