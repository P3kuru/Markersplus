class CfgPatches
{
    class mplus_markers
    {
        name = "Markers+";
        author = "Pek";
        tooltipOwned = "Markersplus By Pek";
        overview = "Markersplus allows platoon/company level Command elements to better manage their markers on the map using different symbols, text and terms.";
        requiredVersion = 0.1;
    };
};

class CfgMarkerClasses
{
    class mplus_tasks { displayName = "(M+) Tasks"; };
    class mplus_movement { displayName = "(M+) Movement and Maneuver"; };
    class mplus_points { displayName = "(M+) Points"; };
};

class CfgMarkers
{
    // Base Classes
    class mplus_BaseMarker
    {
        icon = "markersplus\data\img\aapoint.paa";
        name = "Base Marker"
        color[] = {0,0,0,1};
        size = 32;
        shadow = 0;
        scope = 2;
        showEditorMarkerColor = 1;
    };
    
    class mplus_aapoint: mplus_BaseMarker
    {
        markerClass = "mplus_points";
        name = "Generic Point";
        icon = "markersplus\data\img\aapoint.paa";
    };
    
    class mplus_ambush: mplus_BaseMarker
    {
        markerClass = "mplus_tasks";
        name = "Ambush";
        icon = "markersplus\data\img\ambush.paa";
    };

    // Tasks - Use inheritance to specify unique icons
    class mplus_attackbyfire: mplus_ambush { name = "Attack by Fire"; icon = "markersplus\data\img\attackbyfire.paa"; };
    class mplus_breach: mplus_ambush { name = "Breach"; icon = "markersplus\data\img\breach.paa"; };
    class mplus_bypass: mplus_ambush { name = "Bypass"; icon = "markersplus\data\img\bypass.paa"; };
    class mplus_clear: mplus_ambush { name = "Clear"; icon = "markersplus\data\img\clear.paa"; };
    class mplus_disengage: mplus_ambush { name = "Disengage"; icon = "markersplus\data\img\disengage.paa"; };
    class mplus_exfiltrate: mplus_ambush { name = "Exfiltrate"; icon = "markersplus\data\img\exfiltrate.paa"; };
    // (Add other Task markers similarly, keeping only `name` and `icon`)

    // Movement and Maneuver
    class mplus_feintattack: mplus_BaseMarker
    {
        markerClass = "mplus_movement";
        name = "Feint Attack Arrow";
        icon = "markersplus\data\img\feintattack.paa";
    };
    class mplus_mainattack: mplus_feintattack { name = "Main Attack Arrow"; icon = "markersplus\data\img\mainattack.paa"; };
    class mplus_phaseline: mplus_feintattack { name = "Phaseline"; icon = "markersplus\data\img\phaseline.paa"; };

    // Points
    class mplus_checkpoint: mplus_aapoint { name = "Checkpoint"; icon = "markersplus\data\img\checkpoint.paa"; };
    class mplus_linkuppoint: mplus_checkpoint { name = "Linkup Point"; icon = "markersplus\data\img\linkuppoint.paa"; };
    class mplus_passagepoint: mplus_checkpoint { name = "Passage Point"; icon = "markersplus\data\img\passagepoint.paa"; };
    class mplus_rallypoint: mplus_checkpoint { name = "Rally Point"; icon = "markersplus\data\img\rallypoint.paa"; };
    class mplus_releasepoint: mplus_checkpoint { name = "Release Point"; icon = "markersplus\data\img\releasepoint.paa"; };
    class mplus_startpoint: mplus_checkpoint { name = "Start Point"; icon = "markersplus\data\img\startpoint.paa"; };
    class mplus_departurepoint: mplus_checkpoint { name = "Point of Departure"; icon = "markersplus\data\img\departurepoint.paa"; };
    class mplus_civpoint: mplus_checkpoint { name = "Civilian Collection Point"; icon = "markersplus\data\img\civpoint.paa"; };
    class mplus_iprp: mplus_checkpoint { name = "Isolated Personnel Recovery Point"; icon = "markersplus\data\img\iprp.paa"; };
    class mplus_sarpoint: mplus_checkpoint { name = "Search and Rescue Point"; icon = "markersplus\data\img\sarpoint.paa"; };
    class mplus_ammopoint: mplus_checkpoint { name = "Ammunition Supply Point"; icon = "markersplus\data\img\ammopoint.paa"; };
    class mplus_ccppoint: mplus_checkpoint { name = "Casualty Collection Point"; icon = "markersplus\data\img\ccppoint.paa"; };
    class mplus_medevac: mplus_checkpoint { name = "Medical Evacuation Point"; icon = "markersplus\data\img\medevac.paa"; };
    class mplus_r3p: mplus_checkpoint { name = "Rearm, Refuel, and Resupply Point"; icon = "markersplus\data\img\r3p.paa"; };
    class mplus_waypoint: mplus_checkpoint { name = "Waypoint"; icon = "markersplus\data\img\waypoint.paa"; };
};
