#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "class Clossing.h"

using namespace std;

class Wardrobe {

    friend Clothing;

private:

    vector<Clothing> Clo;

public:

    void Add_Clo(Clothing& a) {
        Clo.push_back(a);
    }
    void goOut() {
        int n = 0;

        vector<int> count(eType->size());

        for (int i = 0; i < Clo.size(); i++) {
            count[Clo[i].type]++;
        }
        for (auto i : count)
        {
            if (i > 0)
                n++;
        }

        if (n >= 3) {
            cout << "The person want walk" << endl;
        }
        else {
            cout << "The person dont want walk" << endl;
        }
    }

    void Sort() {
        sort(Clo.begin(), Clo.end(), [](Clothing& a, Clothing& b) { return a.size < b.size; });
    }

};