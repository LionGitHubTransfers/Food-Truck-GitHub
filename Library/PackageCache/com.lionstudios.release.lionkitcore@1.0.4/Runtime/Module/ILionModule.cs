using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LionStudios.Suite.Core
{
/**
    @api {set} /LionCore ILionModule
    @apiName LionCore ILionModule
    @apiGroup LionCore
    @apiVersion 1.0.0
        
    *@apiDescription 
    * - __Use Case__: Identify a module that needs to be initialized at runtime
    *
    * - Does not require a ILionSettingsProvider class
    *
    *
    *
    *
    * @apiExample Example of usage:
    *
    * using LionStudios.Suite.Core;
    *
    * public class FooModule : ILionModule
    * {
    *    public void OnInitialize(LionCoreContext ctx)
    *    {
    *        // Debug log for console
    *        LionDebug.Log("Initialized Foo Module!");
    *
    *        // Add information to Lion Debugger tool
    *        LionDebugger.AddInfo(“Debug info”);
    *    }
    * }

*/
    public interface ILionModule
    {
        
        int Priority { get; }
        
        void OnInitialize(LionCoreContext ctx);
    }
}