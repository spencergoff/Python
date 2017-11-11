from random import randrange

'''global variables'''

board = ["0", "1", "2", "3", "4", "5", "6", "7", "8"]

'''methods'''

def resetBoard():
    global board
    x = 0
    while x < len(board):
        board[x] = str(x)
        x += 1
    printBoard()


def printBoard():
    print()
    print(board[0] + "  " + board[1] + "  " + board[2])
    print(board[3] + "  " + board[4] + "  " + board[5])
    print(board[6] + "  " + board[7] + "  " + board[8])
    print()


#determines if someone has won or there is a tie
def gameOver():
    x = 0
    winner = ''

    #checks across rows
    while x < len(board):
        if board[x] == board[x+1] and board[x+1] == board[x+2]: #checks across rows
            winner = board[x]
            break
        else:
            x += 3

    x = 0

    #checks down columns
    while x < 3:
        if board[x] == board[x+3] and board[x+3] == board[x+6]:
            winner = board[x]
            break
        else:
            x += 1

    x = 0

    #checks diagonals
    if board[0] == board[4] and board[4] == board[8]:
        winner = board[x]
    elif board[2] == board[4] and board[4] == board[6]:
        winner = board[x]

    #if there was no winner, check if all of the spaces are full; end function if so
    if winner == '':
        x = 0
        while x <= len(board):
            if board[x] != 'X' and board[x] != 'O':
                break
            elif x == 8:
                print("Tie Game!")
                playAgain = input("Enter a 'y' to play another game.")
                if playAgain == 'y':
                    resetBoard()
                    return False
                else:
                    return True
            else:
                x += 1
                #print("x = " + str(x))

    if winner == 'X':
        print("Player1 Wins the Game!")
        playAgain = input("Enter a 'y' to play another game.")
        if playAgain == 'y':
            resetBoard()
            return False
        else:
            return True
    elif winner == 'O':
        print("Player2 Wins the Game!")
        playAgain = input("Enter a 'y' to play another game.")
        if playAgain == 'y':
            resetBoard()
            return False
        else:
            return True
    else:
        return False


def play(player):
    if player == "player1":
        symbol = 'X'
    else:
        symbol = 'O'

    while True:
        try:
            space = int(input("Enter the number of the space you would like to occupy: "))
            if space > 8 or space < 0:
                print("Please choose an integer between 0 and 8.")
            elif board[space] == "X" or board[space] == "O":
                print("Sorry, that space is already taken. Please try again")
            else:
                break
        except ValueError:
            print("Please enter an integer.")

    board[space] = symbol

def main():
    x = randrange(0, 2) #chooses 0 or 1
    player = "player1" if x == 0 else "player2"
    printBoard()

    while gameOver()  == False:
        print("It's " + player + "'s turn.")
        play(player)
        printBoard()
        if player == "player1":
            player = "player2"
        else:
            player = "player1"


'''executing section'''

main()
