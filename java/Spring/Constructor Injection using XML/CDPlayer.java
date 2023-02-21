public class CDPlayer implements MediaPlayer {
    private CompactDisk insertedCD;
    public CDPlayer(CompactDisk cd) {
    insertedCD = cd;
    }
    @Override
    public void play() {
    insertedCD.play();
    }
    }
    