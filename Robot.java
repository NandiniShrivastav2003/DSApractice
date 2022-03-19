//input:i1=3,i2=3,i3=2-2-E,i4=R M L M L M
import java.util.Scanner;
public class RobotMovement {
    public String moveRobot(int i1, int i2, String i3, String i4){
        int x=Integer.parseInt(i3.substring(0,1));
        int y=Integer.parseInt(i3.substring(2,3));
     String  d = i3.substring(4,5);
        String res="";

            int i=0;
            int c=0;
            while(i<i4.length()) {

                if (i4.charAt(i) == 'R') {

                    if (d.equals("E")) {
                        c++;
                        System.out.println(c);
                        d = "S";
                        System.out.println(d);

                    } else if (d.equals("W")) {

                        d = "N";
                        System.out.println(d);
                    } else if (d.equals("N")) {

                        d = "E";
                        System.out.println(d);
                    } else{

                        d = "W";
                        System.out.println(d);
                    }

                }
                else if (i4.charAt(i) == 'L') {

                    if (d.equals("E")) {
                       c++;
                        d = "N";
                        System.out.println(d);
                    } else if (d.equals("W")) {

                        d = "S";
                        System.out.println(d);
                    } else if (d.equals("N")) {

                        d = "W";
                        System.out.println(d);
                    } else {

                        d = "E";
                        System.out.println(d);
                    }

                }
                else if(i4.charAt(i) == 'M'){

                    if (d.equals("E")) {

                        x = x + 1;
                    } else if (d.equals("W") ){

                        x = x - 1;
                    } else if (d.equals("N") ){

                        y = y + 1;
                    } else {

                        y = y - 1;
                    }

                }
                    i = i + 2;

            }



            if((x>i1 || x<0)|(y>i2 || y<0)){

                res+=x+"-"+y+"-"+d+"-ER";
            }
            else{
                res=x+"-"+y+"-"+d;

            }

        return res;
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        RobotMovement obj = new RobotMovement();
        int i1=s.nextInt();
        int i2=s.nextInt();
        String i3=s.next();
        String name= s.nextLine();
        name+=s.nextLine();

        System.out.println(obj.moveRobot(i1,i2,i3, name));
    }
}
