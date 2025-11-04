#include <iostream>

using namespace std;

//funktio joka tulostaa summan
void calcsum(int a, int b){
    cout << "calcsum: " << a << "+" << b << "=" << a + b << endl;
}
//Osamäärä
void calcDiv(int a, int b){
    if (b==0){
        cout << "Virhe! Jakaja ei saa olla nolla." <<endl;
    } else {
        float result = (float) a / b;
        printf("%d / %d = %.2f\n", a, b, result);

    }
}
//Summan palautus
int retSum(int a, int b){
    return a + b;
}
//osamäärä tai virhe
float retDiv(int a, int b, bool& success){
    if (b==0){
        success = false;
        return 0.0f;
    }
    success = true;
    return (float) a / b;
}


int main()
{
    int a, b;
    cout << "Anna luvut: a ja b " << endl;
    cin >> a >> b;

    calcsum(a, b);
    calcDiv(a, b);

    int summa = retSum(a, b);
    cout << a << "+" << b << "=" << summa << endl;

    bool success;
    float osamaara = retDiv(a, b, success);
    if (success){
        printf("%d / %d = %.2f\n", a, b, osamaara);
    } else{
        cout << "Virhe! Jakaja ei saa olla nolla." << endl;

    }


    return 0;
}
