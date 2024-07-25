#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Item
{
private:
    string name;
    double quantity;
    double cost;
    vector< string > wrds;
    vector< double > num;
public:
    void item(string line);
    double total_item_cost();
    vector <string> return_vector();
};
