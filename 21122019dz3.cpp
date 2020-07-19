#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    cout << "Задание 3.\n";
    cout << "\n";
    cout << "Написать программу, вычисляющую, с какой скоростью бегун пробежал дистанцию.\n";
    cout << "Рекомендуемый вид экрана во время выполнения программы приведен ниже:\n";
    cout << "\n";
    cout << "Вычисление скорости бега\n";
    cout << "Введите длину дистанции (метров) = 1000\n";
    cout << "Введите время (мин.сек) = 3.25\n";
    cout << "Дистанция: 1000 м\n";
    cout << "Время: 3 мин 25 сек = 205 сек\n";
    cout << "Вы бежали со скоростью 17.56 км/ч\n";
    cout << "\n";
    cout << "Решение для задания № 3:\n";
    cout << "\n";
    double time, speed, distance, min, sec, time_2;
    int int_time;
    cout << "Вычисление скорости бега: \n";
    cout << "Введите длину дистанции (метров): ";
    cin >> distance;
    cout << "Введите время (в формате \"мин.сек\"): ";
    cin >> time;
    sec = (time - int(time)) * 100;
    int_time = int(time);
    min = int_time * 60;
    time_2 = min + sec;
    speed = (distance / time_2) * 3.6;
    cout << "Дистанция : " << distance << " м. \n";
    cout << "Время : " << min / 60 << " мин. " << sec << " сек." << " = " << time_2 << " сек. \n";
    cout << "Вы бежали со скоростью : " << speed << " км/ч \n";
}