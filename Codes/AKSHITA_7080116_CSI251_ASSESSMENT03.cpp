// AKSHITA_7080116_CSI251_ASSESSMENT03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Item.h"
#include"payment.h"
#include"conversion.h"

void reader(string files);
void display(string filename);

int main()
{
    // MAIN MENU DRIVE

    string choice;

    while (choice != "-1")
    {
        cout << "PRESS 0 TO START OR PRESS -1 TO END" << "\n\n";
        cout << "Enter : ";

        cin >> choice;

        if (choice == "0")
        {
            string opt = "";

            while (opt != "9")
            {
                cout << endl;
                cout << "Select One Of The Following Test Data : - " << "\n";

                cout << "\n";
                cout << "Press 1 to pay in Dirhams Dhs" << "\n";
                cout << "Press 2 to pay in USD $ " << "\n";
                cout << "Press 3 to pay in Euros E" << "\n";  //Using E to represent euro because the symbol of euro can't be read
                cout << "Press 9 to quit" << "\n\n";

                cout << "Enter your option number : ";
                cin >> opt;
                cout << "\n";

                if (opt == "1")
                {
                    char ans = ' ';

                    while (ans != 'B')
                    {
                        cout << "TEST DATA 1 : - " << "\n";

                        cout << "\n";
                        cout << "Press R to read items" << "\n";
                        cout << "Press D to display bill" << "\n";
                        cout << "Press B to go back to the previous menu" << "\n";
                        cout << "Press Q to quit" << "\n\n";

                        cout << "Enter your option : ";
                        cin >> ans;
                        cout << "\n";

                        if (ans == 'R' || ans == 'r')
                        {
                            reader("Test1.txt");
                        }
                        else if (ans == 'D' || ans == 'd')
                        {
                            display("Test1.txt");
                        }
                        else if (ans == 'B' || ans == 'b')
                        {
                            ans = 'B';
                        }
                        else if (ans == 'Q' || ans == 'q')
                        {
                            char an = ' ';

                            cout << "ARE YOU SURE??" << "\n";
                            cout << "PRESS Y FOR YES OR PRESS N FOR NO" << "\n\n";

                            cout << "Enter : ";

                            cin >> an;

                            if (an == 'Y' || an == 'y')
                            {
                                cout << endl;
                                cout << "End of Program" << "\n";
                                return 0;
                            }
                            else if (an == 'N' || an == 'n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout << "Invalid entry" << "\n";
                        }
                    }

                }

                else if (opt == "2")
                {
                    char ans = ' ';

                    while (ans != 'B')
                    {
                        cout << "TEST DATA 2 : - " << "\n";

                        cout << "\n";
                        cout << "Press R to read items" << "\n";
                        cout << "Press D to display bill" << "\n";
                        cout << "Press B to go back to the previous menu" << "\n";
                        cout << "Press Q to quit" << "\n\n";

                        cout << "Enter your option : ";
                        cin >> ans;
                        cout << "\n";

                        if (ans == 'R' || ans == 'r')
                        {
                            reader("Test2.txt");
                        }
                        else if (ans == 'D' || ans == 'd')
                        {
                            display("Test2.txt");
                        }
                        else if (ans == 'B' || ans == 'b')
                        {
                            ans = 'B';
                        }
                        else if (ans == 'Q' || ans == 'q')
                        {
                            char an = ' ';

                            cout << "ARE YOU SURE??" << "\n";
                            cout << "PRESS Y FOR YES OR PRESS N FOR NO" << "\n\n";

                            cout << "Enter : ";

                            cin >> an;

                            if (an == 'Y' || an == 'y')
                            {
                                cout << endl;
                                cout << "End of Program" << "\n";
                                return 0;
                            }
                            else if (an == 'N' || an == 'n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout << "Invalid entry" << "\n";
                        }
                    }
                }

                else if (opt == "3")
                {
                    char ans = ' ';

                    while (ans != 'B')
                    {

                        cout << "TEST DATA 3 : - " << "\n";

                        cout << "\n";
                        cout << "Press R to read items" << "\n";
                        cout << "Press D to display bill" << "\n";
                        cout << "Press B to go back to the previous menu" << "\n";
                        cout << "Press Q to quit" << "\n\n";

                        cout << "Enter your option : ";
                        cin >> ans;
                        cout << "\n";

                        if (ans == 'R' || ans == 'r')
                        {
                            reader("Test3.txt");
                        }
                        else if (ans == 'D' || ans == 'd')
                        {
                            display("Test3.txt");
                        }
                        else if (ans == 'B' || ans == 'b')
                        {
                            ans = 'B';
                        }
                        else if (ans == 'Q' || ans == 'q')
                        {
                            char an = ' ';

                            cout << "ARE YOU SURE??" << "\n";
                            cout << "PRESS Y FOR YES OR PRESS N FOR NO" << "\n\n";

                            cout << "Enter : ";

                            cin >> an;

                            if (an == 'Y' || an == 'y')
                            {
                                cout << endl;
                                cout << "End of Program" << "\n";
                                return 0;
                            }
                            else if (an == 'N' || an == 'n')
                            {
                                break;
                            }
                        }
                        else
                        {
                            cout << "Invalid entry" << "\n";
                        }
                    }
                }

                else if (opt == "9")
                {
                    cout << "ARE YOU SURE??" << "\n\n";
                    break;
                }

                else
                {
                    cout << "Invalid Entry" << "\n";
                }
            }
        }
        else if (choice == "-1")
        {
            cout << endl;
            cout << "End of Program" << "\n";
            return 0;
        }
        else
        {
            cout << endl;
            cout << "Invalid Entry" << "\n\n";
        }
    }
};

void reader(string files)
{
    string filename = files;
    string words;

    ifstream in;
    in.open(filename, ios::in);
    if (!in)
    {
        cout << "File not found";
    }
    else
    {

        while (getline(in, words)) //to read line by line
        {
            cout << words << "\n";

        }

        cout << "\n";
        in.close();
    }
}

void display(string filename)
{
    
    //READING ALL LINES EXCEPT THE LAST

    ifstream ifs(filename);

    if (!ifs.is_open())
         (cout << "Cannot open file\n"), 1;

    ifs >> noskipws;

    string data((istream_iterator<char>(ifs)), istream_iterator<char>());

    data.resize(data.find_last_of('\n'));

    istringstream iss(data);

    conversion c1;

    c1.print();

    for (string line; getline(iss, line); )
    {
        Item i; // Storing item details
        i.item(line);

        c1.total_purchase(i.total_item_cost()); // total purchase in dhs

        c1.get_vector(i.return_vector());

        c1.get_total_cost(i.total_item_cost());

        c1.printbill();
    }

    //READING THE LAST LINE

    ifstream in(filename);

    string l;

    if (in)
    {
        while (in >> std::ws && std::getline(in, l)); // skips the empty lines

        payment p; // Storing item details
        p.pay(l);

        c1.convert_tp(p.currencyname());
        c1.paid_val(p.paid_values());
        c1.con_return_amount(p.currencyname());
    }
    else
    {
        cout << "Unable to open file.\n";
    }
}