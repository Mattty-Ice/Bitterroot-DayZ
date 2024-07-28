void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}
	
	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();
		
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

	switch (Math.RandomInt(0, 7)) { 
	
	case 0:
	// Kits0
	player.GetInventory().CreateInInventory("Jeans_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_MadeinUSA");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Blue");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("MF_Snack_Puffers");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break;

	case 1: 
	// Kits1
	player.GetInventory().CreateInInventory("Jeans_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_Abibas");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Brown");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Green");itemBs = ItemBase.Cast(itemEnt);		
	player.GetInventory().CreateInInventory("MF_Snack_PerkyJerky");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break;
	
	case 2: 
	// Kits2
	player.GetInventory().CreateInInventory("Jeans_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_BrootBrew");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Red");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("MF_Beer_PBR");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
	
	case 3: 
	// Kits3
	player.GetInventory().CreateInInventory("Jeans_Grey");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_BrootGolf");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Sneakers_Gray");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_White");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_Snack_Bittles");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
	
	case 4: 
	// Kits4
	player.GetInventory().CreateInInventory("Jeans_BlueDark");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_Fnord");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Sneakers_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Yellow");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_Snack_HerleyChocolate");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
	
	case 5: 
	// Kits5
	player.GetInventory().CreateInInventory("Jeans_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_BrootNature");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Green");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Yellow");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("MF_Snack_PB");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break; 
	
	case 6: 
	// Kits6
	player.GetInventory().CreateInInventory("Jeans_Blue");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_TShirt_JohnDare");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("MF_Baseball_BigBass");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("AthleticShoes_Black");itemBs = ItemBase.Cast(itemEnt);
	player.GetInventory().CreateInInventory("Chemlight_Yellow");itemBs = ItemBase.Cast(itemEnt);	
	player.GetInventory().CreateInInventory("MF_Snack_RanchCrunchies");itemBs = ItemBase.Cast(itemEnt); 
	player.GetInventory().CreateInInventory("BandageDressing_US");itemBs = ItemBase.Cast(itemEnt);
	
	break;
                                    }
};
};

Mission CreateCustomMission(string path)
{
    return new CustomMission();
}