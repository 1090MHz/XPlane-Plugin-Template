#include "XPLM/XPLMPlugin.h"
#include <cstdio> // For printf, just for demonstration

// Plugin name, signature, and description
const char* gPluginName = "XPlanePluginTemplate";
const char* gPluginSignature = "github.1090MHz.xplaneplugin";
const char* gPluginDescription = "A sample X-Plane plugin";

// Callbacks
PLUGIN_API int XPluginStart(char* outName, char* outSig, char* outDesc)
{
    // Initialize plugin name, signature, and description
    strcpy(outName, gPluginName);
    strcpy(outSig, gPluginSignature);
    strcpy(outDesc, gPluginDescription);

    // Plugin initialization code
    printf("Plugin started: %s\n", gPluginName);

    // Register additional callbacks if needed

    return 1; // Return 1 for success, 0 for failure
}

PLUGIN_API void XPluginStop()
{
    // Clean up resources, unregister callbacks, etc.
    printf("Plugin stopped: %s\n", gPluginName);
}

PLUGIN_API void XPluginDisable()
{
    // Optional: Clean up resources that are only needed while enabled
    printf("Plugin disabled: %s\n", gPluginName);
}

PLUGIN_API int XPluginEnable()
{
    // Optional: Initialize resources that are only needed while enabled
    printf("Plugin enabled: %s\n", gPluginName);
    return 1; // Return 1 for success, 0 for failure
}

PLUGIN_API void XPluginReceiveMessage(XPLMPluginID inFrom, int inMsg, void* inParam)
{
    // Handle incoming messages from X-Plane or other plugins
    printf("Received message from plugin or X-Plane: %d\n", inMsg);
}
