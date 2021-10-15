#include "Force.h"
#include "Painter.h"
#ifndef UNTITLED1_BOLA_H
#define UNTITLED1_BOLA_H


extern int Vx;
extern int Vy;

class Bola {
public:
    constexpr static const float DT = 0.0005;
    Bola();
    void setDeep(int nivel);
    int getDeep() const;
    void increaseDeep();
    void draw(Painter &) const;
    float x() const;
    float y() const { return y_; }
    void tick(Force);
private:
    int nivel;
    float x_;
    float y_;
    float vx_;
    float vy_;
};

#endif //UNTITLED1_BOLA_H
