#pragma once
//Базовый класс
class Figure {
protected:
    unsigned int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0, sides_count = 0, angleSum = 0;

public:
    Figure() {};
    Figure(unsigned int Q_a, unsigned int Q_b, unsigned int Q_c, unsigned int Q_d, unsigned int Q_A, unsigned int Q_B, unsigned int Q_C, unsigned int Q_D, unsigned int _sides_count) {
        a = Q_a; b = Q_b, c = Q_c, d = Q_d, A = Q_A, B = Q_B, C = Q_C, D = Q_D, sides_count = _sides_count; angleSum = A + B + C + D;
    };
    virtual bool check() {
        if (sides_count == 0) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_figure() {
        std::cout << "Фигура: " << std::endl;
        print_info();
    }
    virtual void print_info() {
        switch (check()) {
        case 0: std::cout << "Неправильная" << std::endl; break;
        case 1: std::cout << "Правильная" << std::endl; break;
        }
        std::cout << "Количество сторон: " << sides_count << std::endl;
    }
};


//Треугольник
class Triangle : public Figure{
public:
    Triangle() {};
    Triangle(unsigned int T_a, unsigned int T_b, unsigned int T_c, unsigned int T_A, unsigned int T_B, unsigned int T_C, unsigned int _sides_count){
        a = T_a; b = T_b; c = T_c;
        A = T_A; B = T_B; C = T_C;
        sides_count = _sides_count;
        angleSum = A + B + C;
    }
    bool check() override{
        if ((sides_count == 3) && (angleSum == 180)) {
            return(true) ;
        }
        else {
            return(false);
        }
    }
    void print_info() override{
        std::cout << std::endl << "Треугольник: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << "\n\n";
    }
};

//Прямоугольный треугольник
class RightTriangle : public Figure {
public:
    RightTriangle(unsigned int RT_a, unsigned int RT_b, unsigned int RT_c, unsigned int RT_A, unsigned int RT_B, unsigned int RT_C, unsigned int _sides_count) : Figure() {
        a = RT_a; b = RT_b; c = RT_c;
        A = RT_A; B = RT_B; C = RT_C;
        sides_count = _sides_count;
        angleSum = A + B + C;
    }
    bool check() override {
        if ((sides_count == 3) && (angleSum == 180) && (C == 90)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Прямоугольный треугольник: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << "\n\n";
    }
};

//равнобедренный
class IsoscelesTriangle : public Figure {
public:
    IsoscelesTriangle(unsigned int IT_a, unsigned int IT_b, unsigned int IT_c, unsigned int IT_A, unsigned int IT_B, unsigned int IT_C, unsigned int _sides_count) : Figure() {
        a = IT_a; b = IT_b; c = IT_c;
        A = IT_A; B = IT_B; C = IT_C;
        sides_count = _sides_count;
        angleSum = A + B + C;
    }
    bool check() override {
        if ((sides_count == 3) && (angleSum == 180) && (A == C)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Равнобедренный треугольник: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << "\n\n";
    }
};

//равносторонний тругольник
class EquilateralTriangle : public Figure {
public:
    EquilateralTriangle(unsigned int ET_a, unsigned int ET_b, unsigned int ET_c, unsigned int ET_A, unsigned int ET_B, unsigned int ET_C, unsigned int _sides_count) : Figure() {
        a = ET_a; b = ET_b; c = ET_c;
        A = ET_A; B = ET_B; C = ET_C;
        sides_count = _sides_count;
        angleSum = A + B + C;
    }
    bool check() override {
        if ((sides_count == 3) && (angleSum == 180) && (a == b && b == c) && (A == B && B == C && C == 60)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Равносторонний треугольник: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << "\n\n";
    }
};






//Прямоугольник
class Rectangle : public Figure {
public:
    Rectangle(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D, unsigned int _sides_count) : Figure() {
        a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        sides_count = _sides_count;
        angleSum = A + B + C + D;
    }
    bool check() override {
        if ((sides_count == 4) && (angleSum == 360)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Прямоугольник: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n\n";
    };
};

//Квадрат
class Square : public Figure {
public:
    Square(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D, unsigned int _sides_count) : Figure() {
        a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        sides_count = _sides_count;
        angleSum = A + B + C + D;
    }
    bool check() override {
        if ((sides_count == 4) && (angleSum == 360) && ((a == b) && (b == c) && (c == d)) && (A == B && B == C && C == D && D == 90)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Квадрат: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n\n";
    };
};

//параллелограмм
class Parallelogramm : public Figure {
public:
    Parallelogramm(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D, unsigned int _sides_count) : Figure() {
        a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        sides_count = _sides_count;
        angleSum = A + B + C + D;
    }
    bool check() override {
        if ((sides_count == 4) && (angleSum == 360) && ((a == c) && (b == d)) && (A == C && B == D)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Параллелограмм: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n\n";
    }
};


//ромб
class Rhomb : public Figure {
public:
    Rhomb(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D, unsigned int _sides_count) : Figure() {
        a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
        sides_count = _sides_count;
        angleSum = A + B + C + D;
    }
    bool check() override {
        if ((sides_count == 4) && (angleSum == 360) && ((a == b) && (b == c) && (c == d)) && (A == C && B == D)) {
            return(true);
        }
        else {
            return(false);
        }
    }
    void print_info() override {
        std::cout << "Ромб: " << std::endl;
        Figure::print_info();
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n\n";
    }
};