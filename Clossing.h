#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Type { Shirt, Jeans, Jacket };
string eType[] = { "Shirt", "Jeans", "Jacket" };

class Clothing {
private:
    string name;
    string description;
    string location;
    string color;
    int size;
    Type type;
public:

    Clothing(string name, string description, string location, string color, int size, enum Type type) {
        this->name = name;
        this->description = description;
        this->location = location;
        this->color = color;
        this->size = size;
        this->type = type;
    }
    string get_name() {
        return name;
    }
    string get_description() {
        return description;
    }
    string get_location() {
        return location;
    }
    string get_color() {
        return color;
    }
    int get_size() {
        return size;
    }
    Type get_type() {
        return type;
    }

    void print_clothing() {
        cout << "name = " << this->name << endl;
        cout << "description = " << this->description << endl;
        cout << "location = " << this->location << endl;
        cout << "color = " << this->color << endl;
        cout << "size = " << this->size << endl;
    }
};
