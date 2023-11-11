#include "fanetNetwork.h"

// Implementation of update function
void FanetNetwork::psoVelocityAndLocationUpdate
(Partical& partical, Particle& personalBest,  Particle& globalBest) {

    // Generate random values between 0 and 1
    double u1 = ((double) rand() / (RAND_MAX));
    double u2 = ((double) rand() / (RAND_MAX));
  
   // Update velocity
    Velocity newVelocity =  add( mul(omega,particle.v) ,
                          add(mul(c1 * u1 , (personalBest.p - particle.p)) +
                          mul(c2 * u2 ,(globalBest.p - particle.p))));

    // Update position
    Position newPosition = add(particle.p , newVelocity);

    // Update the particle's velocity and position
    particle.v = newVelocity;
    particle.p = newPosition;
 
}
