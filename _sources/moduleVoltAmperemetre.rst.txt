++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Module Volt/amperemetre couplés
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

.. include:: volabid.rst

:Auteur: J.Soranzo
:Date de création: 11/2022
:Date dernière maj: 11/2022



.. |clearer|  raw:: html

   <div class="clearer"></div>

.. index::
    pair: Modules; Volt/ampèremètre

====================================================================================================
Présentation
====================================================================================================
Il s'agit d'un simple Voltmètre ampèremètre digital comme on en trouve de multiple sur internet
J'en ai choisi un qui traînait dans mes affaire depuis bien longtemps...

.. image:: images/moduleVA_AC_SL1000_.jpg 
   :width: 300 px

Source possible mais non garantie au niveau des dimensions notamment:

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



====================================================================================================
Rendu Freecad
====================================================================================================

.. image:: images/moduleVA.jpg 
    :width: 300 px
    :align: left



====================================================================================================
Photo
====================================================================================================
.. image:: images/moduleVAPhoto.jpg 
   :width: 600 px
   :align: center

====================================================================================================
Nomenclature
====================================================================================================
.. csv-table:: Nomenclature module Volt/ampère
   :file: ../../_02-realisation/_03-cao_3D/mesCreations/moduleVoltAmperemetre/nomModulVA.csv
   :delim: ,
   :encoding: UTF-8
   :align: left

====================================================================================================
Weblinks
====================================================================================================

.. target-notes::