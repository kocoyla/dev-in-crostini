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
