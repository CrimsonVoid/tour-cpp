#ifndef VECTOR_HPP_
#define VECTOR_HPP_

struct Vector {
  Vector(int s);
  ~Vector();

  auto operator[](int i) -> double&;
  auto size() -> int;

private:
  double* elem;
  int sz;
};

#endif