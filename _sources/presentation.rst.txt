++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Presentation
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

:Projet: Tiny e-lab
:Auteur: J.Soranzo
:Date de création: 02/2022
:Date dernière maj: 07/10/2022
:Societe: VoRoBoTics
:Entity: VoLAB



.. |clearer|  raw:: html

   <div class="clearer"></div>


====================================================================================================
Présentation
====================================================================================================
github du projet : `cliquez ici`_ si vous voulez accéder au Github des données du projet.

.. _`cliquez ici` : https://github.com/MajorLee95/tinyelab 

Il s'agit d'un projet de source internet. Je n'en suis pas l'auteur, juste un contributeur.

Je l'ai détecté sur la chaîne du "Guy with the swiss accent", Andreas Spiess  dans la vidéo 
`Creative uses of Power Tool Batteries for Mobile Projects`_

.. image:: images/andreasSpiess.jpg

.. _`Creative uses of Power Tool Batteries for Mobile Projects` : https://www.youtube.com/watch?v=Xbk5kedUcY0

Sur `Thingiverse Tiny e-Lab`_ plus complet, auteur marcluer

.. _`Thingiverse Tiny e-Lab` : https://www.thingiverse.com/thing:2999383

.. image:: images/tinyelabOnThingiverse.jpg 
   :width: 600 px


.. WARNING:: LIDL battery pack + chargeur pas livrée en France par correspondance.
   :class: without-title

   Mais on peut facilement se le procurer en magasin.

====================================================================================================
Liste des modules qui existent
====================================================================================================
Dans le Thingiverse
----------------------------------------------------------------------------------------------------
::

   - Alimentation 02_DPS3005.stl
   - LCR meter 03_LCR_v2.stl ou lcr_t4_04.stl
   - Fer à souder TS-100 04_TS100-holder_v2.stl et 04_TS100-station_v3_wLED.stl
   - fume extractor 05_Fume_Extractor_90mm_v2.stl et 05_Fume_Extractor_90mm_fan_cover_v1.stl
   - lampe led : 06_USB-single_v1.stl

Dérivé sur Thingiverse
----------------------------------------------------------------------------------------------------
32 dérivés::

   - Tiny E-lab Ts100 alternate stand
   - Tiny e-lab XCover Pro Pogo Charger (charger de tel avec pogo pins !)
   - Tiny e-Lab current Meter (à mettre en début de chaîne !)              ****
   - E-Lab Power Supply (grosse alim avec plug secteur)                      **
   - Function Generator (aucun lien vers l'éle à mettre dedans) 
   - DC 580 Module : buck conver alim stabilisée 30V 5A
   - Tiny e-lab fan - 80mm
   - Tiny e-Lab KSGER T12 Soldering İron
   - Tiny e-Lab fume extractor fan cover remix
   - Tiny e-Lab rear power supply input
   - Tiny e-Lab snap-in covers des portes
   - T12 Carbon Fibre Holder ???
   - Lidl Parkside X20V Team Battery Adapter for Tiny e-Lab
   - Lab Power Supply - Tiny e-Lab Edition by Chordless avec aération et face avant détachable
   - Mini soldering tools support Tiny e-lab compatible
   - Tiny e-Lab LCR-T4 tester - Remix by Chordless
   - Tiny e-Lab single usb mod
   - Tiny e-Lab Bosch 18V Battery Adapter                                    *
   - Tiny e-Lab Fusion 360 Template  by Chordless                          ***
   - Tiny e-Lab Single USB by Chordless avec aération et face avant détachable   **
   - Tiny e-Lab 12v Hub ne se charge pas !
   - Tiny e-Lab T12 Soldering İron STM32 V2.01
   - Tiny e-Lab dso138 mini Digital Oscilloscope (le lien vers la ref d'oscillo est cassé)  ***
   - Tiny e-Lab Dual USB PSU documenté et ventilé et fav détach by Chordless   ****
   - Tiny e-Lab Dual Usb with Voltmeters and Ammeters a éviter
   - LessTiny e-Lab by lhoracek October 21, 2019 non compatible
   - Tiny e-Lab DPS alim avec connecteur press fit                         ****
   - LessTiny e-Lab la suite but non compatible
   - Tiny e-lab Power Supply
   - Tiny e-Lab AD584 Voltage Reference ref de tension 4 canaux               *
   - Tiny e-Lab Power supply (la meme)
   - Tiny e-Lab LCR-T4 tester remix

Parmi tout ces variations celles de Cordless sont les plus intéressantes et en plus il fourni des
sources Fusion360 (paramétrables). Ces modèles sont ventilés et à face avant détachable.

Son module dual usb à base de buck mini 360 me parait un peu limité en courant mais l'idée est bonne
pour alimenté des Raspi il faudrait des buck plus costaud.


.. index::
    single: DC/DC

Plus avantageux serait : 

.. image:: images/conver5V5A.JPG 
   :width: 300 px



Adaptateur batterie LIDL sur Prusa Printers
----------------------------------------------------------------------------------------------------
Sur `Prusa Printers Lidl Parkside X20V Team Battery Adapter for Tiny e-Lab`_

.. _`Prusa Printers Lidl Parkside X20V Team Battery Adapter for Tiny e-Lab` : https://www.prusaprinters.org/prints/45015-lidl-parkside-x20v-team-battery-adapter-for-tiny-e

Auteur Stanley ou stanoba sur Thingiverse

====================================================================================================
Inconvénients du projet original sur Thingiverse
====================================================================================================
Pas de site internet dédié au projet et très peut de données sur le câblage des modules.

Fichiers source en .skp (sur Prusa Printers seulement)

A noter que `Chordless donne ses source Fusion360 sur Thingiverse`_

.. _`Chordless donne ses source Fusion360 sur Thingiverse` : https://www.thingiverse.com/thing:4369390

.. image:: images/chordless_fusionSources.jpg 
   :width: 300 px


====================================================================================================
Ce que j'ajouterais bien
====================================================================================================

USB 5A pour Rpi4 à l'image de `Tiny e-Lab Dual USB PSU`_ (fichier fusion360 fournis)

.. _`Tiny e-Lab Dual USB PSU` : https://www.thingiverse.com/thing:4324443

Module de début de chaîne U et I avec connectique alim PC

Générateur de trame série 

Analyseur de lien série détection de la vitesse et protocole

un début :  `skjolddesign Handheld-RS232-serial-data-tester`_

.. _`skjolddesign Handheld-RS232-serial-data-tester` : https://github.com/skjolddesign/Handheld-RS232-serial-data-tester


====================================================================================================
Ceux que je vais faire
====================================================================================================
::

   - alim début : le first plug : n'existe pas
   - alim stabilis avec connecteur audio
   - usb 3A 

   - station Fer
   - éclairage
   - voltmetre 2
   - amperemetre 2
   - lcr meter
   - oscillo

   - voir accessoir dremel en 19V

Puissance besoin : ? 

- 3x 5A 5V = 75W
- fer 20W 

- total 95W sous 19V environ 5A

`KETOTEK Voltmetre Amperemetre 12V DC 6.5-100V 20A`_

.. _`KETOTEK Voltmetre Amperemetre 12V DC 6.5-100V 20A` : https://www.amazon.fr/KETOTEK-Voltmetre-Amperemetre-Multimetre-Multim%C3%A8tre/dp/B07M8T3T2C/ref=pd_day0_1/261-1112629-2310512?pd_rd_w=hbAe2&pf_rd_p=5a3d874f-f0eb-4ad9-ac25-35518704bcec&pf_rd_r=DH6T21J6SWHXN14FSGEK&pd_rd_r=750cbf0b-ce80-4417-b3f2-3d1e529806af&pd_rd_wg=QEHru&pd_rd_i=B07M8T3T2C&th=1

Cliquez :ref:`ICI<refMesContributions>` pour accéder à mes contributions

Oscillo
----------------------------------------------------------------------------------------------------

voir :ref:`ici<refOscilloRealisation>`


----------------------------------------------------------------------------------------------------

**Autres solutions de scope**

`hackaday ScopeIO (9 chanel digital)`_

.. _`hackaday ScopeIO (9 chanel digital)` : https://hackaday.io/project/98429-scopeio

`Dual trace sur instructable`_

.. _`Dual trace sur instructable` : https://www.instructables.com/Dual-Trace-Oscilloscope/

====================================================================================================
Weblinks
====================================================================================================

.. target-notes::