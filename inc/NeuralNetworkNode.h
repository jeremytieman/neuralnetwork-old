#pragma once

#include <random>
#include "Tensor.h"
#include <vector>

namespace Machina::NeuralNetwork
{
    template<typename T>
    class NeuralNetworkNode
    {
    public:
        virtual void forwardProp(const Machina::NeuralNetwork::Tensor<T>& tensor) = 0;
        virtual void backProp() = 0;
    };

    /*
    class AddNode : public NeuralNetworkNode
    {
    public:
        AddNode(const size_t& size) : bias(size)
        {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_real_distribution<> dist(0, 1);
            for (size_t i = 0; i < size; ++i) bias[i] = dist(gen);
        }

        virtual void forwardProp(const std::vector<double>& input)
        {

        }

        virtual void backProp()
        {

        }

    private:
        Machina::NeuralNetwork::Tensor<T> bias;
    };

    class MultiplyNode : public NeuralNetworkNode
    {
    public:
        MultiplyNode(const size_t& size) : weights(size)
        {
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_real_distribution<> dist(0, 1);
            for (size_t i = 0; i < size; ++i) weights[i] = dist(gen);
        }

        virtual void forwardProp(const std::vector<double>& input)
        {

        }

        virtual void backProp()
        {

        }

    private:
        std::vector<double> weights;
    };
    */
}