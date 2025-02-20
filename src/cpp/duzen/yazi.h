#pragma once

#include <vector>
#include <string>
#include <iostream>

using namespace std;

typedef vector<string> Dizin;

class Yazi {
protected:
  Dizin yazi;
public:
  Yazi(Dizin yazi) : yazi(yazi) {}
  int boy() const { return yazi.size(); }
  int en() const { return boy() == 0 ? 0 : yazi[0].length(); }
  string yaziya() const {
    string cikti{boy() ? yazi[0] : string("")};
    for(int i=1; i < yazi.size(); ++i)
      cikti += string("\n") + yazi[i];
    return cikti;
  }
  Yazi alta(Yazi o) const;
  Yazi yana(Yazi o) const;
  Yazi genislet(int yeniEn) const;
  Yazi uzat(int yeniBoy) const;
  Yazi operator+(Yazi saga) const { return Yazi{yana(saga)}; }
  Yazi operator/(Yazi obur) const { return Yazi{alta(obur)}; }
};

ostream& operator<<(ostream &o, const Yazi& y);

class Satir : public Yazi {
public: 
  Satir(string satir) : Yazi(Dizin{satir}) {}
};

class Sade : public Yazi {
public: 
  Sade(char ch, int en, int boy) : Yazi(Dizin{}) {
    string satir(en, ch);
    for(int i=0; i < boy; ++i) 
      yazi.push_back(satir);
  }
};

namespace Sarmal {
  // saat yonunun tersine donus:
  Yazi sarmal(int kolSayisi, int yon);
};
