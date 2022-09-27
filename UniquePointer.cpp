#include <iostream>
#include <memory>
#include <sstream>

class Dog
{
    std::string m_name;

public:
    Dog()
    {
        std::cout << std::endl
             << "Nameless Dog is created !" << std::endl;
    }

    Dog(const std::string& name) : m_name(name)
    {
        std::cout << std::endl
             << "Dog " << m_name << " is created !" << std::endl;
    }

    inline virtual ~Dog()
    {
        std::cout << std::endl
             << "Dog " << m_name << " is destroyed !" << std::endl;
    }
};

void test()
{
    std::unique_ptr<Dog> P(new Dog("Tomy"));
    // std::unique_ptr<Dog[]> P1(new Dog["Tomy", "Gutter", "Shharper"]);
    std::unique_ptr<Dog[]> P2(new Dog[3]);
}

class X {
    public:
    int y;
};

int main()
{
    std::cout << "Welcome to the gitHub !!" << std::endl;
    test();

    int x = 49;
    std::cout << std::endl << std::hex << x << std::endl;

    std::stringstream ss;
    std::cout << std::endl
              << "Lets see --> " << ss.str() << std::endl;

    X x1;
    X x2;

    const X* D1 = &x1;
    X* const D2 = &x2;

    D1->y = 7; // Not Allowed as trying to change the state of const object.
    D2->y = 7;

    return 0;
}