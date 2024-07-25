#include"Item.h"

void Item::item(string line)
{
    stringstream ss;

    // store the string to string stream
    ss << line;

    //Extraction of numerics i.e unit cost and quantity
    string temp;
    string str;
    double number;

    while (!ss.eof()) {

        //for getting each word in the string
        ss >> temp;


        // check for words
        if (stringstream(temp) >> str) {
            wrds.push_back(str);
        }

        // check for numbers
        if (stringstream(temp) >> number) {
            num.push_back(number);
        }
    }

    name = wrds[0];
    cost = num[0];
    quantity = num[1];

    //cout << "Item Name : " << name << "\n";
    //cout << "Total Cost : " << tc << " " << " Dhs" << "\n\n";

}


double Item::total_item_cost()
{
    return num[0] * num[1];
}

vector <string> Item::return_vector()
{
    return wrds;
}
