# TransportPublic
Să se implementeze un program care administrează un card de călătorii pentru transport public.

Tranzacțiile posibile sunt:

A – adaugă. Suma de bani care se adaugă pe card.

M – călătorie metrou. Valoarea unei călătorii cu metroul este 3 lei. Valoarea călătoriilor efectuate se scade din suma de pe card. Nu se pot efectua călătorii cu metroul dacă suma de pe card este mai mică decât valoarea unei călătorii (3 lei).

S – călătorie STB. Valoarea unei călătorii este 1.5 lei. Valoarea călătoriilor efectuate se scade din suma de pe card. Se pot efectua călătorii cu STB dacă suma de pe card este mai mică decât valoarea unei călătorii (1.5 lei) dar se achită o amendă de 100 lei în ziua respectivă.

T – călătorie taxi. Tariful de călătorie este de 2 lei/km. Valoarea călătoriilor efectuate se scade din suma de pe card și se percepe un comision de 2.5% din valoarea totală a călătoriei. Nu se pot efectua călătorii cu taxi dacă suma de pe card este mai mică de 10 lei sau valoarea cardului devine negativă.

Cardul este creat în ziua 0 și are 0 lei.

Rezolvarea trebuie să conțină noțiuni de POO: clase derivate, metode virtuale, polimorifsm.

Sugestie de implementare (nu este obligatorie respectarea sugestiei date):

Clasă de bază Card din care se derivează clasele pentru operațiuni.



Subiect 1) Determinați operațiunea care modifică cel mai mult valoarea cardului în ziua în care este efectuată operațiunea.

Subiectul 2) Valoarea cadrului în ziua Z

 

Date de intrare:

N- număr de tranzacții

Z – ziua

Pe următarele N linii

A suma ziua

M număr_călătorii ziua

S număr_călătorii ziua

T km_parcurși ziua

 

Date de ieșire:

Subiectul 1) – Numărul de ordine al tranzacției

Subiectul 2) – Valoarea cardului afișată cu 2 zecimale
