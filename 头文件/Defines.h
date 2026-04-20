#pragma once
#ifndef _DEFINES_H_
#define _DEFINES_H_
class Vector
{
public:
    double x;
    double y;
    // 构造函数
    Vector() : x(0), y(0) {}
    Vector(float x, float y) : x(x), y(y) {}

    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    bool operator==(const Vector& obj)const {
        return x == obj.x && y == obj.y;
    }

    bool operator!=(const Vector& obj)const {
        return !(*this == obj);
    }

    // 加等于
    Vector& operator+=(const Vector& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    // 减等于
    Vector& operator-=(const Vector& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }
    friend Vector operator*(const Vector& v1, double n) {
        return Vector(v1.x * n, v1.y * n);
    }
    friend Vector operator*(double n, const Vector& v1) {
        return v1 * n;
    }
    friend Vector operator/(const Vector& v1, double n) {
        return Vector(v1.x / n, v1.y / n);
    }
    friend Vector operator/(double n, const Vector& v1) {
        return v1 / n;
    }

};
using Coordinate = Vector;
class Rect :public Vector {
public:
    double height;
    double width;
    Rect() :Vector(0, 0), height(0),width(0){}
    Rect(double _x,double _y,double _width,double _height):Vector(_x,_y),width(_width),height(_height){}
    Coordinate Getcenter() {
        return Coordinate(x + width * 0.5, y + height * 0.5);
    }
    Coordinate Intersect(const Rect& rect1) const {

    }
    bool Contains(const Coordinate& coord)const {
        return(x > coord.x && x < coord.x + width) && (y > coord.y && y < coord.y + height);
    }
};



#endif // !1
