#include <iostream>

class Point{
private:
    int x;
    int y;
public:
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    void setX( int _x) {
        if (_x < -70 || _x > 70)
            std::cout << "Incorrect value of x\n";
        x = _x;

    }

    void setY( int _y){
        if (_y < -70 || _y > 70)
            std::cout << "Incorrect value of y\n";
        y = _y;
    }

    void print(){
        std::cout<< x << " | " << y <<'\n';
    }
};

void foo( Point point1, Point poin2){

}

int main() {
    Point a;
    a.setX(-100);
    a.setY(-120);
    a.print();

    Point b;
    b.setX(a.getX());
    b.setY(a.getY());
    b.getX();
    b.print();

    return 0;
}