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
A faire général
====================================================================================================
Mettre des photos dans la doc
----------------------------------------------------------------------------------------------------
- ir module oscillo qui chauffe
- modules déjà réalisés en fonctionnement.

Mettre projet sous Volab/wiki et sous github
----------------------------------------------------------------------------------------------------
- créer git local **OK**
    - Arrêt du versionning par les noms de fichiers ou pas tout à fait **OK**
- créer projet github **OK**
- lier projet Github et git local (git ls-remote) **OK**
- pusher le projet **OK**

- créer github io **OK**
- pusher la doc sur githubio **OK**
- créer un readme.rst au niveau projet **OK**
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
- XT60 cover
    - renseigner le lien dans la doc


Les nomenclatures
----------------------------------------------------------------------------------------------------
    - base **OK**
    - USB **OK**
    - Module U/I en ligne
    - Alim DPS3005 **OK**
    - Oscillo **OK**
    - VA
    - multi-voltmètres

schéma de câblage des modules
----------------------------------------------------------------------------------------------------
    - USB
    - Module U/I en ligne
    - Alim DPS3005
    - Oscillo **OK**
    - VA

XT60 : boîtier ou capot de prise XT60
----------------------------------------------------------------------------------------------------
- dessin 3D avec vis pointeau **OK**
- rien de probant sur le net **OK**
- prévoir 2 guides fils **OK**
- imprimer femelle v006 paramétrée
    - tester

.. image:: images/xt60caseGuides.jpg 



outillage switch
----------------------------------------------------------------------------------------------------
- documenter !

Concept du tiroir
----------------------------------------------------------------------------------------------------
- rangement sonde/fils
    -  principe du petit tiroir basculant ou pas **à conceptualiser**

====================================================================================================
A finir modules
====================================================================================================

Module oscilo
----------------------------------------------------------------------------------------------------
- photo **OK**
- schéma **OK**
- IR : images non retrouvées le 2/7/22, elles ne sont pas dans la caméra 16/7/22 **ABANDON**
- Design capo avec boutons

Module voltmètre / ampèremètre 
----------------------------------------------------------------------------------------------------
- test électrique
     - à compléter en ampèremètre (peu précis dans les faibles courants)
- nomenclatures ``projet\_02-realisation\_03-cao_3D\mesCreations\moduleVoltAmperemetre`` **en cours**
- photo **OK**

module triple tiny Voltmètre
----------------------------------------------------------------------------------------------------
- test électrique+ réglage **OK**
- photo
- nomenclatures
- schéma

Module ventilation
----------------------------------------------------------------------------------------------------
- nomenclature
- saisir schéma KiCAD

====================================================================================================
A faire modules
====================================================================================================

module USB 3A à refaire sniff
----------------------------------------------------------------------------------------------------
- trouver un convertisseur qui tienne 24V **ET** 3A **OK**
    - le tester avant de l'intégrer


Module primaire prises PC multiples
----------------------------------------------------------------------------------------------------
- recherche des standard de prises **OK**
- appro des embase correspondantes **OK**
- test des embase en question avant design

- Design du module

Module batterie Lidl
----------------------------------------------------------------------------------------------------
- Modéliser le haut de la batterie
- modéliser le module

Module batterie lidl ET prise PC multiples avec commute auto
----------------------------------------------------------------------------------------------------
Tout est dans le titre

Module alim 24V/10A
----------------------------------------------------------------------------------------------------
- faire cable 220V
- faire cable XT60
- En profiter pour cable rallonge XT60 **OK**
    - avec gros fil dans le tiroir **OK**
- Ne vaut-il pas mieux un module complet à cause de l'arrivée 220V si

Module 3.3, 5 et +12-12
----------------------------------------------------------------------------------------------------
Alim fixe avec les 3 alimentations principales
A faire avec fusible réarmables.
Discutabele pour le 5 et le 3.3v vu que les carte de breadboard l'on, ne reste plus que le +/-15V




Module Générateur de fonction
----------------------------------------------------------------------------------------------------
- appro
    - AD9833 breakout board AMAZON **OK**
    - Encodeur rotatif (au lab) cdé le 21/4 **OK**
    - NANO **OK**
    - Ecran I2C **OK**
    - Alimentation symétrique +10V/-10V cdé le 21/4 **OK**
    - Ampli op de sortie cdé le 21/4 **OK**
- Maquettage **OK**
- Design ARDUINO
    - original Instructables
        - DL code **OK**
        - Etude code **OK**
- refonte du code **DELAYED**
    - Trop de boulot peut-être pour une version ultérieure
- 3D retouche BNC emprunte v008 **OK**




module ampèremètre seul 0/3A
----------------------------------------------------------------------------------------------------
- trouver la bête
- commande AMAZON à aiguille


Module LCR mètre
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

Module fer à souder
----------------------------------------------------------------------------------------------------
- tout : présente peu d'intérêt avec le fer TS100 un simple cable de bout de chaîne pourrait suffire !


Module Horloge et musique
----------------------------------------------------------------------------------------------------
A faire.

Module renvoi d'angle
----------------------------------------------------------------------------------------------------
En accordéon réglable.








====================================================================================================
Fait (pour mémoire)
====================================================================================================

Appro 
----------------------------------------------------------------------------------------------------
- alim 24V/10A commandée AMAZON le 4/4/22 24€ **OK**
- approvisionner tige laiton 3mm voire 2.5mm **OK**

BASE V008.1
----------------------------------------------------------------------------------------------------
Passage des vis FAV en M3x6 ald M3x10 v008.1 **OK**

Module ventilation
----------------------------------------------------------------------------------------------------
- design 3D
    - impression modèle tronqué pour test charnière et système de cran **OK**
    - intégrer les corrections **OK**
        - diamètre trou charnière partie mobile et fixe 2+1*jeu ald 2+*2jeu fait en v016 **OK**
        - augmenter la longueur de la fenêtre de passage de la butée
        - épaissir le fond de la partie fixe **OK**
            - j'ai passé le jeu de l'évidement charnière à 1xjeu ald 2x en v017 mais c'est juste **OK**
            - passer le diam charn à 7.5 ald 8mm v018 **OK**
    - designer la languette proto v019 **OK**
    - imprimer languette proto **ABORTED**
        - stl v019 **OK**
        - gcode **OK**
        - imprimer **OK**
    - faire essais mécanique **ECHEC**
        - augmenter de diamètre de la bille => 8mm  **ABORTED**
        - Abandonner l'idée de lame et de bille imprimée regarder coté bille métal **ABORTED**
    - Inclinateur à base d'aimant (solution à billes abandonnée)  **ABORTED**
        - dessiner partie fixe **OK**
        - dessiner partie mobile actuelle v027 **OK**
        - imprimer version tronquée **mobile** v027 **OK**
            - export stl trunqué **OK**
                - export step **OK**
                - import **OK**
                - opération booleen (fichier freecad non concervé) **OK**
                - export stl **OK**
            - gcode (cura) **OK**
                - gestion des supports : essayer version sans support **OK**
            - impression **OK**

        - imprimer version tronquée **fixe** **OK**
            - export stl trunqué **OK**
                - export step **OK**
                - import **OK**
                - opération booleen **OK**
                - export stl **OK**
            - gcode **OK**
            - impression **OK**
        - monter **OK**
        - tester : trop faible **ECHEC**




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
            - reprendre l'emprunte de la BNC 3.85 vers 3.35 **OK**
            - aapliqué aussi à BNC_002 **OK**
    - câblage **OK**
    - régler le module DCDC **OK**
    - test électrique **OK**
    - module oscillo
        - ré-imprimer la FAV
            - re-stl **OK**
            - re-gcode **OK**
            - re-imprimer **OK**
        - tester montage mécanique BNC **OK**

Outillage pour la soudure des XT60
----------------------------------------------------------------------------------------------------
- design 3D **OK**
    - retoucher les dimension du reglet celui de 20CM large **OK**
- export STL **OK**
- préparation GCODE **OK**
- impression **OK**
- test **OK**
    - retoucher l'épaisseur du réglet dans la speadsheet v013 **OK**
    - Ajouter des pieds en haut pour basculer pendant la soudure v014 **OK**

- Ré-imprimer v2_014
    - sortir STL **OK**
    - préparer GCODE **OK**
- re-tester la nouvelle version **OK**

module Ui
----------------------------------------------------------------------------------------------------
- ré-imprimer la nouvelle face avant v012 **ABORTED**
    - stl **OK**
    - g-code **OK**
    - imprimer **OK**
- tester mécaniquement **ECHEC et ABANDON**
- collage du module **OK**

module triple tiny Voltmètre
----------------------------------------------------------------------------------------------------
- design 3D **OK**
    - model volmetre sur GRABCAD **KO**
        - mini-dc-voltmeter-1.snapshot.5.zip : entraxe incorecte **KO**
        - dc-0-30v-voltmeter-panel-mount-1.snapshot.3.zip **KO**
        - led-dc-digital-voltmeter-5v-display-green-1.snapshot.5 **OK**

- export STL **OK**
- préparation GCODE **OK**
   - Fav **OK**
   - Base 90mm **OK**
- impression **OK**
   - Fav **OK**
   - Base **OK**
   - teste mécanique **OK**
- câblage
    - couper barres laiton 73.62mm (vérifié le 24/4) **OK**


Module voltmère / ampéremètre 
----------------------------------------------------------------------------------------------------
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
- câblage **OK**
    - couper barres laiton 78.62mm **OK**

- test électrique
     - à compléter en ampèremètre (peu précis dans les faibles courants)
- nomenclatures 

- schéma **OK**
- photo **OK**
    - une incluse **OK**



module triple tiny Voltmètre
----------------------------------------------------------------------------------------------------
- design 3D **OK**
    - model volmetre sur GRABCAD **KO**
        - mini-dc-voltmeter-1.snapshot.5.zip : entraxe incorecte **KO**
        - dc-0-30v-voltmeter-panel-mount-1.snapshot.3.zip **KO**
        - led-dc-digital-voltmeter-5v-display-green-1.snapshot.5 **OK**

- export STL **OK**
- préparation GCODE **OK**
   - Fav **OK**
   - Base 90mm **OK**
- impression **OK**
   - Fav **OK**
   - Base **OK**
   - teste mécanique **OK**
- câblage
    - couper barres laiton 73.62mm (vérifié le 24/4) **OK**
- test électrique

- nomenclatures
- schéma

outillage switch
----------------------------------------------------------------------------------------------------
- imprimer **OK**
    - gcode **OK**
- test méca **KO**
    - trop long, raccourcir de 1 mm, modif chanfrein 4x2 vers 5x1 v004
- ré-imprimer v0004
    - stl **OK**
    - gcode **OK**
    - imprimer **OK**
- re-tester **OK**

Module ventilation
----------------------------------------------------------------------------------------------------
- model ventilo **OK**
    - Vérifier les dimension **OK**

- design 3D **OK**
        - Essais avec les aimant en long **ABORTED**
            - nouvelle branche **aimantsEnLong**
            - dessiner **OK**		
    - Inclinateur à base de verrou élastique => version 029 **OK**
        - dessiner : nouvelle branche git : **ventiloSystemInclinaison**
            - sur le côté droit du module. **OK**
            - sur la partie fixe une languette en arc de cercle de 1 mm d'épaisseur **OK**
            - languette rapporté pour simplifier l'impression **OK**
            - sur la partie mobile : des crans (trous cylindriques) **OK**
            - impression languette, poignee **OK**
                - stl, gcode **OK**
                - impression **OK**
            - impression partie fixe tronquee **OK**
                - export step, tronquage, export stl, gcode **OK**
                - impression **OK**
            - impression partie fixe tronquee **OK**
                - export step, tronquage, export stl, gcode **OK**
                - impression **OK**
            - test **A REVOIR**
                - ménager un jeu d'épaisseur d'environ 1mm dans 
                  la partie plane de la partie fixe plutot mobile à cause de l'emprunte languette **OK**
                - finir design partie fixe potar avec inter, **OK**
                    - récupérer potar  avec inter (encombrement)  le switch n'est pas cliquable **ABANDON**
                        - sous Grabcad **OK**
                        - Vérifier dimensions **ABANDON**
                        - appro (amazon) **OK**
                - trous passage des fils ventilo et casquette **OK**
                    - fixe **OK**
                    - mobile **OK**
                - trous switch désépaissir **OK**
                - pb casquette paroi LED comment on vis ? des gros trous pour les tête de vis **OK**

    - fixation du Digispark un cube et de la colle **OK**
        - model sous Grabcad ? **OK**
        - conversion vers Freecad **OK**
        - intégration **OK**
            - design support **OK**
    - design support DCDC et testé **OK**

    - procéder alors à une impression complète **OK**
        - partie fixe **OK**
            - export stl, gcode **OK**
            - impression **OK**
        - partie mobile **OK**
            - export stl, gcode **OK**
            - impression **OK**
        - casquette **OK**
            - export stl, gcode **OK**
            - impression **OK**
    - réduire le jeu longitudinal de la charnière actuel mesuré 1.88mm **OK**
    - reprendre au propre **OK**
        - trou passage du fil LED (faire un trou carré au rectangle) **OK**
        - suppression 1mm base partie mobile. **OK**
        - reprendre le modèle potar avec inter **ABANDON**
        - faire trous pour potar et inter **OK**
            - vérifier la designation des petits inter **OK**
                - plus le sachet **OK**
                - sur le site amazon : il y a effectivement erreur sur le produit **OK** 
                - dessus : KCD1-11 (quand on cherche sur AMAZON on tombe sur les bonnes dimensions) **OK**
        - paroi casquette led : ep 1mm hauteur 18mm **OK**
        - ne pas oublier le trous des fils ventilo/led dans la partie fixe **OK**

- Électronique **OK**
    - Pilotage ventilo et LED : LM2596S limité à 12V cf :ref:`pilotage LEDs et ventilo<pilotageLedVentilo>`
        - Test réalisé **OK** 
        - implémenter les 2 voies LED et ventilo **OK**
        - vérifier le numéro du canal pwm pas de diff, analogRead **OK**
        - programmer le composant **OK**
        - Tester les 2 voies **OK**

- imprimer base **OK**
    - exports, prepa **OK**
    - impression **OK**
- imprimer fav **OK**
    - exports, prepa **OK**
    - impression **OK**

- casquette : ajouter trous cables LED **OK** v0.35

- câbler
    - faire plaque à LED **OK**
    - Programmer Digispark **OK**
    
- tester **OK**

====================================================================================================
Weblinks
====================================================================================================

.. target-notes::