#include "kerucut.h"

float luasAlas_103032400036(float r){
    return (phi * r * r);
}

float luasSelimut_103032400036(float r, float s){
    return (phi * r * s);
}

float luasPermukaan_103032400036(float r, float s){
    return luasAlas_103032400036(r) + luasSelimut_103032400036(r,s);
}

float volumeKerucut_103032400036(float r, float t){
    return (1.0/3.0) * r * r * t * phi;
}
