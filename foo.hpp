#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    // Twoja implementacja tutaj
    std::for_each(people.begin(), people.end(), [&] (Human& person) { person.birthday(); });
    std::transform(people.cbegin(), people.cend(), retval.begin(), [](const Human& person) { return person.isMonster() ? 'n' : 'y'; });
    std::reverse(retval.begin(), retval.end());

    return retval;
}
