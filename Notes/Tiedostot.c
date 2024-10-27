    #include <stdio.h> 
    int main(void)  
    {  
    FILE *avaus = fopen("tiedosto.txt", "w");  
       fprintf(avaus, "Esa"); 
      fclose(avaus);  
     return 0;  
    }

    /*
    Moodi	Merkitys	Jos tiedostoa ei ole olemassa	Jos tiedosto on olemassa
    r	Tiedosto avataan lukemista varten.	fopen() palauttaa arvon NULL.	 
    w	Tiedosto avataan kirjoittamista varten.	Tiedosto luodaan.	Tiedoston sisältämä tieto tuhotaan.
    a	Tiedosto avataan lisäämistä varten.	Tiedosto luodaan.	Uusi tieto lisätään tiedoston loppuun.
    r+	Tiedosto avataan lukemista ja kirjoittamista varten.	Tiedosto luodaan.	Uusi tieto kirjoitetaan vanhan tiedon päälle tiedoston alkuun.
    w+	Tiedosto avataan lukemista ja kirjoittamista varten.	Tiedosto luodaan.	Uusi tieto kirjoitetaan vanhan päälle.
    a+	Tiedosto avataan lukemista ja lisäämistä varten.	Tiedosto luodaan.	Uusi tieto lisätään tiedoston loppuun.
    */

    /*

    //Virhetilanteiden käsittely tiedoston avauksessa
     #include <stdio.h> 
       int main(void)  
       {  
         FILE *avaus; 
         avaus = fopen("tiedosto.txt", "w"); 
    
         if(avaus == NULL){ 
          printf("Tiedoston avauksessa on tapahtunut virhe!"); 
          return 0; 
        }  
        else { 
          fprintf(avaus, "Esa");  
          fclose(avaus);  
        } 
       return 0;  
   }
    
    */

    /*
        //"Kuten olet jo nähnyt, tiedostoon kirjoittaminen voidaan toteuttaa funktion fprintf() avulla. Funktion toiminta ei poikkea printf()-funktiosta juuri lainkaan. Ainoa ero on, että fprintf() saa argumenttina tiedostokahvan nimen."
        //Ohjelma, joka avaa käyttäjän haluaman tiedoston
           #include <stdio.h> 
       int main(void)  
       {  
         FILE *avaus; 
         char *tiedoston_nimi = "tiedosto.txt"; 
         char *avaus_moodi = "w"; 

         avaus = fopen(tiedoston_nimi, avaus_moodi); 

         if(avaus == NULL)
          { 
             printf("Tiedoston avauksessa on tapahtunut virhe!"); 
             exit(1); 
          }  
         else 
          { 
             fprintf(avaus, "Esa");  
             fclose(avaus);  
          } 
         return 0;  
        }
    */

    /*
    //Tiedostosta voidaan lukea tietoa funktion fscanf() avulla, joka sekin toimii pitkälti samoin kuin scanf()
    //Tiedoston lukeminen
    1:    #include<stdio.h>
   2:    
   3:    int main(void)
   4:    {
   5:      FILE *tied_kahv;
   6:      float luettu_luku;
   7:    
   8:      if((tied_kahv = fopen("data.txt", "r")) == NULL) {
   9:        printf("Tiedostoa ei löydetty!"); return 0;
   10:     } else {
   11:       fscanf(tied_kahv, "%f", &luettu_luku); 
   12:       fclose(tied_kahv);
   13:     
   14:       printf("Tiedostosta löytyi luku %f", luettu_luku);
   15:     }
   16:     return 0;
   17:    }
   
    */

    /*
    //Multiline tiedoston luku ja printtaaminen eroteltuna välilyönnein
    1:    #include <stdio.h> 
   2:     
   3:    int main(void) 
   4:    { 
   5:      FILE *tied_kahv; 
   6:      float luku1, luku2, luku3, luku4; 
   7:     
   8:      if((tied_kahv = fopen("data.txt", "r")) == NULL) { 
   9:        printf("Tiedostoa ei löydetty!"); return 0; 
   10:     } else { 
   11:       fscanf(tied_kahv, "%f %f %f %f ", &luku1, &luku2, &luku3, &luku4);  
   12:       fclose(tied_kahv); 
   13:      
   14:       printf("Tiedostosta löytyi luvut %f, %f, %f ja %f", luku1, luku2, luku3, luku4); 
   15:     } 
   16:     return 0; 
   17:    }
    
    Rivi 6: Tiedämme siis, että ohjelma lukee neljä liukulukua. Jokaiselle varataan oma muuttujansa.

Rivi 11: Tavallaan rivillä yksitoista ei ole mitään uutta, eikä ihmeellistä. Toisaalta, onhan siinä jotain. :) Funktio fscanf() aloittaa tiedoston lukemisen ensimmäiseltä riviltä ja vieläpä vasemmasta laidasta (ts. tiedoston alusta). Tärkeintä on ymmärtää, että lukujen välissä sijaitsevat välilyönnit kertovat funktiolle mistä jokin tiedon murunen alkaa, ja mihin se loppuu. Välilyönnit voidaan tosin korvata millä tahansa tyhjällä merkillä. Näin ollen tiedostomme voisi olla myös tämän näköinen:

3.456
5.25764
4.2345
3.45346

Lopputulos olisi silti sama.

Joskus voi olla niinkin, että sinulla on jotain tiettyjä lukuja sisällään pitävä tiedosto, jossa luvut on eroteltu toisistaan esim. pilkun avulla seuraavasti:

3.456, 5.25764, 4.2345, 3.45346

Jos data.txt olisi yläpuolen näköinen, edellisen ohjelman tulostus olisi jotain tällaista:

   "Tiedostosta löytyi luvut 3.456000, 10211205558295463800000000.000000, 0.000000 ja 0.000000"
Pilkun käyttäminen erottimena aiheuttaa siis ongelmia. Ei hätää, sillä pieni korjaus funktion fscanf() kutsuun korjaa asian:

fscanf(tied_kahv, "%f, %f, %f, %f ", &luku1, &luku2, &luku3, &luku4);

Tilanne korjaantuu ja funktio lukee rivin oikein, kun lisäsimme pilkut muotoilumääreiden väliin.
    */

    /*
    //Multiline taulukko tieoston lukeminen ja printtaaminen

       1:    #include <stdio.h> 
   2:    int main(void)  
   3:    {  
   4:      int matriisi[5][4]; 
   5:      int neliot[5][4]; 
   6: 
   7:      int x, y; 
   8: 
   9:      FILE *luku_tied; 
   10:     FILE *kirj_tied; 
   11: 
   12:     if((luku_tied = fopen("matriisi.txt", "r")) == NULL) { 
   13:       printf("Tiedoston avaus epäonnistui (matriisi.txt)."); 
   14:       return 0; 
   15:     } 
   16:     else { 
   17:       for(y = 0; y < 5; y++) { 
   18:         for(x = 0; x < 4; x++) {  
   19:           if(x == 3) { 
   20:             fscanf(luku_tied, "%d", &matriisi[y][x]);  
   21:           }  
   22:           else {  
   23:             fscanf(luku_tied, "%d,", &matriisi[y][x]);  
   24:           } 
   25:         } 
   26:       } 
   27:     } 
   28: 
   29:    fclose(luku_tied); 
   30: 
   31:    for(y = 0; y < 5; y++) {  
   32:      for(x = 0; x < 4; x++) {  
   33:        neliot[y][x] = 0; neliot[y][x] = matriisi[y][x] * matriisi[y][x]; 
   34:      }  
   35:    } 
   36: 
   37:    if((kirj_tied = fopen("neliot.txt" , "w")) == NULL) {  
   38:      printf("Tiedoston avaus epäonnistui (neliot.txt)."); 
   39:    } 
   40:    else {  
   41:      for(y = 0; y < 5; y++) {  
   42:        for(x = 0; x < 4; x++) {  
   43:          if(x == 3) { 
   44:            fprintf(kirj_tied, "%d\n", neliot[y][x]); 
   45:          }  
   46:          else {  
   47:            fprintf(kirj_tied, "%d, ", neliot[y][x]); 
   48:          } 
   49:        } 
   50:      } 
   51:    } 
   52: 
   53:   fclose(kirj_tied); 
   54:   return 0; 
   55: }

   Rivit 4 - 10: Ensimmäisillä riveillä esittelemme taulukon jonne sijoitamme tiedostosta luetut tiedot sekä taulukon, johon sijoitamme lasketut neliöt. Lisäksi esittelemme tiedostokahvat ja muuttujat for-silmukoita varten.

Rivit 16 - 27: Jos siis tiedoston matriisi.txt avaaminen onnistuu, siirrymme lukemaan tiedoston sisältämiä tietoja. Koska tiedosto sisältää numeroita kaksiuloitteisessa taulukossa, käytämme sisäkkäisiä for-silmukoita taulukon läpikäymiseen. Luvut on eroteltu tiedostossa pilkuin, paitsi jokaisen rivin viimeinen luku, jonka perässä on rivinvaihto merkki.

Kuten aikaisemmin opimme, meidän on käytettävä pilkuilla eroteltujen tietojen lukemiseen fscanf() -funktiota, jossa erotin määritellään (fscanf(luku_tied, "%d,", &matriisi[y][x])). Toisaalta jokaisen rivin viimeistä lukua seuraa rivinvaihto, jonka funktio tunnistaa erottimeksi automaattisesti.

Sanomme siis: "Jos luku on rivin viimeinen, skannaa ilman erotinta, muuten käytä erotinta."

Rivit 31 - 35: Näillä riveillä laskemme taulukon jokaiselle alkiolle neliön, jonka sijoitamme omaan taulukkoonsa.

Rivit 40 - 51: Loppujen lopuksi tiedostoon tulostaminen ei poikkea millään tavalla rivien 16 - 27 tapahtumista. Ainoa poikkeama on fprintf()-funktio fscanf()-funktion tilalla. Katsomalla rivejä huomaat, että nyt haluamme tulostaa rivivaihdon jokaisen rivin loppuun. Jos taas kyseessä on jokin muu alkio, tulostamme luvun perään pilkun.
    */