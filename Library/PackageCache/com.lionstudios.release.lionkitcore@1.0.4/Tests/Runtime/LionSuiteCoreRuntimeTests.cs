using System.Collections;
using System.Collections.Generic;
using LionStudios.Suite.Core;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace LionStudios.Suite.Core
{
    public class Core
    {
        [Test]
        public void ContextExists()
        {
            Assert.NotNull(LionCore.GetContext());
        }

        [Test]
        public void SettingsContextCheck()
        {
            LionCoreContext ctx = LionCore.GetContext();
            Assert.Greater(ctx.RegisteredSettings.Length, 0);
        }
    }
}