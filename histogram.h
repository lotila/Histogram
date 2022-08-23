#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include "histogrambase.h"

#include <vector>

        namespace Hist
        {

class Histogram : public HistogramBase
{
public:
    Histogram();

    void add(EInteger);

    // Return the value that occurrs most often in the data set (I.e. there exists no other value that occurs more often than the return value)
    /**
     * @exception integers vector is empty
     */
    EInteger getMode() const;



    // Return the smallest value in the data set, according to default ordering relation of integer numbers
    /**
     * @exception integers vector is empty
     */
    EInteger getMinValue() const;



    // Return the largest value in the data set
    /**
     * @exception integers vector is empty
     */
    EInteger getMaxValue() const;



private:
    std::vector<EInteger> integers;
};


}

#endif // HISTOGRAM_H


