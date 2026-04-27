#pragma once
class polygon{
    protected:
    int mwidth;
    int mheight;
    public:
    void SetValues(int width,int height);
    virtual int area() = 0;
    void printarea();
};