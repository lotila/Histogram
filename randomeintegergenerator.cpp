#include "randomeintegergenerator.h"

namespace Hist

{


RandomEintegerGenerator::RandomEintegerGenerator()
{

}

EInteger RandomEintegerGenerator::operator()()
{
   int randomValue = rand() % 5;
   return (EInteger)randomValue;

}

}
