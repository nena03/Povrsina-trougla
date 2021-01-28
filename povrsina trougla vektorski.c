#include<iostream>
using namespace std;
double duzinaVektora(vector<double> u) {
return sqrt(u[0]*u[0] + u[1]*u[1] + u[2]*u[2]);
}
void vektorskiProizvod(vector<double> a, vector<double> b, vector<double> & p){
p[0] = a[1]*b[2] - a[2]*b[1];
p[1] = a[0]*b[2] - a[2]*b[0];
p[2] = a[0]*b[1] - a[1]*b[0];
}
double povrsinaTrougla(Tacka A, Tacka B, Tacka C) {

vector<double> AB;
AB.push_back(B.x-A.x);
AB.push_back(B.y-A.y);
AB.push_back(0);


vector<double> AC;
AC.push_back(C.x-A.x);
AC.push_back(C.y-A.y);
AC.push_back(0);

vector<double> v(3);
vektorskiProizvod(AB, AC, v);

return duzinaVektora(v) / 2.0;
}
int main() {
Tacka A, B, C;
cout <<"Unesi koordinate tacaka A, B i C"<< endl;
cin >>A.x >> A.y >> B.x >> B.y >> C.x >> C.y;

double P = povrsinaTrougla(A, B, C);
cout << "Povrsina trougla je:"<< P << endl;
return 0;
}
