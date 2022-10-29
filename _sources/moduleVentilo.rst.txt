++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Module ventilateur
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

:Auteur: J.Soranzo
:Date de création: 10/2022
:Date dernière maj: 10/2022
:Societe: VoRoBoTics
:Entity: VoLAB

.. |clearer|  raw:: html

    <div class="clearer"></div>


.. index::
    pair: Modules; Ventilo

====================================================================================================
Présentation
====================================================================================================
Il s'agit ici d'un système d'aspiration pour les fumées de fer à souder.

Diamètre ventilateur 8cm, souhait : inclinable avec éclairage à LED et filtre

====================================================================================================
Conception du système d'inclinaison
====================================================================================================
Conception du système d'inclinaison, les différentes versions :

- avec demi bille et lame de ressort imprimée : KO trop peu précis
- avec aimant : presque mais... aimants difficiles à manipuler et pas assez puissants
- languette et poignée sur le côté : prometteuse (retenue pour le moment)


.. |langBille| image:: images/moduleVentiloVersionlanguetteBille.JPG
   :width: 200 px

.. |aimants| image:: images/moduleVentiloVersionAimants.JPG
  :width: 300 px

.. list-table::
   :widths: 27 27 
   :header-rows: 1

   * - languette et bille imprimée
     - Version avec aimants

   * - |langBille|
     - |aimants|

.. _pilotageLedVentilo:

====================================================================================================
Pilotage électrique du ventilateur et des LED
====================================================================================================
Avec un potar à interrupteur
----------------------------------------------------------------------------------------------------

.. image:: images/potarAvecOnOff.jpg 
   :width: 300 px

`Potentiomètre Rotatif avec Interrupteur chez AMAZON`_

.. _`Potentiomètre Rotatif avec Interrupteur chez AMAZON` : https://www.amazon.fr/gp/product/B096NXK7L1/ref=ox_sc_act_title_1?smid=A2W68NJA5YNXUP&psc=1

Abandon de l'idée du potar avec inter car l'inter n'est pas cliquable mais s'active en bout de rotation
si bien que cela ne permet pas de concerner le réglage. Donc retour à une version avec switch séparé
cela tombe bien j'en ai des petit 10x5 voir `Interrupteurs rouge miniature`_

Un simple potentiomètre seul ne convient pas car la tension d'entrée peut varier de 12 à 24V.

On est obligé de passer par un régulateur et comme on veut que cela soit variable, il convient de 
limiter le module LM2596S à 12V max en sortie et de déporter le potar

La :download:`datasheet du LM2596S<fichiersJoints/lm2596s_dts.pdf>` qui équipe les 
:ref:`modules choisis<moduleDCDC2596>`

.. image:: images/lm2596sextraitdtsCalculR1R2sch.jpg 
   :width: 800 px

.. image:: images/lm2596sextraitdtsCalculR1R2.jpg 
   :width: 600 px

Pour du 12v avec R1 1k on a:

1k * ( 12/1.23 - 1 ) = 8.75k

admettons qu'on veuille aller jusqu'à 14V, il faudrait 10.4K pour R2.

D'après l'équation (1) si R1 augmente Vout diminue mais R1 doit être comprise entre 240 et 1.5k 
pas 10k comment les modules fonctionnent ?

Une piste:

.. image:: images/LM2596S-Schematic.jpg 
   :width: 600 px

Visiblement sur mes modules R1 = 270ohm

vout à 10k = 1.23 * ( 1 + R2/R1) = 1.23 * ( 1 + 10/0.27) = 46V !

vout à 100ohm = 1.23 * ( 1 + 100/270 ) = 1.68V

Pour du 14 en sortie : 0.27 * ( 14 / 1.23 -1 ) = 2.8k max  et pas 13805K

Solution une zener 12V en sortie pour écrêter:

R = 24v - 12v / 0.1A environ 120ohm P=1.2W bof ! 5 résistance 1/4W en //

Revoir le courant 20mA par groupe de 4 led 4 groupe 80mA refaire les calculs.

.. WARNING:: Solution abandonnée
   :class: without-title

====================================================================================================
Avec un digispark
====================================================================================================
Officiellement les Digispark sur le site de Digistump sont out of stock mais on en trouve facilement
sur Aliexpress et même sur Amazon.

`digispark sur Aliexpress`_

.. _`digispark sur Aliexpress` : https://fr.aliexpress.com/item/2040316211.html?pdp_npi=2%40dis%21EUR%21%E2%82%AC%202%2C66%212%2C53%20%E2%82%AC%21%21%21%21%21%40211b446316670801691677278e7ee0%2158307777832%21btf&_t=pvid%3Aa2597e6f-c42f-455d-a547-d3642fcc9f41&afTraceInfo=2040316211__pc__c_ppc_item_bridge__xxxxxx__1667080169&spm=a2g0o.ppclist.product.mainProduct&gatewayAdapt=glo2fra

`digispark sur Amazon`_

.. _`digispark sur Amazon` : https://www.amazon.fr/AZDelivery-Digispark-Kickstarter-d%C3%A9veloppement-compatible/dp/B076KS2QDS/ref=pd_lpo_1?pd_rd_w=Nu1uA&content-id=amzn1.sym.596c2ea6-add0-4f08-9363-445efdea7d0d&pf_rd_p=596c2ea6-add0-4f08-9363-445efdea7d0d&pf_rd_r=7Y542ZA82TSVNNT76T21&pd_rd_wg=MwbAP&pd_rd_r=1ee0a8f6-2f4f-4ecb-a2dd-2629fbaef3dc&pd_rd_i=B076KS2QDS&psc=1



:download:`Schema digispark<fichiersJoints/DigisparkSchematicFinal.pdf>`

`Description sur le site`_ Pas fcaile à trouver !

.. _`Description sur le site` : http://digistump.com/wiki/digispark/tutorials/digispark

Pour le PWM et analogRead tout sur une `seule page sur le wiki digistump`_

.. _`seule page sur le wiki digistump` : http://digistump.com/wiki/digispark/tutorials/basics

Attiny85 10bits ADC

.. image:: images/2n7000pinout.jpg 
   :width: 200 px

|clearer|

.. image:: images/2n700courant.jpg 


le 2n700, c'est la première colonne donc 200mA en continu et 500 en pulse.

:download:`2N7000 datasheet<fichiersJoints/2N7000.pdf>`


4 LED en // 80mA et le ventilo donné pour 0.33A mesuré 167mA sous 14V

Transistor en D2PAK NTD20N03L27 20A ou 
:download:`IPD079N06L datasheet<fichiersJoints/Infineon-IPD079N06L3-DS-v02_00-en.pdf>`
composants que j'avais sous la main mais un cananl N capable de driver 500mA à 1A suffit !

.. image:: images/ipd079N06pinout.jpg 
   :width: 300 px

.. WARNING:: Encore un échec ! le ventilateur siffle quand il est piloté en pwm. Pour les LED c'est OK
   :class: without-title


Essais d'un ventilo avec pwm : à voir ventilateur commandé sur AMAZON :download:`pure wing2 dts<fichiersJoints/Datasheet_Pure-Wings2_PWM_en.pdf>`
Il n'est pas dit la frequence à laquelle, il faut piloter ce ventilo, on parle sur les doc de carte mère de 15 à 20kHz.


Changer la fréquence du PWM dans le digispark
----------------------------------------------------------------------------------------------------

`Digispark tricks`_

.. _`Digispark tricks` : http://digistump.com/wiki/digispark/tricks


`Trying to increase PWM frequency`_ sur le forum Digispak

.. _`Trying to increase PWM frequency` : http://digistump.com/board/index.php?topic=2312.0

Un peu plus éloigné : `ATTiny85 PWM frequency selection`_

.. _`ATTiny85 PWM frequency selection` : https://forum.arduino.cc/t/attiny85-pwm-frequency-selection/60785/5

Attention les canaux analogiques ne sont pas numéroté de manière logique.

Voir `Digistump basics`_

.. _`Digistump basics` : http://digistump.com/wiki/digispark/tutorials/basics

::

   sensorValue = analogRead(1); //Read P2
   //To set to input: pinMode(2, INPUT);
   //THIS IS P2, P2 is analog input 1, so when you are using analog read, you refer to it as 1.

   //sensorValue = analogRead(2); //Read P4
   //To set to input: pinMode(4, INPUT);
   //THIS IS P4, P4 is analog input 2, so when you are using analog read, you refer to it as 2.

   //sensorValue = analogRead(3); //Read P3
   //To set to input: pinMode(3, INPUT);
   //THIS IS P3, P3 is analog input 3, so when you are using analog read, you refer to it as 3.

   //sensorValue = analogRead(0); //Read P5
   //To set to input: pinMode(5, INPUT);
   //THIS IS P5, P5 is analog input 0, so when you are using analog read, you refer to it as 0.

Le **code final** du Digispark est `disponible ici`_

.. _`disponible ici` : https://github.com/MajorLee95/tinyelab/blob/main/_02-realisation/_01-software/ventilo/ventilo.ino

====================================================================================================
Interrupteurs rouge miniature
====================================================================================================
Référence `KDC1-11 sur AMAZON`_ en noir mais en rouge ??? 10x15mm

.. _`KDC1-11 sur AMAZON` : https://www.amazon.fr/5x-Mini-Interrupteur-SPST-27int003/dp/B0749SC157/ref=sr_1_1?keywords=kcd1-11&qid=1655909025&sr=8-1

J'ai commandé `des KCD1 en 21*15mm ici`_, j'aurais donc du recevoir des 21x15mm et j'ai reçu des 13x9mm beaucoup plus petits ! il y a écrit dessus KCD1-11

.. _`des KCD1 en 21*15mm ici` : https://www.amazon.fr/gp/product/B085B21DX1/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1

J'ai l'impression qu'il s'agit d'une erreur, sur les autres photo on a des KCD1. Un des commentaire 
avec photo le montre clairement ! Mistère résolu.

C'est un peu chaint pour estimer le coût. Je prend 2.15€ les 5

====================================================================================================
Rendu Freecad
====================================================================================================

.. image:: images/ventiloRendu3D.JPG 
   :width: 600 px

====================================================================================================
Photos
====================================================================================================
Système d'inclinaison en test

.. image:: images/ventiloInclinaison.JPG 
   :width: 300 px

En cours de câblage

.. image:: images/ventiloLesEntrailles.JPG 
   :width: 300 px



====================================================================================================
Nomenclature
====================================================================================================

.. csv-table:: Nomenclature ventilation
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/moduleVentilo/nomVentilo.csv
   :delim: ,
   :encoding: UTF-8
   :align: left
   :header-rows: 1


====================================================================================================
Améliorations possibles/souhaitable
====================================================================================================
- possibilité de remplacement du filtre sans démonter la casquette
- inclinaison de la barre de LED vers l'avant ( Elles éclairent actuellement la base du ventilo )
- retour d'expérience: à l'usage **l'inclinaison du ventilo est inutile** !



====================================================================================================
Weblinks
====================================================================================================

.. target-notes::