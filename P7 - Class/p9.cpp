#include <iostream>

using namespace std;

class Line
{
    public:
    double getLength(void);
    Line(int len);
    Line(const Line &obj);
    ~Line();

    private:
    int *ptr;
};

Line::Line(int len)
{
    cout << "Normal constructor allocating ptr" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line(void)
{
    cout << "Freeing memory!" << endl;
    delete ptr;
}

double Line::getLength(void)
{
    return *ptr;
}

void display(Line obj)
{
    cout << "Length of line : " << obj.getLength() << endl;
}

int main(){
    Line line(10);
    display(line);

    return 0;
}