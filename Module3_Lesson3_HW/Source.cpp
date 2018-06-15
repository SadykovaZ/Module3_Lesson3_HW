#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{

	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);


	int n = 0;

start:
	printf("Введите номер задания:\t");
	scanf("%d", &n);

	switch (n)
	{

	case 1:

	{
		//1.	Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.

		int a = 0, b = 0;

		printf("Введите число а = ");
		scanf("%d", &a);

		printf("Введите число b = ");
		scanf("%d", &b);

		if (a == b)
		{
			printf("--------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 3);
			printf("Числа a и b равны!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------\n");
		}

		else if (a != b)
		{

			if (a > b)
			{
				printf("--------------------------------------------------------\n");

				printf("Выводим числа в порядке возрастния: b = %d, a = %d\n", b, a);

				printf("--------------------------------------------------------\n");
			}
			else if (b > a)
			{
				printf("--------------------------------------------------------\n");

				printf("Выводим числа в порядке возрастния: a = %d, b = %d\n", a, b);

				printf("--------------------------------------------------------\n");
			}

		}

	}
	break;

	case 2:
	{
		// 2.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. 
		//      Студент получает допуск, если его средний балл 4 балла и выше

		int a = 0, b = 0, c = 0, d = 0, e = 0;
		float average = 0;

		printf("введите первую оценку студента = ");
		scanf("%d", &a);

		printf("введите вторую оценку студента = ");
		scanf("%d", &b);

		printf("введите третью оценку студента = ");
		scanf("%d", &c);

		printf("введите четвертую оценку студента = ");
		scanf("%d", &d);

		printf("введите пятую оценку студента = ");
		scanf("%d", &e);


		average = (float)(a + b + c + d + e) / 5;

		if (average >= 4)
		{

			SetConsoleTextAttribute(hConsole, 11);
			printf("Студент получает допуск, если его средний балл 4 балла и выше!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("---------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("Студент допущен. Его средний бал = %f\n", average);
			SetConsoleTextAttribute(hConsole, 15);

			printf("---------------------------------------------------------------\n");

		}

		else if (average < 4)
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("Студент получает допуск, если его средний балл 4 балла и выше!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");


			SetConsoleTextAttribute(hConsole, 4);
			printf("Студент не допущен. Его средний бал = %f\n", average);
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
		}
	}

	break;

	case 3:
	{
		//	3.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену.
		//      Студент получает допуск, если его средний балл 4 балла и выше. (В файле для домашнего задания этот пункт дублируется)

		int a = 0, b = 0, c = 0, d = 0, e = 0;
		float average = 0;

		printf("введите первую оценку студента = ");
		scanf("%d", &a);

		printf("введите вторую оценку студента = ");
		scanf("%d", &b);

		printf("введите третью оценку студента = ");
		scanf("%d", &c);

		printf("введите четвертую оценку студента = ");
		scanf("%d", &d);

		printf("введите пятую оценку студента = ");
		scanf("%d", &e);


		average = (float)(a + b + c + d + e) / 5;

		if (average >= 4)
		{

			SetConsoleTextAttribute(hConsole, 11);
			printf("Студент получает допуск, если его средний балл 4 балла и выше!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("---------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("Студент допущен. Его средний бал = %f\n", average);
			SetConsoleTextAttribute(hConsole, 15);

			printf("---------------------------------------------------------------\n");

		}

		else if (average < 4)
		{
			SetConsoleTextAttribute(hConsole, 11);
			printf("Студент получает допуск, если его средний балл 4 балла и выше!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");


			SetConsoleTextAttribute(hConsole, 4);
			printf("Студент не допущен. Его средний бал = %f\n", average);
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
		}


	}

	break;

	case 4:
	{
		//4. Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие. Вывести на экран результат

		float a = 0, b = 0, result = 0;
		char operation;

		printf("Введите первое число а = ");
		scanf("%f", &a);

		printf("Введите второе число b = ");
		scanf("%f", &b);

		cin.get();
		printf("Выберте арифметическое действие (+,-,*,/) = ");
		scanf("%c", &operation);

		switch (operation)
		{
		case '-':
			result = (float)(a - b);
			printf("--------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 13);
			printf("Ваш результат разность a и b = %f\n", result);
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
			break;
		case '+':
			result = (float)(a + b);
			printf("--------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 13);
			printf("Ваш результат сумма a и b = %f\n", result);
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
			break;
		case '*':
			result = (float)(a * b);
			printf("--------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 13);
			printf("Ваш результат произведение a и b = %f\n", result);
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
			break;
		case '/':
			result = (float)(a / b);
			printf("--------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 13);
			printf("Ваш результат деление a на b = %f\n", result);
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
			break;
		default:
			printf("--------------------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("Ошибка!\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("--------------------------------------------------------------\n");
			break;
		}
	}

	break;

	case 5:
	{
		//	5.	Написать программу, которая по выбору пользователя меняет цвет консольного приложения. 
		//Пользователь может выбрать цвет шрифта и цвет фона

		int backgroundColor = 0, textColor = 0;
		printf("Цвета для фона на выбор: \n 1 — светло-зеленый,\n 2 — светло-голубой, \n 3 — светло-красный, \n 4 — светло-желтый, \n 5 — ярко-белый.\n");
		printf("------------------------------\n");
		printf("Теперь выберите цвет фона из выше предложенных = ");
		scanf("%d", &backgroundColor);
		printf("Цвета для шрифта на выбор: \n 0 — черный,\n 1 — синий, \n 2 — зеленый, \n 3 — голубой, \n 4 — красный, \n 5 — лиловый.\n ");
		printf("------------------------------\n");
		printf("Теперь выберите цвет шрифта из выше предложенных = ");
		scanf("%d", &textColor);

		switch (backgroundColor)
		{
		case 1: system("color A0");
			switch (textColor)
			{
			case 0:
				SetConsoleTextAttribute(hConsole, 0);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 1:
				SetConsoleTextAttribute(hConsole, 1);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 2:
				SetConsoleTextAttribute(hConsole, 2);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 3:
				SetConsoleTextAttribute(hConsole, 3);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 4:
				SetConsoleTextAttribute(hConsole, 4);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 5:
				SetConsoleTextAttribute(hConsole, 5);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			}
			break;
		case 2: system("color B0");
			switch (textColor)
			{
			case 0:
				SetConsoleTextAttribute(hConsole, 0);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 1:
				SetConsoleTextAttribute(hConsole, 1);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 2:
				SetConsoleTextAttribute(hConsole, 2);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 3:
				SetConsoleTextAttribute(hConsole, 3);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 4:
				SetConsoleTextAttribute(hConsole, 4);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 5:
				SetConsoleTextAttribute(hConsole, 5);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			}
			break;
		case 3: system("color C0");
			switch (textColor)
			{
			case 0:
				SetConsoleTextAttribute(hConsole, 0);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 1:
				SetConsoleTextAttribute(hConsole, 1);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 2:
				SetConsoleTextAttribute(hConsole, 2);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 3:
				SetConsoleTextAttribute(hConsole, 3);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 4:
				SetConsoleTextAttribute(hConsole, 4);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 5:
				SetConsoleTextAttribute(hConsole, 5);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			}
			break;
		case 4: system("color E0");
			switch (textColor)
			{
			case 0:
				SetConsoleTextAttribute(hConsole, 0);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 1:
				SetConsoleTextAttribute(hConsole, 1);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 2:
				SetConsoleTextAttribute(hConsole, 2);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 3:
				SetConsoleTextAttribute(hConsole, 3);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 4:
				SetConsoleTextAttribute(hConsole, 4);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 5:
				SetConsoleTextAttribute(hConsole, 5);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			}
			break;
		case 5: system("color F0");
			switch (textColor)
			{
			case 0:
				SetConsoleTextAttribute(hConsole, 0);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 1:
				SetConsoleTextAttribute(hConsole, 1);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 2:
				SetConsoleTextAttribute(hConsole, 2);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 3:
				SetConsoleTextAttribute(hConsole, 3);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 4:
				SetConsoleTextAttribute(hConsole, 4);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			case 5:
				SetConsoleTextAttribute(hConsole, 5);
				printf("Поменялся цвет текста!\n");
				SetConsoleTextAttribute(hConsole, 15);
				break;
			}
			break;

		}
		break;
	}

	case 6:
	{
		//6.	Написать программу, которая по выбору пользователя возводит введенное им число в степень от нулевой до 
		//седьмой включительно

		int a = 0, b = 0;

		printf("Введите число = ");
		scanf("%d", &a);

		printf("Введите степень (от 0 до 7) чтобы возвести введеное вами число = ");
		scanf("%d", &b);

		if (b == 0)
		{
			a = pow(a, 0);
			printf("Ваш результат = %d\n", a);
		}

		else if (b == 1)
		{
			a = pow(a, 1);
			printf("Ваш результат = %d\n", a);
		}

		else if (b == 2)
		{
			a = pow(a, 2);
			printf("Ваш результат = %d\n", a);
		}

		else if (b == 3)
		{
			a = pow(a, 3);
			printf("Ваш результат = %f\n", a);
		}

		else if (b == 4)
		{
			a = (float)pow(a, 4);
			printf("Ваш результат = %d\n", a);
		}

		else if (b == 5)
		{
			a = pow(a, 5);
			printf("Ваш результат = %d\n", a);
		}

		else if (b == 6)
		{
			a = pow(a, 6);
			printf("Ваш результат = %d\n", a);
		}
		else if (b == 7)
		{
			a = pow(a, 7);
			printf("Ваш результат = %d\n", a);
		}

		else
		{
			printf("Степень должна быть от 0 до 7!\n");
		}
	}

	break;

	case 7:

	{
		//7.	В час пик на остановку одновременно подъехали три маршрутных такси, следующие по одному маршруту, 
		//в которые тут же набились пассажиры. Водители обнаружили, что количество людей в разных маршрутках разное, 
		//и решили пересадить часть пассажиров так, чтобы в каждой маршрутке было поровну пассажиров. 
		//Требуется по количествам людей в трех маршрутках определить, какое наименьшее количество пассажиров 
		//придаться при этом пересадить (если это вообще возможно)

		int kol = 0, average = 0, m1 = 0, m2 = 0, m3 = 0;

		printf("Введите количество людей в первой маршрутке = ");
		scanf("%d", &m1);

		printf("Введите количество людей в второй маршрутке = ");
		scanf("%d", &m2);

		printf("Введите количество людей в третьей маршрутке = ");
		scanf("%d", &m3);

		average = (m1 + m2 + m3) / 3;

		if (m1 > average)
		{
			kol = kol + (m1 - average);
		}
		else if (m2 > average)
		{
			kol = kol + (m2 - average);
		}
		else if (m3 > average)
		{
			kol = kol + (m3 - average);
		}
		printf("Надо пересадить %d чел.\n", kol);
	}

	}
	goto start;
}