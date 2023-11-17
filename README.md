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
# ces projets 2,3 et 4 sont réalisés par moi meme BENJIMA Amina et Marie christ TOBADA (vu que sa carte arduino ne marche plus)
# Projet 2 : 

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
   Un modèle de réseau neuronal a été entraîné avec les données étiquetées. Des blocs de détection d'anomalies K-means ont également été utilisés. L'entraînement a impliqué 
   l'ajustement des hyperparamètres pour améliorer la précision du modèle tout en évitant le surajustement.
   ![entité](https://github.com/aminabenj/code/assets/148441485/667b2383-9df6-4a01-8503-5c99072deee5)

   ![Entrainement_modèle](https://github.com/aminabenj/code/assets/148441485/71a264dd-aa10-4f17-bbae-ab007073159b)
   
   ![Entrainement_modèle_1](https://github.com/aminabenj/code/assets/148441485/b44a35cd-f410-4e17-ae40-f1caf8fa7717)
   
6. Test du Modèle : 
   Le modèle formé a été testé avec un nouvel ensemble de données pour évaluer sa précision et sa capacité à généraliser.
   ![test de modèle](https://github.com/aminabenj/code/assets/148441485/d18d2e4c-56cd-4da1-9db1-c4caf2a6a227)
   
8. Déploiement :
   Le modèle final a été déployé sur Arduino.
   Le dispositif a été testé dans des conditions réelles pour valider sa performance dans la classification des états opérationnels de la machine et la détection d'anomalies.
   ![deploiement](https://github.com/aminabenj/code/assets/148441485/432de8dd-3f9d-479c-a78d-30c667c37571)

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



