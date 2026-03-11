# GUI do aplikacji MFC

Ten repozytorium zawiera prosty szkielet aplikacji **MFC (dialog-based)** z jednym oknem, przyciskiem i polem tekstowym.

## Co jest w projekcie

- `MfcGuiApp.*` – klasa aplikacji (`CWinApp`).
- `MainDialog.*` – główne okno dialogowe (`CDialogEx`) oraz obsługa zdarzeń.
- `MfcGui.rc` + `resource.h` – definicje zasobów (okno, przycisk, etykieta).

## Działanie

Po uruchomieniu aplikacji:
1. Wyświetla się okno „MFC GUI Demo”.
2. Kliknięcie przycisku **Kliknij mnie** aktualizuje etykietę komunikatem.

## Jak użyć (Visual Studio)

1. Utwórz nowy projekt **MFC App** (Dialog based) w Visual Studio.
2. Podmień wygenerowane pliki na pliki z tego repozytorium.
3. Upewnij się, że `resource.h` i `MfcGui.rc` są dodane do projektu.
4. Zbuduj i uruchom aplikację.
