++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Mes réalisations
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

:Projet: Tiny e-lab
:Auteur: J.Soranzo
:Date de création: 02/2022
:Date dernière maj: 07/10/2022
:Societe: `VoRoBoTics`_
:Entity: `VoLAB`_

.. _`VoLAB` : http://www.vorobotics.com/wp/

.. _`VoRoBoTics` : http://www.vorobotics.com/wp/

.. |clearer|  raw:: html

   <div class="clearer"></div>

.. _refMesContributions:

.. toctree::
   :maxdepth: 1
   :caption: Articles dédiés

   modulePrimaireTensionCourant
   moduleAlimStabiliseeDPS3005
   moduleAlimentationParkSide
   moduleUSB3A2voies
   moduleOscilloDSO138
   moduleVentilo

====================================================================================================
Réalisés/terminés
====================================================================================================

.. image:: images/realises01.jpg 
   :width: 800 px

De la gauche vers la droite : module tension/courant, USB 5V 3A, Oscillo, Alimentation stabilisé, re USB 5V 33A

.. image:: images/vaTripleVentilo.JPG 
   :width: 600 px

Toujours de gauche à droite les modules Volt/ampèremètre, triple voltmètre, XTprolongateur et ventilo


.. NOTE::

   Les chapitres suivants ne sont pas nécessairement dans l'ordre de création des objets. 
   Pour connaître l'avancement du projet ainsi que la liste des objets à venir:  :ref:`voir le chapitre avancement<refAvancementGeneral>`.

====================================================================================================
Avant d'entrer dans le vis du sujet
====================================================================================================
.. WARNING:: ATTENTION
   :class: without-title

   Tous le modules ont une masse commune.


XT60 male ou femelle
----------------------------------------------------------------------------------------------------
Le Lecteur attentif remarquera que je me suis emmêlé les pinceau entre XT60 male et femelle, mais 
comme tout mes fichiers sont nommés avec cette erreur, je la garde.


Règles de nommage
----------------------------------------------------------------------------------------------------
Ci-dessous les règles que j'ai utilisé pour nommer les objects dans Freecad

- nom du fichier = nom de l'objet (de préférence sa vrai référence)
- chaque objet à un part dans FreeCad
- chaque part à **SA** spreadsheet cela permet d'avoir plusieurs fois le même terme (ex: long, larg)
- spreadsheet = nomDeLObjetSp (permet d'identifier les spreadsheet parmi d'autres noms)
- un diamètre = diam
- une longueur = long
- une largeur = larg
- une hauteur = haut
- une épaisseur = ep
- un entraxe = entraxe
- une distance entre 2 points = dist
- on ne répète pas le nom de l'objet dans les éléments de la spreadsheet
- On suffixe en commençant par le plus générique
- posX et posY font référence à la manière dont le scketch s'affiche de base X axe des abscisses 
  Y celui des ordonnées (indépendant du repère XYZ de l'espace 3D de FreeCAD)



exemples:

- *bornSp.bornierVisTrouDiam* est incorrecte, alors que *bornierSp.VisTrouDiam* serait correcte
- suffixe : VisTrouDiam, VisTrouPosX....

Versionning
----------------------------------------------------------------------------------------------------

Pas de git pour ce projet !
les versions soit 3 digits soit 3 digits. 1 sous version. Je suis indécis. J'aurais tendance à tendre
vers 3 digits seuls (ça fait moins de caractères à taper)

Passage sous git le 17/04/22 : on perd la notion de version numérotée. On peut s'en sortir avec le 
hash du commit mais ce passage sous git va de paire avec le passage à des références dans freecad
pour ne pas avoir de nom de référence qui change tout le temps... Mais on perd aussi en facilité
en effet avec le versionnning fait sur le nom du fichier on travaille sans changer d'outil...

Génération des nomenclatures csv pour Restructured text
----------------------------------------------------------------------------------------------------

Outil : Libre office calc (c'est un des rare qui permette de chaisir l'encodage et le séparateur)

Faire : Fichier / Enregistrer une copie sous...
 
Choisir UTF-8 et , comme séparateur


.. _refConvertisseurDCDC:

Alimentation des modules en base tension
----------------------------------------------------------------------------------------------------

Pour les modules qui ont besoin d'une tension inférieur à la tension d'alimentation principale 
(19 à 24v)! Comme le module oscilloscope par exemple


.. _moduleDCDC2596:

Module convertisseur réglable 2A
----------------------------------------------------------------------------------------------------
Ce convertisseur est nécessaire quand les éléments du module ne supportent pas des tension d'entrées
comprise entre 15 et 24V.

Il convient alors de régler la tension de sortie du convertisseur à la bonne valeur


Convertisseur DC/DC 1A réglable

Alimentation du rail : 19 à 25V environ

Courant de sortie nominal annoncé : 2A

Ce style de DCDC: 

.. image:: images/dcdc2Areglable.jpg 
   :width: 300 px

13.57€ par 10pcs chez `Banggood lm2596 DC-DC`_

.. WARNING:: Pb avec le model 3D récup sur GARCAD
   :class: without-title

   Écart entre trou mesuré : 31mm versus 30.26 sur le step

.. image:: images/DCDC2596ModelPb.JPG 
   :width: 600 px

.. _`Banggood lm2596 DC-DC` : https://www.banggood.com/fr/10Pcs-LM2596-DC-DC-Adjustable-Step-Down-Power-Supply-Module-p-963307.html?rmmds=detail-left-hotproducts__7&cur_warehouse=CN


Uin : 35V max

Uout : de 1.35V à 35V mouais !

pb la fixation: 2 trous M3 mais:

.. WARNING:: ATTENTION Mettre des vis nylon : risque de contact avec un broche de capa 

`VIS M3x6 NYLON AMAZON`_

.. _`VIS M3x6 NYLON AMAZON` : https://www.amazon.fr/Maintient-Casquette-Convient-nombreux-endroits/dp/B097P43SJC/ref=sr_1_19?keywords=vis+nylon&qid=1649422582&sr=8-19

.. image:: images/positionnementDCDC.jpg 
   :width: 300 px


Tige laiton (connexion des XT60)
----------------------------------------------------------------------------------------------------
Plutôt que d'utiliser des fils de cablage, j'ai utiliser des tiges rigides en laiton.

Tige en laiton diam 2 pour les rails d'alimentation des modules chez Leroymerlin diam 3 (le mieux serait du 2)

ou manomano tous les diamètre ou chez `AMAZON 20 Pièces T2 Baguettes de Soudage en laiton de 2mm x 250mm`_

.. _`AMAZON 20 Pièces T2 Baguettes de Soudage en laiton de 2mm x 250mm` : https://www.amazon.fr/gp/product/B08S728MMZ/ref=ppx_yo_dt_b_asin_title_o01_s01?ie=UTF8&psc=1

.. figure:: images/tigeLaitons.jpg
    :width: 300 px
    :align: left

    Position des tiges en laiton

20 tiges de 250mm 14€ soit 0.7€ les 250mm ou encore 0.0028€/mm

====================================================================================================
Le model de base 35mm large
====================================================================================================
Modèle
----------------------------------------------------------------------------------------------------
J'ai entièrement repris le modèle de base sous Freecad avec spreadsheet paramétrable.

Face avant détachable & ventilation. Fortement inspiré du model de Cordless

Ajout également d'une vis pointeau et d'un insert fileté pour bien tenir les XT60

Insert filetés
----------------------------------------------------------------------------------------------------
`Sur AMAZON ruthex Boîte M2 + M3 + M4 + M5 insert fileté`_

.. _`Sur AMAZON ruthex Boîte M2 + M3 + M4 + M5 insert fileté` : https://www.amazon.fr/gp/product/B08K1BVGN9/ref=ppx_yo_dt_b_asin_title_o06_s00?ie=UTF8&psc=1


.. image:: images/ruthexBox.JPG 
   :width: 300 px

Dimensions:

.. image:: images/ruthexBoxDimension.JPG 
   :width: 300 px

Calculs relatifs à la ventilation
----------------------------------------------------------------------------------------------------
Calculer le nombre de fentes.

On connaît:

- la largeur du modules
- l'épaisseur de la parois
- la largeur des fentes
- l'écart entre les fentes

On veut le nombre de fentes et la longeur de la répétission

En effet dans Freecad, il faut ces 2 paramètres::

   grandA =(largeurModuleBase - 2 * epaisseurParois) / 2
   ventilLargeurRepet =grandA - ventilEcartfente / 2 - (ventilLargeurFentes + ventilEcartfente)
   ventilNbrFents =ceil(ventilLargeurRepet / (ventilLargeurFentes + ventilEcartfente)) + 1

.. image:: images/ventilCalculsFentes.svg
   :width: 500 px

Profile
----------------------------------------------------------------------------------------------------

.. image:: images/profileOriginal.JPG 
   :width: 300 px

.. image:: images/profileOriginalXT60.JPG  
   :width: 300 px

Côtes XT60 mauvaise :

- largeur = 8
- largeur du sommet = 3

Juste :

- hauteur = 15.75 mais  affaissement des couche d'impression à compenser
- le 13.25

.. image:: images/profilesFav.svg 
   :width: 600 px


|clearer|

.. image:: images/moduleDeBaseSousFreecad.jpg 
   :width: 600 px

|clearer|

.. image:: images/moduleBaseVisPointeauDetail.jpg 
   :width: 300 px

.. index::
    single: Switch


Switch ON/OFF
----------------------------------------------------------------------------------------------------
J'ai eu la chance de récupérer un carton entier de ces switch donc, je les utilise. Libre à vous de 
changer.

Toujours est-il que voici la référence pour les flemmards : chez `Farnell C1500ATAAA`_

.. _`Farnell C1500ATAAA` : https://fr.farnell.com/arcolectric/c1500ataaa/interrupteur-a-bascule-spst-noir/dp/150549?st=c1500

Fabrcant ARCOLECTRIC (BULGIN LIMITED).

:download:`datasheet C1500<fichiersJoints/C1500AT_2711451.pdf>`

.. image:: images/c150AA.jpg 

Cette version est assez encombrante 14x30mm. Mais c'est celle que je choisi de base car j'en ai 
2 cartons pleins :-()

Autre version plus petite 15x10 malheureusement ceux que j'ai commander sur amazon devaient mesurer
20x10 et à l'arrivée ils sont plus petits mais du coup ça peut être utile.



.. index::
    single: XT60

XT60
----------------------------------------------------------------------------------------------------
Sur AMAZON facile à trouver par exemple `AUTOUTLET 20 PCS 10 Paires XT60`_

.. _`AUTOUTLET 20 PCS 10 Paires XT60` : https://www.amazon.fr/gp/product/B07C3R5W31/ref=ppx_yo_dt_b_asin_title_o08_s00?ie=UTF8&th=1

.. image:: images/xt60.jpg 
   :width: 300 px

Nomenclature de base
----------------------------------------------------------------------------------------------------
.. csv-table:: Nomenclature Module de base hors pièces imprimées
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/base35mmParam/nomBASE.csv
   :delim: ,
   :encoding: UTF-8
   :align: left
   :header-rows: 1

====================================================================================================
Module primaire: **abandonné**
====================================================================================================
Le but de se module est de se placer devant le module prmaire afin de recevoir tout type d'adaptateur
secteur.

AC/DC adaptateur (alimentations de PC portables):

.. image:: images/emboutPowerPC.jpg 
   :width: 600 px

.. image:: images/emboutPowerPC_2.webp 
   :width: 600 px

.. image:: images/emboutPowerPC_3.webp 
   :width: 600 px


- prise pc DELL, diamètre extérieur mesuré: 7.4mm

- prise MSI : diamètre extérieur 7.4mm, même adaptateur pour les TS-100 que pour DELL

- prise alim Toshiba ADP-75SB BB
    - diamètre extérieur 5.5
    - diamètre tige intérieur : 2.7mm voir 2.8difficile à mesurer
    - `Embase verte du LAB à vis`_ conviennent, l'âme 2mm environ chez AMAZON5.5x2.1 DC5520

- Prise male pour le TS100 : l'âme centrale semble plus grosse ci bien que la prise TOSHIBA avec
  lame de ressort convient mais pas les verte du LAB. Serait : Port DC5525 5.5x2.5.
  Chez `AMAZON DC5525`_

N'ayant pas trouvé simplement d'embase 7.4x5.0mm j'opte pour un adaptateur vers 5.5x5.2 encore du 
`AMAZON Kafuty 5PCS 7.4 x 5.0 x 0.6MM Connecteur d'adaptateur d'alimentation`_

.. _`AMAZON Kafuty 5PCS 7.4 x 5.0 x 0.6MM Connecteur d'adaptateur d'alimentation` : https://www.amazon.fr/gp/product/B084Z6YDCV/ref=sw_img_1?smid=A1U9HA371QAC83&psc=1
  
Donc en résumé pour ce module : 1 XT-60 normal + à l'arrière ou du même côté que le XT ou les 2:

- DC5525
- `DC5521`_


.. _`Embase verte du LAB à vis` : https://www.amazon.fr/Connecteur-femelle-verser-cam%C3%A9ra-surveillance/dp/B00Z2LMT2O/ref=sr_1_11?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=1TMH52S91RFIR&keywords=DC5521&qid=1651395134&sprefix=dc5521%2Caps%2C50&sr=8-11

.. _`AMAZON DC5525` : https://www.amazon.fr/gp/product/B01LQGESUO/ref=ox_sc_act_title_2?smid=AQ1IBDB6G2RRD&psc=1

.. _`DC5521` : https://www.amazon.fr/gp/product/B07D4DLJ69/ref=ox_sc_act_title_1?smid=A2HAOQPNQ6T9Y5&psc=1 

.. NOTE:: **Finalement**:
   :class: without-title

   Ajout de 2 prises DC5525 et DC5521 au module mesure de Tension/courant de ligne ci-après.




.. index::
    pair: Outillages; XT60

====================================================================================================
Outillage pour souder les XT60
====================================================================================================
Voici un outillage permettant de souder les tiges laiton aux XT60 au bonnes dimensions.

.. image:: images/outillageXT.jpg 
   :width: 600 px


Il suffit de régler la partie de droite à la largeur du module considéré.

Il y est équipé d'un réglet disponible chez Castorama

Largeur : 24mm +/-1 et moins de 1mm d'épaisseur

====================================================================================================
Capot de Prise XT60
====================================================================================================
Afin d'améliorer la prise en main des XT60 connecté à l’extrémité de câbles, il s'agit de créer 
un boîtier pour les connecteurs XT60 mâle et femelle.


Sur le net:
----------------------------------------------------------------------------------------------------

.. image:: images/xt60CovertSurPrintable.JPG 
   :width: 500 px


`XT-60 Plug Covers`_

.. _`XT-60 Plug Covers` : https://www.printables.com/fr/model/71594-xt-60-plug-covers



Ma vision
----------------------------------------------------------------------------------------------------
Vis pointeau pour tenir fermement dans son logement, le connecteur.

J'ai utilisé Freecad v0.20 afin d'exploiter la nouvelle fonctionnalité de configuration.

Les explications sont fournies sur `le wiki Freecad Configurations tables`_

.. _`le wiki Freecad Configurations tables` : https://wiki.freecad.org/Spreadsheet_Workbench#Configuration_tables



Rendus Freecad
----------------------------------------------------------------------------------------------------
.. |aliasImagext60covmale| image:: images/xt60Male.JPG
   :width: 200 px

.. |aliasImagext60covfem| image:: images/xt60covfem.JPG
  :width: 200 px

.. list-table::
   :widths: 27 27 
   :header-rows: 1

   * - XT60 covert mâle
     - XT60 covert femelle

   * - |aliasImagext60covmale|
     - |aliasImagext60covfem|


Nomenclature XT60 coverts
----------------------------------------------------------------------------------------------------
.. csv-table:: Nomenclature oscilloscope DSO138
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/xt60Cover/nomxt60cov.csv
   :delim: ,
   :encoding: UTF-8
   :align: left
   :header-rows: 1

`Vis Sans Tête Hexagonale creuse à bout pointeau M3x6`_

.. _`Vis Sans Tête Hexagonale creuse à bout pointeau M3x6` : https://www.bricovis.fr/produit-vis-sans-tete-hexagonale-creuse-bout-pointeau-acier-14-9-noir-din-914-sthcptono/







.. index::
    pair: Modules; USB 3A

====================================================================================================
USB 5V 3A : ECHEC les modules ne tiennent pas 24V en entrée
====================================================================================================
Convertisseurs: `ANGEEK Lot de 5 modules d'alimentation USB DC 6-24 V à 5 V 3 A`_ chez AMAZON 10€/5

.. _`ANGEEK Lot de 5 modules d'alimentation USB DC 6-24 V à 5 V 3 A` : https://www.amazon.fr/gp/product/B07Q7TTD6C/ref=ppx_yo_dt_b_asin_title_o00_s01?ie=UTF8&psc=1

.. image:: images/module5V3ASurAMAZON.jpg 
   :width: 600 px


.. WARNING:: 24V max en entrée !!!!
   :class: without-title

.. image:: images/usb2x5V3A.jpg 
   :width: 300 px

Nomenclature
----------------------------------------------------------------------------------------------------
.. csv-table:: Nomenclature USB5V 3A
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/moduleUSB3A/nomUSB3A.csv
   :delim: ,
   :encoding: UTF-8
   :align: left
   :header-rows: 1

.. WARNING:: Je n'ai rien trouvé de satisfaisant pour remplacer les modules défectueux
   :class: without-title

J'ai tester :

`Greluma 4 Pièces Convertisseur Buck USB,Module Abaisseur DC-DC 4.5-32V 12V 24V à 5V QC 3.0`_ **A EVITER ABSOLUMENT !**

.. _`Greluma 4 Pièces Convertisseur Buck USB,Module Abaisseur DC-DC 4.5-32V 12V 24V à 5V QC 3.0` : https://www.amazon.fr/gp/product/B08NTK8FD5/ref=ppx_yo_dt_b_asin_title_o07_s00?ie=UTF8&psc=1






====================================================================================================
USB 5V 3A simple 2 voies  : redesign module ALIExpress
====================================================================================================
Redesign avec les modules :

`QC3.0 QC2.0 BC1.2 FCP AFC, Module de chargeur de voiture rapide, convertisseur abaisseur Buck, carte d'alimentation pour téléphone`_

.. _`QC3.0 QC2.0 BC1.2 FCP AFC, Module de chargeur de voiture rapide, convertisseur abaisseur Buck, carte d'alimentation pour téléphone` : https://fr.aliexpress.com/item/4000075527172.html?spm=a2g0o.order_list.0.0.1e2b5e5btOZjOc&gatewayAdapt=glo2fra

.. image:: images/usb3AAliexpressQC3.0.jpg 
   :width: 300 px

.. NOTE:: Testé le 12/10/2022 Vin 24V load 5V 3A Temp max 70°C
   :class: without-title



Pas de modèle 3D sous GRABCAD. En réalité, on ne sait pas quoi rechercher. La référence sur le
composant principal a été effacé. Je souspsonne qu'il s'agisse d'un IP6505

J'ai trouvé ceci :

`Module abaisseur USB 12V 24V vers QC2.0 QC3.0, panneau de Charge rapide pour téléphone portable, pour Apple Huawei FCP, ip6505`_

.. _`Module abaisseur USB 12V 24V vers QC2.0 QC3.0, panneau de Charge rapide pour téléphone portable, pour Apple Huawei FCP, ip6505` : https://fr.aliexpress.com/item/1005003438953493.html

.. image:: images/usb5v3a_autreModule.jpg 
   :width: 300 px



====================================================================================================
Module USB-C Quick charger
====================================================================================================
Dossier : moduleUSBC_QC3


.. index::
    pair: Modules; Volt/ampèremètre

====================================================================================================
Voltmètre /ampèremètre
====================================================================================================
Il s'agit d'un simple Voltmètre ampèremètre digital comme on en trouve de multiple sur internet
J'en ai choisi un qui trainait dans mes affaire depuis bien longtemps...

.. image:: images/moduleVA_AC_SL1000_.jpg 
   :width: 300 px

Source possible mais non garantie au niveau des dimension notament:

`BE-TOOL Voltmètre multimètre, voltmètre numérique et ampèremètre avec double affichage LED rouge et bleu CC 0–100 V 10 A`_

.. _`BE-TOOL Voltmètre multimètre, voltmètre numérique et ampèremètre avec double affichage LED rouge et bleu CC 0–100 V 10 A` : https://www.amazon.fr/BE-TOOL-Multim%C3%A8tre-Voltm%C3%A8tre-amp%C3%A8rem%C3%A8tre-domestique/dp/B07Q1P8BQB/ref=sr_1_30?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=19MAY7ESO4AZB&keywords=amp%C3%A8rem%C3%A8tre+voltm%C3%A8tre&qid=1660089756&sprefix=amp%C3%A8rem%C3%A8tre+voltm%C3%A8tre%2Caps%2C97&sr=8-30


J'ai facilement trouvé le modèle 3D sur Grabcad.

J'ai réutilisé la connectique du module :ref:`alimentation stabilisée DPS3005<refAlimStabDPS3005>`




.. figure:: images/voltAmpereWiring_51KumhqfJfL.jpg
    :width: 300 px
    :align: left

    Volt ampère schéma de câblage initial 

|clearer|

`How to Make a Digital Voltmeter and Ampere Meter at Home - Homemade Myltimeter`_ On Youtube

.. _`How to Make a Digital Voltmeter and Ampere Meter at Home - Homemade Myltimeter` : https://www.youtube.com/watch?v=vPSaLIBBoh4

.. figure:: images/va_wiring.svg 
   :width: 300 px
   :align: left

   Câblage interne et utilisation

|clearer|

.. WARNING:: ATTENTION
   :class: without-title

   Avec ce genre de module le point chaud est commun entre l'apèremètre et le voltmètre.
   De plus n'oubliez pas que le GND est commun avec les autres modules.


|clearer|

.. figure:: images/VAInWork.jpg
    :width: 600 px
    :align: left

    Module Volt ampère première utilisation 


Rendu Freecad
----------------------------------------------------------------------------------------------------

.. image:: images/moduleVA.jpg 
    :width: 300 px
    :align: left

|clearer|

Photo
----------------------------------------------------------------------------------------------------
.. image:: images/moduleVAPhoto.jpg 
   :width: 600 px
   :align: center


Nomenclature
----------------------------------------------------------------------------------------------------
.. csv-table:: Nomenclature module Volt/ampère
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/moduleVoltAmperemetre/nomModulVA.csv
   :delim: ,
   :encoding: UTF-8
   :align: left



.. index::
    pair: Modules; GénéBF

====================================================================================================
Gene de signal
====================================================================================================
Préliminaire
----------------------------------------------------------------------------------------------------
`Générateur de Signal XR2206 1Hz -1MHz`_

.. _`Générateur de Signal XR2206 1Hz -1MHz` : https://fr.aliexpress.com/item/32862689682.html?gatewayAdapt=glo2fra&spm=a2g0o.detail.1000023.2.14c435deWAoz2w

XR2206 : :download:`datasheet<fichiersJoints/xr2206_datasheet.pdf>`


Sur Instructable `DIY Function/Waveform Generator`_

.. _`DIY Function/Waveform Generator` : https://www.instructables.com/DIY-FunctionWaveform-Generator/

Base AD9833 :download:`datasheet<fichiersJoints/ad9833.pdf>`

.. image:: images/schOriginalGenFunc.png 
   :width: 600 px




Maquettage
----------------------------------------------------------------------------------------------------


L'instructable à base d'ARDUINO NANO et d'AD9833 me parait bien. 

Appro breakout board 9833 ok

Ampli OP dans le design original : TL071

Maquetter avec un OPA284 ou 184 ou 484 ceux dispo au lab. Single supply jusqu'à 36V ;-)

Si non un dc/dc +15/-15V, sur AMAZON: 

`Niiyen Module élévateur, convertisseur élévateur CC 3.3 V-13 V à + 15 V/-15 V, convertisseur élévateur`_

.. _`Niiyen Module élévateur, convertisseur élévateur CC 3.3 V-13 V à + 15 V/-15 V, convertisseur élévateur` : https://www.amazon.fr/gp/product/B093PSZPW6/ref=crt_ewc_title_dp_1?ie=UTF8&psc=1&smid=A3MM3V4F4Z0CQN


un potar de gain et un d'offset, on pourait ajouter une relecture sur l'écran pour controler.

Ajouter l'interrupteur ofset au GND comme sur le design original.

Reverse du code
----------------------------------------------------------------------------------------------------
une fonction debounce bof.

un handler d'it qui fait beaucoup

Un switch case pour gérer les menu.

Modélisation 3D
----------------------------------------------------------------------------------------------------
- 3D écran
- 3D nano (pas utile puisque pcb dédié) si en fait pour les volumes en attendant le pcb
- 3D boutons


KICAD project started.


====================================================================================================
Module triple tiny voltmètre
====================================================================================================
L'objectif ici est de mettre le plus possible de voltmètre dans un seul module de taille raisonnable.

J'ai opté pour de petit voltèmtre tout intégrés avec alimentation séparée dans 3 fils. Cela permet
d'alimenter les module même en l'absence de tension à mesurer. Mais nécessite l'utilisation d'un 
convertisseur DC/DC cf :ref:`ci-dessus<moduleDCDC2596>`

Pour la connectique, les prise audio feront l'affaire elle permettent des branchements rapides.

.. WARNING:: ATTENTION GND commun à tout ce petit monde
   :class: without-title

2.4 to 30V 0.28" chez Banggood Aliexpress ou 


`GTIWUNG 4Pcs Mini Voltmètre, Numérique DC Voltmètre 0.28 Pouce, Panneau 0-100V DC 3 Fils`_

.. _`GTIWUNG 4Pcs Mini Voltmètre, Numérique DC Voltmètre 0.28 Pouce, Panneau 0-100V DC 3 Fils` : https://www.amazon.fr/gp/product/B07VCN8YQ4/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1


.. image:: images/028voltmeter.jpg 
   :width: 300 px

Rendu FreeCAD
----------------------------------------------------------------------------------------------------
.. image:: images/tripleVolmetre.jpg 
   :width: 600 px

Photo
----------------------------------------------------------------------------------------------------

.. image:: images/tripleVolt.JPG 
   :width: 600 px




====================================================================================================
Module ampèremètre
====================================================================================================
`High Precision Ammeter - Amber`_ sur PC Board.ca 11.90 $ sans les frais de port

Sur AMAZON : peu de choix : `Harilla DC 3.5-30V 5 Digit Digital LED Ampèremètre Ampèremètre Panneau Car - Jaune`_
et 22€ pas en prime !

Tellement fun un ampèremètre continu à aiguille : 

`Mini-ampèremètre analogique  2.5 Précision Ampèremètre (DC 0-5A)`_ là encore pas énormémet de choix
15.47€

.. image:: images/amperemetreDigitalPrecision_51c1JswDGgL._AC_SL1024_.jpg 
   :width: 300 px


`Version 3A CC`_ 10.39€

`En version AC 0-5A`_


.. _`High Precision Ammeter - Amber` : https://www.pcboard.ca/digital-ammeter-high-precision-amber

.. _`Harilla DC 3.5-30V 5 Digit Digital LED Ampèremètre Ampèremètre Panneau Car - Jaune` : https://www.amazon.fr/Harilla-3-5-30V-Digital-Amp%C3%A8rem%C3%A8tre-Panneau/dp/B08R34SXPH/ref=sr_1_23?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=3SWMM4HKE1BQB&keywords=Digital+amperemetre&qid=1649549353&sprefix=digital+amperemetre%2Caps%2C100&sr=8-23

.. _`Mini-ampèremètre analogique  2.5 Précision Ampèremètre (DC 0-5A)` : https://www.amazon.fr/Mini-amp%C3%A8rem%C3%A8tre-analogique-Professionnel-Pr%C3%A9cision-Amp%C3%A8rem%C3%A8tre/dp/B07RSQDQB4/ref=sr_1_5?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=3FHEH37LOASTV&keywords=pr%C3%A9cision%2Bamp%C3%A8rem%C3%A8tre%2Bpanneau&qid=1650790527&sprefix=pr%C3%A9cision%2Bamp%C3%A8rem%C3%A8tre%2Bpanneau%2B%2Caps%2C57&sr=8-5&th=1

.. _`Version 3A CC` : https://www.amazon.fr/Heschen-85-C1-3-rectangle-Panneau-Amp%C3%A8rem%C3%A8tre/dp/B072BNXHM2/ref=sr_1_18?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=25ULUI5QE2J55&keywords=pr%C3%A9cision%2Bamp%C3%A8rem%C3%A8tre%2Bpanneau&qid=1650820644&sprefix=pr%C3%A9cision%2Bamp%C3%A8rem%C3%A8tre%2Bpanneau%2Caps%2C106&sr=8-18

.. _`En version AC 0-5A` : https://www.amazon.fr/Classe-pr%C3%A9cision-Analogique-0-5A-gamme-Panneau/dp/B009PKGQZY/ref=sr_1_43?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=25ULUI5QE2J55&keywords=pr%C3%A9cision%2Bamp%C3%A8rem%C3%A8tre%2Bpanneau&qid=1650820644&sprefix=pr%C3%A9cision%2Bamp%C3%A8rem%C3%A8tre%2Bpanneau%2Caps%2C106&sr=8-43




====================================================================================================
Weblinks
====================================================================================================

.. target-notes::