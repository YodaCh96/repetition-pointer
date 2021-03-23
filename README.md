<!--# Repetition Zeiger-->

<!--Mithilfe dieser Repetitionsaufgabe sollen einige grundlegende Aspekte zur Programmierung mit Zeigern in C aufgefrischt und ggf. vertieft werden.-->

<!--## Vorbereitung-->

<!--Erstellen Sie in Visual Studio ein neues Projekt für die Bearbeitung dieser Aufgabe. Schreiben Sie sämtlichen Code, welcher für die Bearbeitung dieser Aufgabe notwendig ist direkt in die main Funktion des neu erstellten Projekts.-->

<!--## Aufgabenstellung-->

<!--Zur Repetition von Zeigern schreiben Sie verschiedene, kleinere Code-Sequenzen, welche die Funktionsweise von Zeigern exemplarisch aufzeigen. Gehen Sie dabei schrittweise vor und wählen sie möglichst sinnvolle Bezeichner (Namen) für die verschiedenen Variablen. Achten Sie zudem auf eine übersichtliche Strukturierung des Quellcodes.
<!--
- Deklarieren Sie insgesamt drei verschiedene Variablen vom Typ `int` und weisen Sie zwei Variablen einen beliebigen, gültigen Wert zu.
- Deklarieren Sie zwei verschiedene Zeiger vom Typ `int` (ohne Initialisierung). Verwenden Sie dazu unterschiedliche Schreibweisen.
- Initialisieren Sie die beiden Zeiger, indem Sie jeweils auf eine zuvor initialisierte Variable referenzieren.
- Schreiben Sie mithilfe der `printf` Funktion folgende Informationen auf die Konsole (jeweils für beide Variablen-Zeiger-Paare):
    - Speicheradresse der Variable
    - Speicheradresse des Zeigers
    - Wert der Variable
    - Wert der Variable, Zugriff via Zeiger
- Initialisieren Sie einen weiteren Zeiger vom Typ `int` und verweisen Sie auf die dritte, uninitialisierte Variable des gleichen Datentyps.
- Wiederholen Sie die Ausgabe von Punkt 4 mit dem dritten Variablen-Zeiger-Paar. Machen Sie sich vor der Ausführung des Programms Gedanken zum erwarteten Verlauf des Programms.
- Initialisieren Sie eine Variable vom Typ `char` mit einem beliebigen, gültigen Wert.
- Initialisieren Sie zwei Zeiger vom Typ `char`. Einer der beiden Zeiger referenziert die zuvor erstellte char-Variable, der andere Zeiger referenziert den zuvor erstellten Zeiger («Doppelter Verweis»).
- Ändern Sie den Wert der char-Variable mit einem Zeiger und schreiben Sie den Wert der gleichen char-Variable anschliessend unter Verwendung des zweiten Zeigers auf die Konsole.
- Initialisieren Sie ein `int-Array`, welches die fünf kleinsten (positiven) Primzahlen enthält.
- Verwenden Sie eine Schleife und einen Zeiger (sowie ggf. Zeigerarithmetik) um nacheinander alle Zahlen aus dem zuvor initialisierten Array auf die Konsole zu schreiben.
- Ergänzen Sie die zuvor programmierte Ausgabe durch die Ausgabe der Speicheradresse, in welcher die jeweilige Primzahl gespeichert ist.
- Initialisieren Sie eine «String Variable» mit Ihrem vollständigen Namen.
- Definieren Sie die Funktion myPrint mit einen «String Parameter», welche den übergebenen Parameterwert auf die Konsole ausgibt. Rufen Sie diese Funktion anschliessend in der main Funktion mit der zuvor initialisierten «String Variable» auf.-->

# Repetition Pointer

With the help of this repetition task, some basic aspects of programming with pointers in C should be refreshed and, if necessary, deepened.

Create a new project in Visual Studio to work on this task. Write all code that is necessary to complete this task directly in the main function of the newly created project.

## Task

For the repetition of pointers, write different, smaller code sequences that show the functionality of pointers as an example. Proceed step by step and choose meaningful identifiers (names) for the different variables. Also ensure that the source code is clearly structured.

- Declare a total of three different variables of the type 'int' and assign any valid value to two variables.
- Declare two different pointers of the type `int` (without initialisation). Use different notations for this.
- Initialise the two pointers by referencing each to a previously initialised variable.
- Using the `printf` function, write the following information to the console (for both variable-pointer pairs):
    - Memory address of the variable
    - Memory address of the pointer
    - Value of the variable
    - Value of the variable, access via pointer
- Initialise another pointer of type `int` and refer to the third, uninitialised variable of the same data type.
- Repeat the output of point 4 with the third variable-pointer pair. Before executing the programme, think about the expected course of the programme.
- Initialise a variable of the type `char` with any valid value.
- Initialise two pointers of type `char`. One of the two pointers references the previously created char variable, the other pointer references the previously created pointer ("double reference").
- Change the value of the char variable with one pointer and then write the value of the same char variable to the console using the second pointer.
- Initialise an `int array` containing the five smallest (positive) prime numbers.
- Use a loop and a pointer (as well as pointer arithmetic, if necessary) to write all the numbers from the previously initialised array to the console one after the other.
- Supplement the previously programmed output with the output of the memory address in which the respective prime number is stored.
- Initialise a "String Variable" with your complete name.
- Define the function myPrint with a "String Parameter", which outputs the passed parameter value to the console. Then call this function in the main function with the previously initialised "String Variable".

## Contributing

This is a personal learning project for me. Please feel free to fork this repo. Pull request to submit more programs.

## Feedback

If you find any bug or have any suggestion, please do file issues. I am graceful for any feedback and will do my best to improve this package.

## License

[MIT](LICENSE) © 2020 Ioannis Christodoulakis
