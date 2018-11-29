#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

/*
[21:56, 11/22/2018] Tamás Varga: na rutinkérdés
[21:57, 11/22/2018] Tamás Varga: csinálni kell egy kutyákkal teli vektort és egy funkciót ami kiadja a kutyákat
amiknek 5-betűnél hosszabb a nevük
[21:57, 11/22/2018] Tamás Varga: mondd el csak címszavakban hogy hogy mennél végig a feladaton

[22:00, 11/22/2018] Tamás Varga: 5 mondat
[22:00, 11/22/2018] franzsi: hát csinálok egy kutyaklasszt :D
[22:00, 11/22/2018] Tamás Varga: kb 4-5 dolog van amit hallani akarok
[22:01, 11/22/2018] franzsi: oda definiálom a kutyákat a headerbe

[22:01, 11/22/2018] Tamás Varga: igen
[22:01, 11/22/2018] Tamás Varga: milyen kategóriák lesznek a headerben

[22:01, 11/22/2018] Tamás Varga: mik lesznek a headerben
[22:02, 11/22/2018] franzsi: hát akkor így gondolom a neveket
[22:03, 11/22/2018] franzsi: vectorként adom meg?
[22:03, 11/22/2018] Tamás Varga: előbb mondd el a kutya classt hogy definiálod és mikből állna
[22:04, 11/22/2018] franzsi: mármint a headerben
[22:04, 11/22/2018] franzsi: private-ba rakom a kutyaneveket?
[22:06, 11/22/2018] Tamás Varga: egy kutyának csak neve van
[22:06, 11/22/2018] Tamás Varga: igen de ez az egyik lényeg
[22:07, 11/22/2018] Tamás Varga: a privát értékek: enkapszuláció
[22:07, 11/22/2018] Tamás Varga: és mi kell még
[22:07, 11/22/2018] franzsi: csinálok voidokat a publicba?
[22:08, 11/22/2018] franzsi: hmmm ezen most elgondolkodtam, hogy amúgy a main-be egy for int ciklussal keresgélek majd közöttük?
[22:08, 11/22/2018] Tamás Varga: mst ne azon gondolkodj
[22:08, 11/22/2018] Tamás Varga: hanem hogy ha a neve a kutyának private
[22:08, 11/22/2018] Tamás Varga: akkor mi kell még
[22:08, 11/22/2018] Tamás Varga: hogy elérd a private nevet
[22:10, 11/22/2018] franzsi: hűát meg kell hívni majd őket!
[22:10, 11/22/2018] Tamás Varga: mivel?
[22:10, 11/22/2018] franzsi: hát nem az az enkapszuláció?
[22:11, 11/22/2018] Tamás Varga: az enkapszuláció az az hogy private értékek vannak
[22:11, 11/22/2018] Tamás Varga: amiket úgy tudunk elérni, hogy....?
[22:11, 11/22/2018] franzsi: át vagy a ponttal, vagy a getterrel, vagy azzal az alulvonássossald
[22:11, 11/22/2018] franzsi: de it tnem lehet pontot hasznlni, ezrét alulvonsásos
[22:11, 11/22/2018] Tamás Varga: a ponttal nem mivel private
[22:11, 11/22/2018] Tamás Varga: úgyhogy egy funkcióval
[22:12, 11/22/2018] Tamás Varga: ami a getter
[22:12, 11/22/2018] franzsi: jup
[22:12, 11/22/2018] Tamás Varga: igen és milyen különleges funkció lesz még ott
[22:12, 11/22/2018] Tamás Varga: aminek a neve ugyanaz mint a....?
[22:13, 11/22/2018] franzsi: kostruktor?
[22:13, 11/22/2018] Tamás Varga: igen
[22:13, 11/22/2018] Tamás Varga: mire jó a konstruktor?
[22:13, 11/22/2018] franzsi: és aluvonással ugyanaz a neve
[22:13, 11/22/2018] Tamás Varga: nem
[22:13, 11/22/2018] Tamás Varga: ugyanaz a neve, mint a class neve nagybetűvel
[22:13, 11/22/2018] Tamás Varga: nincs alulvonsá
[22:13, 11/22/2018] franzsi: azzal inicializáljuk?
[22:13, 11/22/2018] Tamás Varga: igen
[22:13, 11/22/2018] Tamás Varga: mit jelent az inicializálás
[22:13, 11/22/2018] franzsi: ajj azt az alulvonást, amúgy
[22:13, 11/22/2018] Tamás Varga: hogy viszonyul egymáshoz a class és az objektum
[22:13, 11/22/2018] franzsi: nem teljesen végom,c sak tudom hogy mindig kell legyen egy olyan blokk :D
[22:13, 11/22/2018] franzsi: szval azt pont nem szoktam elrontani :DDDDDD
[22:14, 11/22/2018] Tamás Varga: az alulvonás az csak egy szokás
[22:14, 11/22/2018] franzsi: tudom
[22:14, 11/22/2018] Tamás Varga: használhatsz this->  -t is helyette
[22:14, 11/22/2018] Tamás Varga: na de
[22:14, 11/22/2018] franzsi: hát a class az olyan, mint egy tervrajz, ami alapján készülnek objektumok
[22:14, 11/22/2018] Tamás Varga: hogy viszonyul az objektum és a class
[22:14, 11/22/2018] Tamás Varga: ezaz igen;)
[22:14, 11/22/2018] Tamás Varga: na tehát hogyan fogsz megtölteni egy vektort
[22:15, 11/22/2018] Tamás Varga: 3 kutyával
[22:15, 11/22/2018] franzsi: a várj közben keresem a füzetem, hogy leírjam ait itt cseteleünk :D
[22:15, 11/22/2018] Tamás Varga: nem a funkció neve kell
[22:15, 11/22/2018] Tamás Varga: hanem a lépések nagyjából
[22:15, 11/22/2018] franzsi: hát azt a ublicba teszem akkor ugye?
[22:16, 11/22/2018] franzsi: és akkor oda belerakom, hogy stringek?
[22:16, 11/22/2018] franzsi: és úgy
[22:16, 11/22/2018] franzsi: adom meg a nevüket?
[22:16, 11/22/2018] Tamás Varga: ezt most nem értem
[22:16, 11/22/2018] Tamás Varga: miről beszélsz
[22:16, 11/22/2018] Tamás Varga: hogyan töltesz meg egy vektort 3 kutyával a mainben
[22:16, 11/22/2018] franzsi: hát kell mégé más a hheaderbe?
[22:16, 11/22/2018] franzsi: vag ymár tovább mentél
[22:16, 11/22/2018] Tamás Varga: igen
[22:16, 11/22/2018] Tamás Varga: ez a mainben lesz
[22:17, 11/22/2018] Tamás Varga: megtöltünk egy vektort a mainben 3 kutyával
[22:18, 11/22/2018] franzsi: hát ott meg már lehet ponttal, nem?
[22:18, 11/22/2018] Tamás Varga: azt akartam hallani
[22:18, 11/22/2018] Tamás Varga: hogy csinálsz egy vektort
[22:18, 11/22/2018] Tamás Varga: és csinálsz 3 kutyát
[22:18, 11/22/2018] Tamás Varga: a vektor végén az lesz hogy <Dog>
[22:19, 11/22/2018] Tamás Varga: és beleteszed a kutyákat egy funkcióval
[22:19, 11/22/2018] Tamás Varga: na és hogy válogatod ki azt amelyiknek hosszabb a neve, mitn 5?
[22:20, 11/22/2018] franzsi: hmmm
[22:20, 11/22/2018] franzsi: ezt neten megkéne néznem :D
[22:20, 11/22/2018] franzsi: de sztem for int tal
[22:21, 11/22/2018] Tamás Varga: ilyenkor csak írd bele hogy how to iterate through a vector c++ and print attribute
[22:22, 11/22/2018] franzsi: na for int-osat dobott !
[22:23, 11/22/2018] Tamás Varga: nézd meg ilyenkor azt amit küldtem pár napja
[22:24, 11/22/2018] Tamás Varga: http://cpp.sh/3zbka
[22:25, 11/22/2018] Tamás Varga: inheritanceról még nem is beszéltünk
[22:25, 11/22/2018] Tamás Varga: azt mennyire érted?
[22:25, 11/22/2018] franzsi: sztem az nem lesz nehéz, ha a  klassz rutinból megy...
[22:25, 11/22/2018] franzsi: az a bajom, hogy a klasszokon kell csomótt gondokodnom
[22:25, 11/22/2018] franzsi: és most pont azért kezdtem vsszamenni a vectorhoz
[22:25, 11/22/2018] franzsi: mert ott baszom el a klasszos feladatokat
[22:26, 11/22/2018] franzsi: vagy makadok meg
[22:26, 11/22/2018] Tamás Varga: na gyorsan leírom mi is az az inheritance
[22:26, 11/22/2018] Tamás Varga: csak hogy mennyire ismerős
[22:26, 11/22/2018] Tamás Varga: tehát arról van szó hogyha definiáltál egy classt, mint kutya
[22:27, 11/22/2018] Tamás Varga: utána csinálhatsz ennek a classnak egy leszármazott-classt
[22:27, 11/22/2018] Tamás Varga: ami megörökli szépen minden tulajdonságát
[22:27, 11/22/2018] Tamás Varga: tehát ha csinálsz egy kutya classt aminek van neve, életkora
[22:28, 11/22/2018] Tamás Varga: akkor utána csinálhatsz egy olyat hogy class Bulldog: public Dog {}
[22:28, 11/22/2018] Tamás Varga: és a dognak a getName funkcióját utána tudod használni a bulldog objektumokon is
[22:32, 11/22/2018] franzsi: kb megvan amúgy
[22:32, 11/22/2018] franzsi: csak a klassz kell hozzá :D
[22:33, 11/22/2018] Tamás Varga: hát azért van itt 1-2 nyalánkság
[22:33, 11/22/2018] Tamás Varga: pl nem tudom hivatkoztatoke a szülő konstruktorára