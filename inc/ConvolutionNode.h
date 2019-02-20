#pragma once

#include "NeuralNetworkNode.h"
#include "Tensor.h"

namespace Machina::NeuralNetwork
{
    template<typename T>
    class ConvolutionNode : public Machina::NeuralNetwork::NeuralNetworkNode<T>
    {
    public:
        ConvolutionNode() { }
    };
}