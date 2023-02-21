import java.io.PrintStream;

public class BollywoodSongsCD implements CompactDisk {
    private String title;
    private String artist;
    private PrintStream printer;

    public BollywoodSongsCD(String title, String artist, PrintStream printer) {
        this.title = title;
        this.artist = artist;
        this.printer = printer;
    }

    @Override
    public void play() {
        printer.println("You are playing hollywood songs from " + title + " by " + artist);
    }
}