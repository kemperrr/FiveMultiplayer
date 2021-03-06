#ifndef __APIPLAYER_H__
#define __APIPLAYER_H__

extern "C" {
	namespace API
	{
		class Player
		{
			static const char *ThisNamespace;

		public:
			DLL_PUBLIC static const std::wstring GetModel(const int entity);
			DLL_PUBLIC static void SetModel(const int entity, const std::wstring model);

			DLL_PUBLIC static const std::string GetUsername(const int entity);
			DLL_PUBLIC static void SetUsername(const int entity, const std::string name);

			DLL_PUBLIC static const bool IsControllable(const int entity);
			DLL_PUBLIC static void SetControllable(const int entity, bool disablecontrols, bool frozen = true);

			DLL_PUBLIC static const std::string GetIP(const int entity);

			DLL_PUBLIC static void Kick(const int entity, const std::string reason);

			DLL_PUBLIC static void PutInVehicle(const int playerEntity, const int vehicleEntity, const int seat);
			DLL_PUBLIC static const int GetVehicle(const int entity);
			DLL_PUBLIC static const int GetSeat(const int entity);
		};
	}
}

#endif