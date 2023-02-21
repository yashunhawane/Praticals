import org.springframework.context.support.ClassPathXmlApplicationContext;

public class MediaPlayerMain {
    public static void main(String[] args) throws Exception {
        ClassPathXmlApplicationContext context = new ClassPathXmlApplicationContext(
                "songs.xml");
        MediaPlayer media = context.getBean(MediaPlayer.class);
        media.play();
        context.close();
    }
}