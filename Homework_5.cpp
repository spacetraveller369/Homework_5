// Homework_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    /*// 1.Ввести массив из 5 чисел, а затем вывести его в обратном порядке.

    const int SIZE = 5;

    int arr[SIZE] = { 1,2,3,4,5 };

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << ("%3d", arr[SIZE - i - 1]);
    }
    std::cout << ("\n");

    return 0;

     //2.Создать массив из 20 случайных чисел.Вывести все элементы массива с чётными индексами. 
   
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;

    int arr[SIZE];

    std::srand(static_cast<unsigned int>(std::time(0)));

    std::cout << "Элементы массива с четными индексами: ";

    for (int i = 0; i < SIZE; ++i) 

    {
        arr[i] = std::rand() % 100;

        if (i % 2 == 0) 
        
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << ("\n");

    return 0; 

    //3. Создать массив из 10 случайных чисел в диапазоне от - 20 до 20.
    // Определить количество, сумму  и среднее арифметическое положительных элементов массива.

    setlocale(LC_ALL, "RU");
   
    const int SIZE = 10;

    int arr[SIZE];

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < SIZE; ++i) 

    {
        arr[i] = std::rand() % 41 - 20;
    }

    std::cout << "Массив: ";

    for (int i = 0; i < SIZE; ++i) 

    {
        std::cout << arr[i] << " ";
    }

    std::cout << ("\n");

    int count = 0;

    int sum = 0;

    for (int i = 0; i < SIZE; ++i) 

    {
        if (arr[i] > 0)

        {  
            sum += arr[i];
            count += 1;    
        }

    }

    double average;

    if (count > 0) 

    {  
        average = static_cast<double>(sum) / count;
    }

    else 

    {
        average = 0.0; 
    }

    std::cout << "Количество положительных элементов: " << count << ("\n");
    std::cout << "Сумма положительных элементов: " << sum << ("\n");
    std::cout << "Среднее арифметическое положительных элементов: " << average << ("\n");

    return 0; 

    //4. Создать массив из 20 случайных чисел в диапазоне от -10 до 30. 
    // Написать программу, определяющую сумму элементов массива, находящихся в массиве после первого отрицательного элемента.

    setlocale(LC_ALL, "RU");

    const int SIZE = 20;

    int arr[SIZE];

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < SIZE; ++i)
    
    {
        arr[i] = std::rand() % 41 - 10;
    }

    std::cout << "Массив: ";

    for (int i = 0; i < SIZE; ++i) 
    
    {
        std::cout << arr[i] << " ";
    }

    std::cout << ("\n");

    int sum = 0;

    bool foundNegative = false;

    for (int i = 0; i < SIZE; ++i) 

    {
        if (arr[i] < 0 && !foundNegative) 
        {
            foundNegative = true;  
        }
        else if (foundNegative) 
        {
            sum += arr[i]; 
        }
    }


    std::cout << "Сумма элементов после первого отрицательного: " << sum << ("\n");

    return 0; 

    //5. Создать массив из 20 случайных чисел в диапазоне от -30 до 10.
    // Написать программу, определяющую сумму элементов массива, находящихся в массиве до первого положительного элемента.
    
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;

    int arr[SIZE];

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < SIZE; ++i)

    {
    arr[i] = std::rand() % 41 - 30;
    }

    std::cout << "Массив: ";

    for (int i = 0; i < SIZE; ++i)

    {
    std::cout << arr[i] << " ";
    }

    std::cout << ("\n");

    int sum = 0;

    bool foundPositive = false;

    for (int i = 0; i < SIZE; ++i)

    {
    if (arr[i] > 0)

    {
        foundPositive = true;
        break;
    }

    sum += arr[i];

    }

    if (foundPositive) 

    {
        std::cout << "Сумма элементов до первого положительного: " << sum << ("\n");
    }

    else 

    {
        std::cout << "Положительные элементы отсутствуют в массиве." << ("\n");
    }

    return 0; 

    //6. Создать массив из 10 целых случайных чисел. 
    // Изменить порядок следования элементов массива на противоположный (1-й элемент меняется с 10-м, 2-й элемент с 9-м и тд).

    setlocale(LC_ALL, "RU");

    const int SIZE = 10;

    int arr[SIZE];

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < SIZE; ++i) 
    
    {
        arr[i] = std::rand() % 100;
    }

   
    std::cout << "Массив: ";

    for (int i = 0; i < SIZE; ++i) 
    
    {
        std::cout << arr[i] << " ";
    }

    std::cout << ("\n");

    
    for (int i = 0; i < SIZE / 2; ++i) 
    
    {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }

    
    std::cout << "Новый массив: ";

    for (int i = 0; i < SIZE; ++i) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << ("\n");

    return 0;


    } */

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
