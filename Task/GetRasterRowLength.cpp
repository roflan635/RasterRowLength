﻿// Task.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "Task.h"

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
