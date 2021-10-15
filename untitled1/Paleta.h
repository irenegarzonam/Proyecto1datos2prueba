//
// Created by igarz on 14/10/2021.
//

#ifndef UNTITLED1_PALETA_H
#define UNTITLED1_PALETA_H
#include "Painter.h"
#include "Force.h"
#include "Bola.h"
extern int TPared;

class Paleta {
public:
    enum{ANCHO=60};
    Paleta();
    void draw(Painter &) const;
    Force tick(const Bola &) const;
    void setX(int x);

private:
    int x_;
};

#endif //UNTITLED1_PALETA_H
