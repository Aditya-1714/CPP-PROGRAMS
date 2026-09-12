#include <windows.h>
#include <string>
using namespace std;

class Calculator {
public:
    double calculate(double a, double b, char op) {
        if (op == '+') return a + b;
        if (op == '-') return a - b;
        if (op == '*') return a * b;
        if (op == '/') return b != 0 ? a / b : 0;
        return 0;
    }
};

Calculator calc;
HWND input1, input2, result;
HWND operation;

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {

    if (msg == WM_COMMAND) {

        if (LOWORD(wp) == 5) {

            char aText[50], bText[50], opText[5];

            GetWindowText(input1, aText, 50);
            GetWindowText(input2, bText, 50);
            GetWindowText(operation, opText, 5);

            double a = stod(aText);
            double b = stod(bText);

            double ans = calc.calculate(a, b, opText[0]);

            string answer = to_string(ans);

            SetWindowText(result, answer.c_str());
        }
    }

    if (msg == WM_DESTROY) {
        PostQuitMessage(0);
    }

    return DefWindowProc(hwnd, msg, wp, lp);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow) {

    WNDCLASS wc = {};
    wc.hInstance = hInstance;
    wc.lpszClassName = "Calculator";
    wc.lpfnWndProc = WindowProcedure;

    RegisterClass(&wc);

    HWND window = CreateWindow(
        "Calculator",
        "Simple Calculator",
        WS_OVERLAPPEDWINDOW,
        500, 200, 400, 350,
        NULL, NULL, hInstance, NULL
    );

    CreateWindow(
        "STATIC", "Number 1:",
        WS_VISIBLE | WS_CHILD,
        30, 30, 100, 30,
        window, NULL, hInstance, NULL
    );

    input1 = CreateWindow(
        "EDIT", "",
        WS_VISIBLE | WS_CHILD | WS_BORDER,
        130, 30, 200, 30,
        window, NULL, hInstance, NULL
    );

    CreateWindow(
        "STATIC", "Operator:",
        WS_VISIBLE | WS_CHILD,
        30, 80, 100, 30,
        window, NULL, hInstance, NULL
    );

    operation = CreateWindow(
        "EDIT", "+",
        WS_VISIBLE | WS_CHILD | WS_BORDER,
        130, 80, 200, 30,
        window, NULL, hInstance, NULL
    );

    CreateWindow(
        "STATIC", "Number 2:",
        WS_VISIBLE | WS_CHILD,
        30, 130, 100, 30,
        window, NULL, hInstance, NULL
    );

    input2 = CreateWindow(
        "EDIT", "",
        WS_VISIBLE | WS_CHILD | WS_BORDER,
        130, 130, 200, 30,
        window, NULL, hInstance, NULL
    );

    CreateWindow(
        "BUTTON", "Calculate",
        WS_VISIBLE | WS_CHILD,
        130, 180, 200, 40,
        window, (HMENU)5, hInstance, NULL
    );

    CreateWindow(
        "STATIC", "Result:",
        WS_VISIBLE | WS_CHILD,
        30, 240, 100, 30,
        window, NULL, hInstance, NULL
    );

    result = CreateWindow(
        "EDIT", "",
        WS_VISIBLE | WS_CHILD | WS_BORDER | ES_READONLY,
        130, 240, 200, 30,
        window, NULL, hInstance, NULL
    );

    ShowWindow(window, nCmdShow);

    MSG msg = {};

    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}