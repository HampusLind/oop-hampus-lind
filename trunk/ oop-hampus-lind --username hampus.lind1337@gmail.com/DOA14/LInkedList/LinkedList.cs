using System;
using System.CodeDom;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using System.Text;
using System.Threading.Tasks;

namespace LinkedList
{

  
    public class LinkedList
    {
        private Nod head;
       
        public Nod First()
        {
            if (head == null)
            {
                throw new Exception("Empty list :( ");
            }
            else
                return head;
        }

       
        public Nod Last()
        {
            Nod n = this.head;
            while (n.next != null)
            {
                n = n.next;
            }
            return n;
        }

        
        public void printAll()
        {
            Nod current = head;
            while (current != null)
            {
                Console.WriteLine(current.data);
                current = current.next;
            }
        }

      
        public void AddFirst(Object T)
        {
            Nod n = new Nod();
            n.data = T;
            n.next = head;
            head = n;
            if (head.next != null)
            {
                head.next.previous = head;
            }

        }

     
        public void AddLast(Object T)
        {
            if (head == null)
            {
                head = new Nod();
                head.data = T;
                head.next = null;
                head.previous = null;
            }
            else
            {
                Nod n = new Nod();
                n.data = T;
                Nod current = head;
                while (current.next != null)
                {
                    current = current.next;
                }
                current.next = n;
                n.previous = current;
            }
        }

       
        public bool isEmpty()
        {
            return head == null;
        }

     
        public void Clear()
        {
            while (!this.isEmpty())
            {
                this.RemoveFirst();
            }
            return;
        }

     
        public bool Contains(Object T)
        {
            Nod n = this.head;
            while (n != null)
            {
                Object d = n.data;
                if (d.Equals(T) == true)
                {
                    return true;
                }
                n = n.next;
            }
            return false;
        }

       
        public Nod Find(Object T)
        {
            Nod n = head;
            while (n != null)
            {
                if (n.data.Equals(T))
                {
                    return n;
                }
                n = n.next;
            }
            return null;
        }

       
        public void Remove(Object T)
        {
            Nod n = Find(T);
            if (n != null)
            {
                object data = n.data;
                if (n == First())
                {
                    this.RemoveFirst();
                }
                else if (n == Last())
                {
                    this.RemoveLast();
                }
                else
                {
                    n.next.previous = n.previous;
                    n.previous.next = n.next;
                }
            }
            else
            {
                return;
            }
        }
      
        public void RemoveFirst()
        {
            Nod n = head;
            if (head.next == null)
            {
                head = null;
            }
            else
            {
                n.next.previous = null;
                head = head.next;
            }
        }
     
        public void RemoveLast()
        {
            Nod toRemove = Last();
            if (head == null)
            {
                throw new Exception("Listan är tom");
            }
            if (toRemove == head)
            {
                head = null;
            }
            else
            {
                toRemove.previous.next = null;
                toRemove.previous = null;
            }
        }
    }
}
