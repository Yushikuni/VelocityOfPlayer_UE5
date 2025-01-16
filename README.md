# VelocityOfPlayer_UE5

This component is in BP for UE5.4.4

### How to aply:
1. Make sure that this component is included in charcter
	1. Get on main character
	2. Click on Add button 
	3. Add component -> Velocity_CharacterMovementBP 
2. Build 
3. Run 


### Notes:
The `Velocity_CharacterMovement` component contains two methods.

1. **GetSpeed() const**
	- Returns a `float` representing the velocity of the character

2. **printVelocity()**
	- Returns `void`
	- Prints the velocity on the screen and on `UE_LOG`. This method can be deleted later if no longer needed

	
The `GetSpeed()` method returns a `float` that can be used to calculate the velocity of the character.
The `printVelocity()` method prints the velocity to the screen and outputs it to the `UE_LOG`, and it can be removed later if unnecessary.

