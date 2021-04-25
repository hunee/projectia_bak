// Copyright Epic Games, Inc. All Rights Reserved.

#ifndef __PROJECTIALOADINGSCREEN_H__
#define __PROJECTIALOADINGSCREEN_H__

#include "Modules/ModuleInterface.h"


/** Module interface for this game's loading screens */
class IProjectIALoadingScreenModule : public IModuleInterface
{
public:
	/** Kicks off the loading screen for in game loading (not startup) */
	virtual void StartInGameLoadingScreen() = 0;
};

#endif // __PROJECTIALOADINGSCREEN_H__
