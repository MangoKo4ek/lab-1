#include <iostream>
void ufs() {
	std::cout << "goida";
};

struct Number {
    int value;

    Number(int v) : value(v) {}

    Number operator*(Number& other) {
        return Number(value * other.value);
    }
};