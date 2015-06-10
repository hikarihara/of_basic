#include "ofApp.h"

shakingText::shakingText()
{
    x = y = 100;
    r = 255;
    g = 0;
    b = 0;
    shake = 5.0;
    speed = 5.0;
    str = 'a';
}
shakingText::~shakingText()
{
}

void shakingText::draw()
{
    ofSetColor(r,g,b);
    ofDrawBitmapString(str, x+ofRandom(shake), y+ofRandom(shake));
}
void shakingText::update()
{
    y = y + speed;
    if( y > ofGetHeight() ){
        y = 0;
    }
}

void shakingText::setup(string s,
                        int _x, int _y,
                        int _r, int _g, int _b,
                        float _shake, float _speed)
{
    x = _x;
    y = _y;
    r = _r;
    g = _g;
    b = _b;
    shake = _shake;
    speed = _speed;
    str = s;
}

//--------------------------------------------------------------
void ofApp::setup(){
    for( int i = 0; i < 100; i++ ){
        st[i].setup(ofToString((int)ofRandom(10)),
                    ofRandom(ofGetWidth()), ofRandom(ofGetHeight()),
                    ofRandom(255), ofRandom(255), 0,
                    ofRandom(5.0),ofRandom(5.0));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for( int i = 0; i < 100; i++ ){
        st[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    for( int i = 0; i < 100; i++ ){
        st[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}