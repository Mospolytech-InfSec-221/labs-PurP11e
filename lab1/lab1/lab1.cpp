#include <iostream>
#include <locale> 
void task1()
{
	int n;
	std::cin >> n;
	char k = '0';
	for (int i = 1; i <= n; i++);
	{
		std::cout << k << std::endl;
		std::string ii = std::to_string(i);
		k = k + 
	}

}
void task2()
{}
int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	int choice = 0;
	while (true)
	{

		std::cout << "Что вы хотите выполнить? \n"
			<< "1. задание 1\n"
			<< "2. задание 2\n"
			<< "3. задание 3\n"
			<< "4. выход\n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			/*вызов функции для решения задания 1*/;
			task1();
			break; // если его не ставить, то после вызова task1(), начнет выполнятся task2()
		}
		case 2:
		{
			/*вызов функции для решения задания 1*/;
			task2();
			break;
		}
		default:
		{
			return 0;
		}
		}
	}
}