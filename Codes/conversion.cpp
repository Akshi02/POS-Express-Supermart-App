#include"conversion.h"

void conversion::total_purchase(double total)
{
    tp += total;
}

double conversion::get_total_purchase()
{
    return tp;
}

double conversion::paid_val(double val)
{
    paid = val;
    return paid;
}

vector <string> conversion::get_vector(vector <string> vec)
{
    bill = vec;
    return bill;
}

double conversion::get_total_cost(double t)
{
    tic = t;
    return tic;
}

void conversion::convert_tp(string str)
{
    if (str == "Dhs")
    {
        dhs_pay = tp;

        cout << "\n\n";

        cout << right << setw(62) << "Total purchase" << setw(7) << " : " << setw(9) << dhs_pay << setw(7) << " Dhs" << " " << "\n";
    }
    if (str == "USD")
    {
        usd_pay = tp * 0.27;

        cout << "\n\n";

        cout << right << setw(62) << "Total purchase" << setw(7) << " : " << setw(10) << usd_pay << setw(4) << " $" << " " << "\n";
    }
    if (str == "Euro")
    {
        euro_pay = tp * 0.26;

        cout << "\n\n";

        cout << right << setw(62) << "Total purchase" << setw(7) << " : " << setw(10) << euro_pay << setw(5) << " E" << " " << "\n";
    }
}

void conversion::con_return_amount(string s)
{
    if (s == "Dhs")
    {
        return_dpay = 0;

        cout << right << setw(63) << "Payment made in" << setw(6) << " : " << setw(9) << tp << setw(7) << " Dhs" << " " << "\n";
        cout << right << setw(61) << "Amount return" << setw(8) << " : " << setw(4) << return_dpay << setw(12) << " Dhs" << " " << "\n";
    }
    if (s == "USD")
    {
        return_upay = (paid * 3.67) - (usd_pay * 3.67);  //NOTE:- 'paid' is the original value that the payment was made in.

        cout << right << setw(63) << "Payment made in" << setw(6) << " : " << setw(6) << paid << setw(8) << " $" << " " << "\n";
        cout << right << setw(61) << "Amount return" << setw(8) << " : " << setw(10) << return_upay << setw(6) << " Dhs" << " " << "\n";
    }
    if (s == "Euro")
    {
        return_epay = (paid * 3.83) - (euro_pay * 3.83);

        cout << right << setw(63) << "Payment made in" << setw(6) << " : " << setw(5) << paid << setw(10) << " E" << " " << "\n";
        cout << right << setw(61) << "Amount return" << setw(8) << " : " << setw(10) << return_epay << setw(7) << " Dhs" << " " << "\n";
    }
}

void conversion::print()
{
    cout << left << setw(21) << "Item Description" << " ";
    cout << left << setw(25) << "Unit Cost" << " ";
    cout << left << setw(23) << "Quantity" << " ";
    cout << left << setw(15) << "Total Item Cost" << " ";

    cout << "\n\n";
}


void conversion::printbill()
{
    cout << left << setw(22) << bill[0];
    cout << left << setw(6) << bill[1];
    cout << left << setw(20) << bill[2];
    cout << left << setw(4) << bill[3];
    cout << left << setw(20) << bill[4];

    cout << left << setw(9) << tic << " " << "Dhs" << endl;
}