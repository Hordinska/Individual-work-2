#include <iostream>
#include <fstream>

using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main() {

    string str;
    ifstream infile;

    infile.open("in.txt");
    //якщо файл не найдений помилка
    if(!infile){
        cout << "Can't open file" << endl;
        return -1;
    }

    while(!infile.eof())
    {
        //присвоєння даних
        infile >> str;
        reverseStr(str);

        if(!infile.eof())
        {
            // вписую дані
            fstream outfile("out.txt", ios::app);

            if(!outfile){
                cout<< "Can't open file" << endl;
                return -1;
            }

            outfile << str << endl;
            outfile.close();

        }

    }
    infile.close();

    return 0;
}