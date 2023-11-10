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


