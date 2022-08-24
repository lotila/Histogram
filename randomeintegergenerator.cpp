#include "randomeintegergenerator.h"
#include <iostream>
#include <time.h>
namespace Hist

{


RandomEintegerGenerator::RandomEintegerGenerator()
{
;
}

EInteger  RandomEintegerGenerator::operator()()
{
    srand (time(NULL));
   int randomValue = rand() % 5;
   return (EInteger)randomValue;

}

}
