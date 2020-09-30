#pragma once

#include <vector>

#include "ofMain.h"
#include "Raceable.h"

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        // Car c1;
        // Car c2;

        const static int MAX_NUM_CARS = 10;
        Raceable** cars;
        int numLanes;

        int raceStatus; // 0 = race on  1 = race finished
		
};
