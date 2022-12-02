using System.Diagnostics;
using System;

class Program 
{ 
    static int[] data = new int[10000000];

    public static void calc(int startingIndex, int reps)

    {
        var total = startingIndex + reps;
        for (var i = startingIndex; i < total; i++)
        {
            data[i] = (int)(Math.Atan(i) * Math.Acos(i) * Math.Cos(i) * Math.Sin(i));
        }
    }

    static void Main()
    {
        var len = data.Length;
        double elapsed_time = 0;

        // Sequential
        var stopwatch = Stopwatch.StartNew();
        calc(0, len);
        stopwatch.Stop();
        elapsed_time = stopwatch.ElapsedMilliseconds;
        Console.WriteLine("Sequentially, calc takes " + elapsed_time + " milliseconds to run.");

        // reset stopwatch
        stopwatch = Stopwatch.StartNew();
        // Prep the threads (divided into four pieces)
        Thread thread1 = new Thread(() => calc(0, len / 4));
        Thread thread2 = new Thread(() => calc(len / 4, len / 4));
        Thread thread3 = new Thread(() => calc(len / 4 * 2, len / 4));
        Thread thread4 = new Thread(() => calc(len / 4 * 3, len / 4));
        // get your engines running
        thread1.Start();
        thread2.Start();
        thread3.Start();
        thread4.Start();
        // GO
        thread1.Join();
        thread2.Join();
        thread3.Join();
        thread4.Join();
        // joined
        stopwatch.Stop();
        elapsed_time = stopwatch.ElapsedMilliseconds;
        Console.WriteLine("Multithreaded, calc takes " + elapsed_time + " milliseconds to run.");
    }
}


