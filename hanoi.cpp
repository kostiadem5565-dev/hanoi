#include <iostream>
#include <clocale>

using namespace std;

int step = 0;

void hanoi(int n, int from, int to, int temp)
{
    if (n == 0) return;

    hanoi(n - 1, from, temp, to);

    step++;
    cout << step << ". Перенести кольцо " << n << " со стержня " << from << " на стержень " << to << endl;

    hanoi(n - 1, temp, to, from);
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n = 5;
    cout << "Решение задачи о Ханойской башне для " << n << " колец и 3 стержней:" << endl << endl;

    hanoi(n, 1, 3, 2);

    cout << endl << "Всего выполнено ходов: " << step << endl;

    return 0;
}