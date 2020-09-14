#include "ofApp.h"

#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){
    c1.setSpeed(5);
}

//--------------------------------------------------------------
void ofApp::update() {
    c1.setX(c1.getX() + c1.getSpeed() * c1.getDirection());
    if (c1.getDirection() == 1)
    {
        if (c1.getX() + 60 >= ofGetWidth())
        {
            c1.setDirection(-1);
        }
        else
        {
            c1.setX(c1.getX() + c1.getSpeed() * c1.getDirection());
        }
    }
    else
    {
        if (c1.getX() <= 0)
        {
            c1.setDirection(1);
        }
        else
        {
            c1.setX(c1.getX() + c1.getSpeed() * c1.getDirection());
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    c1.draw();

    c2.setX(ofGetWidth()-60);
    c2.setY(ofGetHeight()-30);
    c2.draw();

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
