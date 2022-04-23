++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Avancement
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

:Auteur: J.Soranzo
:Date de création: 03/2022
:Date dernière maj: 19/04/2022
:Societe: VoRoBoTics
:Entity: VoLAB

.. contents::
    :backlinks: top

====================================================================================================
A faire
====================================================================================================
Mettre des photos dans la doc
----------------------------------------------------------------------------------------------------
- ir module oscillo qui chauffe
- modules déjà réalisés en fonctionnement.

Mettre projet sous Volab/wiki et sous github
----------------------------------------------------------------------------------------------------
- créer git local
- créer projet github
- lier projet Github et git local
- pusher le projet
- créer github io
- pusher la doc sur githubio
- créer un readme.rst au niveau projet
- créer le projet dans le Wiki du lab
- Renseigner le projet dans le wiki du lab

Mettre les modules sous Thinkiverse
----------------------------------------------------------------------------------------------------
- base 35mm
    - renseigner le lien dans la doc
- UI primaire
    - renseigner le lien dans la doc
- USB
    - renseigner le lien dans la doc
- DPS3005
    - renseigner le lien dans la doc
- Oscillo
    - renseigner le lien dans la doc
- VA
    - renseigner le lien dans la doc


Les nomenclatures
----------------------------------------------------------------------------------------------------
    - base **OK**
    - USB **OK**
    - Module U/I en ligne
    - Alim DPS3005 **OK**
    - Oscillo **OK**
    - VA

schéma de câblage des modules
----------------------------------------------------------------------------------------------------
    - USB
    - Module U/I en ligne
    - Alim DPS3005
    - **Oscillo**
    - VA

Câblage alim 24V
----------------------------------------------------------------------------------------------------
- faire cable 220V
- faire cable XT60
- En profiter pour cable rallonge XT60
    - avec gros fil dans le tiroir

Outillage pour la soudure des XT60
----------------------------------------------------------------------------------------------------
- design 3D
    - retoucher les dimension du reglet celui de 20CM large **OK**
- export STL **OK**
- préparation GCODE **OK**
- impression **OK**
- test **OK**
    - retoucher l'épaisseur du réglet dans la speadsheet v013 **OK**
    - Ajouter des pieds en haut pour basculer pendant la soudure v014 **OK**

- Ré-imprimer
    - sortir STL **OK**
    - préparer GCODE
- re-tester la nouvelle version

Concept du tiroir
----------------------------------------------------------------------------------------------------
- rangement sonde/fils
    -  principe du petit tiroir basculant ou pas **à conceptualiser**

Module primaire
----------------------------------------------------------------------------------------------------
- recherche des standard de prises
- appro des embase correspondantes
- test des embase en question avant design

- Design du module
  
Module oscilo
----------------------------------------------------------------------------------------------------
- module oscillo
    - design FreeCAD v003 sur base 006.4  **OK**
    - Reprendre la base v007.dernière  **OK**
    - ajouter BNC **OK**
        - code RS 680-7371 **OK**
    - ajouter module alimentation **OK**
        - modéliser module alimentation **OK**
        - Attention vis Nylon **OK**
    - test hors boîtier (caractériser l'alimentation) **OK**
    - export STL **OK**
    - préparation GCODE **OK**
        - Fav **OK**
        - Base 150mm **OK**
    - impression **OK**
        - Fav **OK**
        - Base **OK**
        - Test mécanique **KO**
            - reprendre l'emprunte de la BNC
    - câblage **OK**
    - régler le module DCDC **OK**
    - test électrique **OK**


Module voltmère / ampéremètre 
----------------------------------------------------------------------------------------------------
- Trouver schéma de câblage
    - essayer à blanc
- modélisation 3D **OK**
    - réutiliser connecteurs AUDIO **OK**
    - rechercher model 3D du module utilisé **OK**
        - vérifier les dimensions **OK**
            - en déduire taille trou **OK**
        - intégrer step dans un fichier Freecad avec spreadsheet **OK**
    - 4 fiches bananes **OK**
- Rechercher schéma de câblage version 3 gros fils, sérigraphié **OK**
    - rouge VI, verts I+,  Noir COM **OK**
    - finir svg de câblage **OK**

- export STL **OK**
- préparation GCODE **OK**
   - Fav **OK**
   - Base 95mm **OK**
- impression **OK**
   - Fav **OK**
   - Base **OK**
   - teste mécanique **OK**
- câblage
    - couper barres laiton 78.62mm
- test électrique

Module Générateur de fonction
----------------------------------------------------------------------------------------------------
- appro
    - AD9833 breakout board AMAZON **OK**
    - Encodeur rotatif (au lab) cdé le 21/4
    - NANO **OK**
    - Ecran I2C **OK**
    - Alimentation symétrique +10V/-10V cdé le 21/4
    - Ampli op de sortie cdé le 21/4
- Maquettage
- Design ARDUINO
    - original Instructables
        - DL code **OK**
        - Etude code **OK**

module triple tiny Voltmètre
----------------------------------------------------------------------------------------------------
- design 3D
    - model volmetre sur GRABCAD **KO**
        - mini-dc-voltmeter-1.snapshot.5.zip : entraxe incorecte **KO**
        - dc-0-30v-voltmeter-panel-mount-1.snapshot.3.zip **KO**
        - led-dc-digital-voltmeter-5v-display-green-1.snapshot.5 **OK**

- export STL
- préparation GCODE
   - Fav
   - Base 95mm
- impression
   - Fav
   - Base
   - teste mécanique
- câblage
    - couper barres laiton 73.62mm
- test électrique



module ampèremètre seul 0/3A
----------------------------------------------------------------------------------------------------
- trouver la bête

https://www.pcboard.ca/digital-ammeter-high-precision-amber

https://www.amazon.fr/Harilla-3-5-30V-Digital-Amp%C3%A8rem%C3%A8tre-Panneau/dp/B08R34SXPH/ref=sr_1_23?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=3SWMM4HKE1BQB&keywords=Digital+amperemetre&qid=1649549353&sprefix=digital+amperemetre%2Caps%2C100&sr=8-23




Module fer à souder
----------------------------------------------------------------------------------------------------
- tout

Module ventilation
----------------------------------------------------------------------------------------------------
- Tout

Module LCR mètre
----------------------------------------------------------------------------------------------------
- tout

Module batterie Lidl
----------------------------------------------------------------------------------------------------
- tout

Étagère system
----------------------------------------------------------------------------------------------------
- tout

Dévidoir de fil
----------------------------------------------------------------------------------------------------
- tout
- Modéliser les bobines
    - diam 55mm, large 21mm, moyen diam 25mm, Flan 1.5mm
    - 6 couleurs
    - AWG 24

6 couleurs

Appro 
----------------------------------------------------------------------------------------------------
- alim 24V/10A commandée AMAZON le 4/4/22 24€ **OK**
- approvisionner tige laiton 3mm voire 2.5mm **OK**


====================================================================================================
Fait (pour mémoire)
====================================================================================================
BASE V008.1
----------------------------------------------------------------------------------------------------
Passage des vis FAV en M3x6 ald M3x10 v008.1 **OK**


BASE reprise v007.3
----------------------------------------------------------------------------------------------------
- Reprendre le profile XT60 **OK**
    - vérifier les jeux -pas de jeu -ajout jeu vertical 0.5 **OK**
    - diminuer la largeur 8 vs 8.4 **OK**
    - augmenter la hauteur d'au moins 0.6 (affaissement des couches) xtJeu .6  **OK** 
- Etude solution câblage
    - longueur tige laiton à déterminer pour chaque largeur de module : Calculer **OK**
        - reprendre la longueur pour qu'elles aillent jusqu'au fond des broches des XT **OK**
        - Tester => retouche tige v007.3  **OK**
            - Tige 3mm ne rentre pas dans certaines XT60 !!!! **OK**
    - passer les fils : le pb ne se pose que pour le 35mm **ABANDONNE**
    - souder en extérieur **ABANDONNE**

module 2x USB 3A
----------------------------------------------------------------------------------------------------
- module 2x USB 3A **OK**
    - design FreeCAD rev 4 sur base 006.4  **OK**
    - export STL **OK**
    - préparation GCODE **OK**
        - Fav **OK**
        - Base **OK**
    - impression **OK**
        - Fav **OK**
        - Base **OK**
    - câblage Légèrement difficile **OK**
    - test attention à la polarité **OK**

module Ui
----------------------------------------------------------------------------------------------------
- module Ui
    - design FreeCAD v009 sur base 006.4 **OK**
    - export STL **OK**
    - préparation GCODE **OK**
        - Fav 4h40 **OK**
        - Base 8h12 **OK**
    - impression
        - Fav **OK**
        - Base **OK**
    - câblage très difficile  **OK**
    - test **OK**
    - reprendre alors avec la base 007.5 **OK**
    - reprendre la face avant pour le module écran élargir le trou **OK**
    - Tester ? **NON**

Module alim DPS3005
----------------------------------------------------------------------------------------------------
- module Alimentation DPS3005 (30V 5A) **OK**
    - design FreeCAD **OK**
        - 3D du module DPS30005 **OK**
            - design **OK**
            - Vérifier dimensions **OK**
        - 3D embase banane **OK**
            - Récup GRABCAD **OK**
                - Vérifier dimensions **OK**
        - 3B connecteur audio **OK**
            - recup **OK**
            - vérifier dim **OK**
        - Reprendre avec la base v007.dernière **OK**
        - Finir la FAV **OK**
    - export STL **OK**
    - préparation GCODE **OK**
        - Fav **OK**
        - Base **OK**
    - impression
        - Fav **OK**
        - Base **OK**
    - câblage **OK**
    - test **OK**




====================================================================================================
Weblinks
====================================================================================================

.. target-notes::