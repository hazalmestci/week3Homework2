//
//  Particle.cpp
//  week3Homework2
//
//  Created by Hazal Mestci on 2/12/17.
//
//

#include "Particle.hpp"

void Particle::setup() {
//        angle=1;
    
    
}

void Particle::draw() {
    ofPushMatrix();
    //
    //    ofRotateY(angle);
    
    ofTranslate(ofGetWindowWidth(), ofGetWindowHeight()/2-500);
    ofSetColor(ofRandom(200,255), ofRandom(40,155), ofRandom(100,205), ofRandom(200,255));
    ofDrawCircle(position.x, position.y, ofRandom(8,38));
    
    ofPopMatrix();
    
    
}


void Particle::move() {
    
    
    
}


void Particle::update() {
    theta += 1 * speed;
    float x= cos(theta) * 60;
    float y= sin(theta) * 60;
    position.set(x, y, 0);
    
}
