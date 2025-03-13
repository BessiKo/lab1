#include <iostream>
#include <cmath>
#include <cstdlib>
int  main(){
using namespace std;
double a=0, b=0;
cout << "Введите длину  ";
cin >> a;
cout << "Введите ширину  ";
cin >> b;
if (a>0 && b>0){
cout << "периметр= " << 2*(a+b) << endl;
cout << "площадь= " << a*b << endl;
cout << "длина диагонали= "<< sqrt(a*a+b*b)<<endl;
}else cout<<" стороны должны быть положительными."<<endl;
}
