#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


// Create a method that takes two integer lists as a parameter
// and returns an integer list with the mutual elements from the lists.
// Write at least 3 different test cases.

// For example:
//List<Integer> a = new ArrayList<Integer>(Arrays.asList(1, 1, 2, 3, 3, 4));
//        List<Integer> b = new ArrayList<Integer>(Arrays.asList(3, 4, 4, 5, 6));
//
//        System.out.println(filterMutualElements(a, b));
// Should print:
// [3,4]

//a kozos elemekef visszaadod uj vektorkent
//csinalsz egy funkciot ami 2vektort kap argumentkent
//es resultkent meg visszaad egy ujat ami a funkcion belul jon letre
//es abban lesznek a kozos szamok
//vsz van ilyen beepitett
// hogy vector.contains(szam)
//ami boolt ad vissza
// vegigloopolsz a vektoron es csekkolod h a masik contains
//a igen akkor beteszed a result vektorba
//ha nincs akkor meg returnolsz egy ures vektort