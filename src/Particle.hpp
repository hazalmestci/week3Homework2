//
//  Particle.hpp
//  week3Homework2
//
//  Created by Hazal Mestci on 2/12/17.
//
//

#ifndef Particle_hpp
#define Particle_hpp


#include <stdio.h>
#include "ofMain.h"

class Particle {
public:
    void setup();
    void draw ();
    void move ();
    void update ();
    
    float theta;
    
    
    ofVec3f position;
    ofVec3f center;
    float radius;
    float orbitRadius;
    float speed =0.3;
    //    float angle;
    
    
    
};
#endif /* Particle_hpp */
