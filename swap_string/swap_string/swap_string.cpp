// swap_string.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void swap_stings(char* str1, char* str2);
int size_of_string(char* str);

int main()
{
    int size1;
    int size2;
    char* str1;
    char* str2;

    std::cin >> size1;
    std::cin >> size2;

    str1 = (char*)new char[size1 + 1];
    str2 = (char*)new char[size2 + 1];

   
        std::cin >> str1;
        std::cin >> str2;

    swap_stings(str1, str2);

    std::cout << str1<<std::endl;
    std::cout << str2 << std::endl;
   // std::cout << size_of_string(str1);

    delete[]str1;
    delete[]str2;

    return 0;
}

void swap_stings(char* str1, char* str2)
{
    if (size_of_string(str1) != size_of_string(str2))
    {
        str1 = (char*)new char[size_of_string(str2) + 1];
        str2 = (char*)new char[size_of_string(str1) + 1];
    }

    for (int i = 0; i < size_of_string(str1); ++i)
    {
        char str = str1[i];
        str1[i] = str2[i];
        str2[i] = str;
    }
}
 
int size_of_string(char* str)
{
    int count = 0;

    int i = 0;
    while (str[i] != '\0')
    {
        ++count;
        ++i;
    }

    return count;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
