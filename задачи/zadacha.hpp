#include<iostream>
#include<string>
using namespace std;

const int MaxNumEl = 10;

class TArray
{
    public:
    unsigned int NumEl;
    TArray(unsigned int NEL);
    virtual void input() =0;
    virtual void print() =0;
    void setNum(unsigned int Num);
    unsigned int GetNum();
    virtual void Sort(unsigned int How);
    virtual bool GreaterThan(unsigned int I1, unsigned int I2) =0;
    virtual bool LessThan(unsigned int I1, unsigned int I2) =0;
    virtual void Exchange(unsigned int I1,unsigned int I2) =0;
    void CompleteTask(unsigned int How);
};

class TIntArr: public TArray
{
    public:
    int Arr[MaxNumEl];
    TIntArr(unsigned int NEL):TArray(NEL) {}
    virtual void input();
    virtual void print();
    virtual bool GreaterThan(unsigned int I1, unsigned int I2);
    virtual bool LessThan(unsigned int I1, unsigned int I2);
    virtual void Exchange(unsigned int I1, unsigned int I2);
};

struct RecStud
{
    long FacNum;
    string Name;
};

class TRecArr:public TArray
{
    public:
    RecStud Arr[MaxNumEl];
    TRecArr(unsigned int NEL):TArray(NEL) {}
    virtual void input();
    virtual void print();
    virtual bool GreaterThan(unsigned int I1, unsigned int I2);
    virtual bool LessThan(unsigned int I1, unsigned int I2);
    virtual void Exchange(unsigned int I1, unsigned int I2);
};

TArray::TArray(unsigned int NEL)
{
    if(NEL>MaxNumEl)
    {
        cout<<"The elements overflow the max!!"<<endl;
        exit(1);
    }
    setNum(NEL);
}

void TArray::setNum(unsigned int Num)
{
    NumEl=Num;
}

unsigned int TArray::GetNum()
{
    return NumEl;
}

void TArray::Sort(unsigned int How)
{
    unsigned int Step;
    unsigned int inStep;
    unsigned int IndMostEl;

    for(Step = 0; Step<NumEl-1; Step++)
    {
        IndMostEl=0;
        for(inStep = 1; inStep<NumEl-Step;inStep++)
        {
            switch(How)
            {
                case 1:
                if(GreaterThan(inStep, IndMostEl)) IndMostEl=inStep;
                break;
                case 2:
                if(LessThan(inStep, IndMostEl)) IndMostEl=inStep;
                break;
            }
        }
        Exchange(IndMostEl,NumEl-Step-1);
    }
}

void TArray::CompleteTask(unsigned int How)
{
    input();
    Sort(How);
    cout<<"Sorting array"<<endl;
    print();
}

void TIntArr::input()
{
    unsigned int I;
    for(I=0;I<NumEl; I++)
    {
        cout<<"I"<<"";
        cin>>Arr[I];
    }
}


