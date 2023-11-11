#ifndef PARTICLE_H
#define PARTICLE_H

#include <cstdint>

struct Velocity{
   double vx,vy,vz;
   Velocity(double _vx, double _vy, double _vz) : vx(_vx), vy(_vy), vz(_vz) {}

   // Function to add two velocity vectors
   Velocity add(const Velocity& v1, const Velocity& v2) {
    return Velocity(v1.vx + v2.vx, v1.vy + v2.vy, v1.vz + v2.vz);
   }

    // Function to subtract two velocity vectors
    Velocity sub(const Velocity& v1, const Velocity& v2) {
    return Velocity(v1.vx - v2.vx, v1.vy - v2.vy, v1.vz - v2.vz);
    }

    // Function to multiply a constant with a velocity vector
    Velocity mul(double scalar,const Velocity& v) {
    return Velocity(v.vx * scalar, v.vy * scalar, v.vz * scalar);
    }
};
struct Position {
   double x,y,z;
   Position(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

    // Function to add two position vectors
    Position add(const Position& p1, const Position& p2) {
        return Position(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
    }
    Position add(const Position& p1, const Velocity& p2) {
        return Position(p1.x + p2.vx, p1.y + p2.vy, p1.z + p2.vz);
    }

    // Function to subtract two position vectors
    Position sub(const Position& p1, const Position& p2) {
        return Position(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
    }

    // Function to multiply a constant with a position vector
    Position mul(double scalar,const Position& p) {
        return Position(p.x * scalar, p.y * scalar, p.z * scalar);
    }
};
struct Particle{
   uint32_t uniqueId;
   Velocity v;
   Position p;
   double fitness;
   Particle(uint32_t _uniqueId, const Velocity& _v, const Position& _p, double _fitness)
        : uniqueId(_uniqueId), v(_v), p(_p), fitness(_fitness) {}
};
#endif // PARTICLE_H