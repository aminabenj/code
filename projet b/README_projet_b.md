Benjima Amina
# Projet Tinyml

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




   




