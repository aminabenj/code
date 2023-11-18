# Exported dataset for Amina1930-projet-2 / Industrial-Motion-classifier

To import this data into a new Edge Impulse project, either use:

* The Edge Impulse CLI (https://docs.edgeimpulse.com/docs/edge-impulse-cli/cli-overview), run with:

    edge-impulse-uploader --clean --info-file info.labels

* Or, via the Edge Impulse Studio. Go to **Data acquisition > Upload data**.

# Projet 3 : Projet de Classification des Mouvements et Détection des Anomalies
Ce projet, réalisé dans le cadre d'un cours d'apprentissage automatique embarqué, a pour objectif de développer un système capable de classifier le mouvement et les vibrations d'une machine et de détecter des anomalies dans son fonctionnement. L'application pratique de ce projet vise à utiliser l'apprentissage automatique dans un environnement industriel pour identifier différents états opérationnels d'une machine (par exemple, éteint, allumé, charge faible, charge élevée, anomalie, etc.).
1. Configuration Initiale:
   Connexion de la carte arduino avec Edge impulse en exacutant sur le terminal "edge-impulse-       daemon --clear" pour ouvrir le projet concerné.

3. Collecte de Données :
   Des données ont été collectées pour différentes classes représentant les états de la machine : éteint, charge légère et charge lourde.
   Pour chaque classe, des données de l'accéléromètre ont été collectées pendant 1.20 minutes puis pendant 10 seconde plusieurs fois pour chacune des classes.
  
5. Entraînement du Modèle :
   Un modèle de réseau neuronal a été entraîné avec les données étiquetées. Des blocs de détection d'anomalies K-means ont également été utilisés. 
   L'entraînement a impliqué 
   l'ajustement des hyperparamètres pour améliorer la précision du modèle tout en évitant le surajustement.
  
   
7. Test du Modèle : 
   Le modèle formé a été testé avec un nouvel ensemble de données pour évaluer sa précision et sa capacité à généraliser.
 
8. Déploiement :
   Le modèle final a été déployé sur Arduino.
   Le dispositif a été testé dans des conditions réelles pour valider sa performance dans la classification des états opérationnels de la machine et la 
   détection d'anomalies.
  

Pour conclure, ce projet illustre l'application de l'apprentissage automatique embarqué dans un contexte industriel. Il démontre la capacité de classifier différents états d'une machine et de détecter des anomalies sans modification physique de la machine elle-même. Le projet souligne également l'importance de l'expérimentation et de l'ajustement dans le développement de modèles d'apprentissage automatique.
