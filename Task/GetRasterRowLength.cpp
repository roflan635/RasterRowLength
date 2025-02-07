﻿// Task.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "Task.h"
#include <fstream>

int GetRasterRowLength(int width, int bit)
{
	if (width < 0) return -1;		//ширина должна быть положительной
	int length;  //переменная для длины строки растрового изображения
	switch (bit)
	{
	case 1:
		length = width / 8 + (width % 8 != 0); // вычисляем длину строки изображения в байтах
		if (length % 4 != 0) // она должна быть кратна 4-м.
			length = length / 4 * 4 + 4;
		return length;
		break;
	case 4:				//4 бит на пиксель
		length = width / 2 + (width % 2 != 0);
		if (length % 4 != 0)
			length = length / 4 * 4 + 4;
		return length;
		break;
	case 8:				//8 бит на пиксель
		length = width;
		if (length % 4 != 0)
			length = length / 4 * 4 + 4;
		return length;
		break;
	case 24:			//24 бит на пиксель
		length = width * 3;
		if (length % 4 != 0) 
			length = length / 4 * 4 + 4;
		return length;
		break;
	default:
		return -1;		//если кол-во бит на пиксель не равно 1, 4, 8, 24.
		break;
	}
}
/*
	Реализуйте функцию, которая рассчитывает длину строки в байтах растрового изображения Windows bitmap. 
	Как вы знаете, длина строки растрового изображения должна быть кратна 4 байтам и зависит от количества
	бит для кодирования цвета пикселя и ширины изображения в пикселях.


	1. Функция должна иметь имя GetRasterRowLength
	2. Функция в качестве параметров должна принимать следующее:
		- первый параметр - ширина изображения в пикселях, тип int
		- второй параметр - количество бит на пиксель для кодирования точки изображения, int
	3. Функция должна возвращать int, длину строки растрового изображения в байтах
	4. Допустимые значения первого параметра - множество полижительнх целых чисел. При передаче отрицательного
		числа функция должна вернуть (-1).
	5. Допустимые значения второго параметра - 1, 4, 8, 24. При любых других вариантах значенияя этого поля
	функция должна вернуть (-1).

	!!!!! ВАЖНО !!!!!
	В данном файле разрешается разместить кроме кода требуемой функции - код любых других вспомогательных
	функций. Никакой функции main() в этом файле быть не должно.
	Если вы хотите испытать и отладить вашу функцию - пишите код в файле Example.cpp проекта Example данного решения
	Для этого задайте в качестве запускаемого проекта проект Example.

	ДЛЯ АВТОМАТИЧЕСКОГО ТЕСТИРОВАНИЯ  проверки правильности работы вашего задания - сделайте запукаемым проект
	Tests и запустите его. Если функция написана правильно - все тесты должны успешно выполниться
	(зеленый цвет в консоли). Если ваша функция работает некорректно - в консоли будут сообщения красным цветом
*/
