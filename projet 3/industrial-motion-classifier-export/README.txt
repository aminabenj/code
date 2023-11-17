# Exported dataset for Amina1930-projet-2 / Industrial-Motion-classifier

To import this data into a new Edge Impulse project, either use:

* The Edge Impulse CLI (https://docs.edgeimpulse.com/docs/edge-impulse-cli/cli-overview), run with:

    edge-impulse-uploader --clean --info-file info.labels

* Or, via the Edge Impulse Studio. Go to **Data acquisition > Upload data**.

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
