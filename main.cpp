#include <iostream>
using namespace std;

double add(double a, double b) { return 0; }
double sub(double a, double b) { return 0; }
double mul(double a, double b) { return 0; }
double div(double a, double b) { return 0; }

int main() {
    double a, b;
    char op;
    cout << "请输入表达式（如 3 + 4）：";
    if (!(cin >> a >> op >> b)) return 1;

    double ans = 0;
    switch (op) {
        case '+': ans = add(a, b); break;
        case '-': ans = sub(a, b); break;
        case '*': ans = mul(a, b); break;
        case '/':
            if (b == 0) { cerr << "除数不能为 0" << endl; return 2; }
            ans = div(a, b); break;
        default: cerr << "不支持的运算符" << endl; return 3;
    }
    cout << a << " " << op << " " << b << " = " << ans << endl;
    return 0;
}