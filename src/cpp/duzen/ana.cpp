#include <iostream>
using namespace std;
#include "yazi.h"
void emojiYaz();

Yazi deneme();

int main() {
  emojiYaz();
  Satir bosluk(" ");
  Yazi buyukAra{bosluk + bosluk + bosluk};
  using Sarmal::sarmal;
  vector<Yazi> sarmallar, dortluler;
  for(int kolSayisi=2; kolSayisi<10; kolSayisi++)
    sarmallar.push_back(sarmal(kolSayisi,0));
  for (int yon{1}; yon < 4; ++yon) 
    dortluler.push_back(sarmal(4, yon));
  Yazi hepsi{sarmal(1, 0)}, hepsiDortlu{sarmal(4, 0)};
  for (auto s : sarmallar) 
    hepsi = hepsi.yana(buyukAra).yana(s);
  for (auto s : dortluler) 
    hepsiDortlu = hepsiDortlu.yana(buyukAra).yana(s);
  hepsiDortlu = hepsiDortlu / bosluk / hepsiDortlu;
  const Yazi bosSutun{bosluk.yana(bosluk)};
  cout << bosSutun + hepsi << endl
       << bosSutun + hepsiDortlu << endl << endl
       << bosSutun + sarmal(15, 0) + buyukAra + sarmal(19, 1) + buyukAra + sarmal(15, 2) << endl
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

void emojiYaz() {
  string emoji{"🥰"}; 
  cout << endl << emoji << endl;
}
