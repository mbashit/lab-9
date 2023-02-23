// lab 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Пусть файл содержит целые числа, образующие строки квадрат-
ной целочисленной матрицы размером 100 × 100. Требуется определить

значение первого (при просмотре матрицы по строкам сверху вниз) макси-
мального элемента матрицы, а также номер строки и номер столбца, на пе-
ресечении которых расположен этот элемент.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Открытие файла
    ifstream file("file.txt");

    // Создание матрицы размером 100 x 100
    int matrix[100][100];

    // Чтение чисел из файла и запись их в матрицу
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            file >> matrix[i][j];
        }
    }

    // Поиск максимального элемента и его позиции
    int max_element = matrix[0][0];
    int row_number = 0;
    int col_number = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (matrix[i][j] > max_element) {
                max_element = matrix[i][j];
                row_number = i;
                col_number = j;
            }
        }
    }

    // Вывод результатов
    cout << "Максимальный элемент: " << max_element << endl;
    cout << "Номер строки: " << row_number + 1 << endl;
    cout << "Номер столбца: " << col_number + 1 << endl;

    // Закрытие файла
    file.close();

    return 0;
}