#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Type { Shirt, Jeans, Jacket };
string eType[] = { "Shirt", "Jeans", "Jacket" };

class Clothing {

public:

    string name;
    string description;
    string location;
    string color;
    int size;
    Type type;


    Clothing(string name, string description, string location, string color, int size, enum Type type) {
        this->name = name;
        this->description = description;
        this->location = location;
        this->color = color;
        this->size = size;
        this->type = type;

        cout << "name = " << this->name << endl;
        cout << "description = " << this->description << endl;
        cout << "location = " << this->location << endl;
        cout << "color = " << this->color << endl;
        cout << "size = " << this->size << endl;
    }
};
