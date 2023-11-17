# Exported dataset for Amina1930-projet-2 / Projet4

To import this data into a new Edge Impulse project, either use:

* The Edge Impulse CLI (https://docs.edgeimpulse.com/docs/edge-impulse-cli/cli-overview), run with:

    edge-impulse-uploader --clean --info-file info.labels

* Or, via the Edge Impulse Studio. Go to **Data acquisition > Upload data**.

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



