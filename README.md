# Webinar2
This (very simple) program demonstrates how to convert a description of a required program into pseudocode and then into c++

The program example is taken from BBC bitesize example found at https://www.bbc.co.uk/bitesize/guides/zptd3k7/revision/7


Analysis used to inform design
Purpose
A program is to be developed to create usernames for a class of twenty pupils
The program will ask a teacher to enter the first name, surname and age of each pupil.
The age entered must be between five and eighteen.
The program should output a list of usernames for the teacher.


Functional requirements:


Inputs              |   Processes	    |   Outputs

Pupil first name    |   Validate age    |   List of usernames
Pupil surname       |   Create username	
Pupil age           |

Design using pseudocode:

Main steps (algorithim)


1 Initialise username

2 Start fixed loop for twenty pupils

    2.1 Get first name and surname from user

    2.2 Get valid age from user

    2.3 Generate username

    2.4 Display "Username", index, "is" username

3 End fixed loop


Version 1 contains no validation

Vesion 2 contains age range validation, but no data type
