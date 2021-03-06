++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
GH Pages
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

:Auteur: J.Soranzo
:Date de création: 07/2022
:Date dernière maj: 07/2022
:Societe: VoRoBoTics
:Entity: VoLAB

.. contents::
    :backlinks: top

====================================================================================================
How to
====================================================================================================

On suit `la procédure de Pierre pour les gh-pages`_ à partir du point 8

.. _`la procédure de Pierre pour les gh-pages` : https://poltergeist42.github.io/JDM/Documentation_Automatique.html#sphinx

Globalement

- on clone le dépôts vers html
- on va dedans
- on crée la branche spéciale gh-pages
- on la lie au dépôt distant
- on fait le ménager
- on génère la doc et on push

Chemin vers la doc::

    https://<utilisateur_Gihub>.github.io/[nom_du_dépot]/
    https://MajorLee95.github.io/tinyelab

Cela se résume en quelques commandes::

    git clone [url_copiée_depuis_GitHub] html
    cd html
    git branch gh-pages
    git symbolic-ref HEAD refs/heads/gh-pages
    del .git\index (rm .git/index sous windobe :-) 
    git clean -fdx
    dans le dossier du projet : make html
    git add .
    git commit -m "commit doc"
    git push => error : fatal: The current branch gh-pages has no upstream branch.
        Proposition : git push --set-upstream origin gh-pages
    git push origin gh-pages

.. WARNING:: Problème de css non pris en charge : ``.nojekyll`` dans le répertoire source de la doc
   :class: without-title

    Ne pas oublier de vider le cache du navigateur !!!


====================================================================================================
Weblinks
====================================================================================================

.. target-notes::