
#include "glut.h"
#include <iostream>
#include "Juego.h"
#include "Pared.h"
#include "Painter.h"

Juego* juego = Juego::getInstance();
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    Painter p;
    juego->draw(p);
    glutSwapBuffers();
}
void timer(int = 0){
    for(int i = 0; i<1.0/25/Bola::DT; ++i)
        juego->tick();
    display();
    glutTimerFunc(1000/25,timer,0);
}
int main(int argc, char **argv){
    /**
     * pthread_t thread;
    (&thread, nullptr, serverRun, nullptr);
    pthread_detach(thread);
     */

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(Pared::ANCHO,Pared::ALTURA);
    glutCreateWindow("Breakout!");
    glClearColor(256,0,256,1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,Pared::ANCHO,Pared::ALTURA,0,-1.0,1.0);
    glutDisplayFunc(display);
    timer();
    glutMainLoop();
}