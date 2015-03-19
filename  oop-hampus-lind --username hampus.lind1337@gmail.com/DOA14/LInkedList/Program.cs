using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinkedList
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Add First:");
            LinkedList myList1 = new LinkedList();

            //AddFirst & printAllNodes
            myList1.AddFirst("Yo");
            myList1.AddFirst("Hey");
            myList1.AddFirst("Wazzap");
            myList1.printAll();

            Console.WriteLine();
            Console.WriteLine("Add Last:");
            LinkedList myList2 = new LinkedList();

            //AddLast & printAllNodes
            myList2.AddLast("Yo");
            myList2.AddLast("Hey");
            myList2.AddLast("Wazzap");
            myList2.printAll();

            //Contains
            Console.WriteLine();
            Console.WriteLine("myList2.Contains(\"Tja\"): ");
            Console.WriteLine(myList2.Contains("Tja"));

            //isEmpty
            Console.WriteLine();
            Console.WriteLine("myList2.isEmpty(): ");
            Console.WriteLine(myList2.isEmpty());

            //Clear & isEmpty
            Console.WriteLine();
            Console.WriteLine("myList2.clear() == empty?: ");
            myList2.Clear();
            Console.WriteLine(myList2.isEmpty());

            //RemoveFirst
            Console.WriteLine();
            Console.WriteLine("myList1.RemoveFirst");
            myList1.RemoveFirst();
            myList1.printAll();

            //RemoveLast 
            Console.WriteLine();
            Console.WriteLine("myList1.RemoveLast");
            myList1.RemoveLast();
            myList1.printAll();

            //Remove
            Console.WriteLine();
            Console.WriteLine("myList1.Remove()");
            myList1.Remove("Hey");
            myList1.printAll();

            Console.ReadLine();
        }
    }
}
