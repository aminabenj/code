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

# Projet 4 : Training a CNN in Edge Impulse
Ce projet explore l'application pratique des réseaux de neurones convolutifs (CNN) en utilisant la plateforme Edge Impulse pour la reconnaissance des composants électroniques. L'initiative vise à établir un modèle CNN pour traiter et classifier des images de composants tels que résistances, diodes et condensateurs, en se basant sur l'ensemble de données introduit lors du premier module de formation.

Dans Edge Impulse, le processus commence par la création d'un nouveau projet et la navigation vers la section 'Data acquisition'. Les images sont téléversées par classe, avec une option de répartition automatique entre les ensembles d'entraînement et de test. 

Les images sont converties en nuances de gris et redimensionnées à 28 x 28 pixels pour uniformiser les entrées du modèle et pour extraire des caractéristiques significatives. Cette étape est cruciale pour la performance du modèle, car elle influence directement la qualité des informations qui seront apprises.

La taille de l'ensemble de données joue un rôle significatif dans la validation du modèle. Avec un petit ensemble de données, chaque échantillon a un poids important dans l'évaluation de la performance. 
L'objectif est d'élargir cet ensemble pour renforcer la fiabilité du modèle et minimiser le risque de surajustement. 

![Capture d'écran 2023-11-16 142532](https://github.com/aminabenj/code/assets/148441485/584233e2-dadc-44c6-b48f-d806736cea8f)


![Capture d'écran 2023-11-16 142505](https://github.com/aminabenj/code/assets/148441485/a9e3d975-fd68-4b0c-ab02-37ecc944ab8f)


![Capture d'écran 2023-11-16 142442](https://github.com/aminabenj/code/assets/148441485/aa83a26f-226b-42af-9473-be112ecde632)


![Entite de jeu de donnee](https://github.com/aminabenj/code/assets/148441485/e719f915-3095-4ee9-a9e7-3c5f07e9e333)



