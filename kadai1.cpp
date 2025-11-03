#include "kadai1.h"

char grade(int score) {
    if (score > 80) {
        return 'A';
    } else if (score > 60) {
        return 'B';
    }
    return 'F';
    }
}