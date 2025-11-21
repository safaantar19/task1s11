#include <iostream>

using namespace std;

class DeliveryTimeEstimator
{
public:
    int estimatTime(int distanceInKm)
    {
        int delivery = (distanceInKm / 10) + 1;
        return delivery;
    }
    int estimatTime(string cityName)
    {
        if (cityName == "Cairo")
        {
            return 2;
        }
        else if (cityName == "Alex")
        {
            return 3;
        }
        else
        {
            return 5;
        }
    }
};

