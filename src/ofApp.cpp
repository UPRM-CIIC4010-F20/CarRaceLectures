#include "ofApp.h"

#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){
    raceStatus = 0;
    int laneY = 0;
    for (int i=0; i<MAX_NUM_CARS; i++) {
        int nextSpeed = round(ofRandom(5))+1;
        cars.push_back(Car(0, laneY, nextSpeed, 1));
        laneY += 40;
    }
    c1.setSpeed(5);
}

//--------------------------------------------------------------
void ofApp::update() {
    if (raceStatus == 1) return;

    for (int i=0; i<cars.size(); i++) {

        cars[i].setSpeed(round(ofRandom(5)));

        cars[i].setX(cars[i].getX() + cars[i].getSpeed() * cars[i].getDirection());
        if (cars[i].getDirection() == 1)
        {
            if (cars[i].getX() + 60 >= ofGetWidth())
            {
                cars[i].setDirection(-1);
            }
            else
            {
                cars[i].setX(cars[i].getX() + cars[i].getSpeed() * cars[i].getDirection());
            }
        }
        else
        {
            if (cars[i].getX() <= 0)
            {
                cars[i].setDirection(1);
            }
            else
            {
                cars[i].setX(cars[i].getX() + cars[i].getSpeed() * cars[i].getDirection());
            }
        }
    }

    int j = 0;
    while (j<cars.size() && cars[j].getX()+60 < ofGetWidth()) {
        j++;
    }
    if (j<cars.size()) {
        // We found a winner
        raceStatus = 1;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i<cars.size(); i++) {
        cars[i].draw();
    }

    //c1.draw();

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
