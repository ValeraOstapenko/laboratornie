МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  
Кафедра компьютерной инженерии и моделирования
<br/><br/>

### Отчёт по лабораторной работе № 7<br/> по дисциплине "Программирование"
<br/>

студента 1 курса группы 191(2)  
Остапенко Валерий Александрович
направления подготовки 09.03.04 "Программная инженерия"  
<br/>

<table>
<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>

Симферополь, 2019

#### Цель: изучить основные возможности создания и отладки программ в IDE Qt Creator.

1) Чтобы создать консольное приложение C++ без использования компонентов Qt, нужно в IDE Qt на верхней панели нажать `Файл -> Создать Файл или Проект -> Проект без Qt -> Приложение на языке С++`.

![](https://sun9-27.userapi.com/6M8BDPAf-dnF0NRKFL8kR4HOFEYfly1-uPwb3w/pOHDV_ksfsI.jpg)

Рис. 1. Создаём проект

![](https://sun9-65.userapi.com/vuh-_8x_WZM17K13fkMorFFpcNbXaOJZDHEJ6A/w4Opd0ysTlc.jpg)

Рис. 2. Выбираем Проект без Qt

2) Чтобы поменять тему нужно нажать `Инструменты -> Параметры -> Среда` и выбрать необходимую тему.

![](https://sun9-52.userapi.com/kn53AYIAkiv2r5nHeIJZWSle-zEn8K91rGK9ug/-Bpb-16kOBI.jpg)

Рис. 3. Заходим в параметры

![](https://sun9-39.userapi.com/c0_5-Hh41vBpehTHOT6AhRo_TUfIRIZ4spYSVA/pL_sFwYCvK4.jpg)

Рис. 4. Меняем тему

3. Чтобы закоментировать блок кода можно выделить его и нажать ПКМ, а затем выбрать `Закомментировать` или воспользоваться комбинацией клавиш `Ctrl+/`.

![](https://sun9-32.userapi.com/a6tMUqR64xq7PoTfBFVWUduIyXmUDJCzy_WyPw/GPNf9XmsHAo.jpg)

Рис. 5. Комментируем блок кода

4. Чтобы открыть файл в проводнике нужно выбрать необходимый файл в панели открытых проектов, нажать ПКМ и выбрать `Показать в проводнике`.

![](https://sun9-6.userapi.com/NLbn_-snK7Ox2CF_d-9xTZcC8iyDyGuKNNP-_w/iAeAdaK3Vbw.jpg)

Рис. 6. Открываем файл в проводнике

5. В Qt для файлов-проектов используется расширение `.pro`.

![](https://sun1.43222.userapi.com/87tYJosnbQEsDLjqBUEQnXfAfmDuAWYcpOEC1A/Ff6tc0TrW-Y.jpg)

Рис. 7. Файл-проект

6. Чтобы запустить код без отладки можно воспользоваться соответствующими кнопкой снизу слева (1 на рис. 8.) или нажать `Ctrl+R`.

7. Чтобы запустить код в режиме отладки можно воспользоваться соответствующими кнопкой снизу слева (2 на рис. 8.) или нажать `F5`.

![](https://sun1.43222.userapi.com/Ukigc3wU0oURHnP0AZ0_ng7r9GSJOweqKVno3A/eIAfxX4Y_ZE.jpg)

Рис. 8. Запуск кода

8. Чтобы установить точку останова можно нажать на пространство рядом с номером строчки кода или установить курсор на нужную строчку и нажать `F9`.

![](https://sun1.43222.userapi.com/iXRuGTpj_pvtVsD0MWo0A5yASiMB80RdvTVbdw/nvYLdtIAJ3o.jpg)

Рис. 9. Установливаем точку останова

9. Содаём программу с заданным кодом, устанавливаем точки останова, запускаем код в режиме отладки.

![](https://sun1.43222.userapi.com/rqIz_ZRW0jNsMq2HMoH34zch_rD6phu_5au_Ew/VmUyaHho53k.jpg)

Рис. 10. Запуск кода, первая остановка

Видим, что int при создании содержит 0, а double мусор.

![](https://sun9-44.userapi.com/UvM_InuvMGSXLUDCg5GFIpArln1YpcBk_d8Zvw/HVkZls5DMs4.jpg)

Рис. 11. Вторая остановка

![](https://sun9-6.userapi.com/ly7BZqyhb0-k3rqMkeXnjXbiGClUYBhhcbENrg/_K_f_gkx4IM.jpg)

Рис. 12. Третья остановка

10. Закрываем проект, переходим в `Начало -> Примеры`.
11. Выбираем проект "Calculator Form Example".
12. Изучаем проект.
13. Выбираем комплект сборки.
14. Переходим на вкладку `Редактор` и начинаем сборку.

![](https://sun9-17.userapi.com/fVFVKYqZxWvtVsdfmzsyRqSM-HK9_cYsDZudqA/QW-ors9-bDA.jpg)

Рис. 13. Сборка

15. Выбираем "main.cpp" и устанавливаем курсор на слово show.

![](https://sun9-40.userapi.com/MjVoAJS1dCJHFgNWRXFqubkothAZJ8nio7obUA/6m31t0GXFdg.jpg)

Рис. 14. Main.cpp

Нажимаем `F1`, открывается справка.

![](https://sun9-28.userapi.com/hg_m_b88LcuZA84vi54CS_tpGtxP_z0RXKvT3A/tyTpiggRKCI.jpg)

Рис. 15. Открылась справка

16. Выбираем "calculatorform.ui" 

![](https://sun2.43222.userapi.com/SlPBDs3oA4lNb95SGMu0ApmnImQZ2Y3wXRVbJw/uYdQum5K1xQ.jpg)

Рис. 16. Calculatorform.ui

17. Мы попали на вкладку `Дизайн`. 

![](https://sun1.43222.userapi.com/cWutT87IPJBG3JtPPEKow1KLqJWcZLcR0CgagA/C2wsLj6ZdUs.jpg)

Рис. 17. `Дизайн` "calculatorform"

Заменяем английский текст (1) и собираем проект (2).

![](https://sun3.43222.userapi.com/Lm6vZZXEYpfuMoY6XPcsm4-50nrxS2mCqtBrdw/Vs1ooOZvOkc.jpg)

Рис. 18. Заменили текст

![](https://sun9-54.userapi.com/amZfrD8b2tcYB45jX1dMp8gV4bF0jUigLo0KDg/WQRNFOAsX8I.jpg)

Рис. 19. Запустили проект

#### Вывод: мы изучили основные возможности создания и отладки программ в Qt. Узнали как можно поменять оформление, как найти файлы проекта, научились коментировать, а так же запускать код в режиме отладки и без.