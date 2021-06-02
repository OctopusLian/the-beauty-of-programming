// C# code
static void MakeUsage(float level)
{
     PerformanceCounter p = new PerformanceCounter("Processor",
       "%Processor Time", "_Total");     

     if(p==NULL)
     {
          return
     }

     while(true)
     {
          if(p.NextValue() > level) 
               System.Threading.Thread.Sleep(10); 
     }
}
