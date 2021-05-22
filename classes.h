#include <iostream>
using namespace std;
#pragma once

class pizza 
{
public:
	//setter
	void setNumOfSlice();
	//getter
	int getNumOfSlice();
private:
	int num_slice = 8;
};