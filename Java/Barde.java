package Java;

public class Barde {
    static boolean Player_bool = false;

    // p1 = false, p2 = true

    public static void MakeBarde(char Board[][], char Player) {
        // for (int i = 0; i < 3; i++) {
        // for (int j = 0; j < 3; j++) {
        System.out.println("Now playing " + Player);
        System.out.printf(
                "%c | %c | %c \n------\n%c | %c | %c \n------\n%c | %c | %c \n", Board[0][0], Board[0][1],
                Board[0][2], Board[1][0], Board[1][1],
                Board[1][2], Board[2][0], Board[2][1],
                Board[2][2]);
        // }
        // }
    }

    public static void NowPlaying(char Board[][], char  Player[]) {
        if (Player_bool) {
            Barde.MakeBarde(Board, Input.Icon[0]);
        } else {
            Barde.MakeBarde(Board, Input.Icon[0]);
        }
    }
}
