#include<iostream>
using namespace std;

class town
{
    private:
    int Latitude;
    int Longitude;
    char LatiDri;
    char LongDri;
    string Name;

    public:
    town(string Name, int Lat, int Lon, char LatDri, char LonDri);

    int ReturnLat()  {return Latitude;}
    int ReturnLon() {return Longitude;}
    char ReturnLatDri()  {return LatiDri;}
    char ReturnLonDri() {return LongDri;}
    void Difference(town othertown);
};