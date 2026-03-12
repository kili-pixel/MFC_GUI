# GUI aplikacji w Qt (Widgets)

Masz rację — jeśli miało być **Qt** (a nie MFC), to ten projekt jest teraz przygotowany jako minimalna aplikacja **Qt Widgets**.

## Co zawiera projekt

- `CMakeLists.txt` – konfiguracja budowania przez CMake (Qt5/Qt6).
- `src/main.cpp` – punkt wejścia aplikacji.
- `src/MainWindow.*` – główne okno z etykietą statusu i przyciskiem.

## Jak skompilować

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
