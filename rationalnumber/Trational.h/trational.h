#include<iostream>
using namespace std;
class TRational
{
    public:
    int Numer, Denom;
    bool Positive;
    TRational(int N, int D);
    int getNum();
    int getDen();
    bool getPos();
    void Reduce();
    void print();
    void Reduce_Print();
};

TRational::TRational(int N, int D)
{
    if(D == 0)
    {
        cout<<"ERROR!!";
        exit(1);
    }
    else
    {
        Numer = abs(N);
        Denom = abs(D);
        Positive = (N * D)>=0;
    }
}

int TRational::getNum()  {return Numer;}
int TRational::getDen() {return Denom;}
bool TRational::getPos() {return Positive;}

int GCD(int A, int B)
{
    if(A*B==0) return 1;
    else
    {
        while(A!=B) if (A>B) A = A-B; else B=B-A;
        return A;
    }
}

void TRational::Reduce()
{
    int Divisor;
    Divisor = GCD(Numer, Denom);
    Numer = Numer/Divisor;
    Denom = Denom/Divisor;
}

void TRational::print()
{
    if(!Positive) cout<<"-";
    cout<<Numer<<"/"<<Denom<<endl;
}

void TRational::Reduce_Print()
{
    Reduce();
    print();
}
