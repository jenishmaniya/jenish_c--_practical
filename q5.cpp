#include <iostream>
using namespace std;

class car {
public:
    car(const string& carType) : type(carType) {}

    void showType() const {
        cout << "Type: " << type << endl;
    }

private:
    string type;
};

class tata : virtual public car {
public:
    tata(const string& carType, const string& tataType)
        : car(carType), tataType(tataType) {}

    void showtataType() const {
        cout << "Tata Type: " << tataType << endl;
    }

public:
    string tataType;
};

class honda : virtual public car {
public:
    honda(const string& carType, const string& hondaType)
        : car(carType), hondaType(hondaType) {}

    void showhondaType() const {
        cout << "honda Type: " << hondaType << endl;
    }

public:
    string hondaType;
};

class ford : public tata, public honda {
public:
    ford(const string& carType, const string& tataType, const string& hondaType)
        : car(carType), tata(carType, tataType), honda(carType, hondaType) {}

    void showfordType() const {
        cout << "ford Type: Hybrid of " << tata::tataType << " and " << honda::hondaType << endl;
    }
};

int main() {
    ford ford("car", "tata", "honda");

    cout << "car Information:\n";
    ford.showType();
    cout << endl;

    cout << "tata Information:\n";
    ford.showtataType();
    cout << endl;

    cout << "honda Information:\n";
    ford.showhondaType();
    cout << endl;

    cout << "ford Information:\n";
    ford.showfordType();

    return 0;
}

