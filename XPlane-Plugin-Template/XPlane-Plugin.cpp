#include "XPLM/XPLMPlugin.h"
#include "XPLM/XPLMUtilities.h"  // Include X-Plane SDK Utilities header for XPLMDebugString

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
    XPLMDebugString("Plugin started: ");
    XPLMDebugString(gPluginName);
    XPLMDebugString("\n");

    // Register additional callbacks if needed

    return 1; // Return 1 for success, 0 for failure
}

PLUGIN_API void XPluginStop()
{
    // Clean up resources, unregister callbacks, etc.
    XPLMDebugString("Plugin stopped: ");
    XPLMDebugString(gPluginName);
    XPLMDebugString("\n");
}

PLUGIN_API void XPluginDisable()
{
    // Optional: Clean up resources that are only needed while enabled
    XPLMDebugString("Plugin disabled: ");
    XPLMDebugString(gPluginName);
    XPLMDebugString("\n");
}

PLUGIN_API int XPluginEnable()
{
    // Optional: Initialize resources that are only needed while enabled
    XPLMDebugString("Plugin enabled: ");
    XPLMDebugString(gPluginName);
    XPLMDebugString("\n");
    return 1; // Return 1 for success, 0 for failure
}

PLUGIN_API void XPluginReceiveMessage(XPLMPluginID inFrom, int inMsg, void* inParam)
{
    // Handle incoming messages from X-Plane or other plugins
    char msg[50];
    snprintf(msg, sizeof(msg), "Received message from plugin or X-Plane: %d\n", inMsg);
    XPLMDebugString(msg);
}
