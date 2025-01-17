/*

   Copyright [2008] [Trevor Hogan]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

   CODE PORTED FROM THE ORIGINAL GHOST PROJECT: http://ghost.pwner.org/

*/

#include "ghost.h"
#include "util.h"
#include "config.h"
#include "ghostdb.h"

//
// CGHostDB
//

CGHostDB :: CGHostDB( CConfig *CFG ) : m_HasError( false )
{

}

CGHostDB :: ~CGHostDB( )
{

}

void CGHostDB :: RecoverCallable( CBaseCallable *callable )
{

}

bool CGHostDB :: Begin( )
{
	return true;
}

bool CGHostDB :: Commit( )
{
	return true;
}

uint32_t CGHostDB :: RegAdd( string user, string server, string mail, string password, string type )
{
        return 0;
}

string CGHostDB :: StatsSystem( string user, string input, uint32_t one, string type )
{
        return "";
}

uint32_t CGHostDB :: PWCheck(  string user )
{
        return false;
}

uint32_t CGHostDB :: PassCheck(  string user, string pass, uint32_t st )
{
        return 0;
}

uint32_t CGHostDB :: pm( string user, string listener, uint32_t status, string message, string type )
{
        return 0;
}

uint32_t CGHostDB :: StoreLog( uint32_t chatid, string game, vector<string> admin )
{
        return 0;
}

uint32_t CGHostDB :: gs( uint32_t chatid, string gn, uint32_t st, uint32_t gametype )
{
        return 0;
}

uint32_t CGHostDB :: penp( string name, string reason, string admin, uint32_t amount, string type )
{
        return 0;
}

vector<string> CGHostDB :: PList( string server )
{
        return vector<string>( );
}

vector<string> CGHostDB :: FlameList( )
{
        return vector<string>( );
}

vector<string> CGHostDB :: AnnounceList( )
{
        return vector<string>( );
}

vector<string> CGHostDB :: DCountryList( )
{
        return vector<string>( );
}

uint32_t CGHostDB :: BanCount( string server )
{
	return 0;
}

CDBBan *CGHostDB :: BanCheck( string server, string user, string ip )
{
	return NULL;
}

string CGHostDB :: BanCheck2( string server, string user, string type )
{
        return "";
}

string CGHostDB :: BanAdd( string server, string user, string ip, string gamename, string admin, string reason, uint32_t bantime, string country )
{
	return false;
}

bool CGHostDB :: PUp( string name, uint32_t level, string realm, string user )
{
        return false;
}

bool CGHostDB :: BanRemove( string server, string user )
{
	return false;
}

bool CGHostDB :: TBRemove( string server )
{
        return false;
}

bool CGHostDB :: BanRemove( string user )
{
	return false;
}

vector<CDBBan *> CGHostDB :: BanList( string server )
{
	return vector<CDBBan *>( );
}

vector<string> CGHostDB :: CommandList( )
{
	return vector<string>( );
}

bool CGHostDB :: Clean( )
{
        return false;
}

uint32_t CGHostDB :: GameAdd( string server, string map, string gamename, string ownername, uint32_t duration, uint32_t gamestate, string creatorname, string creatorserver, uint32_t gametype )
{
	return 0;
}

string CGHostDB :: GameUpdate( string map, string gamename, string ownername, string creatorname, uint32_t players, string usernames, uint32_t slotsTotal, uint32_t totalGames, uint32_t totalPlayers, bool add )
{
	return "";
}

uint32_t CGHostDB :: GamePlayerAdd( uint32_t gameid, string name, string ip, uint32_t spoofed, string spoofedrealm, uint32_t reserved, uint32_t loadingtime, uint32_t left, string leftreason, uint32_t team, uint32_t colour )
{
	return 0;
}

uint32_t CGHostDB :: GamePlayerCount( string name )
{
	return 0;
}

CDBGamePlayerSummary *CGHostDB :: GamePlayerSummaryCheck( string name )
{
	return NULL;
}

CDBStatsPlayerSummary *CGHostDB :: StatsPlayerSummaryCheck( string name )
{
        return NULL;
}

CDBInboxSummary *CGHostDB :: InboxSummaryCheck( string name )
{
        return NULL;
}

uint32_t CGHostDB :: DotAGameAdd( uint32_t gameid, uint32_t winner, uint32_t min, uint32_t sec )
{
	return 0;
}

uint32_t CGHostDB :: DotAPlayerAdd( uint32_t gameid, uint32_t colour, uint32_t kills, uint32_t deaths, uint32_t creepkills, uint32_t creepdenies, uint32_t assists, uint32_t gold, uint32_t neutralkills, string item1, string item2, string item3, string item4, string item5, string item6, string hero, uint32_t newcolour, uint32_t towerkills, uint32_t raxkills, uint32_t courierkills, uint32_t level )
{
	return 0;
}

uint32_t CGHostDB :: DotAPlayerCount( string name )
{
	return 0;
}

CDBDotAPlayerSummary *CGHostDB :: DotAPlayerSummaryCheck( string name )
{
	return NULL;
}

string CGHostDB :: FromCheck( string ip )
{
	return "??";
}

bool CGHostDB :: DownloadAdd( string map, uint32_t mapsize, string name, string ip, uint32_t spoofed, string spoofedrealm, uint32_t downloadtime )
{
	return false;
}

uint32_t CGHostDB :: W3MMDPlayerAdd( string category, uint32_t gameid, uint32_t pid, string name, string flag, uint32_t leaver, uint32_t practicing )
{
	return 0;
}

bool CGHostDB :: W3MMDVarAdd( uint32_t gameid, map<VarP,int32_t> var_ints )
{
	return false;
}

bool CGHostDB :: W3MMDVarAdd( uint32_t gameid, map<VarP,double> var_reals )
{
	return false;
}

bool CGHostDB :: W3MMDVarAdd( uint32_t gameid, map<VarP,string> var_strings )
{
	return false;
}

void CGHostDB :: CreateThread( CBaseCallable *callable )
{
	callable->SetReady( true );
}

CCallableFromCheck *CGHostDB :: ThreadedFromCheck( string ip )
{
        return NULL;
}

CCallableRegAdd *CGHostDB :: ThreadedRegAdd( string user, string server, string mail, string password, string type )
{
        return NULL;
}

CCallableStatsSystem *CGHostDB :: ThreadedStatsSystem( string user, string input, uint32_t one, string type )
{
        return NULL;
}

CCallablePWCheck *CGHostDB :: ThreadedPWCheck( string user )
{
        return NULL;
}

CCallablePassCheck *CGHostDB :: ThreadedPassCheck( string user, string pass, uint32_t st )
{
        return NULL;
}

CCallablepm *CGHostDB :: Threadedpm( string user, string listener, uint32_t status, string message, string type )
{
        return NULL;
}

CCallablePList *CGHostDB :: ThreadedPList( string server )
{
        return NULL;
}

CCallableFlameList *CGHostDB :: ThreadedFlameList( )
{
        return NULL;
}

CCallableAnnounceList *CGHostDB :: ThreadedAnnounceList( )
{
        return NULL;
}

CCallableDCountryList *CGHostDB :: ThreadedDCountryList( )
{
        return NULL;
}

CCallableStoreLog *CGHostDB :: ThreadedStoreLog( uint32_t chatid, string game, vector<string> admin )
{
        return NULL;
}

CCallablegs *CGHostDB :: Threadedgs( uint32_t chatid, string gn, uint32_t st, uint32_t gametype )
{
        return NULL;
}

CCallablepenp *CGHostDB :: Threadedpenp( string name, string reason, string admin, uint32_t amount, string type )
{
        return NULL;
}

CCallableBanCount *CGHostDB :: ThreadedBanCount( string server )
{
	return NULL;
}

CCallableBanCheck *CGHostDB :: ThreadedBanCheck( string server, string user, string ip )
{
	return NULL;
}

CCallableBanCheck2 *CGHostDB :: ThreadedBanCheck2( string server, string user, string type )
{
        return NULL;
}

CCallableBanAdd *CGHostDB :: ThreadedBanAdd( string server, string user, string ip, string gamename, string admin, string reason, uint32_t bantime, string country )
{
	return NULL;
}

CCallablePUp *CGHostDB :: ThreadedPUp( string name, uint32_t level, string realm, string user )
{
        return NULL;
}

CCallableBanRemove *CGHostDB :: ThreadedBanRemove( string server, string user )
{
	return NULL;
}

CCallableBanRemove *CGHostDB :: ThreadedBanRemove( string user )
{
	return NULL;
}

CCallableBanList *CGHostDB :: ThreadedBanList( string server )
{
	return NULL;
}

CCallableTBRemove *CGHostDB :: ThreadedTBRemove( string server )
{
        return NULL;
}

CCallableCommandList *CGHostDB :: ThreadedCommandList( )
{
	return NULL;
}

CCallableClean *CGHostDB :: ThreadedClean( )
{
        return NULL;
}

CCallableGameAdd *CGHostDB :: ThreadedGameAdd( string server, string map, string gamename, string ownername, uint32_t duration, uint32_t gamestate, string creatorname, string creatorserver, uint32_t gametype, vector<string> lobbylog, vector<string> gamelog )
{
	return NULL;
}

CCallableGameUpdate *CGHostDB :: ThreadedGameUpdate( string map, string gamename, string ownername, string creatorname, uint32_t players, string usernames, uint32_t slotsTotal, uint32_t totalGames, uint32_t totalPlayers, bool add )
{
	return NULL;
}

CCallableGamePlayerAdd *CGHostDB :: ThreadedGamePlayerAdd( uint32_t gameid, string name, string ip, uint32_t spoofed, string spoofedrealm, uint32_t reserved, uint32_t loadingtime, uint32_t left, string leftreason, uint32_t team, uint32_t colour )
{
	return NULL;
}

CCallableGamePlayerSummaryCheck *CGHostDB :: ThreadedGamePlayerSummaryCheck( string name )
{
	return NULL;
}

CCallableStatsPlayerSummaryCheck *CGHostDB :: ThreadedStatsPlayerSummaryCheck( string name )
{
        return NULL;
}

CCallableInboxSummaryCheck *CGHostDB :: ThreadedInboxSummaryCheck( string name )
{
        return NULL;
}

CCallableDotAGameAdd *CGHostDB :: ThreadedDotAGameAdd( uint32_t gameid, uint32_t winner, uint32_t min, uint32_t sec )
{
	return NULL;
}

CCallableDotAPlayerAdd *CGHostDB :: ThreadedDotAPlayerAdd( uint32_t gameid, uint32_t colour, uint32_t kills, uint32_t deaths, uint32_t creepkills, uint32_t creepdenies, uint32_t assists, uint32_t gold, uint32_t neutralkills, string item1, string item2, string item3, string item4, string item5, string item6, string hero, uint32_t newcolour, uint32_t towerkills, uint32_t raxkills, uint32_t courierkills, uint32_t level )
{
	return NULL;
}

CCallableDotAPlayerSummaryCheck *CGHostDB :: ThreadedDotAPlayerSummaryCheck( string name )
{
	return NULL;
}

CCallableDownloadAdd *CGHostDB :: ThreadedDownloadAdd( string map, uint32_t mapsize, string name, string ip, uint32_t spoofed, string spoofedrealm, uint32_t downloadtime )
{
	return NULL;
}

CCallableScoreCheck *CGHostDB :: ThreadedScoreCheck( string category, string name, string server )
{
	return NULL;
}

CCallableW3MMDPlayerAdd *CGHostDB :: ThreadedW3MMDPlayerAdd( string category, uint32_t gameid, uint32_t pid, string name, string flag, uint32_t leaver, uint32_t practicing )
{
	return NULL;
}

CCallableW3MMDVarAdd *CGHostDB :: ThreadedW3MMDVarAdd( uint32_t gameid, map<VarP,int32_t> var_ints )
{
	return NULL;
}

CCallableW3MMDVarAdd *CGHostDB :: ThreadedW3MMDVarAdd( uint32_t gameid, map<VarP,double> var_reals )
{
	return NULL;
}

CCallableW3MMDVarAdd *CGHostDB :: ThreadedW3MMDVarAdd( uint32_t gameid, map<VarP,string> var_strings )
{
	return NULL;
}

//
// Callables
//

void CBaseCallable :: Init( )
{
	m_StartTicks = GetTicks( );
}

void CBaseCallable :: Close( )
{
	m_EndTicks = GetTicks( );
	m_Ready = true;
}

CCallableFromCheck :: ~CCallableFromCheck( )
{

}

CCallableRegAdd :: ~CCallableRegAdd( )
{

}

CCallableStatsSystem :: ~CCallableStatsSystem( )
{

}

CCallablePWCheck :: ~CCallablePWCheck( )
{

}

CCallablepm :: ~CCallablepm( )
{

}

CCallablePassCheck :: ~CCallablePassCheck( )
{

}

CCallablePList :: ~CCallablePList( )
{

}

CCallableFlameList :: ~CCallableFlameList( )
{

}

CCallableAnnounceList :: ~CCallableAnnounceList( )
{

}

CCallableDCountryList :: ~CCallableDCountryList( )
{

}

CCallableStoreLog :: ~CCallableStoreLog( )
{

}

CCallablegs :: ~CCallablegs( )
{

}

CCallablepenp :: ~CCallablepenp( )
{

}

CCallableBanCount :: ~CCallableBanCount( )
{

}

CCallableBanCheck :: ~CCallableBanCheck( )
{
	delete m_Result;
}

CCallableBanCheck2 :: ~CCallableBanCheck2( )
{

}

CCallableBanAdd :: ~CCallableBanAdd( )
{

}

CCallablePUp :: ~CCallablePUp( )
{

}

CCallableBanRemove :: ~CCallableBanRemove( )
{

}

CCallableBanList :: ~CCallableBanList( )
{
	// don't delete anything in m_Result here, it's the caller's responsibility
}

CCallableTBRemove :: ~CCallableTBRemove( )
{
        // don't delete anything in m_Result here, it's the caller's responsibility
}

CCallableCommandList :: ~CCallableCommandList( )
{
	// don't delete anything in m_Result here, it's the caller's responsibility
}

CCallableClean :: ~CCallableClean( )
{

}

CCallableGameAdd :: ~CCallableGameAdd( )
{

}

CCallableGameUpdate :: ~CCallableGameUpdate( )
{

}

CCallableGamePlayerAdd :: ~CCallableGamePlayerAdd( )
{

}

CCallableGamePlayerSummaryCheck :: ~CCallableGamePlayerSummaryCheck( )
{
	delete m_Result;
}

CCallableStatsPlayerSummaryCheck :: ~CCallableStatsPlayerSummaryCheck( )
{
        delete m_Result;
}

CCallableInboxSummaryCheck :: ~CCallableInboxSummaryCheck( )
{
        delete m_Result;
}

CCallableDotAGameAdd :: ~CCallableDotAGameAdd( )
{

}

CCallableDotAPlayerAdd :: ~CCallableDotAPlayerAdd( )
{

}

CCallableDotAPlayerSummaryCheck :: ~CCallableDotAPlayerSummaryCheck( )
{
	delete m_Result;
}

CCallableDownloadAdd :: ~CCallableDownloadAdd( )
{

}

CCallableScoreCheck :: ~CCallableScoreCheck( )
{

}

CCallableW3MMDPlayerAdd :: ~CCallableW3MMDPlayerAdd( )
{

}

CCallableW3MMDVarAdd :: ~CCallableW3MMDVarAdd( )
{

}

//
// CDBBan
//

CDBBan :: CDBBan( string nServer, string nName, string nIP, string nDate, string nGameName, string nAdmin, string nReason, string nExpireDate, string nMonths, string nDays, string nHours, string nMinutes ) : m_Server( nServer ), m_Name( nName ), m_IP( nIP ), m_Date( nDate ), m_GameName( nGameName ), m_Admin( nAdmin ), m_Reason( nReason ), m_ExpireDate( nExpireDate ), m_Months( nMonths ), m_Days( nDays ), m_Hours( nHours ), m_Minutes( nMinutes )
{

}

CDBBan :: ~CDBBan( )
{

}

//
// CDBGame
//

CDBGame :: CDBGame( uint32_t nID, string nServer, string nMap, string nDateTime, string nGameName, string nOwnerName, uint32_t nDuration ) : m_ID( nID ), m_Server( nServer ), m_Map( nMap ), m_DateTime( nDateTime ), m_GameName( nGameName ), m_OwnerName( nOwnerName ), m_Duration( nDuration )
{

}

CDBGame :: ~CDBGame( )
{

}

//
// CDBGamePlayer
//

CDBGamePlayer :: CDBGamePlayer( uint32_t nID, uint32_t nGameID, string nName, string nIP, uint32_t nSpoofed, string nSpoofedRealm, uint32_t nReserved, uint32_t nLoadingTime, uint32_t nLeft, string nLeftReason, uint32_t nTeam, uint32_t nColour )
    : m_ID( nID ), m_GameID( nGameID ), m_Name( nName ), m_IP( nIP ), m_Spoofed( nSpoofed ), m_SpoofedRealm( nSpoofedRealm ), m_Reserved( nReserved ), m_LoadingTime( nLoadingTime ), m_Left( nLeft ), m_LeftReason( nLeftReason ), m_Team( nTeam ), m_Colour( nColour )
{

}

CDBGamePlayer :: ~CDBGamePlayer( )
{

}

//
// CDBGamePlayerSummary
//

CDBGamePlayerSummary :: CDBGamePlayerSummary( string nServer, string nName, string nFirstGameDateTime, string nLastGameDateTime, uint32_t nTotalGames, uint32_t nMinLoadingTime, uint32_t nAvgLoadingTime, uint32_t nMaxLoadingTime, uint32_t nMinLeftPercent, uint32_t nAvgLeftPercent, uint32_t nMaxLeftPercent, uint32_t nMinDuration, uint32_t nAvgDuration, uint32_t nMaxDuration )
    : m_Server( nServer ), m_Name( nName ), m_FirstGameDateTime( nFirstGameDateTime ), m_LastGameDateTime( nLastGameDateTime ), m_TotalGames( nTotalGames ), m_MinLoadingTime( nMinLoadingTime ), m_AvgLoadingTime( nAvgLoadingTime ), m_MaxLoadingTime( nMaxLoadingTime ), m_MinLeftPercent( nMinLeftPercent ), m_AvgLeftPercent( nAvgLeftPercent ), m_MaxLeftPercent( nMaxLeftPercent ), m_MinDuration( nMinDuration ), m_AvgDuration( nAvgDuration ), m_MaxDuration( nMaxDuration )
{

}

CDBGamePlayerSummary :: ~CDBGamePlayerSummary( )
{

}

//
// CDBStatsPlayerSummary
//

CDBStatsPlayerSummary :: CDBStatsPlayerSummary( uint32_t nID, string nPlayer, string nPlayerlower, double nScore, uint32_t nGames, uint32_t nWins, uint32_t nLosses, uint32_t nDraw, uint32_t nKills, uint32_t nDeaths, uint32_t nAssists, uint32_t nCreeps, uint32_t nDenies, uint32_t nNeutrals, uint32_t nTowers, uint32_t nRax, uint32_t nStreak, uint32_t nMaxstreak, uint32_t nLosingstreak, uint32_t nMaxlosingstreak, uint32_t nZerodeaths, string nRealm, uint32_t nLeaves, uint32_t nALLCount, uint32_t nRankCount, uint32_t nForcedGproxy )
    : m_ID( nID ), m_Player( nPlayer ), m_Playerlower( nPlayerlower ), m_Score( nScore ), m_Games( nGames ), m_Wins( nWins ), m_Losses( nLosses ), m_Draw( nDraw ), m_Kills( nKills ), m_Deaths( nDeaths ), m_Assists( nAssists ), m_Creeps( nCreeps ), m_Denies( nDenies ), m_Neutrals( nNeutrals ), m_Towers( nTowers ), m_Rax( nRax ), m_Streak( nStreak ), m_Maxstreak( nMaxstreak ), m_Losingstreak( nLosingstreak ), m_Maxlosingstreak( nMaxlosingstreak ), m_Zerodeaths( nZerodeaths ), m_Realm( nRealm ), m_Leaves( nLeaves ), m_ALLCount( nALLCount ), m_RankCount( nRankCount ), m_ForcedGproxy( nForcedGproxy )
{

}

CDBStatsPlayerSummary :: ~CDBStatsPlayerSummary( )
{

}

//
// CDBInbox
//

CDBInboxSummary :: CDBInboxSummary( string nUser, string nMessage ) : m_User( nUser ), m_Message( nMessage )
{

}

CDBInboxSummary :: ~CDBInboxSummary( )
{

}

//
// CDBDotAGame
//

CDBDotAGame :: CDBDotAGame( uint32_t nID, uint32_t nGameID, uint32_t nWinner, uint32_t nMin, uint32_t nSec ) : m_ID( nID ), m_GameID( nGameID ), m_Winner( nWinner ), m_Min( nMin ), m_Sec( nSec )
{

}

CDBDotAGame :: ~CDBDotAGame( )
{

}

//
// CDBDotAPlayer
//

CDBDotAPlayer :: CDBDotAPlayer( ) : m_ID( 0 ), m_GameID( 0 ), m_Colour( 0 ), m_Kills( 0 ), m_Deaths( 0 ), m_CreepKills( 0 ), m_CreepDenies( 0 ), m_Assists( 0 ), m_Gold( 0 ), m_NeutralKills( 0 ), m_NewColour( 0 ), m_TowerKills( 0 ), m_RaxKills( 0 ), m_CourierKills( 0 ), m_Level( 0 )
{

}


CDBDotAPlayer :: CDBDotAPlayer( uint32_t nID, uint32_t nGameID, uint32_t nColour, uint32_t nKills, uint32_t nDeaths, uint32_t nCreepKills, uint32_t nCreepDenies, uint32_t nAssists, uint32_t nGold, uint32_t nNeutralKills, string nItem1, string nItem2, string nItem3, string nItem4, string nItem5, string nItem6, string nHero, uint32_t nNewColour, uint32_t nTowerKills, uint32_t nRaxKills, uint32_t nCourierKills, uint32_t nLevel )
    : m_ID( nID ), m_GameID( nGameID ), m_Colour( nColour ), m_Kills( nKills ), m_Deaths( nDeaths ), m_CreepKills( nCreepKills ), m_CreepDenies( nCreepDenies ), m_Assists( nAssists ), m_Gold( nGold ), m_NeutralKills( nNeutralKills ), m_Hero( nHero ), m_NewColour( nNewColour ), m_TowerKills( nTowerKills ), m_RaxKills( nRaxKills ), m_CourierKills( nCourierKills ), m_Level( nLevel )
{
	m_Items[0] = nItem1;
	m_Items[1] = nItem2;
	m_Items[2] = nItem3;
	m_Items[3] = nItem4;
	m_Items[4] = nItem5;
	m_Items[5] = nItem6;
}

CDBDotAPlayer :: ~CDBDotAPlayer( )
{

}

string CDBDotAPlayer :: GetItem( unsigned int i )
{
	if( i < 6 )
		return m_Items[i];

	return string( );
}

void CDBDotAPlayer :: SetItem( unsigned int i, string item )
{
	if( i < 6 )
		m_Items[i] = item;
}

//
// CDBDotAPlayerSummary
//

CDBDotAPlayerSummary :: CDBDotAPlayerSummary( string nServer, string nName, uint32_t nTotalGames, uint32_t nTotalWins, uint32_t nTotalLosses, uint32_t nTotalKills, uint32_t nTotalDeaths, uint32_t nTotalCreepKills, uint32_t nTotalCreepDenies, uint32_t nTotalAssists, uint32_t nTotalNeutralKills, uint32_t nTotalTowerKills, uint32_t nTotalRaxKills, uint32_t nTotalCourierKills ) : m_Server( nServer ), m_Name( nName ), m_TotalGames( nTotalGames ), m_TotalWins( nTotalWins ), m_TotalLosses( nTotalLosses ), m_TotalKills( nTotalKills ), m_TotalDeaths( nTotalDeaths ), m_TotalCreepKills( nTotalCreepKills ), m_TotalCreepDenies( nTotalCreepDenies ), m_TotalAssists( nTotalAssists ), m_TotalNeutralKills( nTotalNeutralKills ), m_TotalTowerKills( nTotalTowerKills ), m_TotalRaxKills( nTotalRaxKills ), m_TotalCourierKills( nTotalCourierKills )
{

}

CDBDotAPlayerSummary :: ~CDBDotAPlayerSummary( )
{

}
