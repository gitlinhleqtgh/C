using System;

namespace Bt1 {
    class Program {
        public static void NextTime (int hour, int minutes, int seconds) {
            seconds += 1;
            while (seconds + 1 >= 60) {
                ++minutes;
                seconds -= 60;
            }
            while (minutes >= 60) {
                ++hour;
                minutes -= 60;
            }
            while (hour >= 24) {
                hour -= 24;
            }
            Console.WriteLine ("{0}:{1}:{2}", hour, minutes, seconds);
        }
        public static void NextTime1 (int hour, int minutes, int seconds) {
            if (hour < 24 && minutes < 60 && seconds < 60) {
                if (seconds + 1 < 60) {
                    seconds+=1;
                } else {
                    seconds=seconds+1-60;
                    minutes += 1;
                    if (minutes >= 60) {
                        minutes -= 60;
                        hour += 1;
                    }
                }
                Console.WriteLine ("{0}:{1}:{2}", hour, minutes, seconds);
            }
        }
        static void Main (string[] args) {
            Console.WriteLine ("Next Time !");
            Console.WriteLine ("Nhap gio : ");
            int hour = Int32.Parse (Console.ReadLine ());
            Console.WriteLine ("Nhap phut : ");
            int minutes = Int32.Parse (Console.ReadLine ());
            Console.WriteLine ("Nhap giay : ");
            int seconds = Int32.Parse (Console.ReadLine ());
            NextTime (hour, minutes, seconds);
            NextTime1 (hour, minutes, seconds);
        }
    }
}