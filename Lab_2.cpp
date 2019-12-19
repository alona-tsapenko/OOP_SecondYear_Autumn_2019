#include<iostream>
#include<math.h>
using namespace std;
int main()      
{
    int x1,y1,x2,y2,x3,y3,x0,y0;
    cout << "A" << endl;
    cin >> x1 >> y1;
    cout << "B"<< endl;
    cin >> x2 >> y2;
    cout << "C" << endl;
    cin >> x3 >> y3;
    cout << "D" << endl;
    cin >> x0 >> y0;
int A=(x1-x2)*(y0-y2)-(x0-x2)*(y1-y2);
int B=(x2-x3)*(y0-y3)-(x0-x3)*(y2-y3);
int C=(x3-x1)*(y0-y1)-(x0-x1)*(y3-y1);
    if (A>0 && B>0 && C>0) 
    cout << "0";
    if (A<0 && B<0 && C<0)
    cout << "1";
    if (A==0 || B==0 || C==0)
    cout << "2";
    return 0;
}
