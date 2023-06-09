#include <iostream>
  
class SimpleCat
{
public:
    SimpleCat();
    SimpleCat(SimpleCat&);
    ~SimpleCat();
  
    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }
  
private:
    int itsAge;
};
  
SimpleCat::SimpleCat()
{
    std::cout << "Simple Cat Constructor ...\n";
    itsAge = 1;
}
  
SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "Simple Cat Copy Constructor ...\n";
}
  
SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor ...\n";
}
  
const SimpleCat * const 
FunctionTwo (const SimpleCat *const theCat);
  
int main()
{
    std::cout << "Making a cat ...\n";
    SimpleCat Frisky;
    std::cout << "Frisky is ";
    std::cout << Frisky.GetAge() << " years old\n";
    int age = 5;
    Frisky.SetAge(age);
    std::cout << "Frisky is ";
    std::cout << Frisky.GetAge() << " years old\n";
    std::cout << "Calling FunctionTwo ...\n";
    FunctionTwo(&Frisky);
    std::cout << "Frisky is ";
    std::cout << Frisky.GetAge() << " years old\n";
    return 0;
}
  
// functionTwo, passes a const pointer
const SimpleCat * const 
FunctionTwo (const SimpleCat * const theCat)
{
    std::cout << "Function Two. Returning ...\n";
    std::cout << "Frisky is now " << theCat->GetAge();
    std::cout << " years old \n";
    // theCat->SetAge(8); const!
    return theCat;
 }