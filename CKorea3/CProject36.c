#include <stdio.h>

//±¸Á¶Ã¼ Person(ÀÌ¸§, ³ªÀÌ, Å°, ¸ö¹«°Ô)

typedef struct Person {
	char name[64];
	int age;
	float height;
	float weight;
	} p;

int main36() {
	//±¸Á¶Ã¼ º¯¼ö 3°³(±èÃ¶¼ö, ½ÅÂ¯±¸, È«±æµ¿)
	struct Person ±èÃ¶¼ö = { "±èÃ¶¼ö", 20, 170.5, 65.6 };
	p ½ÅÂ¯±¸ = { "½ÅÂ¯±¸", 20, 174.2, 66.7 };
	p È«±æµ¿ = { "È«±æµ¿", 25, 180.2, 77.7 };
	p »ç¶÷µé[30] = { {"±èÃ¶¼ö1", 20, 170.5, 65.6}, {"±èÃ¶¼ö2", 20, 170.5, 65.6} };

	//Á¤º¸ Ãâ·Â
	//±èÃ¶¼ö,20»ì,170.5cm, 65.6kg,
	prinf("%s, %d»ì, %1fcm, %1fkg", ±èÃ¶¼ö.name, ±èÃ¶¼ö.age, ±èÃ¶¼ö.height, ±èÃ¶¼ö.weight);
	prinf("%s, %d»ì, %1fcm, %1fkg", ½ÅÂ¯±¸.name, ½ÅÂ¯±¸.age, ½ÅÂ¯±¸.height, ½ÅÂ¯±¸.weight);
	prinf("%s, %d»ì, %1fcm, %1fkg", È«±æµ¿.name, È«±æµ¿.age, È«±æµ¿.height, È«±æµ¿.weight);

	return 0;
}