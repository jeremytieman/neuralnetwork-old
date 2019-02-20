#pragma once

#include <functional>
#include <numeric>
#include <vector>

namespace Machina::NeuralNetwork
{
    template<typename T>
    class Tensor
    {
    public:
        Tensor() {}

        Tensor(const std::vector<size_t>& dimensions) : _dimensions(dimensions),
            _data([dimensions]() -> size_t { size_t acc = 1; return std::accumulate(std::begin(dimensions), std::end(dimensions), acc, std::multiplies<size_t>()); }())
        {

        }

        T& operator[](const size_t& _Pos)
        {
            return _data[_Pos];
        }

        std::vector<size_t> dimensions() const { return _dimensions; }

        double dimension(const size_t& _Pos) const
        {
            return _dimensions[_Pos];
        }

    private:
        std::vector<T> _data;
        std::vector<size_t> _dimensions;
    };
}