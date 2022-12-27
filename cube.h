#pragma once  //always present in .h files define comple file only once

namespace uiuc{
class Cube{
    public:
    double getVol();
    double getArea();
    void setLength(double length);

    private:
    double length_;
};
}