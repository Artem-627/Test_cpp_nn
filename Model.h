#pragma once
#include <iostream>
#include <vector>
using namespace std;
#define th_ this->

class Model {
private:
	vector<double> neurons;

	int amount;
	int neurons_info;
public:
	Model(int amount, int num, vector<double> n[]) {
		th_ amount = amount;
		th_ neurons[amount];
		for (int i = 0; i < amount; i++) {
			th_ neurons[i].push_back(n[i]);
		}
	}
	void add(int num[]) {
		
	}
};