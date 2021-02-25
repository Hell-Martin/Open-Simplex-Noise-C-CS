using System;

namespace CS
{
    class Program
    {
        static void Main(string[] args)
        {
            NoiseTest.OpenSimplexNoise osn = new NoiseTest.OpenSimplexNoise(0); // Seed  set to 0
            for (int i = 0; i < 100; i++)
            {
                double terrainHeight = osn.Evaluate(i,0); // This calls the 2D evaluator
                Console.WriteLine("value for x = " + i + " : " + terrainHeight);
                
            }
        }
    }
}
