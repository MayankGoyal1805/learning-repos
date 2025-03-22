import java.io.IOException;

public class PlaySound {
    public static void main(String[] args) {
        // Path to the sound file
        String file = "/home/mayank/ubuntu_folders/repos/learning-repos/python_lang/music/Doraemon.mp3";

        // Construct the shell command
        String command = "explorer.exe $(wslpath -w \"" + file + "\")";

        try {
            // Execute the shell command
            Process process = Runtime.getRuntime().exec(new String[]{"bash", "-c", command});

            // Optionally, wait for the process to complete
            int exitCode = process.waitFor();
            System.out.println("Process exited with code: " + exitCode);
        } catch (IOException | InterruptedException e) {
            // Handle exceptions
            e.printStackTrace();
        }
    }
}