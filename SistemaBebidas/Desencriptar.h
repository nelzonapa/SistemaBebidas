#pragma once
#include <string>

// Functor Desencriptar
class Desencriptar { // Cifrado Cesar => ROT13
private:
    int n = 13;
public:
    std::string operator()(std::string mensaje) {
        int i = 0;
        while (mensaje[i] != '\0') {
            mensaje[i] -= this->n;
            i++;
        }

        return mensaje;
    }
};