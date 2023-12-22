# Fondu de Couleurs RGB avec Arduino

Ce projet Arduino permet de réaliser un fondu de couleurs RGB en utilisant les broches analogiques pour contrôler l'intensité lumineuse des couleurs bleue, rouge et verte.

## Matériel requis

- Arduino board
- Joystick
- 3 LEDs RVB
- Fils de connexion

## Branchements

- Connectez le joystick aux broches analogiques de l'Arduino.
- Connectez les broches des LEDs aux broches spécifiées dans le code.
- Ajoutez des résistances pour protéger les LEDs.

## Utilisation

1. Chargez le code dans votre Arduino IDE et téléversez-le sur votre Arduino.
2. Assurez-vous que le joystick est bien connecté.
3. Alimentez le circuit.

## Fonctions

Le code propose deux fonctions principales pour contrôler le fondu des couleurs :
- `fadeIn`: Augmente progressivement l'intensité lumineuse des couleurs.
- `fadeOut`: Diminue progressivement l'intensité lumineuse des couleurs.

Ces fonctions sont appelées dans la boucle principale du programme, alternant entre l'augmentation et la diminution de l'intensité lumineuse.

## Contrôle avec le Joystick

Les fonctions peuvent être activées en utilisant le joystick de la manière suivante :
- Lorsque le joystick est poussé vers le haut, la fonction `fadeIn` est déclenchée.
- Lorsque le joystick est poussé vers le bas, la fonction `fadeOut` est déclenchée.

Ajustez la vitesse du fondu en modifiant les délais dans les fonctions `fadeIn` et `fadeOut`.

