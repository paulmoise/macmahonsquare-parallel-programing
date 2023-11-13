#include<vector>
#include<string>

#include "piece.hpp"

class Board{
private:

    int dim; // board game dimension rowSize = colSize
    std::vector<std::vector<Piece>> grid;  // board matrix
    std::vector<Piece> availablePieces;    // all available pieces for the game
    // std::vector<Piece> usedPieces;         // usedPiece when soliving the game


public:
    Board();
    Board(std::string);
    Board(int , std::vector<std::vector<Piece>>, std::vector<Piece> );
    ~Board();
//    Board (Board &);

    void initializeGrid( std::vector<std::vector<Piece>>, int);
    std::vector<Piece> getAvailablePieces();
    bool isValidState(int, int, Piece);

    bool areBorderPiecesHasSameColor(int, int, Piece);
    bool hasValidAjacentPieces(int, int, Piece);
    bool areAdjacentPiecesHasSameColor(int, int, Piece);

    void displaySeparator(int);
    void displayPiece(std::vector<Piece>);


    bool solver(int, int);
    void solve();

    bool puzzleSolver(int, int);
    void solveByThread();

    void solverThreadPool();
    std::vector<std::vector<Piece>>  solveByThreadV2();
    bool bactracking( std::vector<std::vector<Piece>> , std::vector<Piece> , int , int );


    void setPiece(int, int, Piece);
    void displayBoard();       // display board matrix
    void displayBoardV2(std::vector<std::vector<Piece>> &, int );


    std::vector<std::vector<Piece>> getGrid();
    void setDim(int);
    void fillOnePiece(int, int, Piece);
    void init();
};
   
