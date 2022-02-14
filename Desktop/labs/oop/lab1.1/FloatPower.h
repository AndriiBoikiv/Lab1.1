//FloatPower.h

#include <iostream>
#include <cmath>
#pragma once

using namespace std;

class FloatPower{
    private:
        float first, second;
    public:
        float get_first();
        float get_second();
        void set_first(float value);
        void set_second(float value);

        bool init(float x, float y);
        void display() const;
        void read();

        void power();
};