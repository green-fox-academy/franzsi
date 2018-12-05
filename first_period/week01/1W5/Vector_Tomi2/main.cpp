#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//a kozos elemeket visszaadod uj vektorkent
//csinalsz egy funkciot ami 2vektort kap argumentkent
//es resultkent meg visszaad egy ujat ami a funkcion belul jon letre
//es abban lesznek a kozos szamok
//vsz van ilyen beepitett
// hogy vector.contains(szam)
//ami boolt ad vissza
// vegigloopolsz a vektoron es csekkolod h a masik contains
//a igen akkor beteszed a result vektorba
//ha nincs akkor meg returnolsz egy ures vektort



int main() {

    int x[]={'1','1','2','3','3','4'};
    int y[]={'3','4','4','5','6'};
    std::vector<int> v1(x,x+sizeof x/sizeof x[0]);
    std::vector<int> v2(y,y+sizeof y/sizeof y[0]);
    std::sort(v1.begin(),v1.end());
    std::sort(v2.begin(),v2.end());  // the vectors *must* be sorted!!!!!!

    vector<int> inter=vector<int>(temp,set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),temp)); // inter contains {'b','c'}
    int cnt=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),temp) - temp;    // cnt=2

    for(int i = 0; i < (int)inter.size(); ++i) {
        cout<<inter[i]<<" ";
    }
    std::cout << std::endl;

    return 0;
}