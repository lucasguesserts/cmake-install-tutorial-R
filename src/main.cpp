#include <iostream>

#include <P/ClassP.hpp>

class ClassR : public P::ClassP {
public:
  ClassR() = default;
  ~ClassR() = default;
  virtual void print() final {
    nlohmann::json ex1 = nlohmann::json::parse(R"(
      {
          "pi": 3.141,
          "happy": true
      }
      )");
    P::ClassP::print(ex1);
    std::cout << "ClassR" << std::endl;
  }
};

int main() {
  ClassR r;
  r.print();
  return 0;
}
