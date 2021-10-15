//
// Created by igarz on 14/10/2021.
//

#ifndef UNTITLED1_PARED_H
#define UNTITLED1_PARED_H

#include <vector>
#include "Force.h"
#include "Painter.h"
#include "Bloque.h"

class Pared {
public:
    int score;
    enum { ROWS_COUNT = 16,
        COLS_COUNT = 8 * 3 };
    enum { ANCHO = ROWS_COUNT * Bloque::ANCHO,
        ALTURA = COLS_COUNT * Bloque::ALTURA };
    Pared();
    void draw(Painter &) const;
    Force tick(const Bola &);
    int points;
public:
    typedef std::vector<Bloque> Bloques;
    Bloques bloques_;
};


#endif //UNTITLED1_PARED_H
