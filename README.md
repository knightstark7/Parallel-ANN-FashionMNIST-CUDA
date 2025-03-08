# CSC14120 - Parallel Programming - 21KHMT1

## Final Project - Optimizing Artificial Neural Networks (ANN)

## Group information

Group name: HK(D)T

| Student ID | Name |
| ----------|-------|
| 21127050 | Trần Nguyên Huân |
| 21127181 | Nguyễn Nhật Tiến |
| 21127240 | Nguyễn Phát Đạt |

## Set up

- **CUDA**: Ensure that you have CUDA installed on your system. You can download it from [NVIDIA's website](https://developer.nvidia.com/cuda-downloads).
- **Make**: Required for building the project.
- **A modern C++ compiler**: GCC or Clang is recommended.
- Download [Fashion-MNIST dataset](https://github.com/zalandoresearch/fashion-mnist) and put in folder `mnist_dataset`.


## Features

- Fully implemented neural network in CUDA for high-performance computations.
- Optimized CUDA kernels for enhanced performance.
- MNIST dataset integration for training and testing the neural network.
- Customizable network architecture to experiment with different configurations.

## Steps

1. Clone the repository:

   ```bash
   git clone https://github.com/Phoenix8215/BuildCudaNeuralNetworkFromScratch
   cd BuildCudaNeuralNetworkFromScratch
   ```

2. Build the project using Make:

   ```bash
   make
   ```

3. Run the application:

   ```bash
   ./cuda-conv
   ```

## Acknowledgments

- Thanks to [pwlnk](https://github.com/pwlnk) for the original [cuda-neural-network](https://github.com/pwlnk/cuda-neural-network) project, which served as the inspiration and foundation for this work.
- Thanks to the developers and contributors of the CUDA toolkit and the MNIST dataset.
