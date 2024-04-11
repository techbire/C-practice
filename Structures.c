// user defined data type

// #include <stdio.h>

// // Define the struct
// struct pokemon {
//     int hp;
//     int speed;
//     int attack;
//     char feature[20]; // Make room for a string of 19 characters plus the null terminator
// };

// int main() {
//     // Declare a struct variable of type pokemon
//     struct pokemon pikachu;
    
//     // Assign values to the members of the struct
//     pikachu.attack = 60;
//     pikachu.hp = 50;
//     pikachu.speed = 100;
//     // Initialize feature directly
//     char pikachuFeature[] = "Electric Shock";
//     for (int i = 0; i < sizeof(pikachu.feature); ++i) {
//         pikachu.feature[i] = pikachuFeature[i];
//     }
    
//     // Print out the values
//     printf("Pikachu's Attack: %d\n", pikachu.attack);
//     printf("Pikachu's HP: %d\n", pikachu.hp);
//     printf("Pikachu's Speed: %d\n", pikachu.speed);
//     printf("Pikachu's Feature: %s\n", pikachu.feature);
    
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------

//changing the structure
// void change (pokemon p){
// p.hp = 70;
// p.attack = 60;
// p.speed = 110;
// return;
// }

// int main (){
// pokemon pikachu;
// pikachu. hp = 60;
// pikachu.attack = 50;
// pikachu speed = 100;
// change (pikachu);
// printf ("&d\n",pikachu.hp);
// printf("&d\n",pikachu.attack);
// printf ("&d\n",pikachu.speed);
// }


//--------------------------------------------------------------------------------------------------------------


//Create a structure ‘person’ having attributes as age and weight. Access its structure variables using pointers.

// #include <stdio.h>

// // Define the structure
// struct Person {
//     int age;
//     float weight;
// };

// int main() {
//     // Declare a variable of type struct Person
//     struct Person person1;
    
//     // Declare a pointer to a struct Person
//     struct Person *ptrPerson;
    
//     // Initialize the structure variables using direct access
//     person1.age = 30;
//     person1.weight = 70.5;

//     // Point the pointer to the address of person1
//     ptrPerson = &person1;
    
//     // Access structure variables using pointers and print them
//     printf("Age: %d\n", ptrPerson->age);
//     printf("Weight: %.1f\n", ptrPerson->weight);
    
//     return 0;
// }

