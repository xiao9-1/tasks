#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        setlocale(LC_ALL, "Russian");
        int size = 0;
        int* a = new int[size];
        while (a[size - 1] != 0)
        {
            cout << "Введите " << size  << " член массива" << endl;
            cin >> a[size];
            size++;
        }
        size--;
        int i = 1;
        for (i; i < size; i++)
        {
            if (a[i] > 0)
            {
                i++;
                
            }
            else if (a[i] < 0)
            {
                if (a[i] == a[i - 1])
                {
                    i++;
                }
                else if(a[i] > a[i-1] or a[i] < a[i-1])
                {
                    if (a[i - 1] > 0)
                    {
                        i++;
                    }
                    else
                    {
                        cout << "Отрицательные числа неравны" << endl;
                        break;
                    }
                }
            }
        }
        if (i >= size)
        {
            cout << "Отрицательные числа равны" << endl; 
        }
        
        
        system("pause");
        system("cls");
        int z = 0;
        cout << " Выберите действие : \n \n \t 1. Выполнить программу. \n \n \t 2. Выйти из программы. \n \n Действие : ";
        cin >> z;
        if(z != 1)
        {
            break;
        }
    }
}
