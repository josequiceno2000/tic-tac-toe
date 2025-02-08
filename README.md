# tic-tac-toe
Allows for two players to play tic tac toe

# Plan
1: Populate README.md ✔️
2: Add files for project (main, function header, functions) ✔️
3: Include boilerplate for all files ✔️
4: Create greet() function ✔️
    a) Must introduce game ✔️
    b) Explain how to play ✔️
5: Add variables to main: ✔️
    a) int player1_input (each cell on the grid has number 1-9) ✔️
    b) int player2_input (each cell on the grid has number 1-9) ✔️
    c) bool player1_wins = false ✔️
    d) bool player2_wins = false ✔️
    e) array board which holds each position on the tic-tac-toe-board ✔️
    f) bool board_full = false until there is a value at each position ✔️
6: Create end() function ✔️ 
7: Create while loop for playing ✔️
    a) while not player1_wins && not player2_wins && turn_count < 10 ✔️
        i) Add round() function:
            I) Display current board
            II) Take player1_input
                - while loop that keeps going until player inputs a space that's not full
            III) Check if game is over
                - check if board is full
                - check for the 8 possible win conditions for player1
            IV) Display current board
            V) Take player2_input
                - while loop that keeps going until player inputs a space that's not full
            VI) Check if game is over
                - check if board is full
                - check for the 8 possible win conditions for player2
            VII) turn_count++ ✔️