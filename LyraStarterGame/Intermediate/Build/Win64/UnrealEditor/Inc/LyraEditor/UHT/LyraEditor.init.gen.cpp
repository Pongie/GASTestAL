// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLyraEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LyraEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LyraEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LyraEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LyraEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xA8A114AE,
				0x0D43C8F9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LyraEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LyraEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LyraEditor(Z_Construct_UPackage__Script_LyraEditor, TEXT("/Script/LyraEditor"), Z_Registration_Info_UPackage__Script_LyraEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA8A114AE, 0x0D43C8F9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
