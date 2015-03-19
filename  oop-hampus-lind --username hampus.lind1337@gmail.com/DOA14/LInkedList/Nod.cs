using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;
namespace LinkedList
{
    
    public class Nod
    {
        public Nod next, previous;
        
        public Object data;
        
        public Nod()
        {
            next = previous = null;
        }
        
        public Nod(Object T)
        {
            this.data = T;
        }
        ~Nod()
        {
        }
    }
}
