#include"payment.h"

void payment::pay(string lines)
{
    stringstream ss;

    // store the string to string stream
    ss << lines;

    //Extraction of numerics i.e unit cost and quantity
    string temp;
    string str;
    double num;

    while (!ss.eof()) {

        //for getting each word in the string
        ss >> temp;


        // check for words
        if (stringstream(temp) >> str) {
            pay_type.push_back(str);
        }

        // check for numbers
        if (stringstream(temp) >> num)
        {
            pay_val.push_back(num);
            c_value = pay_val[0];
        }
        else
        {
            c_value = 0;
        }

    }


    // assigning variables

    is_exact = pay_type[0]; //if it is exact payment or not

    vector<string>::iterator dhs;
    vector<string>::iterator usd;
    vector<string>::iterator euro;

    dhs = find(pay_type.begin(), pay_type.end(), "Dhs");
    //checking the condition based on the ‘dhs’ result whether the element is present or not
    if (dhs != pay_type.end())
    {
        currency_name = "Dhs";
    }

    usd = find(pay_type.begin(), pay_type.end(), "USD");

    if (usd != pay_type.end())
    {
        currency_name = "USD";
    }

    euro = find(pay_type.begin(), pay_type.end(), "Euro");

    if (euro != pay_type.end())
    {
        currency_name = "Euro";
    }
}

string payment::currencyname()
{
    return currency_name;
}

double payment::paid_values()
{
    return c_value;
}
