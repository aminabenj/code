# Exported dataset for Amina1930-projet-2 / Par Amina212-projet-2

To import this data into a new Edge Impulse project, either use:

* The Edge Impulse CLI (https://docs.edgeimpulse.com/docs/edge-impulse-cli/cli-overview), run with:

    edge-impulse-uploader --clean --info-file info.labels

* Or, via the Edge Impulse Studio. Go to **Data acquisition > Upload data**.

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