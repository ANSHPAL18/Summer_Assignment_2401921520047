package live;
import music.Playable;
import music.string.Veena;
public class Test{
    public static void main(String[] args) {
        Veena v = new Veena();
        v.play();
        Playable p;
        p = new Veena();
        p.play();
    }
}