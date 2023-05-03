#include "arvenhold.h"
#include "engine.h"
#include "filehandling.h"

using namespace std;
using namespace sf;

// Scenes
DungeonScene dungeonScene;
MenuScene menuScene;
OverGroundScene ogScene;
SettingsScene sScene;
DeathScene dScene;

// Sindow size
int gameWidth;
int gameHeight;

// Player sfx
shared_ptr<Sound> pHit;
shared_ptr<Sound> pCast;
shared_ptr<Sound> pDeath;

// Explosions make sound
shared_ptr<Sound> explode;

// Enemy sfx
shared_ptr<Sound> eHit;
shared_ptr<Sound> eCast;
shared_ptr<Sound> eShoot;
shared_ptr<Sound> eDeath;

// Start the damn thing
int main() {


	//auto _pHit = Resources::load<SoundBuffer>("Hurt.wav");








	//pHit->setBuffer(*_pHit);
	//pCast->setBuffer(*Resources::load<SoundBuffer>("Player_cast.wav"));
	//pDeath->setBuffer(*Resources::load<SoundBuffer>(""));
	//explode->setBuffer(*Resources::load<SoundBuffer>(""));
	//eHit->setBuffer(*Resources::load<SoundBuffer>("Hurt.wav"));
	//eCast->setBuffer(*Resources::load<SoundBuffer>("Enemy_cast.wav"));
	//eDeath->setBuffer(*Resources::load<SoundBuffer>("Enemy_death.wav"));

	FileHandler::load(gameHeight, gameWidth);

	Engine::Start(gameWidth, gameHeight, "Arvenhold", &menuScene);

	FileHandler::save(gameHeight, gameWidth);
}
