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

    vector<Clothing> my_clothing;

public:

    void add_clo(Clothing& a) {
        my_clothing.push_back(a);
    }
    void go_out() {
        int count_of_types = 0;

        vector<int> count(eType->size());

        for (int i = 0; i < my_clothing.size(); i++) {
            count[my_clothing[i].get_type()]++;
        }
        for (auto i : count)
        {
            if (i > 0)
                count_of_types++;
        }

        if (count_of_types >= 3) {
            cout << "The person want walk" << endl;
        }
        else {
            cout << "The person dont want walk" << endl;
        }
    }

    void Sort() {//коли € м≥н€ю на маленьку букву м≥й контейнер типе, що забагато аргумент≥в
        sort(my_clothing.begin(), my_clothing.end(), [](Clothing& a, Clothing& b) { return a.get_size() < b.get_size(); });
    }

};