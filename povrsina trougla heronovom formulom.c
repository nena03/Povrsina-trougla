#include <istream>
#include <ostream>
using namespace std;

struct Tacka
{
double x;
double y;
};

double rastojanje(Tacka A, Tacka B)
{
double dx = B.x - A.x;
double dy = B.y - A.y;
return sqrt(dx*dx + dy*dy);

}

double povrsinaTrougla(double a, double b, double c)
{
double s = (a + b + c) / 2;
return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
Tacka A, B, C;
cout << "Unesi koordinate tacaka A, B i C"<<  endl;
cin >> A.x >> A.y >> B.x >> B.y >> C.x>> C.y;


double a = rastojanje(B, C);
double b = rastojanje(A, C);
double c = rastojanje(A, B);

double P = povrsinaTrougla(a, b, c);
cout <<"Povrsina trougla je: " <<P << endl;
return 0;
}



