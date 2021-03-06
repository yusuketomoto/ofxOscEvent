#pragma once

#include "ofMain.h"
#include "ofxOscEvent.h"
class testApp : public ofBaseApp, ofxOscEventListener{

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
    
    void onEventHandler(ofxOscMessage & m);
    
    void onPacketIn(ofxOscMessage & m);
    
    ofxOscEvent osc;
    
    void printOutOscMessage(const ofxOscMessage & m);
		
};
