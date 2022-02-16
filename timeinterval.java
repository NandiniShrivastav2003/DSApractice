import java.util.Arrays;
import java.util.Scanner;

public class TimeInterval {
    int start;
    int end;
    TimeInterval(int start,int end)
    {
        this.start=start;
        this.end=end;
    }
    public static boolean canAttendMeeting(TimeInterval arr[])
    {
        int start[]=new int[arr.length];
        int end[] = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            start[i] = arr[i].start;
            end[i]=arr[i].end;
        }
        Arrays.sort(start);
        Arrays.sort(end);
        for (int i = 0; i < start.length-1; i++) {
            if(start[i+1] < end[i])
            {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        TimeInterval arr[] = new TimeInterval[5];
        Scanner sc = new Scanner(System.in);
        for (int i=0;i<5;i++)
        {
            arr[i]=new TimeInterval(sc.nextInt(),sc.nextInt());
        }
        boolean result = TimeInterval.canAttendMeeting(arr);
        if ( result == false)
        {
            System.out.println("Employee can attend all meetings");
        }
        else
        {
            System.out.println("Employee can not attend all meetings");
        }
    }
}