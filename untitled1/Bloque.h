//
// Created by igarz on 14/10/2021.
//

#ifndef UNTITLED1_BLOQUE_H
#define UNTITLED1_BLOQUE_H


#include "Painter.h"
#include "Force.h"
#include "Bola.h"
extern int score;
extern bool deepState;
class Bloque {
public:
    Bloque(int col,int row, int type);
    enum{ANCHO = 25,ALTURA=20};
    void draw(Painter &) const;
    void destroy();
    Force tick(const Bola &);
    int points;
    bool destroyed = false;
    int timesHit = 0;
private:
    int hits;
    int type;
    float col_;
    float row_;
    void setType(int t);
    void checkDestroyed();
    int countDownTimer_;
};

#endif //UNTITLED1_BLOQUE_H
