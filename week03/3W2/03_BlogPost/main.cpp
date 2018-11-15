#include <iostream>
#include "blogPost.h"

int main() {

    blogPost p;
    blogPost q ("John Doe" ,"2000.05.04." , "Lorem ipsum dolor sit amet." , "Lorem ipsum");
    p.getInfo();
    q.getInfo ();




    return 0;
}