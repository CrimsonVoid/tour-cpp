#include "vector.hpp"

Vector::Vector(int s) : elem{new double[s]}, sz{s} {}
Vector::~Vector() { delete[] elem; }

auto Vector::operator[](int i) -> double& { return elem[i]; }
auto Vector::size() -> int { return sz; }
