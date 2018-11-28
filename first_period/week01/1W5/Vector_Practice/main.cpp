#include <iostream>
#include <vector>

int main() {

//In C++ you must specify the starting position and the length of the replacement:

std::string sentence = "I like my cat";
std::string from = "cat";

int start_pos = sentence.find(from);
if(start_pos == std::string::npos) //does the sentence contain cat?
std::cout << "Cannot replace" << std::endl;
else
sentence.replace(start_pos, from.length(), "dog");

    return 0;
}

//TUTORIALVIDEO

//Vector format : vector<datatype> nameOfVector

// myVector.push_back(value) => adds an element to the END of the vector (also resize is it)
// myVector.at(indexnumber) => returns element at specified index number (also resize is it)
// myVector.size(indexnumber) => returns an unsigned int equal top the number of elements
// myVector.begin() => reads vector from the first element (indexnumber 0)
// myVector.insert(myVector.begin()+optional add some sort of integer, new value whatever you want to put it there for the second parameter)
                 //=> returns an unsigned int equal top the number of elements
                 //=> adds elements BEFORE specified indexnumber
// myVector.erase(myVector.begin() + integer) => removes elements AT specified index (indexnumber 0)
// myVector.clear () => removes all elements in  vector
// myVector.empty () => returns boolean value if whether vector is empty



vector<int> myVector;

// add something in:
myVector.pushback(3);
myVector.pushback(5);
myVector.pushback(5);
cout << "Vector: ";

for (unsigned int i = 0; i< myVector.size(); i++) {
 cout << myVector(i) << "";
}

///// print first and then we will modify it.
///// so we can see the original and then we can see how it changes over time.

myVector.insert(myVector.begin(), +3);
cout << myVector(i) << "";

for (unsigned int i = 0; i< myVector.size(); i++) {
cout << myVector(i) << "";
}

if (myVector.empty()){
    cout << endl << "Is empty!"
}
else {
    cout << endl << "Is not empty!"
}


/////if it's empty then see out and line will have its a say
//// true or fale

myVector.erase(myVector.begin(), +4);
cout << myVector(i) << "";

myVector.clear ();

if (myVector.empty()){
cout << endl << "Is empty!"
}
else {
cout << endl << "Is not empty!"
}

MATERIAL REVIEW

//If you want to print all the elements of a vector, you won't find a method that will do that for you.
// You need to iterate through the vector and print the elements one by one.
// Here's an example on how to do that:
//
//std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};
//for(int i = 0; i < numbers.size(); ++i){
//   std::cout << numbers[i] << ", ";
//}
//
//// But here's a more modern way to do the same:
//
//for(const auto number : numbers){
//    std::cout << number << ", ";
//}
//
//// This syntax became available in C++11. The auto means that you tell the compiler
//// to figure out what is the necessary type. Instead of the above you can be more explicit:
//
//for(const int number : numbers){
//    std::cout << number << ", ";
//}
//
//
//// Yes, it seems more complicated and it's even more characters.
//// However in the future you can write auto instead of much more complicated types and it will come in handy :)



