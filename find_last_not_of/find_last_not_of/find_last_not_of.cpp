// find_last_not_of.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

char find_last_not_of(const char* str1, const char* str2);
int find_character(const char* str, char sim, int index);
int length_of_string(const char* str);

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

    char simbol = find_last_not_of(str1, str2);

    std::cout << simbol;

    delete[]str1;
    delete[]str2;

    return 0;

}

char find_last_not_of(const char* str1, const char* str2)
{
    int index;
    if (length_of_string(str1) >= length_of_string(str2))
    {
        index = length_of_string(str1);
    }
    else
    {
        index = length_of_string(str2);
    }

        for (int j = length_of_string(str1) - 1; j >= 0; --j)
        {
            if (find_character(str2, str1[j], index) == 1)
            {
                return str1[j];
            }     
        }
}

int length_of_string(const char* str)
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

int find_character(const char* str, char sim, int index)
{
    for (int i=0; i<index; ++i) 
    {
        if (str[i] == sim)
        {
            return 0;
        }
    }

    return 1;
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
