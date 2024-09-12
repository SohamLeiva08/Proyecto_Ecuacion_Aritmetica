#include <iostream>

int main() {
    string expression;
    cout << "Ingrese una operación compleja: ";
    getline(cin, expression);

    double result = evaluate(expression);
    cout << "Resultado: " << result << endl;

    return 0;
}