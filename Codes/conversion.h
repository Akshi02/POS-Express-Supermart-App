#pragma once

#include"Item.h"
#include"payment.h"


#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class conversion : public Item, public payment //inheritance
{
private:
    double return_dpay; //in dhs
    double return_upay; //in usd
    double return_epay; //in euro
    double dhs_pay;
    double usd_pay; //in usd
    double euro_pay; //in euro
    double tp;
    double paid;
    vector< string > bill;
    double tic;
public:
    void total_purchase(double total);
    double get_total_purchase();
    double paid_val(double val);
    vector <string> get_vector(vector <string> vec);
    double get_total_cost(double t);
    void convert_tp(string str);
    void con_return_amount(string s);
    void print();
    void printbill();
};
