/**
 * Hello World!
 *
 * @package   Hello World
 * @author    Benjamin Lu <benlumia007@gmail.com>
 * @copyright Copyright 2022. Benjamin Lu
 * @license   GNU General Public License v2 or later
 * @link      https://www.gnu.org/licenses/gpl-2.0.html
 */

void setup() {
  // Open serial communication and wait for port to open.
  Serial.begin( 9600 );
  
  while ( ! Serial ) {
    Serial.println( "Serial port communication failed!" );
    
  }

  Serial.println( "Hello World!" );

}

void loop() {
  // put your main code here, to run repeatedly:

}
