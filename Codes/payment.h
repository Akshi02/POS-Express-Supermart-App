#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class payment
{
private:
    string is_exact;
    string currency_name;
    double c_value;
    vector< string > pay_type;
    vector< double > pay_val;
public:
    void pay(string lines);
    string currencyname();
    double paid_values();
};
