#pragma once
#include <iostream>
#include <vector>
using namespace std;
#define th_ this->

class Model {
private:
	int amount_layers;
public:
	Model(int amount_layers) {
		th_ amount_layers = amount_layers;
	}
};