#include <iostream>
#include <string>

class Contact {
    private:
    std::string name;
    int phoneNumber;
    enum gender {M,F};
    public:
    Contact(const std::string& n, const int& p, Contact::gender& g)
    : name(n), phoneNumber(p), Contact::gender(g) {}
}