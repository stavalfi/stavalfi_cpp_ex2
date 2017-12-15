#ifndef STAVALFI_CPP_EX2_MOVING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_MOVING_SOLDIER_STRATEGY_H

#include "MapReader.h"
#include "Healer.h"
#include "Warrior.h"

class MovingSoldierStrategy {
    const MapReader &mapReader;
protected:
    const MapReader &getMapReader() const;

public:
    MovingSoldierStrategy(const MapReader &mapReader);

    virtual Point2d chooseNewLocation(const Warrior &warrior) const = 0;

    virtual Point2d chooseNewLocation(const Healer &healer) const = 0;

    virtual ~MovingSoldierStrategy() = default;
};


#endif //STAVALFI_CPP_EX2_MOVING_SOLDIER_STRATEGY_H
