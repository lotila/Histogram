#include "histogram.h"

namespace Hist
{


void Histogram::add(EInteger integer)
{
    integers.push_back(integer);
}



 EInteger Histogram::getMode() const
 {
     if (integers.size() == 0)
     {
        throw "No Data!";
     }

     unsigned int numberOFtimes = 0;
     EInteger modeNumber = integers.at(0);

     // goes through vector and saves the most common number
     for (int i = 0; i < integers.size(); i++)
     {
         unsigned int currentNumber = (unsigned int)count(integers.begin(), integers.end(), integers.at(i));
         if ( currentNumber > numberOFtimes)
         {
             numberOFtimes = currentNumber;
             modeNumber = integers.at(i);
         }
     }

     return modeNumber;
 }





 EInteger Histogram::getMinValue() const
 {
     if (integers.size() == 0)
     {
        throw "No Data!";
     }

     EInteger minNumber = integers.at(0);

     // goes through vector and saves the smallest number
     for (int i = 0; i < integers.size(); i++)
     {
         if ( minNumber > integers.at(i))
         {
             minNumber = integers.at(i);
         }
     }

     return minNumber;
 }




 EInteger Histogram::getMaxValue() const
 {
     if (integers.size() == 0)
     {
        throw "No Data!";
     }

     EInteger maxNumber = integers.at(0);

     // goes through vector and saves the largest number
     for (int i = 0; i < integers.size(); i++)
     {
         if ( maxNumber < integers.at(i))
         {
             maxNumber = integers.at(i);
         }
     }

     return maxNumber;
 }







}
