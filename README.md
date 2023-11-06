# 404PP1
Repo for codes from 404 PP1  course


# Как установить G++ под VSCode:

[Видеоинструкция](https://www.youtube.com/watch?si=EyJrYap__GX1fkF3&v=1qN9PQ9wg3E&feature=youtu.be)

### 1. Скачать и установить MinGW

1.1. Установка для Windows
- Скачать MinGW с официального сайта
[Windows32](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-win32-seh-ucrt-rt_v11-rev1.7z)
[Windows64](https://github.com/niXman/mingw-builds-binaries/releases/download/13.2.0-rt_v11-rev1/x86_64-13.2.0-release-posix-seh-ucrt-rt_v11-rev1.7z)
- Распаковать архив в удобное место (**НЕ НА РАБОЧИЙ СТОЛ!**), 
например в `C:\MinGW`, Расположение папки запомнить.

1.2. Установка для MacOS
- Открыть терминал и ввести команду `sudo port install mingw-w64`

1.3. Установка для Linux
- Открыть терминал и ввести команду `sudo apt-get install mingw-w64`

### 2. Прописать путь к компилятору в переменную среды PATH

2.1. Для Windows

- Нажать `Win+R` и ввести `sysdm.cpl`
- Перейти на вкладку `Дополнительно`
- Нажать на кнопку `Переменные среды`
- В списке `Системные переменные` найти переменную `Path` и нажать `Изменить`
- Нажать `Создать` и ввести путь к папке bin внутри разахивированной папки из 1-го шага, например `C:\MinGW\bin`
- Нажать `ОК`, закрыть все окна и перезагрузить компьютер

2.2. Для MacOS и Linux

- Открыть терминал и ввести команду `export PATH=$PATH:/usr/local/bin`

### 3. Установить VSCode

- Скачать VSCode с [официального сайта](https://code.visualstudio.com/)
- Установить VSCode

### 4. Установить расширение для VSCode под C++

- Открыть VSCode
- Нажать `Ctrl+Shift+X`
- В поиске ввести `C++`
- Установить расширение `C/C++` от `Microsoft`

### 5. Проверка

- Написать программу HelloWorld
- Внутри VSCode октрыть вкладку `Терминал`
- Для компиляции ввести команду `g++ [Название файла] [название скомпилированного файла]`
- Для запуска ввести команду `./[название скомпилированного файла]`
- Profit!

### 6. Частые ошибки

- Ошибка: `g++ is not recognized as an internal or external command`
- Причина: Не прописан путь к компилятору в переменную среды PATH
- Решение: Вернуться к пункту 2

- Ошибка: `g++: error: [Название файла]: No such file or directory`
- Причина: Не найден файл для компиляции
- Решение: Проверить, что файл существует и находится в той же папке, что и скомпилированный файл

- Ошибка: `g++: error: [Название скомпилированного файла]: Permission denied`
- Причина: Нет прав на запуск скомпилированного файла
- Решение: Перезапустить VSCode от имени администратора

- Ошибка: `g++.exe: fatal error: '-fuse-linker-plugin', but liblto_plugin.dll not foundcompilation terminated.`
- Причина: Ошибка при установке MinGW
- Решение: Удалить MinGW и вернуться к пункту 1
