#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

void print_words(string s){
    string s1=" .,;!?:"; 
    string word;
    int pos=s.find_last_of(s1);
    while (pos>0){
            word = s.substr(pos+1);
            s.erase(pos);
            if (word.size()>0)
                cout << word << endl;
            pos = s.find_last_of(s1);
    }
    cout << s << endl;
    cout << "================================"<< endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string str;
    ifstream f_in("D:\\test.txt"); 
    if (f_in.is_open())
    {
        while (getline(f_in, str))
        {
            print_words(str);
        }
    }
    f_in.close();     
    cout << "Input test string: ";
    getline(cin,str);
    print_words(str);
    return 0;
}
