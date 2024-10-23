  /*
  muuttuja = funktio(a, b);


   x = funktio(y) + funktio(z);


   if( funktio(x) == 50)
   {
      ohjelmalauseita....
   }
*/

/*
Heti tämän kurssin alussa leikimme, että työskentelisimme Firma Oy:ssä ohjelmoijana. Nyt on aika laittaa taas mielikuvitus laukkaamaan.

Tällä kertaa saamme tehtävän: "Tee kassakoneohjelma, jolla voi laskea ostosten kokonaishinnan, tulostaa takaisin annettavan rahan määrän ja tulostaa kassassa olevan rahan määrän. Lisäksi jokainen kassakirjaus tallennetaan kovalevylle, josta on saatava listaus halutulta päivältä."

Okei, helppo homma!

Itse asiassa edellisessä oli jo varsin hyvä alku koko suunnittelutyön taustalle. Kun alamme suunnittelemaan jotain ohjelmaa, meidän on ensin päätettävä, mitä ohjelmalla tehdään. Toisin sanoen kuinka ohjelma ilmentyy ihmiselle - ohjelman käyttäjälle. Tällä kertaa ohjelmamme on suoriuduttava seuraavista toiminnoista:

Ostostapahtuma
Kassan saldon tulostus
Historialistaus
Edellisten lisäksi ohjelmassa on oltava jokin valintapaneeli (käyttöliittymä), josta eri toimintoja voidaan suorittaa ja josta ohjelman suoritus lopetetaan.

Jatketaanpa suunnittelua miettimällä tarkemmin, mitä toimintoja yksittäiset osat sisältävät:

Käyttöliittymä:

tulostetaan monitorille ohjelman käynnistyessä
antaa käyttäjän valita toiminnon ja käynnistää toiminnon (uusi ostostapahtuma, kassan saldo, historiatulostus ja lopetus)
Ostostapahtuma:

ottaa vastaan asiakkaan ostosten hintoja, kunnes kaikki on syötetty
kun kaikki ostokset syötetty, tulostaa ostosten kokonaissumman ja jää odottamaan asiakkaan antamaa rahasummaa
kun rahasumma on syötetty, tulostaa takaisin annettavan määrän ja palaa käyttöliittymään
Kassan saldon tulostus:

tulostaa kassassa olevan rahan määrän ja palaa käyttöliittymään
Historialistaus:

kysyy päivän, jolta listaus halutaan
tulostaa halutun päivän tapahtumat ja palaa käyttöliittymään
Nyt suunnitelmamme on likipitäen niin tarkka, että kykenemme hahmottamaan, kuinka ohjelma toimii käyttäjän kannalta. Seuraavaksi meidän on tarkennettava suunnitelmaa lähemmäs ohjelmointimaailmaa. Tässä vaiheessa hylkäämme muut osat suunnitelmasta ja keskitymme tarkastelemaan, mitä tapahtuu, kun ohjelman käyttäjä valitsee toiminnon ostostapahtuma.

Ostostapahtuma (tarkennettu versio):

tulosta monitorille: "Syötä hinta:"
odota kunnes hinta syötetään
jos hinta syötetään:
tallenna hinta
lisää hinta muuttujaan yhteensä
muuten jos kaikki syötetty
tulosta: "Yhteensä:"
Tässä vaiheessa huomaamme, että meidän pitää toistaa samaa toimintoa, kunnes kaikki hinnat on syötetty. Täydennetäänpä hieman suunnitelmaa:

kunnes viimeinen hinta on syötetty
tulosta monitorille: "Syötä hinta:"
odota kunnes hinta syötetään
tallenna hinta
lisää hinta muuttujaan yhteensä
tulosta: "Yhteensä: "
tulosta: "Annettu raha:"
odota kunnes raha syötetään
laske takaisin annettava raha
tulosta "Takaisin:"
Palaa käyttöliittymään
Vaikka suunnitelmamme onkin tarkentunut, on siinä vielä jonkin verran tarkennettavaa:

kunnes viimeinen hinta on syötetty (hinta < 0)
tulosta monitorille: "Syötä hinta:"
odota kunnes hinta syötetään
tallenna hinta
selvitä päivämäärä
avaa tiedosto ppkkvv.txt
tulosta hinta tiedoston loppuun
sulje tiedosto
lisää hinta muuttujaan yhteensä
tulosta: "Yhteensä: "
tulosta: "Annettu raha:"
odota kunnes raha syötetään
laske takaisin annettava raha
tulosta "Takaisin:"
Palaa käyttöliittymään
*/

#include <stdio.h>
#include <time.h>

void tallenna_kirjaus(float kokonaishinta, float maksettu_summa, float takaisin_annettava, float kassassa_oleva_rahamaara) {
    FILE *tiedosto;
    tiedosto = fopen("kassakirjaus.txt", "a");  // Avaa tiedoston liittämismoodissa (append)

    // Haetaan nykyinen päivämäärä ja aika
    time_t nyt;
    time(&nyt);
    struct tm *paiva = localtime(&nyt);

    // Tallennetaan ostotiedot tiedostoon
    fprintf(tiedosto, "Päiväys: %02d-%02d-%d %02d:%02d:%02d\n", 
            paiva->tm_mday, paiva->tm_mon + 1, paiva->tm_year + 1900,
            paiva->tm_hour, paiva->tm_min, paiva->tm_sec);
    fprintf(tiedosto, "Ostosten kokonaishinta: %.2f EUR\n", kokonaishinta);
    fprintf(tiedosto, "Maksettu summa: %.2f EUR\n", maksettu_summa);
    fprintf(tiedosto, "Takaisin annettava: %.2f EUR\n", takaisin_annettava);
    fprintf(tiedosto, "Kassassa oleva rahamäärä: %.2f EUR\n\n", kassassa_oleva_rahamaara);

    fclose(tiedosto);
}

int main() {
    float kokonaishinta, maksettu_summa, takaisin_annettava;
    static float kassassa_oleva_rahamaara = 1000.00;  // Alustetaan kassassa oleva rahamäärä

    printf("Syötä ostosten kokonaishinta (EUR): ");
    scanf("%f", &kokonaishinta);

    printf("Syötä maksettu summa (EUR): ");
    scanf("%f", &maksettu_summa);

    // Lasketaan takaisin annettava rahamäärä
    if (maksettu_summa >= kokonaishinta) {
        takaisin_annettava = maksettu_summa - kokonaishinta;
        kassassa_oleva_rahamaara += kokonaishinta;  // Lisätään kassaan ostosmäärä
        printf("Takaisin annettava summa: %.2f EUR\n", takaisin_annettava);
    } else {
        printf("Virhe: Maksettu summa on liian pieni!\n");
        return 1;  // Lopetetaan ohjelma virheen vuoksi
    }

    printf("Kassassa oleva rahamäärä: %.2f EUR\n", kassassa_oleva_rahamaara);

    // Tallennetaan kirjaus tiedostoon
    tallenna_kirjaus(kokonaishinta, maksettu_summa, takaisin_annettava, kassassa_oleva_rahamaara);

    printf("Ostotapahtuma tallennettu onnistuneesti.\n");
    
    return 0;
}
