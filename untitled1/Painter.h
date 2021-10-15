//
// Created by igarz on 14/10/2021.
//

#ifndef UNTITLED1_PAINTER_H
#define UNTITLED1_PAINTER_H


class Painter {
public:
    enum Color{YELLOW,GREEN,ORANGE,RED,WHITE,BLACK};
    static void bar(float x1, float y1, float x2, float y2);
    static void ball(float x, float y);
    static void setColor(Color);
};



#endif //UNTITLED1_PAINTER_H
