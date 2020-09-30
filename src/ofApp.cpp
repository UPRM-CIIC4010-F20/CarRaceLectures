#include "ofApp.h"

#include "Car.h"
#include "PoliceCar.h"
#include "Truck.h"


//--------------------------------------------------------------
void ofApp::setup(){
    int laneHeight = 40;
    numLanes = floor(ofGetHeight() / laneHeight);
    cars = new Vehicle*[numLanes];
    raceStatus = 0;
    int laneY = 0;
    for (int i=0; i<numLanes; i++) {
        int nextSpeed = round(ofRandom(5))+1;
        if (i%3==0) {
            cars[i] = new Car(0, laneY, nextSpeed, 1, ofColor(255, 0, 0));
        }
        else if (i%3==1) {
           cars[i] = new Truck(0, laneY, nextSpeed, 1, ofColor(255, 0, 0));
        }
        else {
            cars[i] = new PoliceCar(0, laneY, nextSpeed, 1, ofColor(255, 0, 0));
        }
        laneY += laneHeight;
    }
    c1.setSpeed(5);
}

//--------------------------------------------------------------
void ofApp::update() {
    if (raceStatus == 1) return;

    for (int i=0; i < numLanes; i++) {
        cars[i]->setSpeed(round(ofRandom(3)));

        cars[i]->setX(cars[i]->getX() + cars[i]->getSpeed() * cars[i]->getDirection());
        if (cars[i]->getDirection() == 1)
        {
            if (cars[i]->getX() + 60 >= ofGetWidth())
            {
                cars[i]->setDirection(-1);
            }
            else
            {
                cars[i]->setX(cars[i]->getX() + cars[i]->getSpeed() * cars[i]->getDirection());
            }
        }
        else
        {
            if (cars[i]->getX() <= 0)
            {
                cars[i]->setDirection(1);
            }
            else
            {
                cars[i]->setX(cars[i]->getX() + cars[i]->getSpeed() * cars[i]->getDirection());
            }
        }
    }

    int j = 0;
    while (j< numLanes && cars[j]->getX()+60 < ofGetWidth()) {
        j++;
    }
    if (j< numLanes) {
        // We found a winner
        raceStatus = 1;
    }

    int leaderPosition = 0;
    for (int i=0; i< numLanes; i++) {
        cars[i]->setColor(ofColor(255, 0, 0));
        if (cars[i]->getX() >= cars[leaderPosition]->getX()) {
            leaderPosition = i;
        } 
    }

    cars[leaderPosition]->setColor(ofColor(0,255,0));

}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i=0; i< numLanes; i++) {
        cars[i]->draw();
    }

    //c1.draw();

    // c2.setX(ofGetWidth()-60);
    // c2.setY(ofGetHeight()-30);
    // c2.draw();

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
