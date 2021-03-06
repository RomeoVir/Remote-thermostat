
# Smart thermostat, _DIY Project

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

Salve,

Questo è uno dei miei progetti preferiti.
Problema: Accendere il riscaldamento da remoto.
Soluzione: Creare un dispositivo connesso in rete che permettesse di azionare la caldaia.

Hi, this is one of my favourite projects.
Smart thermostat meaning that you can control your home temperature and heating everywhere.
Due funzioni principali / Two principal functions :
- [Switch](https://youtu.be/V5GdvkVkYtg)
- [Programmed](https://youtu.be/S0FCUpEyEOw)

Materiale / Materials :
- Node MCU (Arduino nano wuth built-in esp8266) like [this](https://www.amazon.it/AZDelivery-NodeMCU-esp8266-esp-12e-gratuito/dp/B074Q2WM1Y/ref=sr_1_5?__mk_it_IT=ÅMÅŽÕÑ&dchild=1&keywords=nodemcu&qid=1633105524&qsid=261-3894730-9792206&sr=8-5&sres=B074Q2WM1Y%2CB0754W6Z2F%2CB06Y1LZLLY%2CB093G6N42D%2CB07DRF9YTV%2CB071P98VTG%2CB07Z68HYW1%2CB0182JOWOK%2CB07DK5Z8SR%2CB07G4FZQNV%2CB093GT7VB8%2CB07DK2LRJJ%2C8869282848%2CB086V8X2RM%2CB093GTG2WJ%2CB08D36M7CX%2CB08HYZ4Y69%2CB08SQFRFXT%2CB07PGH1L8S%2CB07FQJYLJ3&srpt=MOTHERBOARD)
- AC to DC 12V like [this](https://www.amazon.it/AZDelivery-220-Adattatore-Arduino-Raspberry/dp/B07C4TLYSG/ref=sr_1_9?__mk_it_IT=ÅMÅŽÕÑ&dchild=1&keywords=az+delivery+ac+dc&qid=1633105611&qsid=261-3894730-9792206&sr=8-9&sres=B07YWLCTLK%2CB08KH82YK1%2CB078Q2ZMPT%2CB07BVXT1ZK%2CB07RF6JPHS%2CB07C4THP6G%2CB07C4TLYSG%2CB01H2D2RI0%2CB08K2WX9PR%2CB074CB1N7Z%2CB06XQWTLFS%2CB0823P6PW6%2CB07VD4TQ7R%2CB07Y8LJG3V%2CB07MY2R2ML%2CB00X9HOFAM%2CB07MY3NZ18%2CB074P726ZR%2CB08BZKPSFY%2CB07TVPKYJ2&srpt=MOTHERBOARD)
- Temperature sensor like DHT11
- 2x 1 1kohm 1x 470ohm resistors
- 5VDC Relay like [this](https://www.amazon.it/SunFounder-Channel-Optocoupler-Expansion-Raspberry/dp/B00E0NTPP4/ref=sr_1_9?__mk_it_IT=ÅMÅŽÕÑ&dchild=1&keywords=5v+relay&qid=1633105801&qsid=261-3894730-9792206&sr=8-9&sres=B07BVXT1ZK%2CB07RKH9KLM%2CB06XRJ6XBJ%2CB07CNR7K9B%2CB00E0NTPP4%2CB078Q326KT%2CB01H2D2RI0%2CB07TWH7FWW%2CB01H2D2RXA%2CB07ST9991R%2CB07RJFJJZM%2CB08GPF9FNX%2CB07QPMRDQY%2CB06XHJ2PBJ%2CB0972YDD62%2CB07RKTYWJP%2CB078Q8S9S9%2CB07GXC4FGP%2CB07GRW83FR%2CB07V1YQQGL&srpt=RELAY)

### Step by step:

<details><summary>- Stampare supporto 3D / Print 3D support</summary>
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/3D_Printed_Body.jpg
</details>

<details><summary>- Verificare dimensioni componentistica / Check hardware dimensions</summary>
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Hardware_Layout.jpg
</details>
 
 
- Caricare software V1_Working su nodeMCU tramite la IDE di Arduino, fare riferimento alla pagina [NodeMCU](https://nodemcu.readthedocs.io/en/release/) / 
Write code V1_Working on nodeMCU throught Arduino IDE, use nodeMCU [documentation](https://nodemcu.readthedocs.io/en/release/)
- Completare i parametri richiesti / fill the params

```sh
//Wifi Configuration
char auth[] = ""; //Blynk auth email code
char ssid[] = ""; //Wifi id
char pass[] = ""; //Wifi password
```
<details><summary> Collegare hardware / Hardware connections </summary>
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Hardware_setup.jpg
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Diagram_Pinout</details>

```sh
NodeMCU-> DHT11
3V -> VCC
RX -> S OUT
GND -> GND
NodeMCU -> Relay
3V -> VCC
D5 -> IN1
GND -> GND
```
<details><summary> Setup applicazione Blynk / Setup Blynk application </summary>
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/H_setup.jpg
 https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Home.jpg
 https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Layout.jpg
 https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Online_state.jpg
 https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/T_Setup.jpg
 https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Manual_Command.jpg
 </details>

<details><summary> Calcolare partitore e saldare resistenze / Calculate the value of resistor and solder it on a breadboard</summary>
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Partitore.jpg
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Calcolo partitore.jpg</details>

<details><summary> Forare il muro e fissare il box / Make hole on wall and mount the box</summary>
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Mounted.jpg
https://github.com/RomeoVir/Remote-thermostat/blob/main/Photos/Wall_mounted.jpg</details>

Se vuoi puoi aggiungere un led sul pin D3 per segnalazione.
If you want you can add a led on pin D3.

V1_2021/10/04




Per qualsiasi domanda: romeovirgilio@gmail.com
For any questions: romeovirgilio@gmail.com
