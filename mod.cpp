class CfgPatches
{
    class MyAutorunMod
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods
{
    class MyAutorunMod
    {
        name = "My Autorun Mod";
        picture = "";
        action = "";
        description = "A simple autorun mod for DayZ that triggers with Numpad +";
        version = "1.0";
        credits = "Your Name";
        author = "Your Name";
        type = "mod";
        dependencies[] = {};
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"MyAutorunMod/scripts/3_Game"};
            };
        };
    };
};