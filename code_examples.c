#include <stdio.h>
#include <stdint.h>

const uint64_t NOT_A_FILE = 0xFEFEFEFEFEFEFEFEULL;
const uint64_t NOT_H_FILE = 0x7F7F7F7F7F7F7F7FULL;

uint64_t get_white_pawn_attacks(uint64_t white_pawns) {
    uint64_t left_attacks = (white_pawns & NOT_A_FILE) << 7;
    uint64_t right_attacks = (white_pawns & NOT_H_FILE) << 9;
    return left_attacks | right_attacks;
}

uint64_t get_white_pawn_pushes(uint64_t white_pawns, uint64_t empty_squares) {
    return (white_pawns << 8) & empty_squares;
}

void print_bitboard(uint64_t bitboard) {
    printf("\n");
    for (int rank = 7; rank >= 0; rank--) {
        printf("%d  ", rank + 1);
        for (int file = 0; file <= 7; file++) {
            int square = rank * 8 + file;
            if ((bitboard >> square) & 1ULL) {
                printf("1 ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n   a b c d e f g h\n\n");
}

int main() {
    uint64_t white_pawns = 0x000000000000FF00ULL;
    uint64_t empty_squares = 0xFFFFFFFFFFFF00FFULL;
    
    uint64_t pawn_pushes = get_white_pawn_pushes(white_pawns, empty_squares);
    uint64_t pawn_attacks = get_white_pawn_attacks(white_pawns);
    
    print_bitboard(white_pawns);
    print_bitboard(pawn_pushes);
    print_bitboard(pawn_attacks);
    
    return 0;
}