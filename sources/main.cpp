#include <iostream>
#include <variant>

#include "vector.hpp"

double read_and_sum(int s) {
  Vector v(s);

  for (int i = 0; i != s; i++)
    std::cin >> v[i];

  double sum = 0;
  for (int i = 0; i != s; i++)
    sum += v[i];

  return sum;
}

enum class Color { red, green, blue };
enum class TrafficLight { green, yellow, red };

enum class Type { ptr, num };
struct Node {};

struct Entry {
  std::string name;
  std::variant<Node*, int> v;
};

void f(Entry* pe) {
  if (std::holds_alternative<int>(pe->v))
    std::cout << std::get<int>(pe->v) << std::endl;
}

int main() {
  Vector v{6};
  auto tl = TrafficLight::yellow;

  Entry e{
      .name = "arha",
      .v = 12,
  };
  f(&e);

  std::cout << "hello world" << std::endl;
  return 0;
}
