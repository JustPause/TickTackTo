package Java;


class Main {
    private static char[][] Board = new char [3][3];
    public static void main(String[] args) {

        System.out.printf("Geting ready");

        Input.GetIcon();

        Barde.NowPlaying(Board, Input.Icon);

        //GetInput.GetInput(Board, Icon[0]);
    }
}