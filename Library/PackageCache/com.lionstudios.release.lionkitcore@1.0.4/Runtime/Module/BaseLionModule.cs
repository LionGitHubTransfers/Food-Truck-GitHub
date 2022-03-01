using LionStudios.Suite.Core;

namespace LionStudios.Suite.Core
{
    public abstract class BaseLionModule : ILionModule
    {
        public abstract int Priority { get; }
        public abstract void OnInitialize(LionCoreContext ctx);
    }   
}