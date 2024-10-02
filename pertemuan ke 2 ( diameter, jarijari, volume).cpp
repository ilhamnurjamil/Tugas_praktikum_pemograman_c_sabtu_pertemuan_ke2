#include <stdio.h>
#include <math.h>

int main() {
	
	float diameter, jarijari, volume;
	
	diameter = 15;
	
	jarijari = diameter / 2;
	
	volume = (4.0/3.0) * M_PI * pow(jarijari, 3);
	
	printf("Diameter bola: %.2f cm\n", diameter);
	printf("Jarijari bola: %.2f cm\n", jarijari);
	printf("Volume bola: %.2f cm^3\n2q", volume);
	
	return 0;
}
