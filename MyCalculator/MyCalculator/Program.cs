using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CliDll;

namespace MyCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Arith arith = new Arith();
            long back1 = arith.AddCli(1, 2);
            Console.WriteLine(back1.ToString());
            long back2 = arith.SubCli(3, 4);
            Console.WriteLine(back2.ToString());
            long back3 = arith.MulCli(4, 5);
            Console.WriteLine(back3.ToString());
            long back4 = arith.DivCli(8, 4);
            Console.WriteLine(back4.ToString());
            Console.ReadLine();
        }
    }
}
