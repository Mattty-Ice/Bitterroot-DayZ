class CfgPatches
{
	class Bitterroot
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={"DZ_Data", "DZ_Surfaces"};
		author="MatttyIce";
		url="none";
	};
};

// scenes for the mission in main menu
class CfgCharacterScenes
{
	class Bitterroot
	{
		class loc1
		{
			target[] = {4353.24, 3178.16, 27.91};
			position[] = {4361.72, 3172.31, 1.5};
			fov = 0.5236;
			date[] = {2011, 10, 11, 11, 22};
			overcast = 0.15;
			rain = 0.0;
			fog = 0.0;
		};
	};
};

// actual cfgworlds class
class CfgWorlds
{
	
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		class Grid;
	};
	initWorld = "Bitterroot";
	class Bitterroot: ChernarusPlus
	{
		// name of the world
		description = "Bitterroot";
		
		// position on Earth (for sky simulation)
		latitude = -51;	// positive is south
		longitude = 30;	// positive is east
		mapZone = 36; //UTM zone https://mangomap.com/robertyoung/maps/69585/what-utm-zone-am-i-in-#
		
		// link of wrp file (exported from Terrain Builder)
		worldName = "Bitterroot\world\Bitterroot.wrp";
		
		// link of default central economy files for this terrain
		// (game will look into this folder when you attempt to init CE in your mission)
		ceFiles = "Bitterroot\ce";

		// navmesh definition (path for navmesh inside hpp)
		class Navmesh
		{
			navmeshName = "Bitterroot\navmesh\navmesh.nm";
			filterIsolatedIslandsOnLoad = true;
			visualiseOffset = 0.0;

			class GenParams
			{
				tileWidth = 50.0;
				cellSize1 = 0.25;
				cellSize2 = 0.1;
				cellSize3 = 0.1;
				
				filterIsolatedIslands = true;
				seedPosition[] = {6144, 0, 6144};
				
				class Agent
				{
					diameter = 0.6;
					
					standHeight = 1.5;
					crouchHeight = 1.0;
					proneHeight = 0.5;
					
					maxStepHeight = 0.45;
					maxSlope = 60.0;
				};
				
				class Links
				{	
					class ZedJump387_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66ff0000;
					};
					class ZedJump388_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66dd5500;
					};
					class ZedJump387_110
					{
						jumpLength = 3.90;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66008000;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x660000ff;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"climb"};
						color = 0x669400d3;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump2";
						flags[] = {"jumpOver"};
						color = 0x66aaaaFF;
					};
					class Fence110_160deer 
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump3";
						flags[] = {"jumpOver"};
						color = 0x6624fff8;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
				};
			};
		};
		
		// default time and date
		startTime="8:30";
		startDate="11/10/1985"; //I think it is Day/Month/Year
		startWeather=0.05;
		startFog=0;
		forecastWeather=0.2;
		forecastFog=0.1;
		seagullPos[]={1272.842,150,14034.962};

		// for map init
		centerPosition[] = {6144, 0, 6144};
		
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = 10.0;
		clutterColoringFarSpeed = 5.0;
		clutterColoringFarStart = 5.0;
		
		clutterGrid = 1.3; //can affect performance
		clutterDist = 125; //also affects performance
		
		fullDetailDist = 18;
		noDetailDist = 85;
		
		terrainBlendMaxDarkenCoef = 0.5; //0.0 or 0.5
		terrainBlendMaxBrightenCoef = 0.5; //1.0 or 0.5
		satelliteNormalBlendStart = 18;
		satelliteNormalBlendEnd = 85;
		satelliteNormalOnDetail = 1;
		mapDrawingBrightnessModifier = 1.5;

		// base height for volFog (see CAWorld Weather class)
		volFogOffset = 1;
		
		// link of materials for detailed terrain surfaces (for specular to work)
		class UsedTerrainMaterials
		{
			material1 = "DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			material2 = "DZ\surfaces\data\terrain\cp_concrete2.rvmat";
			material3 = "DZ\surfaces\data\terrain\cp_dirt.rvmat";
			//material4 = "DZ\surfaces\data\terrain\cp_conifer_moss1.rvmat";
			material4 = "DZ\surfaces\data\terrain\cp_conifer_common1.rvmat";
			//material5 = "DZ\surfaces\data\terrain\cp_broadleaf_dense1.rvmat";
			material5 = "DZ\surfaces\data\terrain\cp_broadleaf_sparse1.rvmat";
			material6 = "DZ\surfaces\data\terrain\cp_grass.rvmat";
			material7 = "DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material8 = "DZ\surfaces\data\terrain\cp_gravel.rvmat";
			material9 = "DZ\surfaces\data\terrain\cp_rock.rvmat";
		};
		
		// mid-distance noise to prevent seeing bluriness of satellite texture at those distances
		//midDetailTexture = "ff15\Bitterroot\data\ff15_middle_sat_mco.paa";
		
		// normal map for shadowing of grass-clutter
		//terrainNormalTexture = "Bitterroot\data\Bitterroot_global_nohq.paa";
		
		// override for sea materials (enfusion materials)
		oceanMaterial="graphics\materials\water\oceanold_samplemap.emat";
		oceanNiceMaterial="graphics\materials\water\oceanold_samplemap.emat";
		oceanStormMaterial="graphics\materials\water\oceanold_samplemap.emat";
		
		// generated terrain outside of the map borders
		class OutsideTerrain
		{
			satellite = "DZ\surfaces\data\terrain\cp_grass_ca.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture	= "DZ\surfaces\data\terrain\cp_grass.rvmat";
				};
			};
		};

		// 2d map location names
		class Names
		{
			#include "Bitterroot.hpp"
		};

		// 2d map airfields
		
		ilsPosition[] = {3330.0, 3610.0};
		ilsDirection[] = {-1.0, 0.08, 0.0};
		ilsTaxiOff[] =
		{
			3520.0,3610.0,
			4040.0,3610.0,
			4050.0,3600.0,
			4050.0,3580.0,
			4045.0,3575.0,
			4040.0,3572.0,
			3540.0,3572.0
		};
		ilsTaxiIn[] =
		{
			3540.0,3572.0,
			3388.0,3572.0,
			3382.0,3578.0,
			3382.0,3600.0,
			3400.0,3610.0
		};
		drawTaxiway = false;
		class SecondaryAirports	{};
		

		// 2d map grid
		class Grid
		{
			offsetX = 0; // unless using a weird northing/easting make 0
			offsetY = 12288; //again in meters, make it the same as map size
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1.0;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		
		// 2D map item params
		
		mapDisplayNameKey = "Bitterroot Map";
		mapDescriptionKey = "A map of Bitterroot and the surrounding areas";
		mapTextureClosed = "dz\gear\navigation\data\map_chernarus_co.paa";
		mapTextureOpened = "dz\structures\signs\tourist\data\karta_co.paa";
		mapTextureLegend = "dz\structures\signs\tourist\data\karta_side_co.paa";
		//userMapPath = "Bitterroot\data\usermap";
		
		
		minTreesInForestSquare=3;
		minRocksInRockSquare=4;
		
		soundMapAttenCoef = 0.01;		// sound map params
		class SoundMapValues
		{
			treehard = 0.03;
			treesoft = 0.03;
			bushhard = 0.0;
			bushsoft = 0.0;
			forest = 1.0;
			house = 0.3;
			church = 0.5;
		};
		class Sounds
		{
			sounds[] = {};
		};
		
		// ambient life (flies, leaves,..)
		class Ambient
		{
			class BigInsects
			{
				radius=20;
				cost="(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class BigInsectsAquatic
			{
				radius=20;
				cost="(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
				};
			};
			class SmallInsects
			{
				radius=3;
				cost="(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class NightInsects
			{
				radius=3;
				cost="(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
				};
			};
			class WindClutter
			{
				radius=10;
				cost="((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindGrass2
					{
						probability="0.4 - 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindRock1
					{
						probability="0.4 * hills";
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
			class NoWindClutter
			{
				radius=15;
				cost=8;
				class Species
				{
					class FxWindPollen1
					{
						probability=1;
						cost=1;
					};
					class FxCrWindLeaf1
					{
						probability="0.2 * trees";
						cost=1;
					};
					class FxCrWindLeaf2
					{
						probability="0.1 * trees + 0.2";
						cost=1;
					};
					class FxCrWindLeaf3
					{
						probability="0.1 * trees";
						cost=1;
					};
				};
			};
		};
	};
};

class CfgWorldList
{
	class Bitterroot
	{
	};
};
