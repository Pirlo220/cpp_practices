# include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=5, b=8, maximum;
    //maximum from a and b
    maximum = max(a, b);

    //swapping two values
    swap(a, b); //a = 8, b= 5

    //double pow (double base, double exponent);
    int number = 2;

    double cubicRoot = pow((double) (number), 1.0/3); //1 (or 3) is type of int / 1.0 (or 3.0) is of type double
    cout << cubicRoot;
    cout << fixed << setprecision(10)<<cubicRoot<<"\n"; // rounded to 10 decimals
    cout << fixed << setprecision(3)<<cubicRoot<<"\n"; // rounde to 3 decimals
    return 0;

}
