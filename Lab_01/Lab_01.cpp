#include <iostream>
#include <math.h>
#define M_Pi  3.14159265358979323846
using namespace std;

int main() {
 setlocale(LC_ALL,"Russian");
  double Aa,Ab,Ba,Bb,a,b,c,d,s;
  double P=40075.7;
  cout <<" Широта и долгота одной точки:";
  cin >> Aa >> Ba;
  cout <<" Широта и долгота второй точки:";
  cin >> Ab >> Bb;
      b=sin(Aa)*sin(Ab);
      c=cos(Aa)*cos(Ab);
      d=cos(Ba-Bb);
      a=acos(b+c*d);
      s=(a*P)/(3*M_Pi) ;
cout <<"расстояние между точками:"<< s << endl;
}
