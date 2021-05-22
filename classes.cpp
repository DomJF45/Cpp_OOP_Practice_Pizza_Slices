#include <iostream>
#include "classes.h"
using namespace std;

void pizza::setNumOfSlice() 
{
	num_slice -= 1;
}

int pizza::getNumOfSlice()
{
	return num_slice;
}