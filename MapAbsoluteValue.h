#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include "MapGeneric.h"

class MapAbsoluteValue : public MapGeneric 

{

public:
    MapAbsoluteValue();
    ~MapAbsoluteValue();


private:
    int f(int input);
};

#endif