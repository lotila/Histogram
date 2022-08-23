#ifndef RANDOMEINTEGERGENERATOR_H
#define RANDOMEINTEGERGENERATOR_H

#include "histogrambase.h"
#include <iostream>

namespace Hist
{

class RandomEintegerGenerator //    : public RandomEintegerGeneratorBase
{
public:
    RandomEintegerGenerator();

    EInteger operator()() ;


};




}
#endif // RANDOMEINTEGERGENERATOR_H
