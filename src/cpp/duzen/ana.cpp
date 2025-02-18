#include <iostream>
using namespace std;
#include "yazi.h"
void emojiYaz();

Yazi spiral(int kolSayisi, int yon);

Yazi deneme();

int main() {
  emojiYaz();
  const Satir bosluk(" ");
  cout << spiral(8, 0).yana(bosluk.yana(spiral(6, 0))) << endl
       << deneme() << endl;
  emojiYaz();
  return 0;
}

Yazi deneme() {
  Satir emoji("0 🥰 0"); 

  Satir e1("  #  ");   
  Satir e2("  %  ");   
  Yazi b1(e1.alta(e2));
  Sade d1('|', 1, 6);
  Sade y1a('-', 5, 1);
  Satir kose("+");
  Yazi y1(kose.yana(y1a).yana(kose));
  Yazi b3(y1.alta(d1.yana(b1).yana(d1)).alta(y1));
  Yazi b4(b3.yana(b3));
  Yazi b5(b4.alta(b4));
  Yazi b6(b5.yana(d1));
  return d1.yana(b6.yana(b6));

#if 0
  Yazi yaziUst(Dizin{"000000", "0    0"});
  Yazi yaziAlt(Dizin{"0    0", "000000"});
  Yazi yazi(yaziUst.alta(emoji).alta(yaziAlt));
  Sade y2('x', 4, 3);
  Satir satir("tek satir yazi");
  Sade yatay('-', 10, 1);
  Sade dikey('|', 1, 10);
  Yazi y4 = yazi.yana(y2);
  cout << yazi.yana(y2).yana(dikey).yana(yazi) << endl
       << yazi.alta(y2).alta(yatay).alta(yazi) << endl;
  
#endif

}

Satir kose("+");
Satir bosluk(" ");

Yazi spiral(int kolSayisi, int yon) {
  if (kolSayisi == 1) return kose;
  Yazi sp(spiral(kolSayisi - 1, (yon + 3) % 4));
  Sade yatay('-', sp.en(), 1);
  Sade dikey('|', 1, sp.boy());
  switch(yon) {
  case 0: // sola dogru uzanan kolla basla
    return kose.yana(yatay).alta(sp.yana(bosluk));
  case 1: // yukari dogru
    return sp.alta(bosluk).yana(kose.alta(dikey));
  case 2: // saga dogru
    return bosluk.yana(sp).alta(yatay.yana(kose));
  case 3: // asagi dogru
    return dikey.alta(kose).yana(bosluk.alta(sp));
  default: throw("switch default");
  }
}

void emojiYaz() {
  string emoji{"🥰"}; 
  cout << endl << emoji << endl;
}
