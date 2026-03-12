# GUI aplikacji w Qt (Widgets)

Tak — **to są pliki, które możesz normalnie skompilować w Qt Creator**, bo projekt jest oparty o **CMake + Qt Widgets**.

## Co zawiera projekt

- `CMakeLists.txt` – konfiguracja budowania przez CMake (Qt5/Qt6).
- `src/main.cpp` – punkt wejścia aplikacji.
- `src/MainWindow.*` – główne okno z etykietą statusu i przyciskiem.

## Kompilacja w Qt Creator (zalecane)

1. Uruchom **Qt Creator**.
2. Wybierz **File -> Open File or Project...**.
3. Wskaż plik `CMakeLists.txt` z tego repo.
4. Wybierz Kit zgodny z Twoją instalacją Qt (np. **Desktop Qt 6.x MinGW** albo **Desktop Qt 6.x MSVC**).
5. Kliknij **Configure Project**.
6. Zbuduj i uruchom przyciskiem **Run** (zielona strzałka).

Jeśli nie widzisz żadnego Kita Qt, doinstaluj odpowiedni komponent w **Qt Maintenance Tool** (Qt + kompilator).

## Kompilacja z terminala

### Windows (Visual Studio + Qt)

1. Zainstaluj Qt (np. przez Qt Online Installer) i komponent **Qt Widgets**.
2. Otwórz „x64 Native Tools Command Prompt for VS”.
3. Ustaw ścieżkę do Qt (przykład):

   ```bat
   set CMAKE_PREFIX_PATH=C:\Qt\6.7.2\msvc2022_64
   ```

4. Zbuduj projekt:

   ```bat
   cmake -S . -B build -G "Visual Studio 17 2022"
   cmake --build build --config Release
   ```

5. Uruchom:

   ```bat
   build\Release\CuteGuiApp.exe
   ```

### Linux (Qt + CMake)

```bash
cmake -S . -B build
cmake --build build -j
./build/CuteGuiApp
```

> Jeśli `cmake` nie znajduje Qt, ustaw `CMAKE_PREFIX_PATH` na katalog instalacji Qt.

## Zachowanie aplikacji

- Startuje okno „Qt GUI Demo”.
- Kliknięcie przycisku **Kliknij mnie** zmienia tekst statusu.
