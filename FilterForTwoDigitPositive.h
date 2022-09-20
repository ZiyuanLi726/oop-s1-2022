#include "FilterGeneric.h"
#pragma once



class FilterForTwoDigitPositive : public FilterGeneric
{

private:
    virtual bool g(int);

};