---
		/* --Programme C++ OpenCV de dessin de differentes formes avec interaction-- *\



Ce programme de dessin interactif est conçu pour créer et animer différentes formes géométriques telles que : 

- des cercles 
- des rectangles 
- des triangles
- des lignes droites. 

Le programme utilise la bibliothèque OpenCV pour afficher les formes sur une fenêtre graphique.


/* Fonctionnalités principales *\

- Création de formes :
  - Cercles avec différentes positions, rayons, couleurs et une épaisseur.
  - Rectangles avec différentes positions, largeurs, hauteurs, couleurs et une épaisseur.
  - Triangles avec trois points de coordonnées, une couleur et une épaisseur.
  - Lignes droites avec deux points de coordonnées, une couleur et une épaisseur.
- Animation des formes :
  - Déplacement et rebondissement des cercles sur l'écran.
  - Déplacement et rebondissement des rectangles sur l'écran.
  - Déplacement et rebondissement des triangles sur l'écran.
  - Déplacement et rebondissement des lignes droites sur l'écran.
- Interaction utilisateur :
  - Clic Gauche de la souris pour ajouter au niveau du curseur un cercle de même taille mais de couleur différente.
  - Clic Droit de la souris pour supprimer une forme au niveau du curseur.
  - Touche ESC pour arrêter le programme.
- Autre :
  - Sauvegarde des informations des formes dans un fichier texte lors du lancement du programme.


/* Prérequis *\

- OpenCV : Assurez-vous d'avoir OpenCV installé sur votre système. Vous pouvez trouver des instructions d'installation sur le site officiel d'OpenCV.
Sur le site d'OpenCV, telécharger la dernière version en Windows (.exe).
Après exécutation de l'application, voici le chemin d'accès obligatoire pour le bon fonctionnement du programme :
Chemin d'accès : C:\Users\33783\Desktop\C


/* Compilation et exécution *\

1. Clonez ce dépôt sur votre machine. ( git clone < adresse SSH du github > )
2. Compilez le programme en utilisant le compilateur de votre choix et en incluant les fichiers sources et les bibliothèques OpenCV nécessaires.
3. Exécutez le programme généré.


/* Utilisation *\

1. À l'exécution du programme, une fenêtre graphique s'ouvrira, affichant un espace de dessin.
2. Cliquez gauche sur l'écran pour crée un cercle.
3. Cliquez droit sur une forme pour la supprimer.
3. Les formes animées se déplaceront automatiquement sur l'écran.
4. Appuyez sur la touche ESC pour quitter le programme.


/* Utilisation du fichier texte *\

Lorsque le programme est lancé, toutes les informations des formes dessinées, telles que 
- leur position
- leur couleur
- leur longueur, etc.. 
sont automatiquement écrites dans un document texte spécifié par l'utilisateur. 

Ce fichier texte peut être utilisé pour stocker et récupérer les données des formes ultérieurement, facilitant ainsi la persistance des dessins réalisés.
Le fichier s'appele : "FichierTest.txt"
Il sera automatique sauvegardé dans le dossier du code et à chaque lancement du programme le fichier se reinitialise.


/* Structure du code source *\

Le code source est organisé en plusieurs fichiers :

- "Dessins.h" : Définit la classe principale "Dessins" qui gère la matrice de dessin, les formes et l'interface utilisateur.
- "Forme.h" : Définit la classe abstraite "Forme" qui sert de classe de base pour les formes géométriques.
- "Rectangle.h" : Définit la classe "Rectangle" pour créer des rectangles.
- "Circle.h" : Définit la classe "Circle" pour créer des cercles.
- "Cerclerajoute.h" : Définit la classe "Cerclerajoute qui hérite de "Circle" pour ajouter des fonctionnalités spécifiques aux cercles ajoutés.
- "Triangle.h" : Définit la classe "Triangle" pour créer des triangles.
- "LigneDroite.h" : Définit la classe "LigneDroite" pour créer des lignes droites.
- "RectangleAnimation.h" : Définit la classe "RectangleAnimation" pour animer les rectangles.
- "CircleAnimation.h" : Définit la classe "CircleAnimation" pour animer les cercles.
- "TriangleAnimation.h" : Définit la classe "TriangleAnimation" pour animer les triangles.
- "LigneDroiteAnimation.h" : Définit la classe "LigneDroiteAnimation" pour animer les lignes droites.
- "main.cpp" : Contient la fonction "main" qui initialise le programme, crée les formes ( animé ou non ) et gère l'interface utilisateur.


/* Auteurs *\

Ce programme a été développé par un groupe d'étudiants de 4 personnes.
Le groupe a été divisé en deux sous groupes
Groupe A : LITRA Aurélien (Fabaure) & CUVELIER Line
Groupe B : MATHIEU Arthur (a-mth) & PEREA ORTEGA Ariadna 
Nous sommes des étudiants venant de l'école d'ESIREM à Dijon ( 21000, France )
Et ceci est notre projet d'information en C++ en 1er année de Prépa Intégrée.


/* Remarques *\

N'hésitez pas à explorer le code source pour plus de détails sur la mise en œuvre des fonctionnalités.
Ceci est notre tout premier projet en OpenCV sur C++ et avec Github/Gitbash
---