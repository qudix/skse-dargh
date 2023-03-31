#pragma once

#include "RE/H/hkArray.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	struct hkbAssetBundleStringData
	{
		// members
		hkStringPtr          bundleName;  // 00
		hkArray<hkStringPtr> assetNames;  // 08 - Skyrim doesn't use these
	};
}
