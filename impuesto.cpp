#include <iostream>
using namespace std;

float calcularSubtotal(int cantidad, float precioUnitario) {
    float subtotal = cantidad * precioUnitario;
    if (cantidad >= 2) {
        subtotal *= 0.8; // Aplica descuento del 20%
    }
    return subtotal;
}

float calcularIVA(float subtotal) {
    return subtotal * 0.15;
}

float calcularTotal(float subtotal, float iva) {
    return subtotal + iva;
}

int main() {
    int cantidad;
    float precioUnitario;
    
    cout << "Ingrese la cantidad de productos adquiridos: ";
    cin >> cantidad;
    
    cout << "Ingrese el precio unitario de productos: $";
    cin >> precioUnitario;
    
    float subtotal = calcularSubtotal(cantidad, precioUnitario);
    float iva = calcularIVA(subtotal);
    float total = calcularTotal(subtotal, iva);
    
    cout << "Subtotal: $" << subtotal << endl;
    cout << "IVA (15%): $" << iva << endl;
    cout << "Total a pagar: $" << total << endl;
    
    return 0;
}
