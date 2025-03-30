#include <iostream>
using namespace std;


class Greeting {
public:
    Greeting(string name) { // Constructor takes a "prop"
        cout << "Hello, " << name << "!" << endl;
    }
};


int main() {
    Greeting g1("Himani"); // Passing "Himani" as a prop
    Greeting g2("Alice");  // Passing "Alice" as a prop
    Greeting g3("Bob");    // Passing "Bob" as a prop

    return 0;
}
