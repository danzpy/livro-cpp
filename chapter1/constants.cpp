#include <cmath>
#include <iostream>

using namespace std;

// const: Ao declarar a variável como constante, ela se tornará imutável.
// constexpr: Declara que sempre que possível, a função ou variável será avaliada no compilamento. 

constexpr double square(double x){ 
    return x*x; 
}

void constants(){
    const int dmv = 17;
    int var = 17;
    const int a = 5;
    constexpr int b = 10;
    constexpr int c = b + 5;
    constexpr int d = a + c;
    

//  constexpr double max1 = 1.4 * square(var); // Causará erro pois var não é uma constante.
    constexpr double max2 = 1.4 * square(dmv);
    const double max3 = 1.4 * square(var);


//  cout << max1 << endl;
    cout << max2 << endl;
    cout << max3 << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;  
}


int main(){
    constants();
}