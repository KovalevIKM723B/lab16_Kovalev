#include <iostream>
#include <string>
using namespace std;


class Customer
{
    string Name;
    string Surname;
    string Patronymic;
    string Adress;
    int Telephone;
    int CardNumber;
    int BankNumber;
public:
    void set_Name(string N)
    {
        Name = N;
    }
    void set_Surname(string S)
    {
        Surname = S;
    }
    void set_Patronymic(string P)
    {
        Patronymic = P;
    }
    void set_Adress(string A)
    {
        Adress = A;
    }
    void set_Telephone(int T)
    {
        Telephone = T;
    }
    void set_CardNumber(int C)
    {
        CardNumber = C;
    }
    void set_BankNumber(int B)
    {
        BankNumber = B;
    }
    string get_Name()
    {
        return Name;
    }
    string get_Surname()
    {
        return Surname;
    }
    string get_Patronymic()
    {
        return Patronymic;
    }
    string get_Agress()
    {
        return Adress;
    }
    int get_Telephone()
    {
        return Telephone;
    }
    int get_CardNumber()
    {
        return CardNumber;
    }
    int get_BankNumber()
    {
        return BankNumber;
    }
};

int main()
{
    int number;
    string Name;
    string Surname;
    string Patronymic;
    string Adress;
    int Telephone;
    int CardNumber;
    int BankNumber;
    cout << "Enter the number of clients" << endl;
    cin >> number;
    Customer* Customers = new Customer[number];
    for (int i = 0; i < number; i++)
    {
        cout << "Enter name" << endl;
        cin >> Name;
        Customers[i].set_Name(Name);
        cout << "Enter surname" << endl;
        cin >> Surname;
        Customers[i].set_Surname(Surname);
        cout << "Enter patronymic" << endl;
        cin >> Patronymic;
        Customers[i].set_Patronymic(Patronymic);
        cout << "Enter adress" << endl;
        cin >> Adress;
        Customers[i].set_Adress(Adress);
        cout << "Enter telephone" << endl;
        cin >> Telephone;
        Customers[i].set_Telephone(Telephone);
        cout << "Enter card number" << endl;
        cin >> CardNumber;
        Customers[i].set_CardNumber(CardNumber);
        cout << "Enter bank number" << endl;
        cin >> BankNumber;
        Customers[i].set_BankNumber(BankNumber);
    }
    cout << endl << endl << endl;

    int Min, Max;
    cout << "Enter mimimum and maximum limits\n";
    cin >> Min >> Max;
    for (int i = 0; i < number; i++)
    {
        if (Min > Max)
        {
            cout << "Minimal value biggest then maximal";
            return 0;
        }
        else if (Customers[i].get_CardNumber() >= Min && Customers[i].get_CardNumber() <= Max)
        {
            cout << "Information: surname; name; patronymic; adress; telephone; card number; bank number " << endl;
            cout << Customers[i].get_Surname() << "  " << Customers[i].get_Name() << "  " << Customers[i].get_Patronymic() << "  " << Customers[i].get_Agress() << "  " << Customers[i].get_Telephone() << "  " << Customers[i].get_CardNumber() << "  " << Customers[i].get_BankNumber() << '\t' << endl;
        }
    }
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number - 1; j++)
        {
            if (Customers[j].get_Surname() > Customers[j + 1].get_Surname())
            {
                Customer temp = Customers[j];
                Customers[j] = Customers[j + 1];
                Customers[j + 1] = temp;
            }
        }
    }
    cout << endl << endl << endl;
    cout << "Sorted information by surname: surname; name; patronymic; adress; telephone; card number; bank number " << endl;
    for (int i = 0; i < number; i++)
    {
        cout << Customers[i].get_Surname() << "  " << Customers[i].get_Name() << "  " << Customers[i].get_Patronymic() << "  " << Customers[i].get_Agress() << "  " << Customers[i].get_Telephone() << "  " << Customers[i].get_CardNumber() << "  " << Customers[i].get_BankNumber() << '\t' << endl;
    }
}