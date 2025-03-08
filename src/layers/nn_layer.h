#pragma once

#include <iostream>

#include "../nn_utils/matrix.h"

class NNLayer {
protected:
	std::string name;

public:
	virtual ~NNLayer() = 0;

	virtual Matrix& forward(Matrix& A) = 0;
	virtual Matrix& backward(Matrix& dZ, float learning_rate) = 0;
	virtual void updateWeights(float learning_rate) = 0;
    virtual void zeroGradients() = 0;

	std::string getName() { return this->name; };

};

inline NNLayer::~NNLayer() {}
