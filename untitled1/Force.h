//
// Created by igarz on 14/10/2021.
//

#ifndef UNTITLED1_FORCE_H
#define UNTITLED1_FORCE_H


struct Force {
    Force(float x, float y);
    float x, y;
    const Force &operator+=(Force f);
};


#endif //UNTITLED1_FORCE_H
