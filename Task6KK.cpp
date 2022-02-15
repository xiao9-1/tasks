#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        setlocale(LC_ALL, "Rus");
        int n = 0;
        int** a = new int* [n];
        cout << "Введите сторону матрицы" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            a[i] = new int[n];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = rand() % 20 + (-10);
                printf("%4d", a[i][j]);
            }
            printf("\n");
        }
        int sum_up = 0;
        int sum_down = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[i][j] % 2 == 0)
                {
                    sum_down++;
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j][i] % 2 == 0)
                {
                    sum_up++;
                }
            }
        }
        
        if (sum_up > sum_down)
        {
            cout << "Больше четных чисел выше главной диагонали" << endl;
        }
        else if(sum_up < sum_down)
        {
            cout << "Больше четных чисел ниже главной диагонали" << endl;
        }
        else
        {
            cout << "Четных чисел поровну" << endl;
        }

        system("pause");
        system("cls");
        int z = 0;
        cout << "Выберите действие : \n \n \t 1. Выполнить программу. \n \n \t 2. Выйти из программы. \n \n Действие : ";
        if (z != 1)
            break;
    }
}

