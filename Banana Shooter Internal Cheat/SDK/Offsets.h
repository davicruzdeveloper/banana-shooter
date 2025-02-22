#pragma once
#include <cstdint>

namespace Offsets
{
	namespace ClientPlayer
	{
		inline uintptr_t fnUpdate = 0x40FE70; 
	}
	namespace Firearms
	{
		inline uintptr_t fnReload = 0x2BEB40;
	}
	namespace Transform
	{
		inline uintptr_t fnLookAt = 0x1FF4CD0;
		inline uintptr_t fnGetPosition = 0x2013870;
	}
	namespace Camera
	{
		inline uintptr_t fnWorldToScreen = 0x1FC3F30;
	}
	
	namespace NetworkManager
	{
		inline uintptr_t fnInit = 0x3E6AF0; 
	}

	namespace LobbyManager
	{
		inline uintptr_t fnSetLobbyGameMode = 0xBDDC80;
	}
}