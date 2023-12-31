Benjima Amina
# Projet Tinyml
# Projet a : Entraînement du modèle avec TensorFlow 
Pour réaliser mon projet, j'ai commencé par l'entraînement d'un modèle d'intelligence artificielle avec TensorFlow. J'ai d'abord collecté les données nécessaires en utilisant une carte Nano 33 Sense BLE, enregistrant soigneusement les gestes "Yes (✓)" et "No (X)" pour m'assurer d'avoir une quantité suffisante pour chaque catégorie. Tout comme dans mon premier projet, j'ai traité ces données pour les préparer à l'entraînement. Avec TensorFlow, j'ai entraîné un modèle précis pour identifier ces gestes spécifiques. Après l'entraînement, j'ai converti mon modèle en format TensorFlow Lite adapté aux microcontrôleurs.

L'étape suivante a été l'intégration de ce modèle avec Arduino. Le code Arduino que j'ai écrit était responsable du chargement du modèle TensorFlow Lite, de la lecture des données des capteurs de la carte Nano 33 Sense BLE, et de la réalisation des inférences pour détecter les gestes "Yes (✓)" et "No (X)".

Enfin, pour implémenter un quiz interactif, j'ai programmé la carte pour afficher un message de bienvenue au démarrage et poser une série de trois questions via le port série. Pour chaque question, la carte attendait la réponse de l'utilisateur sous forme de gestes "Yes" ou "No". Chaque étape a été soigneusement exécutée pour assurer la fluidité et la précision de l'interaction entre l'utilisateur et le système.

![image](https://github.com/aminabenj/code/assets/148441485/c96ae189-0099-4eed-a614-4f614ae4f170)


# Projet 1 : Premiers pas avec l’apprentissage automatique sur Arduino

En suivant les étapes suivante : https://docs.arduino.cc/tutorials/nano-33-ble-sense/get-started-with-machine-learning
J'ai utilisé le machine learning (ML) pour donner à ma carte Arduino la capacité de reconnaître des gestes. Pour ce faire, j'ai capturé des données de mouvement à l'aide de ma carte Arduino Nano 33 BLE Sense, puis je les ai importées dans TensorFlow pour entraîner un modèle de classification. Une fois le modèle entraîné, je l'ai déployé sur la carte Arduino pour qu'elle puisse identifier les gestes en temps réel.
![image](https://github.com/aminabenj/code/assets/148441485/525f55ec-a790-4996-afcc-87d7cbd5b7ab)
# "Ces projets 2 et 3 ont été réalisés par moi-même, Amina Benjima, ainsi que par Marie-Christ Tobada, étant donné que sa carte Arduino ne fonctionnait plus."
# Projet 2 : 
Notre projet 2 consiste en la création d'un modèle de machine learning (ML) pour identifier des mots-clés spécifiques ("rouge", "vert", "jaune") dans la parole.

Etapes de réalisation : 
1. Création d'un jeu de données : Sur Edge Impulse, nous avons enregistré des échantillons sonores en prononçant les mots-clés à l'aide d'un microphone intégré en Arduino Nano 33 Ble.
Chaque échantillon durait 1 secondes, avec une fréquence de 16 000 Hz. Nous avons également enregistré 21 échantillons de silence pour aider notre modèle à reconnaître l'absence de mots-clés.
![Liste des échantillons enregistrés](https://github.com/aminabenj/code/assets/148441485/4b06ba27-5fcb-4a5c-9d64-a34611eff728)

2. Collecte des données : Pour chaque mot-clé, nous avons collecté au moins 15 échantillons, en veillant à varier les prononciations, accents et intonations. Nous avons ensuite examiné et filtré les enregistrements pour éliminer tout bruit de fond.
![echanti](https://github.com/aminabenj/code/assets/148441485/3a18a651-0850-42e1-9873-4b25ba4f2641)
![échantillonnage_Vert](https://github.com/aminabenj/code/assets/148441485/5d7838c8-0669-4bac-b4c4-2a5936654b54)
![échantillonnage_Rouge](https://github.com/aminabenj/code/assets/148441485/e52da851-895c-4552-91fb-2694108da6c4)
![échantillonnageà_Jaune](https://github.com/aminabenj/code/assets/148441485/9b0adb93-cc0b-4d82-aff4-03f4937399ab)

4. Conception d'une impulsion : Nous avons défini la manière dont notre modèle ML traiterait les données. Cela a inclus l'ajout de blocs de traitement audio et de classification sur Edge Impulse.
![Concevoir une impulsion](https://github.com/aminabenj/code/assets/148441485/1dd36f43-83e5-4425-a995-05740085a29e)

5. Génération de fonctionnalités : Nous avons extrait les caractéristiques uniques de chaque enregistrement pour les utiliser dans l'algorithme de classification.

6. Entraînement du modèle ML : Nous avons entraîné le modèle sur Edge Impulse, ajustant les paramètres en fonction des résultats de validation pour atteindre une haute précision.

![entités de jeu de données ](https://github.com/aminabenj/code/assets/148441485/5c7629ee-8599-4e5c-b4b8-8b9d5d132191)

![La sortie de la formation(Entrainement des modèles)](https://github.com/aminabenj/code/assets/148441485/df583838-0b51-4742-8149-163806e944b5)

7. Déploiement du modèle ML : Nous avons déployé le modèle sur une carte Nano 33 BLE Sense en créant une bibliothèque Arduino, que nous avons ensuite intégrée dans l'IDE Arduino.

8. Test du modèle : À l'aide du moniteur série de l'Arduino, nous avons testé le modèle pour vérifier la précision dans la détection des mots-clés.

![Affichage_Arduino](https://github.com/aminabenj/code/assets/148441485/347c4235-a008-47ea-a427-fc96795aeeb4)

En conclusion, notre projet a illustré une application concrète du ML dans la reconnaissance de parole, mettant l'accent sur la collecte de données variées et précises, l'entraînement rigoureux d'un modèle, et son déploiement réussi sur un dispositif embarqué.

# Projet 3 : Projet de Classification des Mouvements et Détection des Anomalies
Ce projet, réalisé dans le cadre d'un cours d'apprentissage automatique embarqué, a pour objectif de développer un système capable de classifier le mouvement et les vibrations d'une machine et de détecter des anomalies dans son fonctionnement. L'application pratique de ce projet vise à utiliser l'apprentissage automatique dans un environnement industriel pour identifier différents états opérationnels d'une machine (par exemple, éteint, allumé, charge faible, charge élevée, anomalie, etc.).
1. Configuration Initiale:
   Connexion de la carte arduino avec Edge impulse en exacutant sur le terminal "edge-impulse-daemon --clear" pour ouvrir le projet concerné.
   ![configuration](https://github.com/aminabenj/code/assets/148441485/e0b7654c-d8c9-42db-94da-3b91f48d07dc)
   
   Connexion de l'Appareil :
   ![connexion](https://github.com/aminabenj/code/assets/148441485/0ee2ba69-ebd0-4d5b-9e26-8fb6804892db)
   
   ![image du tel lié à arduino](https://github.com/aminabenj/code/assets/148441485/c4f49c98-fae9-421a-b707-2f7941c11ad1)

3. Collecte de Données :
   Des données ont été collectées pour différentes classes représentant les états de la machine : éteint, charge légère et charge lourde.
   Pour chaque classe, des données de l'accéléromètre ont été collectées pendant 1.20 minutes puis pendant 10 seconde plusieurs fois pour chacune des classes.
   ![acquisition de données](https://github.com/aminabenj/code/assets/148441485/ad41eaf8-efd2-432e-b6ab-050b8215473f)
   
5. Entraînement du Modèle :
   Un modèle de réseau neuronal a été entraîné avec les données étiquetées. Des blocs de détection d'anomalies K-means ont également été utilisés. 
   L'entraînement a impliqué 
   l'ajustement des hyperparamètres pour améliorer la précision du modèle tout en évitant le surajustement.
   ![entité](https://github.com/aminabenj/code/assets/148441485/667b2383-9df6-4a01-8503-5c99072deee5)

   ![Entrainement_modèle](https://github.com/aminabenj/code/assets/148441485/71a264dd-aa10-4f17-bbae-ab007073159b)
   
   ![Entrainement_modèle_1](https://github.com/aminabenj/code/assets/148441485/b44a35cd-f410-4e17-ae40-f1caf8fa7717)
    Anomalie :
    ![detection_anomalie](https://github.com/aminabenj/code/assets/148441485/5259632d-0c90-4ee8-9cd8-0ef40e21f1bd)

    ![detection_anomalie_1](https://github.com/aminabenj/code/assets/148441485/16924968-fa64-4c85-916d-d59c2037e18a)

   
7. Test du Modèle : 
   Le modèle formé a été testé avec un nouvel ensemble de données pour évaluer sa précision et sa capacité à généraliser.
   ![test de modèle](https://github.com/aminabenj/code/assets/148441485/d18d2e4c-56cd-4da1-9db1-c4caf2a6a227)
   
8. Déploiement :
   Le modèle final a été déployé sur Arduino.
   Le dispositif a été testé dans des conditions réelles pour valider sa performance dans la classification des états opérationnels de la machine et la 
   détection d'anomalies.
   ![deploiement](https://github.com/aminabenj/code/assets/148441485/432de8dd-3f9d-479c-a78d-30c667c37571)
   ![bibliothèque_arduino](https://github.com/aminabenj/code/assets/148441485/f598ac60-a14d-4750-ab49-30c6b5171764)

9. Résultat :
   ![machine_Eteint](https://github.com/aminabenj/code/assets/148441485/ac3a6a87-2d1f-43d1-aaf5-fd9f344953e8)
   ![charge_legere](https://github.com/aminabenj/code/assets/148441485/87ffe162-87f7-489a-b768-c14f6bc1cffc)
   ![charge lourde](https://github.com/aminabenj/code/assets/148441485/0fcf78b7-8141-4a1d-a258-361de73fdb40)


Pour conclure, ce projet illustre l'application de l'apprentissage automatique embarqué dans un contexte industriel. Il démontre la capacité de classifier différents états d'une machine et de détecter des anomalies sans modification physique de la machine elle-même. Le projet souligne également l'importance de l'expérimentation et de l'ajustement dans le développement de modèles d'apprentissage automatique.

# Projet 4 : Training a CNN in Edge Impulse
Ce projet explore l'application pratique des réseaux de neurones convolutifs (CNN) en utilisant la plateforme Edge Impulse pour la reconnaissance des composants électroniques. L'initiative vise à établir un modèle CNN pour traiter et classifier des images de composants tels que résistances, diodes et condensateurs.

Dans Edge Impulse, le processus commence par la création d'un nouveau projet et la navigation vers la section 'Data acquisition'. Les images sont téléversées par classe, avec une option de répartition automatique entre les ensembles d'entraînement et de test. 

Les images sont converties en nuances de gris et redimensionnées à 28 x 28 pixels pour uniformiser les entrées du modèle et pour extraire des caractéristiques significatives. Cette étape est cruciale pour la performance du modèle, car elle influence directement la qualité des informations qui seront apprises.

La taille de l'ensemble de données joue un rôle significatif dans la validation du modèle. Avec un petit ensemble de données, chaque échantillon a un poids important dans l'évaluation de la performance. 
L'objectif est d'élargir cet ensemble pour renforcer la fiabilité du modèle et minimiser le risque de surajustement. 

![Capture d'écran 2023-11-16 142532](https://github.com/aminabenj/code/assets/148441485/584233e2-dadc-44c6-b48f-d806736cea8f)

![Capture d'écran 2023-11-16 142505](https://github.com/aminabenj/code/assets/148441485/a9e3d975-fd68-4b0c-ab02-37ecc944ab8f)

![Capture d'écran 2023-11-16 142442](https://github.com/aminabenj/code/assets/148441485/aa83a26f-226b-42af-9473-be112ecde632)

![Entite de jeu de donnee](https://github.com/aminabenj/code/assets/148441485/e719f915-3095-4ee9-a9e7-3c5f07e9e333)

https://studio.edgeimpulse.com/studio/309664/learning/keras/5

# Projet B : système de comptage de composants électroniques
Le projet consiste en un système de comptage de composants électroniques, qui s'appuie sur la reconnaissance et la classification d'images. Il utilise une carte Arduino Nano 33 BLE, une caméra OV7670, la plateforme Edge Impulse pour le Deep Learning, et Node-RED pour le traitement des données.
Voici les principales étapes pour mener à bien ce projet :

1. Utilisation d'Edge Impulse pour créer et entraîner un modèle de reconnaissance d'images.
   * Exploitation du modèle issu du projet 4.

   ![image](https://github.com/aminabenj/code/assets/148441485/4489c1c6-9e60-484a-bd3f-a4517f2682f7)
   
   * Tests et ajustements du modèle pour garantir une précision de classification élevée.
   ![image](https://github.com/aminabenj/code/assets/148441485/41600b00-f2d6-4f60-a60e-c018bb35d85a)

   * Chargement du modèle entraîné sur la carte Arduino Nano 33 BLE.
   ![image](https://github.com/aminabenj/code/assets/148441485/b32f7f30-44a0-4c64-b81d-298bc86deb72)

   * Ensuite, mise en œuvre d'un programme exemple pour Arduino, utilisant la caméra OV7670 pour capturer des images des composants.
   ![image](https://github.com/aminabenj/code/assets/148441485/439ad7dc-9755-4877-879b-f752762b3704)
   
   * Mise en place d'un programme pour capturer des images avec la caméra OV7675, effectuer l'inférence avec le modèle Edge Impulse, puis envoyer la classe 
     identifiée via Bluetooth en utilisant BLE.
     
     Affichage du moniteur série.
   ![image](https://github.com/aminabenj/code/assets/148441485/d02b7165-f27e-48d3-b5cb-d6a0fabbde53)
   
     Problème rencontré : incapacité de capturer des images en raison d'un dysfonctionnement de la caméra dans le kit.
   
   Partie Nodered:  
       * Téléchargement des bibliothèques nécessaires.
   ![image](https://github.com/aminabenj/code/assets/148441485/280d7f50-757c-4070-bc0a-c6f87653e89a)
   
   ![image](https://github.com/aminabenj/code/assets/148441485/5cd30814-6ae0-46fd-b584-f3d4e9d5dd56)
       * Création d'un flux pour recevoir les données BLE :
    Ajout du nœud BLE récemment installé à l'espace de travail.
    Configuration du nœud pour qu'il se connecte à l'appareil Arduino.

   ![image](https://github.com/aminabenj/code/assets/148441485/087074a0-2dbf-4961-bbc2-8e8afe2b5f15)
   ![image](https://github.com/aminabenj/code/assets/148441485/7e024181-dcfc-48d8-95ed-2460afc66c32)
   ![image](https://github.com/aminabenj/code/assets/148441485/da711cbd-7f4f-4ca8-a22d-66993ccd7089)

    J'ai ajouté et configuré plusieurs nœuds supplémentaires dans Node-RED pour optimiser le traitement des données. Parmi eux, j'ai utilisé des nœuds function     pour le traitement spécifique des données, des nœuds debug pour tester les sorties.

   ![image](https://github.com/aminabenj/code/assets/148441485/48f556da-1ecd-45e9-88da-548ff217f0a7)




   




