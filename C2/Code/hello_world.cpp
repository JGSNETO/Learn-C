#include <iostream>

using namespace::std;
const double m_to_k = 1.609;

//Inline function is one for which the compiler copies the code from the function definition directly into the code 
//of te calling funtion rather than creating a separete set of instructions in memory;
inline double convert(int mi){return (mi * m_to_k);}

int main(void){

    int miles = 1; 
    while(miles != 0){
        cout << "Input distance in miles or 0 to terminate: ";
        cin >> miles;
        cout << "\nDistance is "<< convert(miles)<< " Km." << endl;
    }
    cout << endl; 
}
