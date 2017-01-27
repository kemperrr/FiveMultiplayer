#pragma once

class CPlayerEntity {
private:
	struct PlayerInfo {
		int					Entity;
		int					PlayerID;
		std::string			Name;
	} Information;

	struct PlayerStats {
		int					Score;
	} Statistics;

	struct PlayerData {
		struct PlayerModelData {
			unsigned long	Model;
			int				Type;
		} Model;

		struct PlayerWeaponData {
			unsigned long	Weapon;
			bool			Reload;
		} Weapon;

		struct PlayerVehicle
		{
			int			VehicleID;
			int			Seat;
		} Vehicle;

		float				ForwardSpeed;

		CVector3			Position;
		CVector3			Velocity;
		CVector4			Quaternion;
	} Data;

	struct PlayerNetwork {
		std::chrono::time_point<std::chrono::system_clock> LastSyncSent;
		bool				Synchronized;
		RakNetGUID			GUID;
		SystemAddress		Ip;
	} Network;

public:
	static int Amount;

	CPlayerEntity() {};
	~CPlayerEntity() {};

	void Create(std::string Name, RakNetGUID GUID, SystemAddress Ip);
	void Destroy();

	void Pulse();
	void Update(Packet *packet);

	int				GetPlayerID() { return Information.PlayerID; };
	void			SetPlayerID(int playerid) { Information.PlayerID = playerid; };
	int				GetEntity() { return Information.Entity; };
	std::string		GetUsername() { return Information.Name; };

	int				GetScore() { return Statistics.Score; };

	int				GetVehicle() { return Data.Vehicle.VehicleID; };
	int				GetVehicleSeat() { return Data.Vehicle.Seat; };

	CVector3		GetPosition() { return Data.Position; };
	void			SetPosition(CVector3 position) { Data.Position = position; };
	CVector4		GetQuaternion() { return Data.Quaternion; }

	bool			GetSynchronized()	{ return Network.Synchronized; }
	RakNetGUID		GetGUID()	{ return Network.GUID; };
	SystemAddress	GetIp()	{ return Network.Ip; }

	PlayerInfo		SetInfo(PlayerInfo newinfo) { Information = newinfo; }
	PlayerStats		SetStats(PlayerStats newstats) { Statistics = newstats; }
	PlayerData		SetData(PlayerData newdata) { Data = newdata; }

	PlayerInfo		GetInfo() { return Information; }
	PlayerStats		GetStats() { return Statistics; }
	PlayerData		GetData() { return Data; }
};
extern std::vector<CPlayerEntity> g_Players;
