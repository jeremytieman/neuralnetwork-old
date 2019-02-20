#pragma once

#include "NeuralNetworkNode.h"
#include "Tensor.h"

namespace Machina::NeuralNetwork
{
    template<typename T>
    class AddNode : public Machina::NeuralNetwork::NeuralNetworkNode
    {
    public:
        AddNode(const Machina::NeuralNetwork::Tensor<T>& tensor) : _tensor(tensor) { }

        virtual void forwardProp(const Machina::NeuralNetwork::Tensor<T>& tensor)
        {

        }
        
        virtual void backProp()
        {

        }
    
    private:
        Machina::NeuralNetwork::Tensor<T> _tensor;
    };
}