#include "yazi.h"

ostream& operator<<(ostream &o, const Yazi& y) {
  return o << y.yaziya();
}

Yazi Yazi::genislet(int yeniEn) const {
  if (yeniEn <= en()) return *this;
  Sade sol(' ', (yeniEn - en()) / 2, boy());
  Sade sag(' ', yeniEn - en() - sol.en(), boy());
  return sol.yana(*this).yana(sag);
}
Yazi Yazi::uzat(int yeniBoy) const {
  if (yeniBoy <= boy()) return *this;
  Sade ust(' ', en(), (yeniBoy - boy()) / 2);
  Sade alt(' ', en(), yeniBoy - boy() - ust.boy());
  return ust.alta(*this).alta(alt);
}

Yazi Yazi::alta(Yazi o) const {
  Yazi bu2 = genislet(o.en());
  Yazi o2 = o.genislet(en());
  Dizin dizin(bu2.yazi);
  for(auto satir : o2.yazi) dizin.push_back(satir);
  return Yazi(dizin);
}
Yazi Yazi::yana(Yazi o) const {
  Yazi bu2(uzat(o.boy()));
  Yazi o2(o.uzat(boy()));
  Dizin dizin;
  for(int i=0; i < bu2.boy(); ++i)
    dizin.push_back(bu2.yazi[i] + o2.yazi[i]);
  return Yazi(dizin);
}

namespace Sarmal {
  Satir kose("+");
  Satir bosluk(" ");
};

Yazi Sarmal::sarmal(int kolSayisi, int yon) {
  if (kolSayisi == 1) return kose;
  Yazi srml(sarmal(kolSayisi - 1, (yon + 3) % 4));
  Sade yatay('-', srml.en(), 1);
  Sade dikey('|', 1, srml.boy());
  switch(yon) {
  case 0: // sola dogru uzanan kolla basla
    return (kose+yatay) / (srml+bosluk);
  case 1: // yukari dogru
    return srml/bosluk + kose/dikey;
  case 2: // saga dogru
    return (bosluk+srml) / (yatay+kose);
  case 3: // asagi dogru
    return dikey/kose + bosluk/srml;
  default: throw("switch default");
  }
}
