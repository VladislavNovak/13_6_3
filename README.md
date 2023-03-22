### `Что нужно сделать`

Вам дали задание разработать хранилище для целочисленных значений во встраиваемой операционной системе. 
Такие системы работают в большей части техники, которая нас окружает: 
автомобилях, стиральных машинах, микроволновках, холодильниках. 
Только вот незадача: объём памяти этой системы очень небольшой, поэтому в хранилище не может находиться 
более 20 элементов.

В хранилище, являющееся вектором, с клавиатуры приходят целочисленные значения и помещаются в конец.

При вводе «−1» с клавиатуры необходимо вывести всё содержимое хранилища (20 или менее элементов). 
При выводе элементы должны быть в том порядке, в котором они добавлялись.

Попробуйте написать максимально оптимизированное решение этой задачи, чтобы совершалось как можно 
меньше расширений и перемещений элементов внутри вектора.

### `Пример выполнения:`

```text
input number: 1
input number: 2
input number: 3
…
input number: 19
input number: 20
input number: -1
output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
input number: 21
input number: 22
input number: 23
input number: -1
output: 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23
```

Рекомендации по выполнению
Посмотрите, как работает кольцевой буфер. Этот алгоритм поможет быстрее найти решение.

Что оценивается
Размер вектора не превышает 20 элементов.
Нет изменений в размере вектора (это выполняется, если вы выбрали верный алгоритм решения).