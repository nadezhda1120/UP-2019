## Структури

```
struct име на структура {
  тип име_поле1;
  тип име_поле2;
  тип име_поле3;
  ...
}
```

```
struct University {
  char name[100];
  char city[100];
  int rank;
}

University su;
cin>>su.name;
cin>>su.city;
cint>>su.rank;
```

Когато пишем структури, компилатора заделя място за всяко поле от нашата структура с големина най-голямото поле. Затова е хубаво да си пишем полетата спрямо техния размер.

## Рекурсия

Имаме функция, която вика отново себе си, но с други параметри

- Важно е да имаме дъно на рекурсията (Иначе имаме Stack overflow)
- При всяко изпълнение, трябва да имаме опростяване (свеждане до по-прост случай)
- Не се препоръчва в много от случаите, тъй като може да се напълни стека
- Почти всеки алгоритъм ако може да се напише с рекурсивен алгоритъм, ще има и итеративен алготиръм
- Рекурентни зависимости

Примери - обхождане в дълбочина, рефица на Фибоначи

Във функционалните езици, за разлика от императивното програмиране, рекурсията е предпочитан вариант, поради оптимизирания разход на процесорно време при приложението на опашкова рекурсия или при невъзможност за приложение на изрична итерация.


Задачи
=====================

Структури


### Задача 1: Точки 
Напишете функция, която намира разстоянието между две точки в равнината.
(Програма, която въвежда координатите на n точки от равнината, намира и извежда мах и мин разстояние между точките.)



### Задача 2: Студент 
Напишете структура, която пази следните данни за студент
1)
- Име
- Факултетен номер
- Списък с оценки
- Най-високата оценка
Upgrade: 
2) 
- Списък с предмети и оценката за всеки предмет.


### Задача 3(10 от упр 2): Приеха ли ме в СИ?
Напишете програма, която изисква от потребителя да въведе няколко неща за него:
- Изпит - математика 1 или математика 2
- Оценка - оценка от изпита
- Има ли диплома
- Оценка - от дипломата

След това програмата трябва да реши дали потребителя е приет СИ първи курс.
Трябва да е изкарал математика 2 с оценка над 5.36, да има диплома и да има оценка от дипломата над 5.23.

Вход:
```
    Type exam: 1
    Grade оf exam: 5.80
    Do you have a diploma?: yes
    Grade of diploma: 5.93
```
Изход:
```
    Congrats
```


Задачи
=====================

Рекурсия


### Задача 1: Факториел
Напишете функция, която извежда n!

Вход:
```
    5
```

Изход:
```
    120
```


### Задача 2: Фибоначи
Напишете функция, която извежда n-тото число на Фибоначи.

Вход:
```
    6
```

Изход:
```
    5
```

### Задача 3: Reverse
Да се напише функция, която обръща последователността на цифрите на дадено естествено 
число:

Вход:   
```
    654
```

Изход:
```
    456
```

### Задача 4: GCD
Да се напише функция, която връща най-големия общ делител на све числа

Вход:
```
    8 12
```

Изход:
```
    4
```


### Задача 5: x^n
Да се напише функция, която връща x^n
Ако x>1 -> x^n
    x=0 -> 1 
    x<1 ->  1/x^n

Вход:
```
    3 2
```

Изход:
```
    9
```
