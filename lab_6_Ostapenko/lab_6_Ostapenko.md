МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  
Кафедра компьютерной инженерии и моделирования
<br/><br/>

### Отчёт по лабораторной работе № 6<br/> по дисциплине "Программирование"
<br/>

студента 1 курса группы ПИ-б-о 191(2)  
Остапенко Валерия Александровича         
направления подготовки 09.03.04 "Программная инженерия"  
<br/>

<table>
<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>

Симферополь, 2020

### Цель: Закрепить навыки разработки многофайловыx приложений. Изучить способы работы с API web-сервиса. Изучить процесс сериализации/десериализации данных.



### Ход работы:

1) Код сервера с подключением стронних файлов

 ``` c++
#include <iostream>
#include <string>
#include <fstream>

#include "include/json.hpp"
#include "include/httplib.h"
#include "include/HC.cfg.h"

using json = nlohmann::json;

void replace(std::string& str, const std::string& from, const std::string& to)
{
    size_t start_pos = str.find(from);
    if (start_pos == std::string::npos) {
        return;
    }
    str.replace(start_pos, from.length(), to);
}

void gen_response(const httplib::Request& req, httplib::Response& res)
{
    std::string s;
    httplib::Client cli("api.openweathermap.org", 80);
    auto result = cli.Get("/data/2.5/forecast?id=693805&APPID=285fe41b4a6382809fe82594ad125003&units=metric");
    json j = json::parse(result->body);
    std::cout << j.at("city").at("name") << std::endl;
    int start = j.at("list")[0].at("dt");

    std::ifstream ifs("Weather.html");
    getline(ifs, s, '\0');
    ifs.close();
    replace(s, "{city.name}", j.at("city").at("name"));
    for (auto& el : j.at("list").items())
    {
        if (el.value().at("dt") >= start)
        {
            replace(s, "{list.dt}", el.value().at("dt_txt"));
            replace(s, "{list.weather.icon}", el.value().at("weather")[0].at("icon"));
            replace(s, "{list.main.temp}", to_string(el.value().at("main").at("temp")));
            start += 86400;
        }
    }
    res.set_content(s, "text/html");
}

int main()
{
    std::cout << "SERVER RUN!" << std::endl;
    httplib::Server svr; //Создаём сервер
    svr.Get("/", gen_response);
    svr.listen("localhost", 3000); //localhost 
}
```
<br/>

2) API key 285fe41b4a6382809fe82594ad125003 и с его помощью мы получаем актуальный прогноз погоды. 

3) Получение данных о погоде: <br/>

![ ](https://sun9-25.userapi.com/W2dSRLl9razTX5b6FJkJeOc6wTuja5aPhV8yZQ/n5Kfd1WGRlU.jpg)    
рис 1. результат



### Вывод: я закрепид навыки разработки многофайловыx приложений. Изучил способы работы с API web-сервиса. Изучил процесс сериализации/десериализации данных.