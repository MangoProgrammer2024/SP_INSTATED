#pragma once
#ifndef OFFICE_H
#define OFFICE_H

//Office mission is the first mission in game
//get characters used
game::actor::import("Michael_Standard", "Tom_Standard_Suit");
//add camera to scene
game::component::addtoscene(game::component::CutsceneCamera());
//voice lines
game::file::audio86("michael_intro_line.gav", "tom_intro_line.gav");

#endif
