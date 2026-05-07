<p align="center">
  <img src="BT_logo.png" width="120" />
</p>

<h1 align="center">Bring Tropical</h1>

<h5 align="center">
  BringTropical este un <code>smart home device</code> creat din lucruri găsite ușor, prin magazine online sau prin casă. Acesta este făcut să ude plante/fructe de la distanță, independent sau manual.
</h5>

---

## ❓ Ce este?

BringTropical este un sistem automat de udare pentru plante și fructe ce au nevoie de multă atenție. Dispozitivul poate detecta când pământul este uscat și pornește automat pompa de apă.

---

## ⚙️ Cum funcționează?

Dispozitivul folosește:

* Arduino UNO
* releu
* pompă de apă
* buton
* senzor de umiditate

Senzorul detectează dacă pământul se usucă, iar sistemul pornește releul pentru aproximativ **0,5–1 secundă**, ceea ce activează pompa de apă. Pompa poate fi acționată și manual, folosind butonul.

---

## 🌴 De ce este numit așa?

Proiectul este numit **BringTropical** deoarece scopul lui este să ajute la creșterea automată a fructelor și plantelor ce au nevoie de multă atenție, mai ales a celor care nu cresc natural în România, cum ar fi plantele semi-tropicale.

---

## 🎨 Ce semnifică logo-ul?

Logo-ul nostru semnifică faptul că în România pot fi crescute fructe semi-tropicale, cum ar fi fructul pasiunii. De aceea, miezul fructului este înlocuit cu steagul României.

---


## 🔌 Cum se pun firele

Relay VCC > Arduino 5V
<br>
Relay GND > Arduino Ground
<br>
Relay IN > Arduino (D)8
<br>

Button Ground > Arduino Ground
<br>
Button Pozitive > Arduino 3.3V
<br>
Button Signal > Arduino (D)2
