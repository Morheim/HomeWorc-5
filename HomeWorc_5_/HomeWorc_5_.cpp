#include <iostream>
using namespace std;

void DZ1()
{
    cout << "//===================================================[DZ1]===================================================//\n\n";
}
void DZ2()
{
    cout << "\n//===================================================[DZ2]===================================================//\n\n";
}
void DZ3()
{
    cout << "\n//===================================================[DZ3]===================================================//\n\n";
}
void DZ4()
{
    cout << "\n//===================================================[DZ4]===================================================//\n\n";
}
void DZ5()
{
    cout << "\n//===================================================[DZ5]===================================================//\n\n";
}
void END()
{
    cout << "\n//===================================================[END]===================================================//\n\n";
}


double Array[10] = { 1.2,2.3,3.4,4.5,5.6,6.7,7.8,8.9,10.11,11 };

bool PrintArray(double Array[], int size)
{
    if (Array == nullptr || size == 0)
        return false;

    for (size_t a = 0; a < size; a++)
        cout << "| " << a << " > " << Array[a] << " |";

    cout << endl;
    return true;

}

void Replace(int* a, const int b)
{
    for (int i = 0; i < b; i++)
        if (a[i]) a[i] = 0;
        else a[i] = 1;
}

void Print(int* a, const int b)
{
    for (int i = 0; i < b; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void shiftRight(int array[], int size)
{
    int temp = array[0];
    int temp_1 = array[size - 1];

    for (int i = 1; i < size; i++)
    {
        array[0] = array[i];
        array[i] = temp;
        temp = array[0];
    }
    array[0] = temp_1;
}

bool ImbaBalance(int* mass, int size)
{

    int COUNT_1;
    int COUNT_2;
    for (int i = 0; i < size; i++) {
        COUNT_1 = 0;
        COUNT_2 = 0;

        //считаем левую сторону
        int m_L;
        for (m_L = 0; m_L < i; m_L++) {
            COUNT_1 += mass[m_L];
        }

        //считаем правую сторону
        for (int m_R = m_L; m_R < size; m_R++) {
            COUNT_2 += mass[m_R];
        }

        if (COUNT_1 == COUNT_2) {
            cout << "   <==  true" << endl;
            return true;
        }

    }
    cout << "   <==  false" << endl;
    return false;
}
void Balance(int* mass, int size)
{

    int COUNT_1;
    int COUNT_2;
    for (int i = 0; i < size; i++) {
        COUNT_1 = 0;
        COUNT_2 = 0;

        int m_L;
        for (m_L = 0; m_L < i; m_L++) {
            COUNT_1 += mass[m_L];
        }

        for (int m_R = m_L; m_R < size; m_R++) {
            COUNT_2 += mass[m_R];
        }

        if (COUNT_1 == COUNT_2) {
            cout << "|| ";
        }
        cout << mass[i] << " ";
    }
}
int main()
{

    //DZ1
    /* Написать функцию которая выводит массив double чисел на экран.
     Параметры функции это сам массив и его размер. Вызвать эту функцию из main.
    */
    {
        DZ1();
        PrintArray(Array, 10);
    }
    //DZ2
    /* Задать целочисленный массив, состоящий из элементов 0 и 1.
    Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
    Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0.
    Выводить на экран массив до изменений и после.
    */
    {
        DZ2();

        const int b = 10;
        int a[b] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

        Print(a, b);
        Replace(a, b);
        Print(a, b);


    }
    //DZ3
    /* Задать пустой целочисленный массив размером 8.
    Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22.
    Вывести массив на экран.
    */
    {
        DZ3();

        int array[8];
        array[0] = 1;
        for (int i = 1; i < 8; i++)
        {
            array[i] = array[i - 1] + 3;
        }
        Print(array, 8);
    }
    //DZ4
    /* Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным),
    при этом метод должен циклически сместить все элементы массива на n позиций.
    */
    {
        DZ4();

        int array[8];
        array[0] = 1;
        for (int i = 1; i < 8; i++)
        {
            array[i] = array[i - 1] + 3;
        }
        Print(array, 8);
        shiftRight(array, 8);
        Print(array, 8);
    }
    //DZ5
    /* Написать функцию, которой передается не пустой одномерный целочисленный массив, она должна вернуть истину если в массиве есть место,
    в котором сумма левой и правой части массива равны.
    Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false, checkBalance ([10, || 1, 2, 3, 4]) → true.
    Абстрактная граница показана символами ||, эти символы в массив не входят.
    */
    {
        DZ5();

        int Parray[5] = { 2,3,2,3,0 };

        Balance(Parray, 5);
        ImbaBalance(Parray, 5);

        END();
    }
    return 0;
}
