using System;
namespace Delegate
{
    public class Logs{
        public delegate void ShowLog(string message);
        static public void Info(string s){
            Console.ForegroundColor=ConsoleColor.Green;
            Console.WriteLine(string.Format("Info: {0}",s));
            Console.ResetColor();
        }
        static public void Warning(string s){
            Console.ForegroundColor=ConsoleColor.Red;
            Console.WriteLine(string.Format("Warning {0}",s));
            Console.ResetColor();
        }
        public static void TestShowLog()
        {
            ShowLog showLog;
            showLog=Info;
            showLog("Thong bao !");

            showLog=Warning;
            showLog("Warning !");

            
        }
    }
}