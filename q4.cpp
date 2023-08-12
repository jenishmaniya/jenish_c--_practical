//Write a Program which illustrates Method Overriding by using three classes.
#include<iostream>
using namespace std;
class family{
public:
    virtual void say() {
        cout << "FAMILY:" << endl;
    }
};

class son : public family {
public:
    void say() override {
        cout << "I AM SON:" << endl;
    }
};

class dad : public family {
public:
    void say() override {
        cout << "I AM DAD:" << endl;
    }
};

int main() {
    
    return 0;
}
