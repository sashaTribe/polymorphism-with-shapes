#include <string>
#ifndef SHAPE_H_
#define  SHAPE_H_

class Shape{
    public:
        Shape() = default;
        virtual ~Shape() = default;
        virtual std::string to_string() const = 0;
        virtual void centre_at(double x, double y) = 0;

};

class Circle : public Shape{
    protected:
        double x,y; //positions
        double r; //radius
    public:
        Circle (const double &x, const double &y, const double &r);
        virtual ~Circle();
        virtual std::string to_string() const override;
        virtual void centre_at(const double x, const double y);
};

class Rectangle : public Shape{
    protected:
        double x0,y0,x1,y1;
    public:
    Rectangle (const double &x0,const double &y0,const double &x1,const double &y1 );
    virtual ~Rectangle();
    virtual std::string to_string() const override;
    virtual void centre_at(const double x, const double y);
};

class Triangle : public Shape{
    protected: 
        double x0,y0,x1,y1,x2,y2;
    public:
    Triangle (const double &x0,const double &y0,const double &x1,const double &y1, const double &x2, const double &y2);
    virtual ~Triangle();
    virtual std::string to_string() const override;
    virtual void centre_at(const double x, const double y);

};
#endif
