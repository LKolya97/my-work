using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication2
{
    class Program
    {
        class Vector1
        {
            public float x, y, z;
            public void Constructor(float x1, float y1, float z1)
            {
                x = x1;
                y = y1;
                z = z1;
            }
            public float modul()
            {
                double b = Math.Sqrt(Math.Pow(x, 2) + Math.Pow(y, 2) + Math.Pow(z, 2));
                float modul1 = (float)b;
                return modul1;
            }
           public void addtovector(float x2, float y2, float z2)
            {
                x += x2;
                y += y2;
                z += z2;
            }
        }
        static void Main(string[] args)
        {

        }
    }
}
