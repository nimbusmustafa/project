#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class CelestialBody {
  public:
    CelestialBody(double s, double m, string c, string n) {
      size = s;
      mass = m;
      atm_composition = c;
      name = n;
    }

    double GetSize() {
      return size;
    }

    double GetMass() {
      return mass;
    }

    string GetComposition() {
      return atm_composition;
    }

    string GetName() {
      return name;
    }
  
  private:
    double size;
    double mass;
    string atm_composition;
    string name;
};

//DO NOT EDIT code above this line

//add class definitions below this line

///DO NOT EDIT//////////////////////////////
class Satellite : public CelestialBody { //
///////////////////////////////////////////
  public: 
    Satellite(double s, double m, string c, string n, string hp) : CelestialBody(s, m, c, n) {
      host_planet = hp;
    }

    string GetHostPlanet() {
      return host_planet;
    }

    void SetHostPlanet(string new_host_planet) {
      host_planet = new_host_planet;
    }
  
  private: 
    string host_planet;
};

//DO NOT EDIT///////////////////////////
class Planet : public CelestialBody { //
////////////////////////////////////////
  public: 
    Planet(double s, double m, string c, string n, string hs) : CelestialBody(s, m, c, n) {
      host_star = hs;
    }

    string GetHostStar() {
      return host_star;
    }

    void SetHostStar(string new_host_star) {
      host_star = new_host_star;
    }
  
  private: 
    string host_star;
};
  
  
  

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  Satellite s(2651, 3716, "helium", "Moon", "Earth");
  Planet p(5349, 8910, "nitrogen", "Earth", "Sun");
  Satellite s2(3199, 13452, "nitrogen", "Titan", "Saturn");
  Planet p2(82713, 56834, "hydrogen", "Saturn", "Sun");
  cout << "Satellite name = " << s.GetName() << ", size = " << s.GetSize();
  cout << ", mass = " << s.GetMass() << ", atmospheric composition = " << s.GetComposition();
  cout << ", host planet = " << s.GetHostPlanet() << endl;
  cout << "Planet name = " << p.GetName() << ", size = " << p.GetSize();
  cout << ", mass = " << p.GetMass() << ", atmospheric composition = " << p.GetComposition();
  cout << ", host star = " << p.GetHostStar() << endl;
  cout << "Satellite name = " << s2.GetName() << ", size = " << s2.GetSize();
  cout << ", mass = " << s2.GetMass() << ", atmospheric composition = " << s2.GetComposition();
  cout << ", host planet = " << s2.GetHostPlanet() << endl;
  cout << "Planet name = " << p2.GetName() << ", size = " << p2.GetSize();
  cout << ", mass = " << p2.GetMass() << ", atmospheric composition = " << p2.GetComposition();
  cout << ", host star = " << p2.GetHostStar() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}