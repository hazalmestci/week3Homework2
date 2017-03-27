#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    
    // p.setup();
    //    xpos = 5;  // horizontal start position
    angle= 0;

    ofBackground(ofColor::black);
    numberParticles = 150;
    for (int i=0; i<numberParticles; i++) {
        Particle temp;
        temp.setup();
        temp.theta = (TWO_PI/numberParticles)*i;
        particles.push_back(temp);
    }

}

void ofSetFrameRate(float targetFrameRate) {
    
    ofSetFrameRate(10);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //  p.update ();
    
    //    xpos += 2;
    //    if(ofGetWidth()<xpos){  // if horizontal position is off the screen (width)
    //        xpos = 5;             // reset horizontal position
    //    }
    
    for (int i=0; i<numberParticles; i++) {
        particles [i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    float xPos = ofMap(sin(ofGetElapsedTimef()), -1, 1, 0, ofGetWidth());
    ofRect(xPos, ofGetHeight()/2, 100,100);
    
    // p.draw();
    for (int i=0; i<numberParticles; i++) {
        ofTranslate(ofRandom(1, 15), ofRandom(6,10));
        ofRotateY(angle ++);
        particles [i].draw();
        
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
