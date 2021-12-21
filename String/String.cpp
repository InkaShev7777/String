#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout << "VVedite text: ";
    getline(cin, str);
    
    int kol_razd = 0;
    int vibor;
    int kol_bukv = 0;
    int kol_cifir = 0;
    do
    {
        cout << str << "\n\n\n";
        cout << "\tMenu\n";
        cout << "1 - Kol.razd.znakov\n";
        cout << "2 - Kol.bukv\n";
        cout << "3 - Kol.cifir\n";
        cout << "4 - Vivod v obr.por i zamenf probelov na tochku\n";
        cout << "5 - Poisk 'Hello'\n";
        cout << "0 - Exit\n\n";
        cout << "Sdelayte svoy vibor: ";
        cin >> vibor;
        switch (vibor)
        {
        case 1:
            kol_razd = 0;
            system("cls");
            for (int i = 0;i < str.length();i++)
            {
                if (str[i] == ' ')
                {
                    kol_razd++;
                }
            }
            cout << "Kol.razd: " << kol_razd << "\n";
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            kol_bukv = 0;
            for (int i = 0;i <= str.length();i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z'|| str[i] >= 'a' && str[i] <= 'z')
                {
                    kol_bukv++;
                }
            }
            cout << "Kol.bukv" << kol_bukv << "\n";
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            for (int i = 0;i <= str.length();i++)
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    kol_cifir++;
                }
            }
            cout << "Kol.cifir" << kol_cifir << "\n";
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            while (str.find(",") < str.length())
            {
                str.replace(str.find(","), 1, ".");
            }
            for (int i = 0;i <= str.length();i++)
            {
                cout <<str[str.length()-i];
            }
            cout << "\n";
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            int kol_hello = 0;
            /*size_t found = str.find("Hello");
            while (found < str.length())
            {
                found = str.find("Hello",found+1);
                kol_hello++;
            }*/
            for (int i = 0;i < str.length();i++)
            {
                if ((str[i] == 'H' && str[i + 1] == 'e' && str[i + 2] == 'l' && str[i + 3] == 'l' && str[i + 4] == 'o' && str[i+5] == ',') || (str[i] == 'H' && str[i + 1] == 'e' && str[i + 2] == 'l' && str[i + 3] == 'l' && str[i + 4] == 'o' && str[i + 5] == ' '))
                {
                    kol_hello++;
                    i += 5;
                }
            }
            cout << "Kol_hello: " << kol_hello << "\n";
            system("pause");
            system("cls");
            break;
           
        }
    } while (vibor != 0);
}


