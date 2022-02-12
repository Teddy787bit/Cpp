/**
 * @file Gun.cpp
 * @author Pradip
 * @brief 
 * @version 0.1
 * @date 2022-02-12
 * 
 * class BattlefieldSoftware {
    private: 
    WeaponController* wc;
    public:
    BattlefieldSoftware() : wc(new WeaponController()) {} //initialization list for constructor         
    ~BattlefieldSoftware() { delete wc; }

    void shootTarget() { wc->shootTarget(); }
};

class WeaponController {
    private:
    Gun1* g1;
    //Gun2* g2;
    //MissileLauncher* ml;

    WeaponController() : g1(new Gun1()) /*, g2(new Gun2), ml(new MissileLauncher) 
    {}
    ~WeaponController() { delete g1; /*delete g2; delete ml }

    public:
    void shootTarget() {
         if (g1 != NULL) { g1->fire(); } 
         //if (g2 != NULL) { g2->shoot(); }
         //if (ml != NULL) { ml->launch(); }
    }
};
 */
#include "iostream"

//This class is created by Gun1's company
class Gun1 {public: void fire() {std::cout<<"gun1 firing now\n";}};
//This class is created by Gun2's company
class Gun2 {public: void shoot() {std::cout<<"gun2 shooting now\n";}};

//We create an abstract class to interface with WeaponController
class WeaponsInterface {
 public:
 virtual void shootTarget() = 0;
};

//A wrapper class to encapsulate Gun1's shooting function
class WeaponGun1 : public WeaponsInterface {
 private:
 Gun1* g;

 public:
 WeaponGun1(): g(new Gun1()) {}
 ~WeaponGun1() { delete g;}
 virtual void shootTarget() { g->fire(); }
};

//A wrapper class to encapsulate Gun2's shooting function
class WeaponGun2 : public WeaponsInterface {
 private:
 Gun2* g;

 public:
 WeaponGun2(): g(new Gun2()) {}
 ~WeaponGun2() { delete g;}
 virtual void shootTarget() { g->shoot(); }
};

class WeaponController {
 private:
 WeaponsInterface* w;
 WeaponGun1* g1;
 WeaponGun2* g2;
 public:
 WeaponController() {g1 = new WeaponGun1(); g2 = new WeaponGun2(); w = g1;}
 ~WeaponController() {delete g1; delete g2;}
 void shootTarget() { w->shootTarget();}
 void changeGunTo(int gunNumber) {//Virtual functions makes it easy to change guns dynamically
   switch(gunNumber) {
     case 1: w = g1; break;
     case 2: w = g2; break;
   }
 }
};


class BattlefieldSoftware {
 private:
 WeaponController* wc;
 public:
 BattlefieldSoftware() : wc(new WeaponController()) {}
 ~BattlefieldSoftware() { delete wc; }

 void shootTarget() { wc->shootTarget(); }
 void changeGunTo(int gunNumber) {wc->changeGunTo(gunNumber); }
};


int main() {
 BattlefieldSoftware* bf = new BattlefieldSoftware();
 bf->shootTarget();
 for(int i = 2; i > 0; i--) {
     bf->changeGunTo(i);
     bf->shootTarget();
 }
 delete bf;
}