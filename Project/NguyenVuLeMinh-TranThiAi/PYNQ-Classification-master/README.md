## PROJECT NAME: 
PYNQ Classification - Python on Zynq FPGA for Convolutional Neural Networks (Alpha Release)

## BRIEF DESCRIPTION:
This repository presents a fast prototyping framework, which is an Open Source framework designed to enable fast deployment of embedded Convolutional Neural Network (CNN) applications on PYNQ platforms.


## INSTRUCTIONS TO BUILD AND TEST THE PROJECT:

### 1. PYNQ SD Card Image

We have prepared a SD card image with pre-installed Caffe and Theano dependencies. A SD card with at least 16GB is needed. The static IP for the PYNQ Jupyter Notebook is 192.168.2.99

[Download Link (on Baidu Drive)](https://pan.baidu.com/s/1c2EmMvY)

[Download Link (on Google Drive)](https://drive.google.com/open?id=1A9MrN_zzbHYiIHJvnNQYFc3sXqWZBb6o)

If you wish to setup Caffe and Theano dependencies on your own, please see [MANUAL_INSTAL.md](MANUAL_INSTALL.md) for instructions. (NOT RECOMMENDED since multiple issues have been reported)

### 2. Vivado Project Setup - How to implement more CNN models?

Please go to hw/README.md for guide on regenerating the Vivado and Vivado HLS projects.

### 3 Upload bitstream is exported from Vivado to Jupyter
Please upload bitstream following python_notebooks\Theano\CIFAR_10\Bitstream to run
