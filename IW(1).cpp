#include <iostream>

using namespace std;

int main() {
    string str, result;  //str - початковий рядок, result - результат
    char prev;   // символ який не повторяється

    getline(cin, str);

    prev = str[0];
    result += str[0];
    for(int i = 1; i < str.size(); i++){
        if(str[i] != prev){
            prev = str[i];
            result += str[i];
        }
    }
    cout << result;
    return 0;
}


// example
//He110___W00r1111ddd
//He10_W0r1d