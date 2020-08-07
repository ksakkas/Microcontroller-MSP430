/*
This code was designed by Konstantinos Sakkas on August 7th 2020.
It is intended for academic use at the Department of Informatics and Telecommunication of University of Ioannina and my github https://ksakkas.github.io/Microcontroller-MSP430/.
*/
/*
This code was designed and compiled at Energia ver. 1.8.11E23
It was designed for use with TI MSP430F5529
*/

//Hello world

void setup() {        //Function of initialization of system parameters and materials.
                     //Initialize both serial ports: 
Serial.begin(9600); //It is the rate of transmission in bits per sec (for Serial).
}

void loop() {    //Main repetitive function.
Serial.print("Hello world");  //Show message
}