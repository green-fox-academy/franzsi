#include <iostream>
#include "postit.h"

int main() {

    PostIt p;
    PostIt q(" red", " Yo wazzup?", " black");
    p.getInfo();
    q.getInfo();

    return 0;
}
