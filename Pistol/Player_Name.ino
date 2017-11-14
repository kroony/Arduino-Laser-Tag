//byte myPlayerID             = 3;      // 1 - 31 (0 = team base) 

/*       Teams   1-7 (0 = system message) myTeamID
 *   0 - System
 *   1 - Red
 *   2 - Blue
 *   3 - Green
 */
String getTeamName(byte _teamID) {
  switch (_teamID) {
    case 0:
      return "System";
      break;
    case 1:
      return "Red";
      break;
    case 2:
      return "Blue";
      break;
    case 3:
      return "Green";
      break;
    default: 
      return "Error";
      break;
  }
  return "Error";
}
/*
             Team 0   --System Controller--
Player 0 - Respawn - any player on their pre assigned team
Player 1 - Full Health - any player
Player 2 - Full Ammo - any player
Player 3 - Repair Item - any player



             Team 1   --RED--
Player 0 - Respawn
Player 1 - Full Health
Player 2 - Full Ammo
Player 3 - Repair Item    


             Team 2   --BLUE--
Player 0 - Respawn
Player 1 - Full Health
Player 2 - Full Ammo
Player 3 - Repair Item    




















*/         
