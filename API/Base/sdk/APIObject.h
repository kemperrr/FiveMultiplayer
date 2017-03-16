#pragma once

#ifdef __cplusplus
extern "C" {
#endif
	namespace API
	{
		class Object
		{
		public:
			/// <summary>
			/// Creates a object of a desired model at the position defined
			/// </summary>
			/// <param name="model">The model of the object you wish to create</param>
			/// <param name="position">The position you wish to create the object at</param>
			/// <param name="quaternion">The quaternion you wish to create the object with</param>
			/// <param name="dynamic">If the object should be dynamic or not. (has physics or not)</param>
			/// <returns name="entity">The objects server entity id</returns>
			DLL_PUBLIC_I static const int Create(std::string model, CVector3 position, CVector4 quaternion, bool dynamic);


			/// <summary>
			/// Creates a object of a desired hash of a model name at the position defined
			/// </summary>
			/// <param name="hash">The hash of the model name of the object you wish to create</param>
			/// <param name="position">The position you wish to create the object at</param>
			/// <param name="quaternion">The quaternion you wish to create the object with</param>
			/// <param name="dynamic">If the object should be dynamic or not. (has physics or not)</param>
			/// <returns name="entity">The objects server entity id</returns>
			DLL_PUBLIC_I static const int CreateWithHash(int hash, CVector3 position, CVector4 quaternion, bool dynamic);

			/// <summary>
			/// Creates a object of a desired model at the position defined
			/// </summary>
			/// <param name="model">The model of the object you wish to create</param>
			/// <param name="position">The position you wish to create the object at</param>
			/// <param name="rotation">The rotation you wish to create the object with</param>
			/// <param name="dynamic">If the object should be dynamic or not. (has physics or not)</param>
			/// <returns name="entity">The objects server entity id</returns>
			DLL_PUBLIC_I static const int CreateWithRotation(std::string model, CVector3 position, CVector3 rotation, bool dynamic);

			/// <summary>
			/// Creates a object of a desired hash of a model name at the position defined
			/// </summary>
			/// <param name="hash">The hash of the model name of the object you wish to create</param>
			/// <param name="position">The position you wish to create the object at</param>
			/// <param name="rotation">The rotation you wish to create the object with</param>
			/// <param name="dynamic">If the object should be dynamic or not. (has physics or not)</param>
			/// <returns name="entity">The objects server entity id</returns>
			DLL_PUBLIC_I static const int CreateWithHRotation(int hash, CVector3 position, CVector3 rotation, bool dynamic);
		};
	}
#ifdef __cplusplus
}
#endif