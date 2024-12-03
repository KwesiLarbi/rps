# Rock! Paper! Scissor!

## Welcome to RPS!
Rock Paper Scissor is one of the most common games played by everyone once in his/her childhood, where two persons use their hands and chooses random objects between rock, paper, or scissor, and their choice decides the winner between them. What if a single person can play this game? With a computer, just by using a single C application, we can design the game RPS application just using basic C knowledge like if-else statements, random value generation, and input-output of values. We can also create an application feature where we can play the game can be played between two actual people and maintain the score of Person 1 and Person 2.

## Version 1: User vs CPU
Version 1.0.0 will focus mainly on User vs CPU mode. The features included are:
  - A greeting screen: Inform Users that they have started up rock! paper! scissors!
    - Inform the users of the rules/parameters of the game. 

  - Ability to take user inputs: receive user inputs, user inputs must be: rock, paper, or scissors
    - Output WARNING message if not rps
    - User input must be outputted to the console to show their choice
  - CPU RPS Choice: Create functionality for randomly generated rps from cpu
    - Compare CPU answer vs User answer and decide winner
  - Score Keeping: Keep track of User and CPU score while program is running
    - When program is terminated compare total scores and decide overall winner