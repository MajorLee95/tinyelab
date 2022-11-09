++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Module USB 2x 5A avec ampèremètre
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
.. image:: images/usb2x3a/moduleUSB2x3AComplet.jpg 
   :width: 300 px
   :align: right

:Auteur: J.Soranzo
:Date de création: 10/2022
:Date dernière maj: 10/2022
:Societe: VoRoBoTics
:Entity: VoLAB




.. |clearer|  raw:: html

   <div class="clearer"></div>



====================================================================================================
Présentation/objectif
====================================================================================================
On souhaite ici un module avec 2 prise USB capable de délivrer chacune 3A pour éventuellement 
alimenter 2 Raspberry pi avec un écran qui affiche tension courant pour chaque voie.

====================================================================================================
Module XL4015 évaluation à 3A
====================================================================================================

La base est le convertisseur DCDC XL4015

`TECNOIOT 5pcs 5A XL4015 DC-DC Step Down Adjustable Power Supply Module LED Lithium Charger`_
    
.. _`TECNOIOT 5pcs 5A XL4015 DC-DC Step Down Adjustable Power Supply Module LED Lithium Charger` : https://www.amazon.fr/gp/product/B07XXFZFQJ/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1

En testant ce module en charge (avec une charge active) à 5V 3A, on s’aperçoit que ce n'est pas 
régulateur qui chauffe mais la diode et la self comme le montre les images infra-rouge.

.. |aliasXL4015IR_1| image:: images/XL4015IR.jpg
   :width: 200 px

.. |aliasXL4015IR_2| image:: images/XL4015TestImageReelle.jpg
  :width: 200 px

.. list-table::
   :widths: 27 27 
   :header-rows: 1

   * - Image IR
     - Image réelle

   * - |aliasXL4015IR_1|
     - |aliasXL4015IR_2|

Ces images ont été réalisées avec la `caméra infra-rouge Hti-Xintai HT18`_ sur l'image réelle la 
parallaxe des 2 objectifs fait que les température ne sont  pas aux bons endroits. C'est l'image IR
qui compte

.. _`caméra infra-rouge Hti-Xintai HT18` : https://www.amazon.fr/gp/product/B07BDJZ845/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1

Lorsque le module délivre 5V / 3A la température de la diode se situe aux environs de 120°C. C'est 
beaucoup

====================================================================================================
Design du module
====================================================================================================
Compte tenu de l'essai ci-dessus je décide d'incorporer un ventilateur de 40mm au module.

Je décide également de mettre 2 voies 5V/3A donc d'utiliser 2 convertisseurs.

De plus étant donné que cela doit pouvoir servir à alimenter un raspberry pi, il serait bien de 
disposer d'une lecture du courant. Je n'est rien trouvé de suffisamment petit.

J'envisage de réaliser le double ampèremètre grâce à:

- 2 modules INA219
- 1 ARDUINO NANO
- 1 écran `OLED I2C monocrome de 0.91" 128 x 32`_

.. image:: images/oled128x32.jpg 
   :width: 300 px


.. _`OLED I2C monocrome de 0.91" 128 x 32` : https://www.amazon.fr/gp/product/B08CDN5PSJ/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1

Toutefois à 3A la chute de tension provoqué par le module INA219 et son shunt de 0.1 ohm risque 
d'être non négligeable : 0.3V. Il est possible de compenser cela en dessoudant le potar de feedback 
et en le plaçant après le shunt.


.. WARNING::

   Nouveau pb : 
   
   alimentation ventilo: en 24V, il fait énormément de bruit, je ne suis pas certain que 
   ce soit un ventilo 24V. 
   
   Il tourne bien en 5V mais le débit d'air semble un peu faible. 8, 9V
   semble un bon compromis. Sauf que je n'ai pas d'alim à cette valeur dans le module.

Conso ventilo : 24mA en 12V ventilo 1 (avec étiquette 24V), 49mA en 12V ventilo 2 origine ?

Solutions:

- un autre DC/DC XL4015 : pas la place et un peu riche pour un ventilo
- du PWM depuis l'ARDUINO : maîtrise de la vitesse et possibilité de régul en fonction de T°c
      - Echec: le ventilateur siffle (même à 32kHz en PWM) et la plage de réglage et très courte
- Mettre un simple régulateur : Lm1084 ou 7805


7805 pour alimenter l'arduino.

Conso : environ 50mA (mesuré à 25) soit à dissiper 24-5 = 19V P=UxI = 19x0.05 = 0.95W

En parcourant la datasheet du 7805, je suis tombé sur cette figure:

.. image:: images/7805_high_output.JPG 
   :align: center

Il est donc possible à partir du 7805 de faire du 9V qui pourrait servir à alimenter le ventilo ET 
l'ARDUINO sur son  Vin.

Prise USB utilisées
----------------------------------------------------------------------------------------------------
.. image:: images/usbBreakOutBoard.jpg 
   :width: 300 px


Les adresses sur le bus I2C
----------------------------------------------------------------------------------------------------
I2C scan : 0x3C, 0x40 et 0x41 (écran, INA1, INA2)

====================================================================================================
Schémas électroniques
====================================================================================================
De la carte (sans les LM35)
----------------------------------------------------------------------------------------------------

.. image:: images/usb5V3AOledSch.jpg 
   :width: 600 px

Les LM35 ont été ajoutés après coup en fil volant.

**Pseudo PCB KiCAD**

.. image:: images/usb2x3a_pseudoPCB.jpg 
   :width: 600 px

Pseudo pcb car réalisé sur de la plaque à trous à pastille carrées Veroboard.

Schéma de câblage
----------------------------------------------------------------------------------------------------
.. image:: images/usb2x3ACablage221009_1106.svg
   :width: 600 px

|clearer|

.. image:: images/usb2x3ACablage_filaire221020_0026.svg
   :width: 600 px


====================================================================================================
Mesure de température (LM35)
====================================================================================================
Ajout de dernière minute.

Comment : l'arduino à des entrée analogique dispo.

Qu'est ce que j'ai ?

- LM35 :download:`datasheet<fichiersJoints/lm35dts.pdf>`

J'ai câblé 2 de ces capteur sur les entrées analogique A0 et A1

.. |LM35_cablage01| image:: images/USB2X3A_LM35Cablage01.png
   :width: 200 px

.. |LM35_cablage02| image:: images/USB2X3A_LM35Cablage02.png
  :width: 200 px

.. list-table::
   :widths: 27 27 
   :header-rows: 1

   * - Câblage LM35 sous l'ARDUINO
     - Câblage LM35 collés au dissipateurs

   * - |LM35_cablage01|
     - |LM35_cablage02|

Les 2 capteurs sont collés aux dissipateurs grâce à de la colle thermique 
(pas de la pate mais bien de la colle ! ).

.. image:: images/colleThermique.jpg 
   :width: 300 px

====================================================================================================
Quelques photos de la réalisation
====================================================================================================

.. |aliasImage1| image:: images/usb2x3a/mequettagePrelimi.jpg
   :width: 200 px

.. |aliasImage2| image:: images/usb2x3a/xl4015EnCharge.jpg
  :width: 200 px

.. |aliasImage3| image:: images/usb2x3a/ina219EtTrimerDeporte.jpg
  :width: 200 px

.. |aliasImage4| image:: images/usb2x3a/carteEnCoursDeSoudure.jpg
  :width: 200 px

.. |aliasImage5| image:: images/usb2x3a/carteEnCoursDeSoudureRecto.jpg
  :width: 200 px

.. list-table::
   :widths: 20 20 20 20 20
   :header-rows: 1

   * - Maquette
     - XL4015 en charge
     - INA219 + trimer
     - Carte en cours
     - Carte verso

   * - |aliasImage1|
     - |aliasImage2|
     - |aliasImage3|
     - |aliasImage4|
     - |aliasImage5|

.. |aliasImage6| image:: images/usb2x3a/decoupeDissipateurALaDremel.jpg
   :width: 200 px

.. |aliasImage7| image:: images/usb2x3a/carteEssaiStatique.jpg
  :width: 200 px

.. |aliasImage8| image:: images/usb2x3a/cablageFaceAvantEtBase.jpg
  :width: 200 px

.. |aliasImage9| image:: images/usb2x3a/connexionFavBase.jpg
  :width: 200 px

.. |aliasImage10| image:: images/usb2x3a/essaisTemp.jpg
  :width: 200 px

.. list-table::
   :widths: 20 20 20 20 20
   :header-rows: 1

   * - Maquette
     - XL4015 en charge
     - INA219 + trimer
     - Carte en cours
     - Carte verso

   * - |aliasImage6|
     - |aliasImage7|
     - |aliasImage8|
     - |aliasImage9|
     - |aliasImage10|


====================================================================================================
Une jolie face avant (pour combler le vide)
====================================================================================================

.. image:: ../../_02-realisation/_02-hardware/usb5v3a_v2_fav/fav221017_2030.svg
   :width: 300 px

Découpé avec notre antique craftrobot...

.. image:: images/craftrobot.jpg 
   :width: 300 px

Compatible du logiciel Silhouette Studio (je conseille la v3.6.057, pour les repère de coupe old
style)

====================================================================================================
Rendus FreeCad
====================================================================================================
L'intérieur du module très chargé et encore, il n'y a pas les fils de cablage...

.. image:: images/usb2x3Av2_interne.jpg 
   :width: 600 px

La même avec en plus la base, les switch et les prise USB:

.. image:: images/usb2x3Av2_sansFAV.jpg 
   :width: 400 px

Et avec

.. image:: images/usb2x3Av2_avecFAV.jpg 
   :width: 400 px

====================================================================================================
Arduino code
====================================================================================================
.. image:: images/ArduinoCommunityLogo_SVG.svg 
   :align: center


.. image:: images/docIcon.svg 
   :align: left


Vous le trouverez sur le `github du projet`_

.. _`github du projet` : https://github.com/MajorLee95/tinyelab/blob/main/_02-realisation/_01-software/usb3a/usb3a.ino

====================================================================================================
Nomenclature
====================================================================================================

.. csv-table:: Nomenclature USB5V 3A
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/moduleUSB3A/nomUSB3A.csv
   :delim: ,
   :encoding: UTF-8
   :align: left
   :header-rows: 1

Prendre les ARDUINO NANO sur Aliexpress, il sont nettement moins cher !

.. index::
    single: Veroboard

.. _refVeroboard:

Carte de prototypage à souder à **pastilles carrées** simple face au pas de 2.54 chez
Radiospares code `457-0761`_ 200x100 : 18.84€ 20.000mm2 soit 0.000942€/mm2

.. _`457-0761` : https://fr.rs-online.com/web/p/cartes-matrices/4570761

.. image:: images/veroboardPastilleCaree.jpg 
   :width: 300 px

Le pastillage carré permet de tracer des pistes en reliant par des ponts de soudure les pastilles
2 à 2 puis 4 à 4 puis 8 à 8...

====================================================================================================
Weblinks
====================================================================================================

.. target-notes::