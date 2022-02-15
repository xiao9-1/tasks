#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        setlocale(LC_ALL, "Russian");
        double x1, x2, x3, y1, y2, y3, x4, y4;
        x4 = 0;
        y4 = 0;
        cout << "Введите координату x1" << endl;
        cin >> x1;
        cout << "Введите координату y1" << endl;
        cin >> y1;
        cout << "Введите координату x2" << endl;
        cin >> x2;
        cout << "Введите координату y2" << endl;
        cin >> y2;
        cout << "Введите координату x3" << endl;
        cin >> x3;
        cout << "Введите координату y3" << endl;
        cin >> y3;

        if ((x1 != x2 and x1 != x3 and x2 != x3) or (y1 != y2 and y1 != y3 and y2 != y3))
        {
            cout << "Вершины прямоугольника не параллельны осям" << endl; 
        }
        else {

            if (x1 == x2)
            {
                x4 = x3;
            }
            else if (x1 == x3)
            {
                x4 = x2;
            }
            else if (x2 == x3)
            {
                x4 = x1;
            }
            if (y1 == y2)
            {
                y4 = y3;
            }
            else if (y1 == y3)
            {
                y4 = y2;
            }
            else if (y2 == y3)
            {
                y4 = y1;
            }
            cout << "Координаты последней точки: " << x4 << ',' << y4 << endl;
        }
        
        
        system("pause");
        system("cls");
        int z = 0;
        cout << " Выберите действие : \n \n \t 1. Выполнить программу. \n \n \t 2. Выйти из программы. \n \n Действие : ";
        cin >> z;
        if (z != 1)
        {
            break;
        }
    }
}
