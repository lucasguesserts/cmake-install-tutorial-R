#include <iostream>

#include <P/ClassP.hpp>

class ClassR : public P::ClassP {
public:
    ClassR() = default;
    ~ClassR() = default;
    virtual void print() final {
        P::ClassP::print();
        std::cout << "ClassR" << std::endl;
    }
};

int main() {
    ClassR r;
    r.print();
    return 0;
}
