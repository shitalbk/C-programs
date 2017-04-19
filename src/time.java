/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author shital
 */
public class time {

    public static void main(String args[]) {
        int day = 3,
                hrs = 20,
                min = 30,
                sec = 30;
        int day1 = 5,
                hrs1 = 8,
                min1 = 38,
                sec1 = 38;
        int[] time1 = new int[]{day, hrs, min, sec};
        int[] time2 = new int[]{day1, hrs1, min1, sec1};
        int[] total = new int[4];
        for (int i = 0; i < 4; i++) {
            total[i] = time1[i] + time2[i];
            if (i > 1) {
                if (total[i] > 60) {
                    total[i - 1] = total[i - 1] + 1;
                    total[i] = total[i] - 60;
                }

            } else if (i == 1) {
                if (total[i] > 24) {
                    total[i - 1] = total[i - 1] + 1;
                    total[i] = total[i] - 24;
                }
            }

        }
        System.out.print("Total Time is " + total[0] + " days " + total[1] + " hrs " + total[2] + " mins " + total[3] + " secs ");
    }
}
