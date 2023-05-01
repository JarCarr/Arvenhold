#include "steering_states.h"
#include "components/cmp_sprite.h"

using namespace sf;
using namespace std;

void StationaryState::execute(Entity* owner, double dt) noexcept {}

void SeekState::execute(Entity* owner, double dt) noexcept 
{
    auto s = owner->get_components<PhysicsComponent>();
    
    auto output = _steering.getSteering();
    
    s[0]->impulse(normalize(output.direction) * (float)(dt * 100.0f));

    auto v = s[0]->getVelocity();
    v.x = copysign(min(abs(v.x), s[0]->getSpeed()), v.x);
    v.y = copysign(min(abs(v.y), s[0]->getSpeed()), v.y);
    s[0]->setVelocity(v);
}

void FleeState::execute(Entity* owner, double dt) noexcept 
{
    auto s = owner->get_components<PhysicsComponent>();

    auto output = _steering.getSteering();

    s[0]->impulse(normalize(output.direction) * (float)(dt * 100.0f));

    auto v = s[0]->getVelocity();
    v.x = copysign(min(abs(v.x), s[0]->getSpeed()), v.x);
    v.y = copysign(min(abs(v.y), s[0]->getSpeed()), v.y);
    s[0]->setVelocity(v);
}

// Melee


// Arrow


// Spell


// Boss 

