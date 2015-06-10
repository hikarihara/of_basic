#pragma once

#include "ofMain.h"



class shakingText{
public:
    shakingText();  // Initialize
    ~shakingText(); // finalize
    int x;
    int y;
    int r,g,b;
    float shake;
    float speed;
    string str;
    void draw();
    void update();
    void setup(string s,
               int _x, int _y,
               int _r, int _g, int _b,
               float _shake,float _speed);
private:
};

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    shakingText st[100];
};