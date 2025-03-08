all: build

build:
	nvcc -arch=sm_61 -o main src/neural_network.cu src/datasets/mnist_dataset.cu src/cost_functions/bce_cost.cu src/nn_utils/matrix.cu src/nn_utils/shape.cu src/layers/linear_layer.cu src/layers/relu_activation.cu src/layers/sigmoid_activation.cu src/layers/softmax_activation.cu src/main.cu 

clean:
	rm main

run:
	./main

.PHONY: all build clean run