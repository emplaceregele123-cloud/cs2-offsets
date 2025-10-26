// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-26 10:47:39.226903900 UTC

namespace CS2Dumper.Schemas {
    // Module: client.dll
    // Class count: 83
    // Enum count: 5
    public static class ClientDll {
        // Parent: None
        // Field count: 1
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class GeneratedTextureHandle_t {
            public const nint m_strBitmapName = 0x0; // CUtlString
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputContainer_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
            public const nint m_strSpecificContainerMaterial = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            public const nint m_strAttrName = 0xE8; // CUtlString
            public const nint m_strAlias = 0xF0; // CUtlString
            public const nint m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
            public const nint m_strAttrNameForVar = 0x110; // CUtlString
            public const nint m_bExposeExternally = 0x118; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialAssemblyProcedure_t {
            public const nint m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
            public const nint m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
            public const nint m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
            public const nint m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
        }
        // Parent: None
        // Field count: 37
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialInputLooseVariable_t {
            public const nint m_strName = 0x0; // CUtlString
            public const nint m_bExposeExternally = 0x8; // bool
            public const nint m_strExposedFriendlyName = 0x10; // CUtlString
            public const nint m_strExposedFriendlyGroupName = 0x18; // CUtlString
            public const nint m_bExposedVariableIsFixedRange = 0x20; // bool
            public const nint m_strExposedVisibleWhenTrue = 0x28; // CUtlString
            public const nint m_strExposedHiddenWhenTrue = 0x30; // CUtlString
            public const nint m_strExposedValueList = 0x38; // CUtlString
            public const nint m_nVariableType = 0x40; // CompositeMaterialInputLooseVariableType_t
            public const nint m_bValueBoolean = 0x44; // bool
            public const nint m_nValueIntX = 0x48; // int32
            public const nint m_nValueIntY = 0x4C; // int32
            public const nint m_nValueIntZ = 0x50; // int32
            public const nint m_nValueIntW = 0x54; // int32
            public const nint m_bHasFloatBounds = 0x58; // bool
            public const nint m_flValueFloatX = 0x5C; // float32
            public const nint m_flValueFloatX_Min = 0x60; // float32
            public const nint m_flValueFloatX_Max = 0x64; // float32
            public const nint m_flValueFloatY = 0x68; // float32
            public const nint m_flValueFloatY_Min = 0x6C; // float32
            public const nint m_flValueFloatY_Max = 0x70; // float32
            public const nint m_flValueFloatZ = 0x74; // float32
            public const nint m_flValueFloatZ_Min = 0x78; // float32
            public const nint m_flValueFloatZ_Max = 0x7C; // float32
            public const nint m_flValueFloatW = 0x80; // float32
            public const nint m_flValueFloatW_Min = 0x84; // float32
            public const nint m_flValueFloatW_Max = 0x88; // float32
            public const nint m_cValueColor4 = 0x8C; // Color
            public const nint m_nValueSystemVar = 0x90; // CompositeMaterialVarSystemVar_t
            public const nint m_strResourceMaterial = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
            public const nint m_strTextureContentAssetPath = 0x178; // CUtlString
            public const nint m_strTextureRuntimeResourcePath = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
            public const nint m_strTextureCompilationVtexTemplate = 0x260; // CUtlString
            public const nint m_nTextureType = 0x268; // CompositeMaterialInputTextureType_t
            public const nint m_strString = 0x270; // CUtlString
            public const nint m_strPanoramaPanelPath = 0x278; // CUtlString
            public const nint m_nPanoramaRenderRes = 0x280; // int32
        }
        // Parent: None
        // Field count: 0
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CNmEventConsumerHudModelArmsAttributes {
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_barn_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
            public const nint orbit_distance = 0x1C; // float32
        }
        // Parent: None
        // Field count: 2
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_map_t {
            public const nint map_name = 0x0; // CUtlString
            public const nint map_rotation = 0x8; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_fill_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 5
        public static class CInterpolatedValue {
            public const nint m_flStartTime = 0x0; // float32
            public const nint m_flEndTime = 0x4; // float32
            public const nint m_flStartValue = 0x8; // float32
            public const nint m_flEndValue = 0xC; // float32
            public const nint m_nInterpType = 0x10; // int32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_item_t {
            public const nint position = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint pose_sequence = 0x18; // CUtlString
        }
        // Parent: None
        // Field count: 4
        public static class C_Chicken_GraphController {
            public const nint m_paramActivity = 0x268; // CAnimGraphParamRef<char*>
            public const nint m_paramEndActivityImmediately = 0x290; // CAnimGraphParamRef<bool>
            public const nint m_paramSnapToSquatting = 0x2B0; // CAnimGraphParamRef<bool>
            public const nint m_sActivityFinished = 0x2D0; // CAnimGraphTagRef
        }
        // Parent: None
        // Field count: 2
        public static class TimedEvent {
            public const nint m_TimeBetweenEvents = 0x0; // float32
            public const nint m_fNextEvent = 0x4; // float32
        }
        // Parent: None
        // Field count: 13
        public static class CFlashlightEffect {
            public const nint m_bIsOn = 0x10; // bool
            public const nint m_bMuzzleFlashEnabled = 0x20; // bool
            public const nint m_flMuzzleFlashBrightness = 0x24; // float32
            public const nint m_quatMuzzleFlashOrientation = 0x30; // Quaternion
            public const nint m_vecMuzzleFlashOrigin = 0x40; // Vector
            public const nint m_flFov = 0x4C; // float32
            public const nint m_flFarZ = 0x50; // float32
            public const nint m_flLinearAtten = 0x54; // float32
            public const nint m_bCastsShadows = 0x58; // bool
            public const nint m_flCurrentPullBackDist = 0x5C; // float32
            public const nint m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
            public const nint m_textureName = 0x70; // char[64]
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_camera_t {
            public const nint angle = 0x0; // QAngle
            public const nint fov = 0xC; // float32
            public const nint znear = 0x10; // float32
            public const nint zfar = 0x14; // float32
            public const nint target = 0x18; // Vector
            public const nint target_nudge = 0x24; // Vector
            public const nint orbit_distance = 0x30; // float32
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MVDataOutlinerDetailExpr
        // MVDataOverlayType
        // MVDataPreviewWidget
        // MVDataOutlinerLeafNameFn
        // MVDataOutlinerLeafColorFn
        // MVDataOutlinerLeafDetailFn
        // MVDataVirtualNodeFactoryFn
        // MVDataPreLoadFixupFn
        // MVDataPostSaveFixupFn
        public static class CInventoryImageData {
            public const nint m_nNodeType = 0x0; // InventoryNodeType_t
            public const nint name = 0x8; // CUtlString
            public const nint inventory_image_data = 0x10; // inv_image_data_t
        }
        // Parent: None
        // Field count: 8
        public static class C_CSGO_PreviewPlayer_GraphController {
            public const nint m_pszCharacterMode = 0x268; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszTeamPreviewVariant = 0x290; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszTeamPreviewPosition = 0x2B8; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszEndOfMatchCelebration = 0x2E0; // CAnimGraphParamOptionalRef<char*>
            public const nint m_nTeamPreviewRandom = 0x308; // CAnimGraphParamOptionalRef<int32>
            public const nint m_pszWeaponState = 0x328; // CAnimGraphParamOptionalRef<char*>
            public const nint m_pszWeaponType = 0x350; // CAnimGraphParamOptionalRef<char*>
            public const nint m_bCT = 0x378; // CAnimGraphParamOptionalRef<bool>
        }
        // Parent: None
        // Field count: 2
        public static class C_CommandContext {
            public const nint needsprocessing = 0x0; // bool
            public const nint command_number = 0xA0; // int32
        }
        // Parent: None
        // Field count: 8
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CompositeMaterialEditorPoint_t {
            public const nint m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_nSequenceIndex = 0xE0; // int32
            public const nint m_flCycle = 0xE4; // float32
            public const nint m_KVModelStateChoices = 0xE8; // KeyValues3
            public const nint m_bEnableChildModel = 0xF8; // bool
            public const nint m_ChildModelName = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
            public const nint m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
            public const nint m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
        }
        // Parent: None
        // Field count: 0
        public static class CPlayerSprayDecalRenderHelper {
        }
        // Parent: None
        // Field count: 13
        public static class C_IronSightController {
            public const nint m_bIronSightAvailable = 0x10; // bool
            public const nint m_flIronSightAmount = 0x14; // float32
            public const nint m_flIronSightAmountGained = 0x18; // float32
            public const nint m_flIronSightAmountBiased = 0x1C; // float32
            public const nint m_flIronSightAmount_Interpolated = 0x20; // float32
            public const nint m_flIronSightAmountGained_Interpolated = 0x24; // float32
            public const nint m_flIronSightAmountBiased_Interpolated = 0x28; // float32
            public const nint m_flInterpolationLastUpdated = 0x2C; // float32
            public const nint m_angDeltaAverage = 0x30; // QAngle[8]
            public const nint m_angViewLast = 0x90; // QAngle
            public const nint m_vecDotCoords = 0x9C; // Vector2D
            public const nint m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
            public const nint m_flSpeedRatio = 0xA8; // float32
        }
        // Parent: None
        // Field count: 5
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatMutatorCondition_t {
            public const nint m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
            public const nint m_strMutatorConditionContainerName = 0x8; // CUtlString
            public const nint m_strMutatorConditionContainerVarName = 0x10; // CUtlString
            public const nint m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
            public const nint m_bPassWhenTrue = 0x20; // bool
        }
        // Parent: None
        // Field count: 7
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_data_t {
            public const nint map = 0x0; // inv_image_map_t
            public const nint item = 0x10; // inv_image_item_t
            public const nint camera = 0x30; // inv_image_camera_t
            public const nint lightsun = 0x64; // inv_image_light_sun_t
            public const nint lightfill = 0x80; // inv_image_light_fill_t
            public const nint light0 = 0x9C; // inv_image_light_barn_t
            public const nint light1 = 0xBC; // inv_image_light_barn_t
        }
        // Parent: None
        // Field count: 29
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompMatPropertyMutator_t {
            public const nint m_bEnabled = 0x0; // bool
            public const nint m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
            public const nint m_strInitWith_Container = 0x8; // CUtlString
            public const nint m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
            public const nint m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
            public const nint m_strCopyProperty_TargetProperty = 0x20; // CUtlString
            public const nint m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
            public const nint m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
            public const nint m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
            public const nint m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
            public const nint m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
            public const nint m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
            public const nint m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
            public const nint m_strGenerateTexture_TargetParam = 0x2F0; // CUtlString
            public const nint m_strGenerateTexture_InitialContainer = 0x2F8; // CUtlString
            public const nint m_nResolution = 0x300; // int32
            public const nint m_bIsScratchTarget = 0x304; // bool
            public const nint m_strCompressionFormat = 0x308; // CUtlString
            public const nint m_bSplatDebugInfo = 0x310; // bool
            public const nint m_bCaptureInRenderDoc = 0x311; // bool
            public const nint m_vecTexGenInstructions = 0x318; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_vecConditionalMutators = 0x330; // CUtlVector<CompMatPropertyMutator_t>
            public const nint m_strPopInputQueue_Container = 0x348; // CUtlString
            public const nint m_strDrawText_InputContainerSrc = 0x350; // CUtlString
            public const nint m_strDrawText_InputContainerProperty = 0x358; // CUtlString
            public const nint m_vecDrawText_Position = 0x360; // Vector2D
            public const nint m_colDrawText_Color = 0x368; // Color
            public const nint m_strDrawText_Font = 0x370; // CUtlString
            public const nint m_vecConditions = 0x378; // CUtlVector<CompMatMutatorCondition_t>
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class CCompositeMaterialEditorDoc {
            public const nint m_nVersion = 0x8; // int32
            public const nint m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
            public const nint m_KVthumbnail = 0x28; // KeyValues3
        }
        // Parent: None
        // Field count: 13
        public static class CClientAlphaProperty {
            public const nint m_nRenderFX = 0x10; // uint8
            public const nint m_nRenderMode = 0x11; // uint8
            public const nint m_bAlphaOverride = 0x0; // bitfield:1
            public const nint m_bShadowAlphaOverride = 0x0; // bitfield:1
            public const nint m_nReserved = 0x0; // bitfield:6
            public const nint m_nAlpha = 0x13; // uint8
            public const nint m_nDesyncOffset = 0x14; // uint16
            public const nint m_nReserved2 = 0x16; // uint16
            public const nint m_nDistFadeStart = 0x18; // uint16
            public const nint m_nDistFadeEnd = 0x1A; // uint16
            public const nint m_flFadeScale = 0x1C; // float32
            public const nint m_flRenderFxStartTime = 0x20; // GameTime_t
            public const nint m_flRenderFxDuration = 0x24; // float32
        }
        // Parent: None
        // Field count: 43
        public static class CGlobalLightBase {
            public const nint m_bSpotLight = 0x10; // bool
            public const nint m_SpotLightOrigin = 0x14; // Vector
            public const nint m_SpotLightAngles = 0x20; // QAngle
            public const nint m_ShadowDirection = 0x2C; // Vector
            public const nint m_AmbientDirection = 0x38; // Vector
            public const nint m_SpecularDirection = 0x44; // Vector
            public const nint m_InspectorSpecularDirection = 0x50; // Vector
            public const nint m_flSpecularPower = 0x5C; // float32
            public const nint m_flSpecularIndependence = 0x60; // float32
            public const nint m_SpecularColor = 0x64; // Color
            public const nint m_bStartDisabled = 0x68; // bool
            public const nint m_bEnabled = 0x69; // bool
            public const nint m_LightColor = 0x6A; // Color
            public const nint m_AmbientColor1 = 0x6E; // Color
            public const nint m_AmbientColor2 = 0x72; // Color
            public const nint m_AmbientColor3 = 0x76; // Color
            public const nint m_flSunDistance = 0x7C; // float32
            public const nint m_flFOV = 0x80; // float32
            public const nint m_flNearZ = 0x84; // float32
            public const nint m_flFarZ = 0x88; // float32
            public const nint m_bEnableShadows = 0x8C; // bool
            public const nint m_bOldEnableShadows = 0x8D; // bool
            public const nint m_bBackgroundClearNotRequired = 0x8E; // bool
            public const nint m_flCloudScale = 0x90; // float32
            public const nint m_flCloud1Speed = 0x94; // float32
            public const nint m_flCloud1Direction = 0x98; // float32
            public const nint m_flCloud2Speed = 0x9C; // float32
            public const nint m_flCloud2Direction = 0xA0; // float32
            public const nint m_flAmbientScale1 = 0xB0; // float32
            public const nint m_flAmbientScale2 = 0xB4; // float32
            public const nint m_flGroundScale = 0xB8; // float32
            public const nint m_flLightScale = 0xBC; // float32
            public const nint m_flFoWDarkness = 0xC0; // float32
            public const nint m_bEnableSeparateSkyboxFog = 0xC4; // bool
            public const nint m_vFowColor = 0xC8; // Vector
            public const nint m_ViewOrigin = 0xD4; // Vector
            public const nint m_ViewAngles = 0xE0; // QAngle
            public const nint m_flViewFoV = 0xEC; // float32
            public const nint m_WorldPoints = 0xF0; // Vector[8]
            public const nint m_vFogOffsetLayer0 = 0x4A8; // Vector2D
            public const nint m_vFogOffsetLayer1 = 0x4B0; // Vector2D
            public const nint m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
            public const nint m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
        }
        // Parent: None
        // Field count: 0
        public static class IClientAlphaProperty {
        }
        // Parent: None
        // Field count: 3
        //
        // Metadata:
        // MGetKV3ClassDefaults
        public static class inv_image_light_sun_t {
            public const nint color = 0x0; // Vector
            public const nint angle = 0xC; // QAngle
            public const nint brightness = 0x18; // float32
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MGetKV3ClassDefaults
        // MPropertyElementNameFn
        public static class CompositeMaterialMatchFilter_t {
            public const nint m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
            public const nint m_strMatchFilter = 0x8; // CUtlString
            public const nint m_strMatchValue = 0x10; // CUtlString
            public const nint m_bPassWhenTrue = 0x18; // bool
        }
        // Parent: None
        // Field count: 4
        //
        // Metadata:
        // MPropertyElementNameFn
        public static class CompositeMaterial_t {
            public const nint m_TargetKVs = 0x8; // KeyValues3
            public const nint m_PreGenerationKVs = 0x18; // KeyValues3
            public const nint m_FinalKVs = 0x58; // KeyValues3
            public const nint m_vecGeneratedTextures = 0x80; // CUtlVector<GeneratedTextureHandle_t>
        }
        // Parent: None
        // Field count: 183
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // CUtlVector<int32>
            public const nint �p�f� = 0xF4345D70; // 
            public const nint �͖f� = 0x15EF000; // 
            public const nint �t�f� = 0x669B76B8; // 
            public const nint �p�f� = 0x1FFDF40; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // int32
            public const nint �p�f� = 0x8; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // GameTime_t
            public const nint �p�f� = 0x20; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // int32
            public const nint �p�f� = 0x64; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �f4�� = 0x669B76B8; // 
            public const nint �p�f� = 0x1FFE5A0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint ��4�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4397340; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF4396540; // 
            public const nint @�p* = 0x63077E0; // �$�*
            public const nint  = 0x6F746F; // 
            public const nint  = 0x616C7073; // 
            public const nint  = 0x656C6269; // 
            public const nint  = 0x656C776F; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x70696365; // 
            public const nint  = 0x656C776F; // 
            public const nint  = 0x746E756F; // 
            public const nint  = 0x65757169; // 
            public const nint  = 0x7473; // 
            public const nint  = 0x65736552; // 
            public const nint  = 0x6E6F7073; // 
            public const nint  = 0x65736552; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x692E7400; // 
            public const nint  = 0x65736552; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6D6F7473; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x50656D69; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x50656D69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x65; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x6E756F63; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x2E6E6F69; // 
            public const nint  = 0x6F4C676E; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x2E6E6F69; // 
            public const nint  = 0x6F4C676E; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x2E6E6F69; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x54414345; // 
            public const nint  = 0x426F5474; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x444554; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x5045445F; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x65744965; // 
            public const nint  = 0x0; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x726576; // 
            public const nint  = 0x616C7073; // 
            public const nint  = 0x65747562; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x69747563; // 
            public const nint  = 0x6D69546B; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x7A696D6F; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x65; // 
            public const nint  = 0x64616552; // 
            public const nint  = 0x6773; // 
            public const nint  = 0x64617254; // 
            public const nint  = 0x72657672; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x65767265; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x65; // 
            public const nint  = 0x53776569; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x52776569; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x45776569; // 
            public const nint  = 0x63696669; // 
            public const nint  = 0x49776569; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x526D6574; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x6552616D; // 
            public const nint  = 0x0; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x45445F65; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x747361; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x64; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x65; // 
            public const nint  = 0x6C754D79; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x65747375; // 
            public const nint  = 0x646E61; // 
            public const nint  = 0x73616364; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63414950; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x756F6E6E; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70737361; // 
            public const nint  = 0x737574; // 
            public const nint  = 0x62755367; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x52656764; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6D657449; // 
            public const nint �p�f� = 0x20; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AB8E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint ��:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43AA4E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AB020; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AC210; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43A3930; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA1E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43A9AF0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA750; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x2010D00; // 
            public const nint  = 0x2010080; // 
            public const nint  = 0x2026400; // 
            public const nint  = 0x2020000; // 
            public const nint  = 0x2030100; // 
            public const nint  = 0x20300C0; // 
            public const nint  = 0x2040140; // 
            public const nint  = 0x20400D0; // 
        }
        // Parent: None
        // Field count: 169
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // float32
            public const nint �p�f� = 0x20; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // float32
            public const nint �p�f� = 0x1E; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // uint16
            public const nint �p�f� = 0xF43466E0; // 
            public const nint �͖f� = 0x15EF000; // 
            public const nint �t�f� = 0x669B74F8; // 
            public const nint �p�f� = 0xF434A780; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43962E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint econ_gcmessages.proto = 0x2B41A038; // 
            public const nint  = 0x656C006E; // 
            public const nint  = 0x616D2E73; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x756E2E73; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x65722E73; // 
            public const nint  = 0x6E6F7073; // 
            public const nint  = 0x65736552; // 
            public const nint  = 0x7473; // 
            public const nint  = 0x65757169; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x632E7473; // 
            public const nint  = 0x7372656B; // 
            public const nint  = 0x692E7473; // 
            public const nint  = 0x7372656B; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x50656D69; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x6D6F7473; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x6E756F63; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x2E6E0065; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45544143; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45544143; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x726576; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x426F5474; // 
            public const nint  = 0x54414345; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x444554; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x5045445F; // 
            public const nint  = 0x65744965; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x0; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x6E; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65747562; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x6D69546B; // 
            public const nint  = 0x69747563; // 
            public const nint  = 0x7A696D6F; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x64616552; // 
            public const nint  = 0x65; // 
            public const nint  = 0x64617254; // 
            public const nint  = 0x6773; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x72657672; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x65767265; // 
            public const nint  = 0x53776569; // 
            public const nint  = 0x65; // 
            public const nint  = 0x52776569; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x45776569; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x49776569; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x63696669; // 
            public const nint  = 0x526D6574; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x6552616D; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x0; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45445F65; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x747361; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x64; // 
            public const nint  = 0x6C754D79; // 
            public const nint  = 0x65; // 
            public const nint  = 0x65747375; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616364; // 
            public const nint  = 0x646E61; // 
            public const nint  = 0x63414950; // 
            public const nint  = 0x0; // 
            public const nint  = 0x756F6E6E; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x70737361; // 
            public const nint  = 0x0; // 
            public const nint  = 0x62755367; // 
            public const nint  = 0x737574; // 
            public const nint  = 0x52656764; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x6D657449; // 
            public const nint  = 0x0; // 
            public const nint �Ζf� = 0x15EF000; // 
            public const nint  = 0x669B74F8; // CHandle<CBaseEntity>
            public const nint �p�f� = 0xF43AA040; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA0B0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43ABC60; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA3C0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA600; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint 09:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43AC440; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43A9D70; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43A9DE0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  = 0x2000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xCE762278; // 
            public const nint  = 0x1; // 
            public const nint  = 0x1; // 
        }
        // Parent: None
        // Field count: 166
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // float32
            public const nint �p�f� = 0x1E; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // uint16
            public const nint �p�f� = 0xF43466E0; // 
            public const nint �͖f� = 0x15EF000; // 
            public const nint �t�f� = 0x669B74F8; // 
            public const nint �p�f� = 0xF434A780; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43962E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint econ_gcmessages.proto = 0x2B41A038; // 
            public const nint  = 0x656C006E; // 
            public const nint  = 0x616D2E73; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x756E2E73; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x65722E73; // 
            public const nint  = 0x6E6F7073; // 
            public const nint  = 0x65736552; // 
            public const nint  = 0x7473; // 
            public const nint  = 0x65757169; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x632E7473; // 
            public const nint  = 0x7372656B; // 
            public const nint  = 0x692E7473; // 
            public const nint  = 0x7372656B; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x50656D69; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x6D6F7473; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x6E756F63; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x2E6E0065; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45544143; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45544143; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x726576; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x426F5474; // 
            public const nint  = 0x54414345; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x444554; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x5045445F; // 
            public const nint  = 0x65744965; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x0; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x6E; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65747562; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x6D69546B; // 
            public const nint  = 0x69747563; // 
            public const nint  = 0x7A696D6F; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x64616552; // 
            public const nint  = 0x65; // 
            public const nint  = 0x64617254; // 
            public const nint  = 0x6773; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x72657672; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x65767265; // 
            public const nint  = 0x53776569; // 
            public const nint  = 0x65; // 
            public const nint  = 0x52776569; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x45776569; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x49776569; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x63696669; // 
            public const nint  = 0x526D6574; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x6552616D; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x0; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45445F65; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x747361; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x64; // 
            public const nint  = 0x6C754D79; // 
            public const nint  = 0x65; // 
            public const nint  = 0x65747375; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616364; // 
            public const nint  = 0x646E61; // 
            public const nint  = 0x63414950; // 
            public const nint  = 0x0; // 
            public const nint  = 0x756F6E6E; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x70737361; // 
            public const nint  = 0x0; // 
            public const nint  = 0x62755367; // 
            public const nint  = 0x737574; // 
            public const nint  = 0x52656764; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x6D657449; // 
            public const nint  = 0x0; // 
            public const nint �Ζf� = 0x15EF000; // 
            public const nint  = 0x669B74F8; // CHandle<CBaseEntity>
            public const nint �p�f� = 0xF43AA040; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA0B0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43ABC60; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA3C0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA600; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint 09:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43AC440; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43A9D70; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43A9DE0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  = 0x2000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xCE762278; // 
            public const nint  = 0x1; // 
            public const nint  = 0x1; // 
        }
        // Parent: None
        // Field count: 163
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // uint16
            public const nint �p�f� = 0xF43466E0; // 
            public const nint �͖f� = 0x15EF000; // 
            public const nint �t�f� = 0x669B74F8; // 
            public const nint �p�f� = 0xF434A780; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43962E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint econ_gcmessages.proto = 0x2B41A038; // 
            public const nint  = 0x656C006E; // 
            public const nint  = 0x616D2E73; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x756E2E73; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x65722E73; // 
            public const nint  = 0x6E6F7073; // 
            public const nint  = 0x65736552; // 
            public const nint  = 0x7473; // 
            public const nint  = 0x65757169; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x632E7473; // 
            public const nint  = 0x7372656B; // 
            public const nint  = 0x692E7473; // 
            public const nint  = 0x7372656B; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x50656D69; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x6D6F7473; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x65766974; // 
            public const nint  = 0x6E756F63; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x2E6E0065; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45544143; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45544143; // 
            public const nint  = 0x74617A69; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x726576; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x636F536F; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x426F5474; // 
            public const nint  = 0x54414345; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4445; // 
            public const nint  = 0x496F5474; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x52504544; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x444554; // 
            public const nint  = 0x74656B63; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x5045445F; // 
            public const nint  = 0x65744965; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x0; // 
            public const nint  = 0x52746669; // 
            public const nint  = 0x6E; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65747562; // 
            public const nint  = 0x694B746E; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x6D69546B; // 
            public const nint  = 0x69747563; // 
            public const nint  = 0x7A696D6F; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x74696E49; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x64616552; // 
            public const nint  = 0x65; // 
            public const nint  = 0x64617254; // 
            public const nint  = 0x6773; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x72657672; // 
            public const nint  = 0x6573776F; // 
            public const nint  = 0x65767265; // 
            public const nint  = 0x53776569; // 
            public const nint  = 0x65; // 
            public const nint  = 0x52776569; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x45776569; // 
            public const nint  = 0x6F697461; // 
            public const nint  = 0x49776569; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x63696669; // 
            public const nint  = 0x526D6574; // 
            public const nint  = 0x6573; // 
            public const nint  = 0x6552616D; // 
            public const nint  = 0x74736575; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x0; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x44455441; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x4D455F6B; // 
            public const nint  = 0x45445F65; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x736E6F70; // 
            public const nint  = 0x73616863; // 
            public const nint  = 0x65; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x747361; // 
            public const nint  = 0x6F576465; // 
            public const nint  = 0x64; // 
            public const nint  = 0x6C754D79; // 
            public const nint  = 0x65; // 
            public const nint  = 0x65747375; // 
            public const nint  = 0x65736E; // 
            public const nint  = 0x73616364; // 
            public const nint  = 0x646E61; // 
            public const nint  = 0x63414950; // 
            public const nint  = 0x0; // 
            public const nint  = 0x756F6E6E; // 
            public const nint  = 0x65736E6F; // 
            public const nint  = 0x70737361; // 
            public const nint  = 0x0; // 
            public const nint  = 0x62755367; // 
            public const nint  = 0x737574; // 
            public const nint  = 0x52656764; // 
            public const nint  = 0x6E6F69; // 
            public const nint  = 0x6D657449; // 
            public const nint  = 0x0; // 
            public const nint �Ζf� = 0x15EF000; // 
            public const nint  = 0x669B74F8; // CHandle<CBaseEntity>
            public const nint �p�f� = 0xF43AA040; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA0B0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43ABC60; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA3C0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43AA600; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint 09:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43AC440; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43A9D70; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43A9DE0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  = 0x2000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xCE762278; // 
            public const nint  = 0x1; // 
            public const nint  = 0x1; // 
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 164
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B6C48; // uint64
            public const nint �p�f� = 0xF42F9490; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint ��2�� = 0x669B6CD8; // 
            public const nint �p�f� = 0x2; // 
            public const nint �͖f� = 0x15EF000; // 
            public const nint �t�f� = 0x669B74F8; // 
            public const nint �p�f� = 0xF432BD90; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �2�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43295B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `%3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43325F0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0xF4335B90; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  [3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42EEBA0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �63�� = 0x669B6C48; // 
            public const nint �p�f� = 0xF42F94E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0\3�� = 0x669B76B8; // 
            public const nint �p�f� = 0x2BFF92A0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �:3�� = 0x73614243; // 
            public const nint  = 0x62697274; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint P�/�� = 0x6C755043; // 
            public const nint  = 0x1006E69; // 
            public const nint  = 0x473A3A73; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0xF4337550; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint ��/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F9EA0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �n/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F9E10; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �m/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F8E20; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �R/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F75C0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  = 0x7261746E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint Pw3�� = 0x6C745543; // 
            public const nint  = 0x1003E20; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0�/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F76E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0p/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4337620; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  r/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4337880; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �p/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F7160; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint p�/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4337690; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint po/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F83D0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @{/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43D3670; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �
            3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F5CD0; // 
            public const nint  = 0x74637572; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F7CB0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint @F3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43348B0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint ��/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F8970; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint x/�� = 0x6C745543; // 
            public const nint  = 0x3E20745F; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x6C745543; // CUtlSymbolLarge
            public const nint  = 0x20745F74; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint P�/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF42F86D0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint P*3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4330BD0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint ��/�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43D2490; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43D2260; // 
            public const nint  = 0x41746553; // 
            public const nint �p�f� = 0xF43D3530; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 1:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43DDAA0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0�=�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43BA800; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43DF0E0; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint �p�f� = 0xF43A3670; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��=�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43B9850; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��;�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4396DA0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �3:�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF437D350; // 
            public const nint �͖f� = 0x15EF000; // 
            public const nint �p�f� = 0x2BFF61E0; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // float32
            public const nint �p�f� = 0xF4320C70; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint G4�� = 0x74654E43; // 
            public const nint  = 0x6C6F626D; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @J4�� = 0x669B7628; // 
            public const nint �p�f� = 0xC0; // 
            public const nint �͖f� = 0x669D20D0; // 
            public const nint �p�f� = 0xF4344890; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��7�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF43447E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �C4�� = 0x74654E43; // 
            public const nint  = 0x3E206E; // 
            public const nint `֖f� = 0x15EF000; // 
            public const nint  = 0x3433E600; // 
            public const nint  = 0x73614272; // 
            public const nint  = 0x6C6F626D; // 
            public const nint  = 0x73614272; // 
            public const nint �p�f� = 0xF43365C0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint Pd3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4336540; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �c3�� = 0x74654E43; // 
            public const nint  = 0x65003E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �d3�� = 0x669B74F8; // 
            public const nint �p�f� = 0xF4334F90; // 
            public const nint  = 0x73614272; // 
            public const nint �p�f� = 0xF4334990; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @H3�� = 0x669B76B8; // 
            public const nint �p�f� = 0x2BFF1F80; // 
            public const nint `֖f� = 0x669D20D0; // 
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 711
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // int32[3]
            public const nint �p�f� = 0x9; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �V = 0x669B74F8; // 
            public const nint �p�f� = 0x35C90; // 
            public const nint  = 0x654D6E6F; // 
            public const nint �p�f� = 0x235D0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �p = 0x669B74F8; // 
            public const nint �p�f� = 0x371F0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ps = 0x6C745543; // 
            public const nint  = 0x70556E6F; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint Py = 0x669B74F8; // 
            public const nint �p�f� = 0x23940; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `? = 0x669B74F8; // 
            public const nint �p�f� = 0x24030; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x3E; // 
            public const nint  = 0x6F4E6574; // 
            public const nint �p�f� = 0x38770; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �B = 0x669B74F8; // 
            public const nint �p�f� = 0x24E20; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint P� = 0x669B74F8; // 
            public const nint �p�f� = 0x38FF0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x669B7628; // 
            public const nint �p�f� = 0xB; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `� = 0x669B74F8; // 
            public const nint �p�f� = 0x39710; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint pT = 0x696E4143; // 
            public const nint  = 0x61426576; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint PU = 0x669B74F8; // 
            public const nint �p�f� = 0x25630; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint W = 0x669B74F8; // 
            public const nint �p�f� = 0x25810; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �X = 0x669B74F8; // 
            public const nint �p�f� = 0x398B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5F370; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5F470; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5F5E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `� = 0x669B74F8; // 
            public const nint �p�f� = 0x5F8B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @� = 0x669B74F8; // 
            public const nint �p�f� = 0x5FC30; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5A330; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5FEA0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x506D4E43; // 
            public const nint  = 0x6974696E; // 
            public const nint  = 0x61776F72; // 
            public const nint �p�f� = 0x609A0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  
             = 0x566D4E43; // 
            public const nint  = 0x6E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x6C745543; // 
            public const nint  = 0x31202C44; // 
            public const nint  = 0x61776F72; // 
            public const nint  = 0x3E203031; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint   = 0x669B74F8; // 
            public const nint �p�f� = 0x60CC0; // 
            public const nint  = 0x614D656E; // 
            public const nint �p�f� = 0x60DA0; // 
            public const nint  = 0x65646F4E; // 
            public const nint �p�f� = 0x60EE0; // 
            public const nint  = 0x4E726F74; // 
            public const nint  = 0x3E2037; // 
            public const nint  = 0x61776F72; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x60F80; // 
            public const nint  = 0x47646578; // 
            public const nint �p�f� = 0x61020; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x669B74F8; // 
            public const nint �p�f� = 0x5AE70; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0� = 0x669B74F8; // 
            public const nint �p�f� = 0x5AFF0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x436D4E43; // 
            public const nint  = 0x0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint p� = 0x436D4E43; // 
            public const nint  = 0x0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint   = 0x436D4E43; // 
            public const nint  = 0x6E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x669B74F8; // 
            public const nint �p�f� = 0x615A0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @ = 0x669B74F8; // 
            public const nint �p�f� = 0x616E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x669B74F8; // 
            public const nint �p�f� = 0x61820; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x436D4E43; // 
            public const nint  = 0x696E6966; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @ = 0x436D4E43; // 
            public const nint  = 0x6974696E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x436D4E43; // 
            public const nint  = 0x6E696665; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @ = 0x436D4E43; // 
            public const nint  = 0x69666544; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x436D4E43; // 
            public const nint  = 0x69666544; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ` = 0x566D4E43; // 
            public const nint  = 0x696E6966; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x566D4E43; // 
            public const nint  = 0x6974696E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ` = 0x566D4E43; // 
            public const nint  = 0x6E696665; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x566D4E43; // 
            public const nint  = 0x69666544; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x566D4E43; // 
            public const nint  = 0x69666544; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @ = 0x566D4E43; // 
            public const nint  = 0x6544433A; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x456D4E43; // 
            public const nint  = 0x6E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @� = 0x496D4E43; // 
            public const nint  = 0x6E6F6974; // 
            public const nint  = 0x61776F72; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5B420; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x496D4E43; // 
            public const nint  = 0x6544433A; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x476D4E43; // 
            public const nint  = 0x74696E69; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint p� = 0x466D4E43; // 
            public const nint  = 0x6974696E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint P� = 0x669B74F8; // 
            public const nint �p�f� = 0x5B910; // 
            public const nint  = 0x6F4E4449; // 
            public const nint �p�f� = 0x5B9F0; // 
            public const nint  = 0x6E6F4378; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5BA90; // 
            public const nint  = 0x49746E65; // 
            public const nint �p�f� = 0x5BB50; // 
            public const nint  = 0x4E746E65; // 
            public const nint �p�f� = 0x5BC50; // 
            public const nint  = 0x6F43746E; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5BD50; // 
            public const nint  = 0x6F4E746E; // 
            public const nint �p�f� = 0x5BFD0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5C1B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint p� = 0x669B74F8; // 
            public const nint �p�f� = 0x5C3B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x466D4E43; // 
            public const nint  = 0x6E6F69; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x466D4E43; // 
            public const nint  = 0x696E6966; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5C790; // 
            public const nint  = 0x646F4E68; // 
            public const nint �p�f� = 0x5C8B0; // 
            public const nint  = 0x65646F4E; // 
            public const nint  = 0x2035202C; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x496D4E43; // 
            public const nint  = 0x0; // 
            public const nint  = 0x47646578; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5CAE0; // 
            public const nint  = 0x47646578; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x32337461; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5CCE0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x62180; // 
            public const nint  = 0x6F4E7072; // 
            public const nint �p�f� = 0x622A0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �$ = 0x669B74F8; // 
            public const nint �p�f� = 0x62320; // 
            public const nint  = 0x65646F4E; // 
            public const nint �p�f� = 0x62440; // 
            public const nint  = 0x65646F4E; // 
            public const nint �p�f� = 0x62580; // 
            public const nint  = 0x6F4E6870; // 
            public const nint �p�f� = 0x5D1A0; // 
            public const nint  = 0x64697272; // 
            public const nint �p�f� = 0x62640; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x202C3631; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �' = 0x436D4E43; // 
            public const nint  = 0x0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �( = 0x506D4E43; // 
            public const nint  = 0x6E696665; // 
            public const nint  = 0x47646578; // 
            public const nint �p�f� = 0x62A00; // 
            public const nint  = 0x70696C43; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x62C40; // 
            public const nint  = 0x646F4E65; // 
            public const nint �p�f� = 0x62CC0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x446D4E43; // 
            public const nint  = 0x6E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �+ = 0x566D4E43; // 
            public const nint  = 0x66654443; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x6C745543; // 
            public const nint  = 0x6C61626F; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x536D4E43; // 
            public const nint  = 0x66654443; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint � = 0x496D4E43; // 
            public const nint  = 0x44433A3A; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0� = 0x546D4E43; // 
            public const nint  = 0x6E; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �/ = 0x536D4E43; // 
            public const nint  = 0x0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  � = 0x669B74F8; // 
            public const nint �p�f� = 0x5DA00; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5DBC0; // 
            public const nint  = 0x3A65646F; // 
            public const nint �p�f� = 0x63160; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0� = 0x669B74F8; // 
            public const nint �p�f� = 0x63320; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x5E080; // 
            public const nint  = 0x3A65646F; // 
            public const nint �p�f� = 0x5E120; // 
            public const nint  = 0x3A65646F; // 
            public const nint �p�f� = 0x1E8F0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x31300; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @ = 0x669B74F8; // 
            public const nint �p�f� = 0x31B00; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x32470; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �' = 0x669B74F8; // 
            public const nint �p�f� = 0x32B90; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  / = 0x669B7628; // 
            public const nint �p�f� = 0x8; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �2 = 0x6C745543; // 
            public const nint  = 0x3E206174; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `5 = 0x669B74F8; // 
            public const nint �p�f� = 0x33880; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �; = 0x669B74F8; // 
            public const nint �p�f� = 0x34000; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x21EC0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  # = 0x669B74F8; // 
            public const nint �p�f� = 0x345D0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �H = 0x669B74F8; // 
            public const nint �p�f� = 0x34B80; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint p' = 0x669B74F8; // 
            public const nint �p�f� = 0x35390; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint a = 0x669B74F8; // 
            public const nint �p�f� = 0x36430; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint pg = 0x669B74F8; // 
            public const nint �p�f� = 0x23130; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �j = 0x669B74F8; // 
            public const nint �p�f� = 0x36DB0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  v = 0x669B74F8; // 
            public const nint �p�f� = 0x37A10; // 
            public const nint  = 0x4B496576; // 
            public const nint �p�f� = 0x37D30; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @: = 0x669B74F8; // 
            public const nint �p�f� = 0x38050; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �� = 0x669B74F8; // 
            public const nint �p�f� = 0x24890; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0� = 0x669B74F8; // 
            public const nint �p�f� = 0x24EC0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint   = 0x669B74F8; // 
            public const nint �p�f� = 0x61FE0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A8E30; // 
            public const nint @זf� = 0x669D20D0; // 
            public const nint P^z�� = 0x6C745543; // 
            public const nint  = 0x5F6D696E; // 
            public const nint @זf� = 0x669D20D0; // 
            public const nint `_z�� = 0x669B6C48; // 
            public const nint �p�f� = 0xFF7A5FB0; // 
            public const nint  = 0x6E6F4373; // 
            public const nint �p�f� = 0xFF7B3E90; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint Оz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7B3CB0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �={�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7B3FA0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A7F90; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7ABCF0; // 
            public const nint  = 0x6F52646D; // 
            public const nint  = 0x669B74F8; // CUtlVector<FeNodeBase_t>
            public const nint �p�f� = 0xFF7AA420; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A8740; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A9D20; // 
            public const nint  = 0x43747369; // 
            public const nint �p�f� = 0xFF7A8FF0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A9930; // 
            public const nint  = 0x75546974; // 
            public const nint �p�f� = 0xFF7A8940; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AB6E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint иz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7ABA30; // 
            public const nint  = 0x73696C6C; // 
            public const nint �p�f� = 0xFF7AA6E0; // 
            public const nint  = 0x6E496564; // 
            public const nint �p�f� = 0xFF7AAAB0; // 
            public const nint  = 0x676E6972; // 
            public const nint �p�f� = 0xFF7AACC0; // 
            public const nint  = 0x7053646D; // 
            public const nint �p�f� = 0xFF7ABC80; // 
            public const nint  = 0x43646C72; // 
            public const nint �p�f� = 0xFF7A8830; // 
            public const nint  = 0x65726570; // 
            public const nint �p�f� = 0xFF7ABFF0; // 
            public const nint  = 0x65726570; // 
            public const nint �p�f� = 0xFF7A86D0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A97C0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AC060; // 
            public const nint  = 0x65526564; // 
            public const nint �p�f� = 0xFF7AA080; // 
            public const nint  = 0x74536D69; // 
            public const nint �p�f� = 0xFF7AA240; // 
            public const nint  = 0x6E41646D; // 
            public const nint �p�f� = 0xFF7AAFE0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  �z�� = 0x6C745543; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7865646E; // 
            public const nint �p�f� = 0xFF7AB630; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A8A70; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @�z�� = 0x6C745543; // 
            public const nint  = 0x745F7365; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x6C745543; // 
            public const nint  = 0x0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint бz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AA510; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint p�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A96B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint p�z�� = 0x669B7628; // 
            public const nint �p�f� = 0x2; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  �z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AAD70; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // uint16
            public const nint �p�f� = 0xFF7AB370; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // uint32
            public const nint �p�f� = 0x3; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // Vector4D
            public const nint �p�f� = 0x4; // 
            public const nint  Җf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // 
            public const nint �p�f� = 0x4; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B7628; // fltx4
            public const nint �p�f� = 0x6; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A9250; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A9600; // 
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // uint16[4]
            public const nint �p�f� = 0xFF7AB280; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint pfz�� = 0x669B7628; // 
            public const nint �p�f� = 0x2; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint `�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A91E0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint P�z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A9C10; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A9FB0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint Сz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AA2D0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AABB0; // 
            public const nint �͖f� = 0x669D20D0; // 
            public const nint  = 0x56676E69; // 
            public const nint  = 0x78657472; // 
            public const nint �p�f� = 0xFF7AAE20; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  �z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AC3B0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @�z�� = 0x669B7628; // 
            public const nint �p�f� = 0x1A; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �`z�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A6700; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �gz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A6880; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint 0iz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A6B60; // 
            public const nint �͖f� = 0x669D20D0; // 
            public const nint �p�f� = 0xFF7A6BF0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �lz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A6D70; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @oz�� = 0x669B71D8; // 
            public const nint �p�f� = 0x0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ppz�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7A5DC0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint  = 0x669B76B8; // 
            public const nint �p�f� = 0x2B58C170; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint �ez�� = 0x669B74F8; // 
            public const nint �p�f� = 0xFF7AC4F0; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint ��z�� = 0x6C745543; // 
            public const nint  = 0x3E20; // 
            public const nint  = 0x6F627466; // 
            public const nint  = 0x3E; // 
            public const nint  = 0x6F435873; // 
            public const nint  = 0x65747562; // 
            public const nint  = 0x72755373; // 
            public const nint  = 0x72746E6F; // 
            public const nint  = 0x65646F4D; // 
            public const nint  = 0x3E2074; // 
            public const nint  = 0x6E497265; // 
            public const nint  = 0x3E2074; // 
            public const nint  = 0x6F436C65; // 
            public const nint  = 0x3E20; // 
            public const nint  = 0x74614D43; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x3E20726F; // 
            public const nint  = 0x61487265; // 
            public const nint  = 0x3E20; // 
            public const nint  = 0x6E6F4343; // 
            public const nint  = 0x75202C67; // 
            public const nint  = 0x74636556; // 
            public const nint  = 0x423A3A74; // 
            public const nint  = 0x6E6F7465; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x3E202A74; // 
            public const nint  = 0x6E6F7465; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x5F746E65; // 
            public const nint `֖f� = 0x669D20D0; // 
            public const nint @{�� = 0x6C745543; // 
            public const nint  = 0x3E20; // 
            public const nint  = 0x6F627466; // 
            public const nint  = 0x3E; // 
            public const nint  = 0x6F435873; // 
            public const nint  = 0x65747562; // 
            public const nint  = 0x72755373; // 
            public const nint  = 0x72746E6F; // 
            public const nint  = 0x65646F4D; // 
            public const nint  = 0x3E2074; // 
            public const nint  = 0x6E497265; // 
            public const nint  = 0x3E2074; // 
            public const nint  = 0x6F436C65; // 
            public const nint  = 0x3E20; // 
            public const nint  = 0x74614D43; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x3E20726F; // 
            public const nint  = 0x61487265; // 
            public const nint  = 0x3E20; // 
            public const nint  = 0x6E6F4343; // 
            public const nint  = 0x75202C67; // 
            public const nint  = 0x74636556; // 
            public const nint  = 0x423A3A74; // 
            public const nint  = 0x6E6F7465; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x3E202A74; // 
            public const nint  = 0x6E6F7465; // 
            public const nint  = 0x6C745543; // 
            public const nint  = 0x5F746E65; // 
            public const nint  = 0x73636968; // 
            public const nint  = 0x6E776F; // 
            public const nint  = 0x73636968; // 
            public const nint  = 0x0; // 
            public const nint  = 0x73636968; // 
            public const nint  = 0x53737365; // 
            public const nint  = 0x7243656C; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x756C6156; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x61567461; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x56676E69; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x57676E69; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x6C6F436D; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x6168536D; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x49796172; // 
            public const nint  = 0x7262694C; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x6F4E7365; // 
            public const nint  = 0x545F776F; // 
            public const nint  = 0x6C61; // 
            public const nint  = 0x746C754D; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x6C756166; // 
            public const nint  = 0x435F6465; // 
            public const nint  = 0x73655443; // 
            public const nint  = 0x726F7372; // 
            public const nint  = 0x435F6465; // 
            public const nint  = 0x73655443; // 
            public const nint  = 0x726F7372; // 
            public const nint  = 0x57746961; // 
            public const nint  = 0x42797469; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x523A3A65; // 
            public const nint  = 0x74736554; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x746E696F; // 
            public const nint  = 0x745F4264; // 
            public const nint  = 0x636E7546; // 
            public const nint  = 0x6C754D3A; // 
            public const nint  = 0x6575; // 
            public const nint  = 0x7543726F; // 
            public const nint  = 0x61487372; // 
            public const nint  = 0x4B3A3A73; // 
            public const nint  = 0x6F737275; // 
            public const nint  = 0x523A3A73; // 
            public const nint  = 0x646E4172; // 
            public const nint  = 0x4B3A3A73; // 
            public const nint  = 0x76697463; // 
            public const nint  = 0x624F726F; // 
            public const nint  = 0x6C65636E; // 
            public const nint  = 0x546C6176; // 
            public const nint  = 0x65684374; // 
            public const nint  = 0x3A62694C; // 
            public const nint  = 0x65; // 
            public const nint  = 0x3A62694C; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6C615673; // 
            public const nint  = 0x72; // 
            public const nint  = 0x57656B61; // 
            public const nint  = 0x6D72; // 
            public const nint  = 0x6F746365; // 
            public const nint  = 0x726F; // 
            public const nint  = 0x41656B61; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x73746E; // 
            public const nint  = 0x61727241; // 
            public const nint  = 0x614D746E; // 
            public const nint  = 0x61727241; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x0; // 
            public const nint  = 0x65726975; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x6D657269; // 
            public const nint  = 0x6E756F43; // 
            public const nint  = 0x3A3A646F; // 
            public const nint  = 0x6C6C6143; // 
            public const nint  = 0x6C755043; // 
            public const nint  = 0x6C61; // 
            public const nint  = 0x6E61525F; // 
            public const nint  = 0x75523A3A; // 
            public const nint  = 0x435F776F; // 
            public const nint  = 0x6E75523A; // 
            public const nint  = 0x61575F77; // 
            public const nint  = 0x6E; // 
            public const nint @זf� = 0x2B089000; // 
            public const nint  = 0xA3003E20; // 
            public const nint @זf� = 0x2B089000; // 
            public const nint �p�f� = 0x487B3FF0; // 
            public const nint @זf� = 0x2B089000; // 
            public const nint �p�f� = 0x487B7A00; // 
            public const nint `֖f� = 0x2B089000; // 
            public const nint  = 0x206F666E; // 
            public const nint `֖f� = 0x2B089000; // 
            public const nint �p�f� = 0x487C6E10; // 
            public const nint `֖f� = 0x2B089000; // 
            public const nint �p�f� = 0x487C9F90; // 
            public const nint  = 0x7243656C; // 
            public const nint �p�f� = 0x487C86B0; // 
            public const nint `֖f� = 0x2B089000; // 
            public const nint �p�f� = 0x487B7700; // 
            public const nint  = 0x49444750; // 
            public const nint �p�f� = 0x487B88B0; // 
            public const nint  = 0x6C755043; // 
            public const nint �p�f� = 0x487B8C50; // 
            public const nint `֖f� = 0x2B089000; // 
            public const nint �p�f� = 0x487B53E0; // 
            public const nint �͖f� = 0x2B089000; // 
            public const nint �p�f� = 0x487C2BF0; // 
            public const nint `֖f� = 0x2B089000; // 
            public const nint �,|H� = 0x6C745543; // 
            public const nint  = 0x3E; // 
            public const nint �͖f� = 0x2B089000; // 
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 0
        public static class _v_f__ {
        }
        // Parent: None
        // Field count: 173
        public static class _v_f__ {
            public const nint �Ζf� = 0x669D20D0; // 
            public const nint  = 0x669B74F8; // Vector
            public const nint �p�f� = 0x5F37A5F0; // 
            public const nint  = 0x74656E67; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5F37A8B0; // 
            public const nint  = 0x436C6163; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5F37A580; // 
            public const nint  = 0x61635367; // 
            public const nint  = 0x669B74F8; // 
            public const nint �p�f� = 0x5F37A4A0; // 
            public const nint  = 0x72656461; // 
            public const nint  = 0x6E697250; // 
            public const nint  = 0x6E656562; // 
            public const nint  = 0x74726F73; // 
            public const nint  = 0x6E697250; // 
            public const nint  = 0x6C616972; // 
            public const nint  = 0x646E6572; // 
            public const nint  = 0x77657053; // 
            public const nint  = 0x20726567; // 
            public const nint  = 0x61657473; // 
            public const nint  = 0x3; // H�\$H�t$WH���|$P
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0xCD; // 
            public const nint  = 0x6E694274; // 
            public const nint  = 0x0; // 
            public const nint  = 0x100; // 
            public const nint  = 0x536D6F43; // 
            public const nint  = 0x657865; // 
            public const nint  = 0x100; // 
            public const nint  = 0x0; // 
            public const nint  = 0x184; // mat_shader_cache
            public const nint P�5_� = 0x81701251; // 
            public const nint  = 0x6E656353; // 
            public const nint  = 0x64656B61; // 
            public const nint  = 0x3; // 
            public const nint nVertexID = 0x676F7250; // 
            public const nint  = 0x28207365; // 
            public const nint  = 0x6573555C; // 
            public const nint  = 0x4; // 
            public const nint  = 0x2D2D2D2D; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x5D0DD2E0; // 
            public const nint  = 0x1; // 
            public const nint  = 0x63616C70; // 
            public const nint  = 0x696E6E69; // 
            public const nint  = 0x75DE364E; // 
            public const nint  = 0x0; // 
            public const nint  = 0x29000002; // 
            public const nint DefaultFontAliasGroup = 0x4; // 
            public const nint  = 0x2A3356C0; // 
            public const nint  = 0x1; // 
            public const nint  = 0x6563616C; // 
            public const nint  = 0x52455355; // 
            public const nint  = 0x4B432D50; // 
            public const nint  = 0x706D655C; // 
            public const nint  = 0x41455242; // 
            public const nint  = 0x706D7564; // 
            public const nint  = 0x61747320; // 
            public const nint  = 0x72747441; // 
            public const nint  = 0x6665645F; // 
            public const nint  = 0x643D7865; // 
            public const nint  = 0x6E656353; // 
            public const nint  = 0x64657869; // 
            public const nint  = 0x616D6D6F; // 
            public const nint  = 0x32283631; // 
            public const nint  = 0x20202020; // 
            public const nint  = 0x564C4156; // 
            public const nint  = 0x5F4C4453; // 
            public const nint  = 0x534C4542; // 
            public const nint  = 0x4341435F; // 
            public const nint  = 0x42414E45; // 
            public const nint  = 0x7A696C69; // 
            public const nint  = 0x706D655C; // 
            public const nint  = 0x41455242; // 
            public const nint  = 0x706D7564; // 
            public const nint  = 0x6573555C; // 
            public const nint  = 0x536D6F43; // 
            public const nint  = 0x657865; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x41434F4C; // 
            public const nint  = 0x61447070; // 
            public const nint  = 0x3A433D29; // 
            public const nint  = 0x504D4554; // 
            public const nint  = 0x5C6C6163; // 
            public const nint  = 0x6563616C; // 
            public const nint  = 0x52455355; // 
            public const nint  = 0x4B432D50; // 
            public const nint  = 0x73726573; // 
            public const nint  = 0x766C6156; // 
            public const nint  = 0x78652E6D; // 
            public const nint  = 0x564C4156; // 
            public const nint  = 0x5F4C4453; // 
            public const nint  = 0x534C4542; // 
            public const nint  = 0x4341435F; // 
            public const nint  = 0x42414E45; // 
            public const nint  = 0x7A696C69; // 
            public const nint  = 0x706D655C; // 
            public const nint  = 0x41455242; // 
            public const nint  = 0x706D7564; // 
            public const nint  = 0x6573555C; // 
            public const nint  = 0x536D6F43; // 
            public const nint  = 0x657865; // 
            public const nint  = 0x72657355; // 
            public const nint  = 0x41434F4C; // 
            public const nint  = 0x61447070; // 
            public const nint  = 0x3A433D29; // 
            public const nint  = 0x504D4554; // 
            public const nint  = 0x5C6C6163; // 
            public const nint  = 0x6563616C; // 
            public const nint  = 0x52455355; // 
            public const nint  = 0x4B432D50; // 
            public const nint  = 0x73726573; // 
            public const nint  = 0x766C6156; // 
            public const nint  = 0x78652E6D; // 
            public const nint  = 0x564C4156; // 
            public const nint  = 0x5F4C4453; // 
            public const nint  = 0x534C4542; // 
            public const nint  = 0x4341435F; // 
            public const nint  = 0x42414E45; // 
            public const nint  = 0x7A696C69; // 
            public const nint P�sH� = 0xF27F3900; // 
            public const nint  = 0x44505041; // 
            public const nint  = 0x616F525C; // 
            public const nint  = 0x49544143; // 
            public const nint  = 0x4D4D4F43; // 
            public const nint  = 0x656D7563; // 
            public const nint  = 0x735C5357; // 
            public const nint  = 0x41434F4C; // 
            public const nint  = 0x74614470; // 
            public const nint  = 0x6573555C; // 
            public const nint  = 0x676F7250; // 
            public const nint  = 0x28207365; // 
            public const nint  = 0x63616C70; // 
            public const nint  = 0x3D504D54; // 
            public const nint  = 0x545C6C61; // 
            public const nint  = 0x5250474E; // 
            public const nint  = 0x52455355; // 
            public const nint  = 0x6E656D75; // 
            public const nint  = 0x643D7865; // 
            public const nint  = 0x42414E45; // 
            public const nint  = 0x5F79616C; // 
            public const nint  = 0x555F5245; // 
            public const nint  = 0x4C475F5F; // 
            public const nint  = 0x3D50554E; // 
            public const nint  = 0x564C4156; // 
            public const nint  = 0x44505041; // 
            public const nint  = 0x616F525C; // 
            public const nint  = 0x49544143; // 
            public const nint  = 0x4D4D4F43; // 
            public const nint  = 0x656D7563; // 
            public const nint  = 0x735C5357; // 
            public const nint  = 0x41434F4C; // 
            public const nint  = 0x74614470; // 
            public const nint  = 0x6573555C; // 
            public const nint  = 0x676F7250; // 
            public const nint  = 0x28207365; // 
            public const nint  = 0x63616C70; // 
            public const nint  = 0x3D504D54; // 
            public const nint  = 0x545C6C61; // 
            public const nint  = 0x5250474E; // 
            public const nint  = 0x52455355; // 
            public const nint  = 0x6E656D75; // 
            public const nint  = 0x643D7865; // 
            public const nint  = 0x42414E45; // 
            public const nint  = 0x5F79616C; // 
            public const nint  = 0x555F5245; // 
            public const nint  = 0x4C475F5F; // 
            public const nint  = 0x3D50554E; // 
            public const nint  = 0x564C4156; // 
        }
        // Parent: None
        // Field count: 0
        public static class tR {
        }
        // Parent: None
        // Field count: 0
        public static class tR {
        }
        // Parent: None
        // Field count: 0
        public static class tR {
        }
        // Parent: None
        // Field count: 58
        public static class tR {
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
        }
        // Parent: None
        // Field count: 0
        public static class tR {
        }
        // Parent: None
        // Field count: 0
        public static class tR {
        }
        // Parent: None
        // Field count: 301
        public static class tR {
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800F9E90; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x800FA0F0; // 
            public const nint  = 0x44206D61; // 
            public const nint  = 0xA; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint @UH��H�� I���QL�V���H��� = 0x801026D0; // 
            public const nint @UH��H�� H�AH��H�� ]H�`������H�|$UH��H�� LcQA����Lc�M+�H��M;�s3�H�|$@H�� ]Ày( = 0x8011BBD0; // 
            public const nint @UH��H�� H�� ]�M����������������H��H�XH�pH�xUH��ATAUH��PE3�L��f�@�I��$0 = 0x800FD6D0; // 
            public const nint @UH�싁$ = 0x80111B30; // 
            public const nint @UH��H�� H�� ]�M����������������H��H�XH�pH�xUH��ATAUH��PE3�L��f�@�I��$0 = 0x800FBE80; // 
            public const nint L�D$UH��SVAWH��h�� = 0x801128E0; // 
            public const nint @UH�싁$ = 0x80110060; // 
            public const nint  = 0x7469622D; // 
            public const nint  = 0x66; // 
            public const nint @UH�층�1]���������������������@UH���3 = 0x801052B0; // 
            public const nint @UH�싁4 = 0x800FB7A0; // 
            public const nint H�\$H�t$H�|$UH��H�� H��P = 0x800FE990; // 
            public const nint H�\$H�|$UH��H�� H���( = 0x800FAB60; // 
            public const nint @UH��SWH��P = 0x800FAD80; // 
            public const nint @UH��H����0 = 0x800FDEA0; // 
            public const nint @UH��WATAUAVAW�� = 0x800FDA60; // 
            public const nint @UH��SATH��0L���JH�ځ� = 0x80135030; // 
            public const nint @UH��H�� �J�� = 0x80135140; // 
            public const nint  = 0x75667608; // 
            public const nint H�\$UH��H�� H��H���sqL�AH��� = 0x75667608; // 
            public const nint @UH��H�� H�� ]������������������@UH��QH�AL���Q;�� = 0x800FD3E0; // 
            public const nint H�\$H�|$UH��H�� H�H���P0H��( = 0x80102750; // 
            public const nint H�\$H�|$UH��H�� H��� = 0x80101CD0; // 
            public const nint H�\$ UH��VWATAUAVAWH��P = 0x80105440; // 
            public const nint H�\$UH��H�� ��0 = 0x80104050; // 
            public const nint @UH���A����]�������������������@UH���AL�AD�QA�@I���������A+@Hc�I��H��A�HPI��A+HHL��I��Lc�I��H��D�E;���]���������������H�\$H�|$UH��H�� H��� = 0x80103FC0; // 
            public const nint  = 0x3345; // 
            public const nint  = 0x494B4F4F; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4E; // 
            public const nint  = 0x45445F53; // 
            public const nint  = 0x4F43535F; // 
            public const nint  = 0x4C4552; // 
            public const nint  = 0x45445F53; // 
            public const nint  = 0x45445F53; // 
            public const nint  = 0x4547; // 
            public const nint  = 0x54415F53; // 
            public const nint  = 0x54415F53; // 
            public const nint  = 0x414D5F53; // 
            public const nint  = 0x4D4C5F53; // 
            public const nint  = 0x4F545F53; // 
            public const nint  = 0x504C5F53; // 
            public const nint  = 0x52505F53; // 
            public const nint  = 0x414D5F53; // 
            public const nint  = 0x414D5F53; // 
            public const nint  = 0x414D5F53; // 
            public const nint  = 0x4D475F53; // 
            public const nint  = 0x41505F53; // 
            public const nint  = 0x50475F53; // 
            public const nint  = 0x414D5F53; // 
            public const nint  = 0x50475F53; // 
            public const nint  = 0x54475F53; // 
            public const nint  = 0x45525F53; // 
            public const nint  = 0x504C5F53; // 
            public const nint  = 0x32; // 
            public const nint  = 0x32; // 
            public const nint  = 0x5444; // 
            public const nint  = 0x45525F53; // 
            public const nint  = 0x49575F53; // 
            public const nint  = 0x48545F53; // 
            public const nint  = 0x4E555F53; // 
            public const nint  = 0x414D5F53; // 
            public const nint  = 0x5F4C4552; // 
            public const nint  = 0x54535F54; // 
            public const nint  = 0x535F4154; // 
            public const nint  = 0x344445; // 
            public const nint  = 0x324445; // 
            public const nint  = 0x535F434F; // 
            public const nint  = 0x4E4F4954; // 
            public const nint  = 0x5F544F4C; // 
            public const nint  = 0x5F343641; // 
            public const nint  = 0x535F3245; // 
            public const nint  = 0x5F535049; // 
            public const nint  = 0x5F323344; // 
            public const nint  = 0x535F3233; // 
            public const nint  = 0x54535F32; // 
            public const nint  = 0x5453; // 
            public const nint  = 0x54535F32; // 
            public const nint  = 0x54535F47; // 
            public const nint  = 0x0; // 
            public const nint  = 0x535F5245; // 
            public const nint  = 0x4C415F53; // 
            public const nint  = 0x54535F46; // 
            public const nint  = 0x5F535049; // 
            public const nint  = 0x5F323344; // 
            public const nint  = 0x315F3233; // 
            public const nint  = 0x32334C45; // 
            public const nint  = 0x54535F; // 
            public const nint  = 0x54535F32; // 
            public const nint  = 0x36315F32; // 
            public const nint  = 0x36315F32; // 
            public const nint  = 0x36315F32; // 
            public const nint  = 0x363145; // 
            public const nint  = 0x36; // 
            public const nint  = 0x36; // 
            public const nint  = 0x36; // 
            public const nint  = 0x44475F53; // 
            public const nint  = 0x50425F53; // 
            public const nint  = 0x45525F53; // 
            public const nint  = 0x4F435F53; // 
            public const nint  = 0x5049; // 
            public const nint  = 0x44555F53; // 
            public const nint  = 0x45525F53; // 
            public const nint  = 0x4D5F464C; // 
            public const nint  = 0x4E5F464C; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5F46464F; // 
            public const nint  = 0x5F524542; // 
            public const nint  = 0x4E434644; // 
            public const nint  = 0x0; // 
            public const nint  = 0x315F5353; // 
            public const nint  = 0x7436315F; // 
            public const nint  = 0x315F5552; // 
            public const nint  = 0x315F554E; // 
            public const nint  = 0x53494C44; // 
            public const nint  = 0x0; // 
            public const nint  = 0x315F4445; // 
            public const nint  = 0x743631; // 
            public const nint  = 0x315F504D; // 
            public const nint  = 0x5F594152; // 
            public const nint  = 0x36315F30; // 
            public const nint  = 0x743631; // 
            public const nint  = 0x45525554; // 
            public const nint  = 0x415F464C; // 
            public const nint  = 0x4D5F464C; // 
            public const nint  = 0x5453; // 
            public const nint  = 0x4D5F464C; // 
            public const nint  = 0x4D5F464C; // 
            public const nint  = 0x445F464C; // 
            public const nint  = 0x445F464C; // 
            public const nint  = 0x415F464C; // 
            public const nint  = 0x555F464C; // 
            public const nint  = 0x435F464C; // 
            public const nint  = 0x455F464C; // 
            public const nint  = 0x0; // 
            public const nint  = 0x45544152; // 
            public const nint  = 0x44; // 
            public const nint  = 0x424154; // 
            public const nint  = 0x52; // 
            public const nint  = 0x534C4344; // 
            public const nint  = 0x5353; // 
            public const nint  = 0x0; // 
            public const nint  = 0x554C52; // 
            public const nint  = 0x554C4E; // 
            public const nint  = 0x444C45; // 
            public const nint  = 0x5453494C; // 
            public const nint  = 0x445F464C; // 
            public const nint  = 0x535F464C; // 
            public const nint  = 0x45565245; // 
            public const nint  = 0x4D4F4345; // 
            public const nint  = 0x4854; // 
            public const nint  = 0x4C5F464C; // 
            public const nint  = 0x435F464C; // 
            public const nint  = 0x565F464C; // 
            public const nint  = 0x505F464C; // 
            public const nint  = 0x415F464C; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5245; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4; // 
            public const nint  = 0x8; // 
            public const nint  = 0x1A; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xA; // 
            public const nint  = 0x32; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x2; // 
            public const nint  = 0xE; // 
            public const nint  = 0x6; // 
            public const nint  = 0x2; // 
            public const nint  = 0xA; // 
            public const nint  = 0x2; // 
            public const nint  = 0x12; // 
            public const nint  = 0x6; // 
            public const nint  = 0x2; // 
            public const nint  = 0x4; // 
            public const nint  = 0x8; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4; // 
            public const nint  = 0x2; // 
            public const nint  = 0x2; // 
            public const nint  = 0x6; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4; // 
            public const nint  = 0x2; // 
            public const nint  = 0x4; // 
            public const nint  = 0x2; // 
            public const nint  = 0x4; // 
            public const nint  = 0x1001; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5; // 
            public const nint @UH��L����tB��t��u	�A����3�]ËI��������v
            ��v��u����tڃ�u�I�@]�H�A]�������������@UH��3�]��������@UH��L����tB��t��u
            �A����3�]��I������<v<v<u����tۀ�u�I�@]�H�A]�������������@UH��H�� H�* = 0x1503; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3; // 
            public const nint  = 0x1505; // 
            public const nint  = 0x0; // 
            public const nint  = 0x1; // 
            public const nint  = 0x1507; // 
            public const nint  = 0x0; // 
            public const nint  = 0x1; // 
            public const nint  = 0x1514; // 
            public const nint  = 0x2; // 
            public const nint  = 0x1009; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x100A; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
        }
        // Parent: None
        // Field count: 0
        public static class tR {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 0
        public static class ____H___________H_I_H__H____ {
        }
        // Parent: None
        // Field count: 660
        public static class _ {
            public const nint D = 0x17BD907; // 
            public const nint  = 0x17BD82E; // 
            public const nint ������������ = 0x17BD862; // ��$��
            public const nint ������������ = 0x17BD89B; // ��$��
            public const nint  = 0x17BD8D3; // 
            public const nint  = 0x4003409; // m_flZOffset
            public const nint  = 0x61666564; // 
            public const nint  = 0x729D9A0; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint ���_� = 0x63DA260; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4002C23; // 
            public const nint  = 0x4003409; // 
            public const nint weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x2E676D64; // 
            public const nint +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
            ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x4006415; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656B6162; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6174654D; // 
            public const nint  = 0x65736162; // 
            public const nint  = 0x706F7270; // 
            public const nint  = 0x0; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6E6970; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x70616577; // 
            public const nint +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
            ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat = 0x79646F62; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x69736F50; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E6970; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x70616577; // 
            public const nint ���_� = 0x70616577; // 
            public const nint ���_� = 0x70616577; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x646E6168; // 
            public const nint  = 0x72EC640; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x79706F43; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0xA779851D; // 
            public const nint  = 0x97E8F1D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x706F7270; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F62; // 
            public const nint  = 0x2C20; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6C6C6162; // 
            public const nint  = 0x646E6168; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x656B6162; // 
            public const nint  = 0x6174654D; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x79706F63; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x72EC4C0; // 
            public const nint  = 0x6B63656E; // 
            public const nint  = 0x6C6C6162; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x62657965; // 
            public const nint  = 0x6C6B6E61; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6F6C6C61; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x6F6C6F6D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x6F6C6F6D; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x7571696C; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x69736F50; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x0; // 
            public const nint phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl = 0x6F6C6F6D; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x766C6570; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x656E6F62; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6F6C6C61; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x0; // 
            public const nint phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl = 0x70616577; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x17BDE9D; // 
            public const nint  = 0x17BDEEC; // 
            public const nint  = 0x17BDF3E; // 
            public const nint  = 0x17BDF90; // 
            public const nint  = 0x6F677363; // 
            public const nint  = 0x6C6C6163; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x726F6353; // 
            public const nint  = 0x7270732B; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x635F6C63; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6574756D; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x65646968; // 
            public const nint  = 0x65646968; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x696E6173; // 
            public const nint  = 0x696E6173; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x61736964; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6E6F6349; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x72747865; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x77647568; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6461722B; // 
            public const nint  = 0x6461722B; // 
            public const nint  = 0x74756C43; // 
            public const nint  = 0x67676F54; // 
            public const nint  = 0x63696F56; // 
            public const nint  = 0x7373656D; // 
            public const nint  = 0x52647453; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x736E6F43; // 
            public const nint  = 0x6D616554; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x5F647568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x746C754D; // 
            public const nint  = 0xC3236A1D; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x736F6F42; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6E2D6469; // 
            public const nint  = 0x6E3A737B; // 
            public const nint  = 0x74657323; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x53766E49; // 
            public const nint  = 0x63616C70; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x72474548; // 
            public const nint  = 0x66696E4B; // 
            public const nint  = 0x6D697250; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x7375655A; // 
            public const nint  = 0xD20; // 
            public const nint  = 0x7E163F1D; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x61646152; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x725F6C63; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6E65706F; // 
            public const nint  = 0x6E65706F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x74646977; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0xE36D22CA; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x67676F74; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x67676F74; // 
            public const nint  = 0x635F6C63; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x2D70616D; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x63696F56; // 
            public const nint  = 0x5F646E73; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616548; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x7466656C; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x723A737B; // 
            public const nint  = 0x673A737B; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x63736564; // 
            public const nint  = 0x6F677363; // 
            public const nint  = 0xA779851D; // 
            public const nint  = 0x97E8F1D; // 
            public const nint  = 0x600161A; // 
            public const nint  = 0x626D6F42; // 
            public const nint  = 0x5F646E73; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x63726570; // 
            public const nint  = 0x74616544; // 
            public const nint  = 0x736E6F63; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x63726570; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0xA5D9646E; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0xF5AD4CF4; // 
            public const nint  = 0x74746968; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x2678EB8; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x6D756E23; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x74617473; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6E3A737B; // 
            public const nint  = 0x63736564; // 
            public const nint  = 0x16ED8FBF; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6C6C6F43; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x656D616E; // 
            public const nint  = 0x7543736A; // 
            public const nint  = 0x633A737B; // 
            public const nint  = 0x6F666E49; // 
            public const nint  = 0x69726172; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x69726172; // 
            public const nint  = 0x74616863; // 
            public const nint  = 0x74617661; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74696177; // 
            public const nint  = 0x74617661; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6772616C; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x74736542; // 
            public const nint  = 0x70616557; // 
            public const nint  = 0x743A737B; // 
            public const nint  = 0x733A737B; // 
            public const nint  = 0x70616557; // 
            public const nint  = 0x743A737B; // 
            public const nint  = 0x733A737B; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x696D696C; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x763A737B; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x696D696C; // 
            public const nint  = 0x74736542; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6566666F; // 
            public const nint  = 0x6F2D6469; // 
            public const nint  = 0x6E69616D; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x2D726162; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x74786554; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x65737523; // 
            public const nint  = 0x65737523; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x72617473; // 
            public const nint  = 0x656D6163; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x772D6469; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x70617267; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x633A737B; // 
            public const nint  = 0x6B3A647B; // 
            public const nint  = 0x64697053; // 
            public const nint  = 0x95870F03; // 
            public const nint  = 0x6374616D; // 
            public const nint  = 0x6374614D; // 
            public const nint  = 0x653A737B; // 
            public const nint  = 0x6374614D; // 
            public const nint  = 0x6374614D; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x352A344D; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x8E0E161B; // 
        }
        // Parent: None
        // Field count: 659
        public static class _ {
            public const nint  = 0x0; // 
            public const nint D = 0x17BD907; // 
            public const nint  = 0x17BD82E; // 
            public const nint ������������ = 0x17BD862; // ��$��
            public const nint ������������ = 0x17BD89B; // ��$��
            public const nint  = 0x17BD8D3; // 
            public const nint  = 0x4003409; // m_flZOffset
            public const nint  = 0x61666564; // 
            public const nint  = 0x729D9A0; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint ���_� = 0x63DA260; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4002C23; // 
            public const nint  = 0x4003409; // 
            public const nint weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x2E676D64; // 
            public const nint +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
            ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x4006415; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656B6162; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6174654D; // 
            public const nint  = 0x65736162; // 
            public const nint  = 0x706F7270; // 
            public const nint  = 0x0; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6E6970; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x70616577; // 
            public const nint +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
            ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat = 0x79646F62; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x69736F50; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E6970; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x70616577; // 
            public const nint ���_� = 0x70616577; // 
            public const nint ���_� = 0x70616577; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x646E6168; // 
            public const nint  = 0x72EC640; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x79706F43; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0xA779851D; // 
            public const nint  = 0x97E8F1D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x706F7270; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F62; // 
            public const nint  = 0x2C20; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6C6C6162; // 
            public const nint  = 0x646E6168; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x656B6162; // 
            public const nint  = 0x6174654D; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x79706F63; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x72EC4C0; // 
            public const nint  = 0x6B63656E; // 
            public const nint  = 0x6C6C6162; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x62657965; // 
            public const nint  = 0x6C6B6E61; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6F6C6C61; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x6F6C6F6D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x6F6C6F6D; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x7571696C; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x69736F50; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x0; // 
            public const nint phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl = 0x6F6C6F6D; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x766C6570; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x656E6F62; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6F6C6C61; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x0; // 
            public const nint phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl = 0x70616577; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x17BDE9D; // 
            public const nint  = 0x17BDEEC; // 
            public const nint  = 0x17BDF3E; // 
            public const nint  = 0x17BDF90; // 
            public const nint  = 0x6F677363; // 
            public const nint  = 0x6C6C6163; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x726F6353; // 
            public const nint  = 0x7270732B; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x635F6C63; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6574756D; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x65646968; // 
            public const nint  = 0x65646968; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x696E6173; // 
            public const nint  = 0x696E6173; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x61736964; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6E6F6349; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x72747865; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x77647568; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6461722B; // 
            public const nint  = 0x6461722B; // 
            public const nint  = 0x74756C43; // 
            public const nint  = 0x67676F54; // 
            public const nint  = 0x63696F56; // 
            public const nint  = 0x7373656D; // 
            public const nint  = 0x52647453; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x736E6F43; // 
            public const nint  = 0x6D616554; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x5F647568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x746C754D; // 
            public const nint  = 0xC3236A1D; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x736F6F42; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6E2D6469; // 
            public const nint  = 0x6E3A737B; // 
            public const nint  = 0x74657323; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x53766E49; // 
            public const nint  = 0x63616C70; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x72474548; // 
            public const nint  = 0x66696E4B; // 
            public const nint  = 0x6D697250; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x7375655A; // 
            public const nint  = 0xD20; // 
            public const nint  = 0x7E163F1D; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x61646152; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x725F6C63; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6E65706F; // 
            public const nint  = 0x6E65706F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x74646977; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0xE36D22CA; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x67676F74; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x67676F74; // 
            public const nint  = 0x635F6C63; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x2D70616D; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x63696F56; // 
            public const nint  = 0x5F646E73; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616548; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x7466656C; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x723A737B; // 
            public const nint  = 0x673A737B; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x63736564; // 
            public const nint  = 0x6F677363; // 
            public const nint  = 0xA779851D; // 
            public const nint  = 0x97E8F1D; // 
            public const nint  = 0x600161A; // 
            public const nint  = 0x626D6F42; // 
            public const nint  = 0x5F646E73; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x63726570; // 
            public const nint  = 0x74616544; // 
            public const nint  = 0x736E6F63; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x63726570; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0xA5D9646E; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0xF5AD4CF4; // 
            public const nint  = 0x74746968; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x2678EB8; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x6D756E23; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x74617473; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6E3A737B; // 
            public const nint  = 0x63736564; // 
            public const nint  = 0x16ED8FBF; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6C6C6F43; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x656D616E; // 
            public const nint  = 0x7543736A; // 
            public const nint  = 0x633A737B; // 
            public const nint  = 0x6F666E49; // 
            public const nint  = 0x69726172; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x69726172; // 
            public const nint  = 0x74616863; // 
            public const nint  = 0x74617661; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74696177; // 
            public const nint  = 0x74617661; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6772616C; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x74736542; // 
            public const nint  = 0x70616557; // 
            public const nint  = 0x743A737B; // 
            public const nint  = 0x733A737B; // 
            public const nint  = 0x70616557; // 
            public const nint  = 0x743A737B; // 
            public const nint  = 0x733A737B; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x696D696C; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x763A737B; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x696D696C; // 
            public const nint  = 0x74736542; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6566666F; // 
            public const nint  = 0x6F2D6469; // 
            public const nint  = 0x6E69616D; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x2D726162; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x74786554; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x65737523; // 
            public const nint  = 0x65737523; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x72617473; // 
            public const nint  = 0x656D6163; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x772D6469; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x70617267; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x633A737B; // 
            public const nint  = 0x6B3A647B; // 
            public const nint  = 0x64697053; // 
            public const nint  = 0x95870F03; // 
            public const nint  = 0x6374616D; // 
            public const nint  = 0x6374614D; // 
            public const nint  = 0x653A737B; // 
            public const nint  = 0x6374614D; // 
            public const nint  = 0x6374614D; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x352A344D; // 
        }
        // Parent: None
        // Field count: 0
        public static class PF_BIAS_TYPE_STANDARD {
        }
        // Parent: None
        // Field count: 807
        public static class PF_NOISE_TURB_NONE {
            public const nint  = 0x4F4E5F52; // 
            public const nint default = 0x45504D41; // 
            public const nint  = 0x45504D41; // 
            public const nint  = 0x7137750; // ��{*
            public const nint  = 0x53455241; // 
            public const nint  �*�� = 0x362BA760; // 
            public const nint  = 0x5241444E; // 
            public const nint ���* = 0x7137660; // ��{*
            public const nint  = 0x444E454C; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x17060001; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7910001; // 
            public const nint  = 0x43; // 
            public const nint `��* = 0xFF00574F; // 
            public const nint  = 0xFF00574F; // 
            public const nint  = 0xFFFF004C; // 
            public const nint  = 0x74736566; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x4F; // 
            public const nint  = 0x4C5F6174; // 
            public const nint  = 0x4F465F4E; // 
            public const nint first_or_third_person_@0_#&thirdperson_default = 0x19769640; // 
            public const nint  = 0x52; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x7541348; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x63E7D50; // 
            public const nint �o��� = 0x63E8250; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x2B869890; // 
            public const nint  �*�� = 0x665BF50; // 
            public const nint �o��� = 0x63E8750; // 
            public const nint �o��� = 0x63E8C50; // 
            public const nint  �*�� = 0x7290C00; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x63E9148; // 
            public const nint �o��� = 0x63E9648; // 
            public const nint �o��� = 0x7541A48; // 
            public const nint �o��� = 0x7540C48; // F_RANDOM_MODE_CONSTANT
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x76A55F8; // 
            public const nint  �*�� = 0xF2F148; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x140; // 
            public const nint  = 0x100; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291D30; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0x6D6165; // 
            public const nint  �*�� = 0x7290E80; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x736E6F63; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7290E80; // 
            public const nint  = 0x746E69; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291470; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291470; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x6E6F6974; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291E70; // 
            public const nint  �*�� = 0x72912E0; // 
            public const nint  = 0xFF007475; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7BB0001; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x65687774; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291AB0; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x762E6572; // 
            public const nint  = 0x5F32D401; // 
            public const nint  = 0x76A9810; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x76A9810; // 
            public const nint  = 0x5F6D6165; // 
            public const nint  = 0x76A9810; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  = 0x7592ACD; // 
            public const nint  = 0x5F32D401; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x558C; // 
            public const nint  = 0x482C; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7545610; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x2A6C8A01; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0x97EFCF08; // 
            public const nint  = 0x75E4801; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x97EFCF58; // 
            public const nint  = 0x75E4801; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0x4; // 
            public const nint  = 0x6AF0; // 
            public const nint  = 0x685F6761; // 
            public const nint  = 0x2A6C8A01; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x3; // 
            public const nint  = 0x97EFD518; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x2; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x5264726F; // 
            public const nint  = 0x7545610; // P�.��
            public const nint  = 0x7545610; // 
            public const nint  = 0x5F32D401; // 
            public const nint  = 0x3; // 
            public const nint  = 0x616D726F; // 
            public const nint  = 0x97EFD1C8; // �H-��
            public const nint  = 0x1; // 
            public const nint  = 0x63E9D9E; // P�.��
            public const nint  = 0x6; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x63E9D9E; // �#-��
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x7592A01; // weapon_offset
            public const nint  = 0x762E6572; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0x7545610; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x1; // ����
            public const nint  = 0x7007376; // 
            public const nint  = 0x762E6572; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0x63E9D01; // 
            public const nint  = 0x7545610; // 
            public const nint  = 0x63E9D9E; // 
            public const nint  = 0x7592A01; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0x44207265; // 
            public const nint  = 0x616D726F; // 
            public const nint  = 0x10000; // 
            public const nint  = 0xFFFF004C; // 
            public const nint  = 0x3; // 
            public const nint  = 0x72D0074; // 
            public const nint  �*�� = 0x362BADF0; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  �*�� = 0x362BADF0; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint `�* = 0x7543310; // �H-��
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x1; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7592ACD; // 
            public const nint  �*�� = 0x2B544001; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x616D726F; // 
            public const nint  �*�� = 0x362BB020; // 
            public const nint  = 0x3; // 
            public const nint  = 0x6E69616D; // 
            public const nint  = 0x7592ACD; // {,��
            public const nint  = 0x664F6472; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0x74616566; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0x1; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint PaintKit_handwrap_leathery_snakeskin_orange_tag = 0xFFFFFFFF; // 
            public const nint PaintKit_handwrap_leathery_caution = 0xFFFFFFFF; // 
            public const nint PaintKit_handwrap_leathery_caution_tag = 0xFFFFFFFF; // 
            public const nint PaintKit_operation10_metalic_green = 0xFFFFFFFF; // 
            public const nint PaintKit_operation10_metalic_green_tag = 0x65735543; // 
            public const nint  = 0x6F6E0000; // 
            public const nint  = 0x65706D6F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x7463615F; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65725F6C; // 
            public const nint  = 0x73556172; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint �Ⱦ�u>�뚾b�>}E��-�>����.�> = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint �{�����&��./�,�+�@�#��W%��9*>5L��>�>�G��6�>fƪ���	?��>���?8���@?�}�=�J?[�s>�?�>���>���>n��>�!�>�a>,�?���=�<?Rt�"��>J���>�C���~�>b��=u>��ƾP/>�Dؾ<�&=JW޾ҥp��ؾS6�dHƾ�qd��)�������������>�X��h��*��	s˾
            mC�6˾��O=����&)>/<��R�`>��x�n�>h)7�:M�>L��v$�>J�U���>�Z�<��>6�=���>�'>#O�>��f>�^�>uӎ>��]>^̥>�
            >Q�><�=�C�>E����>܉��d��>$+��ƍ>�=W�xt>&����>>ͷ���Y�=�����*�;�оيҽ�ʾ4�I�����k燾
            M��;T��ɚc��ֳ��?"���ž�﷽QվP��ȥܾD��=d�־�R>P��]��>�����v�>��n�?�׶���?ϥ>�?��>�[�>���>���>���>��>'?��Q>�T?Hk�=�!?6���a?�؝����>n = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint ����ᙾ�꨾e�J�֟����ɽ����HG��ݔ���:=�?�����=�Mq�V = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint �X��.�>��2��>"�<���>>�=rW�>K,>���>���>��>$��>�P�>��?h� >��?��w�V�?�3�����>��о��S>J�F+�=Hv侠���Z�־VuͽjJ̾~`C�.a���Y���1��W��/�c��MҾν�;���<�U��CJ�=x���6�4>Ξ�� Rp>w]d��0�>T�SF�>�K?�P�>�%�=�J�>1?>���>T��>�ח>�Ѫ>j�Z>ݾ>\>���>�=Qu�>�d��ma�>T�9��ê>�ɗ���l>.�ƾF��= = 0x65735543; // 
            public const nint  = 0x6F6E0000; // 
            public const nint  = 0x55747365; // 
            public const nint �6?���>`�@?.Ҧ=�,:?������%?�H��A�?�⾰��>	�
            �/x>~��Y��=��!�6<����EZ���gt��|����#߾{tξ(��v�����x�0����B���+��G�=f��Qʇ>� = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0xFFFF0063; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x635F6D65; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0xFF003263; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x635F6D65; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x61705F63; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x61705F63; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x746E6569; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F667461; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65646D65; // 
            public const nint  = 0x73556172; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x72676D65; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x5F6C6174; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x5F6C6174; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x76736F2E; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x74616C70; // 
            public const nint  = 0x73556172; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x66726570; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x74617453; // 
            public const nint �=�K�>��I>&�>"��>綮>���>|�P>.H�>�4�=�ܸ>$�/���>O�
            >9�&���K>�|I���>�e����=4Fz��\=|i���yx��"���􇽄�v��*�1g��R3��L�0�l��������D?��ܭ���Iw; = 0x65735543; // 
            public const nint  = 0x6576736F; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6174732E; // 
            public const nint  = 0x74617453; // 
            public const nint cents. = 0x65735543; // 
            public const nint  = 0x6D657469; // 
            public const nint  = 0x74617453; // 
            public const nint le cry</i> = 0x65735543; // 
            public const nint  = 0x6100316C; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x637263; // 
            public const nint  = 0x74617453; // 
            public const nint a� = 0x65735543; // 
            public const nint  = 0x636974; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x2E636974; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x2E636974; // 
            public const nint  = 0x49747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x2E636974; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x746573; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6169642E; // 
            public const nint  = 0x74617453; // 
            public const nint �����=�����ɽ�	�� = 0x65735543; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x74617453; // 
            public const nint j1��a侂蜾ɥþ,0Ӿ�W��w���9������V���~�>��ھ\��>�����3�>�hw����>I你�?�e=��
            ?��B>��?�_�>5��>���>�y�>�.?q�Y>x�?��\=�?�R�_�
            ?x���\f�>�lؾ��>q�	���>gO�����%"��TT�;��򙾾{�����J˾E6��#q��%��[W�'l!�r$	>*��Ӝ>Y��H��>�=��5?p��F=?#�@=��?�_>}?���>bM�>���>푳>oU?��W>`?��=��
            ?�و�.�?z�K�:��>5���>�پ+[[>����t��=�V�Ƒ��)���I��9��%����۾�׾�奄@��W���	��,����	��&�=.��t#i>0LӾ�Զ>�������>z#��?Pߜ���?'>ۃ?G�>���>���>�P�>��>�lm>KP�>U	�=B��>,�Q�x��>.�8�3��> = 0x67734D43; // 
            public const nint  = 0x756F7268; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6975622E; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x61746E65; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C61762E; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x762E6C61; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x6D787600; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6972432E; // 
            public const nint  = 0x746E6576; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6972432E; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6F006469; // 
            public const nint  = 0x73655279; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D72615F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D72615F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x706D6F43; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x646D762E; // 
            public const nint  = 0x746E6576; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x69745F72; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0xFF004554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0xFF004554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x4F5F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x455F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x4F5F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint ��vL���4��JG=�H����>Wm����T>ʒ>�ء�>||�E��>�L�~�>� _=��>��>(E�>�i>9
            y>w<�>I = 0x454D4147; // 
            public const nint  = 0x594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint ���>Y�>
            �Y��>xy۽`��>p%�<_�>�9,>h��>P�>d��>��>D�>ȇ
            ?�B>��?��d�?�vk���>dMо,�>LT
            ��E�=�*��<���U�ں��=� = 0x454D4147; // 
            public const nint  = 0x455341; // 
            public const nint  = 0x4547414E; // 
            public const nint =��Ͻu֔=&S����=����0	>���<4�>�a=L��=&��=|e�=�i�=�k=a�>z��<��=����� = 0x454D4147; // 
            public const nint  = 0x59434E; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x445F444C; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0xFF004E45; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F574F46; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x54584554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F4F545F; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x45455246; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x545F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x495F455A; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x505F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x54414456; // 
            public const nint  = 0x4547414E; // 
            public const nint �=�<f;���=�=3Q�=hy�=.:�=�\�=��K=���=Fd�<'��=8d�` �=Qg3��=$�����:=`��Z:<�,ؽ��޼��ֽ�偽���V|���)x��I׽�dѼ�۽��1<ڥɽa;=0����؝=uhK��C�=^�+��~�=�r=�V�=�=9��=0��=��p=�3�=�z�<�j�=#ҷ��J�=��e��Ȁ=pH�����<L���$d���_ƽ!��/=��ׯ���������py�@E���H���'����<��c���0=e��n=b=�sT�Q2s=���;�e=*~�<w==�N=���<�*=b�[<�4=�A.�R��<jg���<͋��(,<| ����W;�t��@5��ŏ�\�Ȼ$ao�N��|6��y8���軠�C�9~1�04��d�:\���ê;|����=�;��L��H�; = 0x454D4147; // 
            public const nint  = 0x4E4146; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x53554C43; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4556; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C61762E; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x36AFF600; // 
            public const nint  = 0x7; // 
            public const nint  = 0x72615F74; // 
            public const nint  = 0x0; // 
            public const nint OnNetUInt16VarChanged = 0x0; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x1F; // 
            public const nint  = 0x6F72702E; // 
            public const nint  = 0x73694C79; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x79746974; // 
            public const nint  = 0x6E657645; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x2E006C64; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x18FCC90; // 
            public const nint te.proto = 0x2B624038; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x685F6B63; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x6C64; // 
            public const nint  = 0x6E657645; // 
            public const nint  = 0x0; // 
            public const nint OnWaterLevelChangeNetworked = 0x0; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C61762E; // 
            public const nint  = 0x6E657645; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x5F64656B; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x6C006C64; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x5D3430; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x19; // 
            public const nint  = 0xFFFFFF00; // 
            public const nint  = 0x6C616365; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x745F7965; // 
            public const nint  = 0x61745379; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x745F7965; // 
            public const nint  = 0x746E6576; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x745F7965; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x36315B20; // 
            public const nint  = 0x73655279; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x35005D31; // 
            public const nint  = 0x6E45726F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x79746900; // 
            public const nint  = 0x6E45726F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x74005D33; // 
            public const nint  = 0x70614365; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C636F74; // 
            public const nint  = 0x70614365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C005D34; // 
            public const nint  = 0x736C6163; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65005D35; // 
            public const nint  = 0x4D736369; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x630065; // 
            public const nint  = 0x4D736369; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x35315B20; // 
            public const nint  = 0x2E746E65; // 
        }
        // Parent: None
        // Field count: 314
        public static class 7 {
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6F6C6F43; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x4E6E6B28; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x66667542; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7AADAB0; // 
            public const nint S������v:j����VM?�:j��"��N�j���H?�QL��=tRCi���F��X�S/�������#�M��U7�9+�w��$�����<�t�K��
            )���;@`  � = 0xFFFFFFFF; // 
            public const nint  = 0x7AADC20; // 
            public const nint �O�w�
             ^�K'k�OP�x��JzH	3���,����\&���|#n� = 0x76A98C0; // 
            public const nint  = 0x76A98E0; // 
            public const nint  = 0x76A9900; // 
            public const nint  = 0x76A9920; // 
            public const nint  = 0x76A9940; // 
            public const nint  = 0x7AADCC0; // 
            public const nint i�������4�໴�wܟ�+g�ޤ6������W�i�K?�+f|��O1Ǚ~ծ�D��+�����$9�>�+��%��W = 0x76A99B8; // 
            public const nint  = 0x7AADE10; // 
            public const nint /��� = 0x2B544320; // 
            public const nint  = 0x7AADE60; // 
            public const nint ˩���ҙ�-%_���+{"��]1>X|J�ܿ�Q������������J�w�s}�~ = 0x2B544430; // 
            public const nint  = 0x7AADEB0; // 
            public const nint �Ə���u�6^�F�&�R^7B�M�;�AK��L��bF�nA�0h�KCs8C�]�c2�!���ɔ���+�͗���^�'�!Ur/4�6�芇���W�w��~�*T4�oߢ��%�y��F�l�u컵r��x":�D��ns�~�\{o��8:����Ec4���3c�͝ Jts��3��ag��٩�������ί_�Q���՟@/�m��*0�����7b��_�e��=Bр�R����+�/�{��A�sBK�, = 0x0; // 
            public const nint  = 0x7AAE050; // 
            public const nint 	 = 0x0; // 
            public const nint  = 0x0; // 
            public const nint 
             = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7AAE0C0; // 
            public const nint �c����}l�a]N	�dB
            6��2� = 0x0; // 
            public const nint  = 0x7AAE210; // 
            public const nint ���PxEW�IpI��]��S6�G�W�X��+�C�`v���hv�z����~'�}��I ��0g緉��:�[F�q��qtg��:/��D�-���	��B�c�"pg�{oS-DC��k�w&�|S����*C�W<��2L��]��S6�G�W�X��+��\�_����k���+�R��ñG��]�B���]�M���Zs\����m�~ ��a4�瑫�v��WVK8�~d�����1�w�-���@�C~����2���=>��'�G����k��y�5B|9�r���.稇���r�y�E~�#pD{���ӽo��'E�P�#�=�!�޿;y&y����Us�.���{�w��]����~ߖ��w�u�[��?����{8��>���^�?9j)K�}���W��	��擧]����yӊ�<�f���N?�Yk����%ͺ����(;[2��Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
            FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A10; // 
            public const nint  = 0x7AAE3D0; // 
            public const nint �Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
            FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A90; // 
            public const nint  = 0x2B544AD0; // 
            public const nint  = 0x6349820; // 
            public const nint  = 0x2B544B50; // 
            public const nint  = 0x7AAE610; // 
            public const nint |�%���앗u/����'�����T8��@�P��1x,.���a�ﮒj="��<H&�����h�!���V���!W�нh����ܣ����j�b[x��U��;e{C��W���I�[��@���0N0vѧ=,ˡ�;U�+5*=�F��ШPwW��^V���n��]+7��Xy�R��`��� ��?x�w@�r��X�o�v�5?V|-���A��'7�e[��`Vn����ُ98� ��N��_��=&.>�jqH��ypuw������m� = 0x2B544BD0; // 
            public const nint  = 0x7AAE760; // 
            public const nint a2]����_?�/���h���g�7�]8x@l�O��p�{���Gp\���<�eK?ѷA6p耼�xRf_`����p� y��Z���4^��߿���+���A��`������h��.}������E���|}���fy<��eґ���aE��1����[��y��0h�E&N���6����ҟ+~�={��_0�n��y��K�����t�������4�M��һo���4g8��/pD��ɼ�}���<mM^�*ب&z:&Fԭ�3onv{��� = 0x2B544C50; // 
            public const nint  = 0x7AAE8C0; // 
            public const nint \9$�-
            �/ = 0x2B544CD0; // 
            public const nint  = 0x7AAEA30; // 
            public const nint �m��u��Lp��]��>wO��:uk��Yo^�T�(id�g�aN.����(!B�!�̨@   � = 0x2B544D50; // 
            public const nint  = 0x2B544D90; // 
            public const nint NoteamDot.AddClass('hidden');
                    elTDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elCtDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elNoteamDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elFavoriteIconNoteam.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('noteam', id));
                    elFavoriteIconCt.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('ct', id));
                    elFavoriteIconT.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                functi = 0x2B544DD0; // 
            public const nint  = 0x2B544E10; // 
            public const nint item-tile__equipped__radiodot--filled');
                    elNoteamDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elFavoriteIconNoteam.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('noteam', id));
                    elFavoriteIconCt.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('ct', id));
                    elFavoriteIconT.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capabilit = 0x2B544E50; // 
            public const nint  = 0x7AAEAD0; // 
            public const nint ��96���x��K�R�?[a|c��S��.-��wf��`8�Pz��G�S���n�9�gx_U|~��:�3��oH*�Z]�}q���(�!�z��O�˸�x".��~C>}~���x-�]�>���Ӆ(c&��,�|9 = 0x2B544ED0; // 
            public const nint  = 0x7AAEFF0; // 
            public const nint en', !InventoryAPI.ItemIsInFavorites('ct', id));
                    elFavoriteIconT.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_p = 0x2B544F50; // 
            public const nint  = 0x2B544F90; // 
            public const nint t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > Inventor = 0x2B544FD0; // 
            public const nint  = 0x2B545010; // 
            public const nint uipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !Ite = 0x2B545050; // 
            public const nint  = 0x2B545090; // 
            public const nint , team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !ItemInfo.IsKeychain(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemKeychainSlotCount(id) > InventoryAPI.GetI = 0x2B5450D0; // 
            public const nint  = 0x2B545110; // 
            public const nint initionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !ItemInfo.IsKeychain(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemKeychainSlotCount(id) > InventoryAPI.GetItemKeychainCount(id));
                    }
                }
                ;
                function _SetRentalTime(id) {
                    let elLabel = $.GetContextPanel().FindChi = 0x2B545150; // 
            public const nint  = 0x7AB0320; // 
            public const nint %����K\P3Au$<�4p��q2�c~)�� = 0x0; // 
            public const nint  = 0x634D830; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7AB09E0; // 
            public const nint Ƞj* = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x634DA10; // 
            public const nint  = 0x634DA50; // 
            public const nint  = 0x634DA90; // 
            public const nint  = 0x634DAD0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint csgo_simple.vfx = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint @B�L* = 0x0; // 
            public const nint  = 0x3F000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x634DE10; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint ��j* = 0x10000; // 
            public const nint  = 0x20000; // 
            public const nint �j* = 0xFF; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x634DEA0; // 
            public const nint  = 0x55555555; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x6349040; // 
            public const nint �j* = 0x6349110; // 
            public const nint  = 0x55555555; // 
            public const nint  = 0x0; // 
            public const nint  = 0x55555555; // 
            public const nint  = 0x63459B0; // 
            public const nint  = 0x76AAAC8; // 
            public const nint  = 0x6345A60; // 
            public const nint ���� = 0x6345AA0; // 
            public const nint  = 0x6345AE0; // 
            public const nint  = 0x6345B20; // 
            public const nint  = 0x6345B90; // 
            public const nint �[4* = 0x6345BD0; // 
            public const nint ثj* = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6345C30; // 
            public const nint  = 0x6345C70; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x75426563; // 
            public const nint  = 0xFFFFFF00; // 
            public const nint  = 0x0; // 
            public const nint  = 0x72; // 
            public const nint  = 0x6675426D; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3; // 
            public const nint  = 0xCE6E6B28; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6E695465; // 
            public const nint  = 0x6F6E6749; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xC4653601; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x66667542; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7810D60; // 
            public const nint  = 0x7811F60; // 
            public const nint  = 0x20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63DAB20; // 
            public const nint  = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint � = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0xB; // 
            public const nint  = 0x6; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7810300; // 
            public const nint  = 0x78118A0; // 
            public const nint  = 0x20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63D8BE0; // 
            public const nint  = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint � = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0xA0000000; // 
            public const nint Z�(.�� = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7810540; // 
            public const nint  = 0x7810340; // 
            public const nint  = 0x20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x13BBBD2E; // 
            public const nint  = 0x63D8C80; // 
            public const nint  = 0xB; // 
            public const nint  = 0x7AA4E90; // 
            public const nint ���A�<�;��,B�.I�t8�M�F�(�d��r�+�m��MS|z&�j_`�$md&�Έ�sF�fi)��N�����Q3�>�tC�p��,���k_O�7|�ם�<w��o = 0x0; // 
            public const nint ��j* = 0x7AA5030; // 
            public const nint 0�j* = 0x0; // 
            public const nint p�j* = 0x97EFD278; // 
            public const nint �4* = 0x6341ED0; // 
            public const nint ��j* = 0x7AA50A0; // 
            public const nint :�x���3k��"�^�_X�y���s���?�_i=�x}�uRh���6i<�?����)Q�1���uD�΂��M = 0x0; // 
            public const nint ��j* = 0x7AA51F0; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x7AA5370; // 
            public const nint ��Ak�HhJ�D^�'�kt@�ɢxL�{;����]�։�9��KqY�|�n�(_gW�`}�@5=]cB�3Nx��!xo�_�z�o��s6L�*�6$;����![���h�v�U,�#�M�w4-s,����Wf���uG����~�"��C�4��kG�X}�������1������`u��p�O��h��[�](����6Z���p]#�3C = 0x0; // 
            public const nint p�j* = 0x7AA54E0; // 
            public const nint Mc� = 0x7AA5520; // 
            public const nint ��j* = 0x6345090; // 
            public const nint ��j* = 0x0; // 
            public const nint 0�j* = 0x7AA55A0; // 
            public const nint �M�DB< ��Ӵ�?1��� ��M��L��a��fk��.t�6xM�R�}�t�q��%�� = 0x0; // 
            public const nint p�j* = 0x7AA56F0; // 
            public const nint Į��ܾ�V��F�?y��!Q��&ω@8p��ir�9ƍ�0e�]���i��V������DZ��Dt�U���a�Lhk"6V�AyNHᐚ��2<«�eܰ{:X���B��
            �����������$�M�����0a�y,�] H�����]"I�H�N���]��C�|�Q~-䂡sj�H���
            �e��=�qU�i�!B��!B�B�A�	h�&@ = 0x0; // 
            public const nint ��j* = 0x7AA5850; // 
            public const nint ��|�|�`\�f�0�b��:����uis3��1�U1���b��se4�uކ�/��������~��Ρ�������{�����������l��U���Ϸ������x�{ȡ���)����.G�n�����Sn:�>�r�}?�_y����<�����)�H�b���������X���S¦�c��ȋ!�r���>�u��x���Rٜ�2���TV]�O��_ϯǽg��xޑHG䏿�`���y��튫�������y����{�z���������W>��s3ɲXgn�	.<*z�����j2�*�خ��ӊŬ������߇IO�E}�y.�*՝+<��m�����E/��8$��+�u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
            public const nint ��j* = 0x7AA59C0; // 
            public const nint �u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
            public const nint 0�j* = 0x6345370; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x7AA5A60; // 
            public const nint ����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x6345490; // 
            public const nint ��j* = 0x7AA5F80; // 
            public const nint 0�j* = 0x6345590; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x0; // 
            public const nint ��j* = 0x6345620; // 
            public const nint 0�j* = 0x7AA72B0; // 
            public const nint -��?_�Q�z4����������g���2�	�j�f�"|ָ����Tq?�>+Ô5Fd���
            l�#xV�S���
            ��@F���F@�£��_?��_ B0TZ = 0x0; // 
            public const nint p�j* = 0x6345790; // 
            public const nint ��j* = 0x6345860; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x7AA7970; // 
            public const nint 0�j* = 0x0; // 
            public const nint p�j* = 0x6345900; // 
            public const nint ��j* = 0x0; // 
            public const nint ��j* = 0x63459E0; // 
            public const nint Ho��� = 0x6345A20; // 
            public const nint  = 0x7AA8C70; // 
            public const nint K0�bhc�i9�dY�k��!���d�F�@}k�N%9�Z��Hh�>�A�m�H����-נ���ɚi��<~�VZ�BC^�ܭ���A[�5�)�h�B�V擑BX�<$g=�����sąu5e��5�O�$34���>�@uen�IlZ�����j�9k-�[� = 0x0; // 
            public const nint  = 0x6345B20; // 
            public const nint  = 0x63490F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6345BB0; // 
            public const nint  = 0x63493D0; // 
            public const nint �V��� = 0x0; // 
            public const nint  = 0x6349420; // 
            public const nint P�4* = 0x0; // 
            public const nint  = 0x6349470; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63495E0; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x6345E90; // 
            public const nint ��j* = 0x6349650; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x63497A0; // 
            public const nint  = 0x0; // 
            public const nint p�j* = 0x6349920; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x6349A90; // 
            public const nint  = 0x6349AD0; // 
            public const nint ��j* = 0x2B13D470; // 
            public const nint 0�j* = 0x0; // 
            public const nint p�j* = 0x6349B50; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x6349CA0; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x6349E00; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x6349F70; // 
            public const nint ��4* = 0x0; // 
            public const nint p�j* = 0x2B13D520; // 
            public const nint ��j* = 0x2B13D540; // 
            public const nint ��j* = 0x6341040; // 
            public const nint ����* = 0x0; // 
            public const nint 0�j* = 0x6341190; // 
            public const nint  = 0x0; // �$���
        }
        // Parent: None
        // Field count: 0
        public static class PF_NOISE_MODIFIER_NONE {
        }
        // Parent: None
        // Field count: 0
        public static class PF_TYPE_LITERAL {
        }
        // Parent: None
        // Field count: 656
        public static class _ {
            public const nint  = 0x0; // 
            public const nint ������������ = 0x545F4650; // ��$��
            public const nint  = 0x0; // 
            public const nint D = 0x17BD907; // 
            public const nint  = 0x17BD82E; // 
            public const nint ������������ = 0x17BD862; // ��$��
            public const nint ������������ = 0x17BD89B; // ��$��
            public const nint  = 0x17BD8D3; // 
            public const nint  = 0x4003409; // m_flZOffset
            public const nint  = 0x61666564; // 
            public const nint  = 0x729D9A0; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint ���_� = 0x63DA260; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4002C23; // 
            public const nint  = 0x4003409; // 
            public const nint weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x2E676D64; // 
            public const nint +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
            ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x4006415; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656B6162; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6174654D; // 
            public const nint  = 0x65736162; // 
            public const nint  = 0x706F7270; // 
            public const nint  = 0x0; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6E6970; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x70616577; // 
            public const nint +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
            ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x0; // 
            public const nint weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat = 0x79646F62; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x69736F50; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E6970; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x70616577; // 
            public const nint ���_� = 0x70616577; // 
            public const nint ���_� = 0x70616577; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x646E6168; // 
            public const nint  = 0x72EC640; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x79706F43; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0xA779851D; // 
            public const nint  = 0x97E8F1D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x706F7270; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F62; // 
            public const nint  = 0x2C20; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4006819; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6C6C6162; // 
            public const nint  = 0x646E6168; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x656B6162; // 
            public const nint  = 0x6174654D; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x79706F63; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x72EC4C0; // 
            public const nint  = 0x6B63656E; // 
            public const nint  = 0x6C6C6162; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x62657965; // 
            public const nint  = 0x6C6B6E61; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6F6C6C61; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x2E676D64; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6E696F70; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x6F6C6F6D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x61545F6D; // 
            public const nint  = 0x6F6C6F6D; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x7571696C; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x69736F50; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x6867696C; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x0; // 
            public const nint phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl = 0x6F6C6F6D; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x766C6570; // 
            public const nint  = 0x6E697073; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x656E6F62; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x6C616568; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x6E657267; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x4006859; // 
            public const nint  = 0x4003027; // 
            public const nint  = 0x6F6C6C61; // 
            public const nint  = 0x4003409; // 
            public const nint  = 0x4006415; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x656E6F42; // 
            public const nint  = 0x5F316761; // 
            public const nint  = 0x70616577; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x0; // 
            public const nint phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl = 0x70616577; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x17BDE9D; // 
            public const nint  = 0x17BDEEC; // 
            public const nint  = 0x17BDF3E; // 
            public const nint  = 0x17BDF90; // 
            public const nint  = 0x6F677363; // 
            public const nint  = 0x6C6C6163; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x726F6353; // 
            public const nint  = 0x7270732B; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x73616F74; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x635F6C63; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6574756D; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x65646968; // 
            public const nint  = 0x65646968; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x696E6173; // 
            public const nint  = 0x696E6173; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x61736964; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6E6F6349; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6274656E; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x72747865; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x77647568; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6461722B; // 
            public const nint  = 0x6461722B; // 
            public const nint  = 0x74756C43; // 
            public const nint  = 0x67676F54; // 
            public const nint  = 0x63696F56; // 
            public const nint  = 0x7373656D; // 
            public const nint  = 0x52647453; // 
            public const nint  = 0x79616C70; // 
            public const nint  = 0x736E6F43; // 
            public const nint  = 0x6D616554; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x5F647568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x746C754D; // 
            public const nint  = 0xC3236A1D; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x736F6F42; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6E2D6469; // 
            public const nint  = 0x6E3A737B; // 
            public const nint  = 0x74657323; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x53766E49; // 
            public const nint  = 0x63616C70; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x72474548; // 
            public const nint  = 0x66696E4B; // 
            public const nint  = 0x6D697250; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x55465323; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x7375655A; // 
            public const nint  = 0xD20; // 
            public const nint  = 0x7E163F1D; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x63647568; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x6D676573; // 
            public const nint  = 0x69646172; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x61646152; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x725F6C63; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6E65706F; // 
            public const nint  = 0x6E65706F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x74646977; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0xE36D22CA; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6F6D6E6F; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x776F6873; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x67676F74; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x61766E6F; // 
            public const nint  = 0x67676F74; // 
            public const nint  = 0x635F6C63; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x69616858; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x736F7263; // 
            public const nint  = 0x2D70616D; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x61646172; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x63616E6F; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6E696E6F; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x63696F56; // 
            public const nint  = 0x5F646E73; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x62616E65; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616548; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x7466656C; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x723A737B; // 
            public const nint  = 0x673A737B; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74746553; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x63736564; // 
            public const nint  = 0x6F677363; // 
            public const nint  = 0xA779851D; // 
            public const nint  = 0x97E8F1D; // 
            public const nint  = 0x600161A; // 
            public const nint  = 0x626D6F42; // 
            public const nint  = 0x5F646E73; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x64616568; // 
            public const nint  = 0x666C6168; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6D614723; // 
            public const nint  = 0x63726570; // 
            public const nint  = 0x74616544; // 
            public const nint  = 0x736E6F63; // 
            public const nint  = 0x69647561; // 
            public const nint  = 0x6E657665; // 
            public const nint  = 0x63726570; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0xA5D9646E; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0xF5AD4CF4; // 
            public const nint  = 0x74746968; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x2678EB8; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x6D756E23; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x74617473; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x58585858; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6E3A737B; // 
            public const nint  = 0x63736564; // 
            public const nint  = 0x16ED8FBF; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6C6C6F43; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x656D616E; // 
            public const nint  = 0x7543736A; // 
            public const nint  = 0x633A737B; // 
            public const nint  = 0x6F666E49; // 
            public const nint  = 0x69726172; // 
            public const nint  = 0x6D616574; // 
            public const nint  = 0x69726172; // 
            public const nint  = 0x74616863; // 
            public const nint  = 0x74617661; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74696177; // 
            public const nint  = 0x74617661; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6772616C; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x74736542; // 
            public const nint  = 0x70616557; // 
            public const nint  = 0x743A737B; // 
            public const nint  = 0x733A737B; // 
            public const nint  = 0x70616557; // 
            public const nint  = 0x743A737B; // 
            public const nint  = 0x733A737B; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x696D696C; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x763A737B; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x696D696C; // 
            public const nint  = 0x74736542; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x4F475343; // 
            public const nint  = 0x61666564; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x6F746E6F; // 
            public const nint  = 0x6F6C6E75; // 
            public const nint  = 0x6566666F; // 
            public const nint  = 0x6F2D6469; // 
            public const nint  = 0x6E69616D; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x2D726162; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x6C6C7566; // 
            public const nint  = 0x74786554; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x65737523; // 
            public const nint  = 0x65737523; // 
            public const nint  = 0x74786574; // 
            public const nint  = 0x72617473; // 
            public const nint  = 0x656D6163; // 
            public const nint  = 0x2D706F74; // 
            public const nint  = 0x772D6469; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6C6F6F74; // 
            public const nint  = 0x2D637273; // 
            public const nint  = 0x61747323; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x6D726F6E; // 
            public const nint  = 0x70617267; // 
            public const nint  = 0x6C6F6F54; // 
            public const nint  = 0x69646152; // 
            public const nint  = 0x633A737B; // 
            public const nint  = 0x6B3A647B; // 
            public const nint  = 0x64697053; // 
            public const nint  = 0x95870F03; // 
            public const nint  = 0x6374616D; // 
            public const nint  = 0x6374614D; // 
        }
        // Parent: None
        // Field count: 0
        public static class PF_BIAS_TYPE_STANDARD {
        }
        // Parent: None
        // Field count: 806
        public static class PF_NOISE_TURB_NONE {
            public const nint  = 0x4F4E5F52; // 
            public const nint  = 0x0; // 
            public const nint  = 0x45504D41; // 
            public const nint  = 0x7007370; // 
            public const nint  = 0x53455241; // 
            public const nint  = 0x5241444E; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  = 0xFF005443; // 
            public const nint  = 0x54534E01; // 
            public const nint  = 0x54534E4F; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0xFF00454E; // 
            public const nint  �*�� = 0x362BAA30; // 
            public const nint  = 0x4E494C52; // 
            public const nint  = 0x75E4801; // 
            public const nint  = 0x4F4E5F52; // 
            public const nint  �*�� = 0x16510010; // �*��
            public const nint  = 0x45504D41; // 
            public const nint  = 0x6C6101; // 
            public const nint  = 0x53455241; // 
            public const nint  = 0x97EFD8B8; // 
            public const nint  = 0x5241444E; // 
            public const nint  = 0x6C6101; // 
            public const nint  = 0xFF005443; // 
            public const nint  = 0x7545610; // �H-��
            public const nint  = 0x54534E4F; // 
            public const nint  = 0x762E6572; // 
            public const nint  = 0xFF00454E; // 
            public const nint  = 0x4; // 
            public const nint  = 0x4E494C52; // 
            public const nint  = 0x520; // 
            public const nint  = 0x4F4E5F52; // 
            public const nint default = 0x45504D41; // 
            public const nint  = 0x45504D41; // 
            public const nint  = 0x7137750; // ��{*
            public const nint  = 0x53455241; // 
            public const nint  �*�� = 0x362BA760; // 
            public const nint  = 0x5241444E; // 
            public const nint ���* = 0x7137660; // ��{*
            public const nint  = 0x444E454C; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x17060001; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7910001; // 
            public const nint  = 0x43; // 
            public const nint `��* = 0xFF00574F; // 
            public const nint  = 0xFF00574F; // 
            public const nint  = 0xFFFF004C; // 
            public const nint  = 0x74736566; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x4F; // 
            public const nint  = 0x4C5F6174; // 
            public const nint  = 0x4F465F4E; // 
            public const nint first_or_third_person_@0_#&thirdperson_default = 0x19769640; // 
            public const nint  = 0x52; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x7541348; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x63E7D50; // 
            public const nint �o��� = 0x63E8250; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x2B869890; // 
            public const nint  �*�� = 0x665BF50; // 
            public const nint �o��� = 0x63E8750; // 
            public const nint �o��� = 0x63E8C50; // 
            public const nint  �*�� = 0x7290C00; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint �o��� = 0x63E9148; // 
            public const nint �o��� = 0x63E9648; // 
            public const nint �o��� = 0x7541A48; // 
            public const nint �o��� = 0x7540C48; // F_RANDOM_MODE_CONSTANT
            public const nint �o��� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x76A55F8; // 
            public const nint  �*�� = 0xF2F148; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x140; // 
            public const nint  = 0x100; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291D30; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0x6D6165; // 
            public const nint  �*�� = 0x7290E80; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x736E6F63; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7290E80; // 
            public const nint  = 0x746E69; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291470; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291470; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x6E6F6974; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291E70; // 
            public const nint  �*�� = 0x72912E0; // 
            public const nint  = 0xFF007475; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7BB0001; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x65687774; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  �*�� = 0x7291AB0; // 
            public const nint  �*�� = 0xFFFFFFFF; // 
            public const nint  = 0x762E6572; // 
            public const nint  = 0x5F32D401; // 
            public const nint  = 0x76A9810; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x76A9810; // 
            public const nint  = 0x5F6D6165; // 
            public const nint  = 0x76A9810; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  = 0x7592ACD; // 
            public const nint  = 0x5F32D401; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x558C; // 
            public const nint  = 0x482C; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7545610; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x2A6C8A01; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0x97EFCF08; // 
            public const nint  = 0x75E4801; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x97EFCF58; // 
            public const nint  = 0x75E4801; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0x4; // 
            public const nint  = 0x6AF0; // 
            public const nint  = 0x685F6761; // 
            public const nint  = 0x2A6C8A01; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x3; // 
            public const nint  = 0x97EFD518; // 
            public const nint  = 0x5F32D4F8; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x2; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x5264726F; // 
            public const nint  = 0x7545610; // P�.��
            public const nint  = 0x7545610; // 
            public const nint  = 0x5F32D401; // 
            public const nint  = 0x3; // 
            public const nint  = 0x616D726F; // 
            public const nint  = 0x97EFD1C8; // �H-��
            public const nint  = 0x1; // 
            public const nint  = 0x63E9D9E; // P�.��
            public const nint  = 0x6; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x63E9D9E; // �#-��
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x7592A01; // weapon_offset
            public const nint  = 0x762E6572; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0x7545610; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x1; // ����
            public const nint  = 0x7007376; // 
            public const nint  = 0x762E6572; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0x63E9D01; // 
            public const nint  = 0x7545610; // 
            public const nint  = 0x63E9D9E; // 
            public const nint  = 0x7592A01; // 
            public const nint  = 0x762E6432; // 
            public const nint  = 0x44207265; // 
            public const nint  = 0x616D726F; // 
            public const nint  = 0x10000; // 
            public const nint  = 0xFFFF004C; // 
            public const nint  = 0x3; // 
            public const nint  = 0x72D0074; // 
            public const nint  �*�� = 0x362BADF0; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  �*�� = 0x362BADF0; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  �*�� = 0x16510010; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint `�* = 0x7543310; // �H-��
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x1; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0xFFFFFF01; // 
            public const nint  = 0x7592ACD; // 
            public const nint  �*�� = 0x2B544001; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x616D726F; // 
            public const nint  �*�� = 0x362BB020; // 
            public const nint  = 0x3; // 
            public const nint  = 0x6E69616D; // 
            public const nint  = 0x7592ACD; // {,��
            public const nint  = 0x664F6472; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0x74616566; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0x1; // 
            public const nint  = 0x7543310; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x10000; // 
            public const nint  = 0x3; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xFFFF0001; // 
            public const nint  = 0x4; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint PaintKit_handwrap_leathery_snakeskin_orange_tag = 0xFFFFFFFF; // 
            public const nint PaintKit_handwrap_leathery_caution = 0xFFFFFFFF; // 
            public const nint PaintKit_handwrap_leathery_caution_tag = 0xFFFFFFFF; // 
            public const nint PaintKit_operation10_metalic_green = 0xFFFFFFFF; // 
            public const nint PaintKit_operation10_metalic_green_tag = 0x65735543; // 
            public const nint  = 0x6F6E0000; // 
            public const nint  = 0x65706D6F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x7463615F; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65725F6C; // 
            public const nint  = 0x73556172; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint �Ⱦ�u>�뚾b�>}E��-�>����.�> = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint �{�����&��./�,�+�@�#��W%��9*>5L��>�>�G��6�>fƪ���	?��>���?8���@?�}�=�J?[�s>�?�>���>���>n��>�!�>�a>,�?���=�<?Rt�"��>J���>�C���~�>b��=u>��ƾP/>�Dؾ<�&=JW޾ҥp��ؾS6�dHƾ�qd��)�������������>�X��h��*��	s˾
            mC�6˾��O=����&)>/<��R�`>��x�n�>h)7�:M�>L��v$�>J�U���>�Z�<��>6�=���>�'>#O�>��f>�^�>uӎ>��]>^̥>�
            >Q�><�=�C�>E����>܉��d��>$+��ƍ>�=W�xt>&����>>ͷ���Y�=�����*�;�оيҽ�ʾ4�I�����k燾
            M��;T��ɚc��ֳ��?"���ž�﷽QվP��ȥܾD��=d�־�R>P��]��>�����v�>��n�?�׶���?ϥ>�?��>�[�>���>���>���>��>'?��Q>�T?Hk�=�!?6���a?�؝����>n = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint ����ᙾ�꨾e�J�֟����ɽ����HG��ݔ���:=�?�����=�Mq�V = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x55747365; // 
            public const nint �X��.�>��2��>"�<���>>�=rW�>K,>���>���>��>$��>�P�>��?h� >��?��w�V�?�3�����>��о��S>J�F+�=Hv侠���Z�־VuͽjJ̾~`C�.a���Y���1��W��/�c��MҾν�;���<�U��CJ�=x���6�4>Ξ�� Rp>w]d��0�>T�SF�>�K?�P�>�%�=�J�>1?>���>T��>�ח>�Ѫ>j�Z>ݾ>\>���>�=Qu�>�d��ma�>T�9��ê>�ɗ���l>.�ƾF��= = 0x65735543; // 
            public const nint  = 0x6F6E0000; // 
            public const nint  = 0x55747365; // 
            public const nint �6?���>`�@?.Ҧ=�,:?������%?�H��A�?�⾰��>	�
            �/x>~��Y��=��!�6<����EZ���gt��|����#߾{tξ(��v�����x�0����B���+��G�=f��Qʇ>� = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0xFFFF0063; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x635F6D65; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0xFF003263; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x635F6D65; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x61705F63; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x61705F63; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x746E6569; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F667461; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65646D65; // 
            public const nint  = 0x73556172; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x72676D65; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x5F6C6174; // 
            public const nint  = 0x44747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x5F6C6174; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x76736F2E; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x65766E69; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x67734D6C; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x74616C70; // 
            public const nint  = 0x73556172; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x66726570; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6F6E6761; // 
            public const nint  = 0x74617453; // 
            public const nint �=�K�>��I>&�>"��>綮>���>|�P>.H�>�4�=�ܸ>$�/���>O�
            >9�&���K>�|I���>�e����=4Fz��\=|i���yx��"���􇽄�v��*�1g��R3��L�0�l��������D?��ܭ���Iw; = 0x65735543; // 
            public const nint  = 0x6576736F; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6174732E; // 
            public const nint  = 0x74617453; // 
            public const nint cents. = 0x65735543; // 
            public const nint  = 0x6D657469; // 
            public const nint  = 0x74617453; // 
            public const nint le cry</i> = 0x65735543; // 
            public const nint  = 0x6100316C; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x637263; // 
            public const nint  = 0x74617453; // 
            public const nint a� = 0x65735543; // 
            public const nint  = 0x636974; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x2E636974; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x2E636974; // 
            public const nint  = 0x49747365; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x2E636974; // 
            public const nint  = 0x736F6E67; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x746573; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6169642E; // 
            public const nint  = 0x74617453; // 
            public const nint �����=�����ɽ�	�� = 0x65735543; // 
            public const nint  = 0x6F746E65; // 
            public const nint  = 0x74617453; // 
            public const nint j1��a侂蜾ɥþ,0Ӿ�W��w���9������V���~�>��ھ\��>�����3�>�hw����>I你�?�e=��
            ?��B>��?�_�>5��>���>�y�>�.?q�Y>x�?��\=�?�R�_�
            ?x���\f�>�lؾ��>q�	���>gO�����%"��TT�;��򙾾{�����J˾E6��#q��%��[W�'l!�r$	>*��Ӝ>Y��H��>�=��5?p��F=?#�@=��?�_>}?���>bM�>���>푳>oU?��W>`?��=��
            ?�و�.�?z�K�:��>5���>�پ+[[>����t��=�V�Ƒ��)���I��9��%����۾�׾�奄@��W���	��,����	��&�=.��t#i>0LӾ�Զ>�������>z#��?Pߜ���?'>ۃ?G�>���>���>�P�>��>�lm>KP�>U	�=B��>,�Q�x��>.�8�3��> = 0x67734D43; // 
            public const nint  = 0x756F7268; // 
            public const nint  = 0x74617453; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6975622E; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x61746E65; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C61762E; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x762E6C61; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x6D787600; // 
            public const nint  = 0x52796669; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6972432E; // 
            public const nint  = 0x746E6576; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6972432E; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6F006469; // 
            public const nint  = 0x73655279; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D72615F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D72615F; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x706D6F43; // 
            public const nint  = 0x65735543; // 
            public const nint  = 0x6C616E6F; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x646D762E; // 
            public const nint  = 0x746E6576; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x69745F72; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0xFF004554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0xFF004554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x4F5F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x455F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x4F5F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint ��vL���4��JG=�H����>Wm����T>ʒ>�ء�>||�E��>�L�~�>� _=��>��>(E�>�i>9
            y>w<�>I = 0x454D4147; // 
            public const nint  = 0x594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint ���>Y�>
            �Y��>xy۽`��>p%�<_�>�9,>h��>P�>d��>��>D�>ȇ
            ?�B>��?��d�?�vk���>dMо,�>LT
            ��E�=�*��<���U�ں��=� = 0x454D4147; // 
            public const nint  = 0x455341; // 
            public const nint  = 0x4547414E; // 
            public const nint =��Ͻu֔=&S����=����0	>���<4�>�a=L��=&��=|e�=�i�=�k=a�>z��<��=����� = 0x454D4147; // 
            public const nint  = 0x59434E; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x445F444C; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0xFF004E45; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F574F46; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x54584554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F4F545F; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x45455246; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x545F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x495F455A; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x505F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x5F594F52; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x54414456; // 
            public const nint  = 0x4547414E; // 
            public const nint �=�<f;���=�=3Q�=hy�=.:�=�\�=��K=���=Fd�<'��=8d�` �=Qg3��=$�����:=`��Z:<�,ؽ��޼��ֽ�偽���V|���)x��I׽�dѼ�۽��1<ڥɽa;=0����؝=uhK��C�=^�+��~�=�r=�V�=�=9��=0��=��p=�3�=�z�<�j�=#ҷ��J�=��e��Ȁ=pH�����<L���$d���_ƽ!��/=��ׯ���������py�@E���H���'����<��c���0=e��n=b=�sT�Q2s=���;�e=*~�<w==�N=���<�*=b�[<�4=�A.�R��<jg���<͋��(,<| ����W;�t��@5��ŏ�\�Ȼ$ao�N��|6��y8���軠�C�9~1�04��d�:\���ê;|����=�;��L��H�; = 0x454D4147; // 
            public const nint  = 0x4E4146; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4554; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x53554C43; // 
            public const nint  = 0x4547414E; // 
            public const nint  = 0x454D4147; // 
            public const nint  = 0x465F4556; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C61762E; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x36AFF600; // 
            public const nint  = 0x7; // 
            public const nint  = 0x72615F74; // 
            public const nint  = 0x0; // 
            public const nint OnNetUInt16VarChanged = 0x0; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x1F; // 
            public const nint  = 0x6F72702E; // 
            public const nint  = 0x73694C79; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x79746974; // 
            public const nint  = 0x6E657645; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x2E006C64; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x18FCC90; // 
            public const nint te.proto = 0x2B624038; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x685F6B63; // 
            public const nint  = 0x65764564; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x6C64; // 
            public const nint  = 0x6E657645; // 
            public const nint  = 0x0; // 
            public const nint OnWaterLevelChangeNetworked = 0x0; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x6C61762E; // 
            public const nint  = 0x6E657645; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x5F64656B; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x65646F6D; // 
            public const nint  = 0x6C006C64; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x5D3430; // 
            public const nint  = 0x6D614779; // 
            public const nint  = 0x19; // 
            public const nint  = 0xFFFFFF00; // 
            public const nint  = 0x6C616365; // 
            public const nint  = 0x67734D43; // 
            public const nint  = 0x745F7965; // 
            public const nint  = 0x61745379; // 
            public const nint  = 0x67734D43; // 
        }
        // Parent: None
        // Field count: 312
        public static class 3 {
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6F6C6F43; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x4E6E6B28; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x66667542; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7AADAB0; // 
            public const nint S������v:j����VM?�:j��"��N�j���H?�QL��=tRCi���F��X�S/�������#�M��U7�9+�w��$�����<�t�K��
            )���;@`  � = 0xFFFFFFFF; // 
            public const nint  = 0x7AADC20; // 
            public const nint �O�w�
             ^�K'k�OP�x��JzH	3���,����\&���|#n� = 0x76A98C0; // 
            public const nint  = 0x76A98E0; // 
            public const nint  = 0x76A9900; // 
            public const nint  = 0x76A9920; // 
            public const nint  = 0x76A9940; // 
            public const nint  = 0x7AADCC0; // 
            public const nint i�������4�໴�wܟ�+g�ޤ6������W�i�K?�+f|��O1Ǚ~ծ�D��+�����$9�>�+��%��W = 0x76A99B8; // 
            public const nint  = 0x7AADE10; // 
            public const nint /��� = 0x2B544320; // 
            public const nint  = 0x7AADE60; // 
            public const nint ˩���ҙ�-%_���+{"��]1>X|J�ܿ�Q������������J�w�s}�~ = 0x2B544430; // 
            public const nint  = 0x7AADEB0; // 
            public const nint �Ə���u�6^�F�&�R^7B�M�;�AK��L��bF�nA�0h�KCs8C�]�c2�!���ɔ���+�͗���^�'�!Ur/4�6�芇���W�w��~�*T4�oߢ��%�y��F�l�u컵r��x":�D��ns�~�\{o��8:����Ec4���3c�͝ Jts��3��ag��٩�������ί_�Q���՟@/�m��*0�����7b��_�e��=Bр�R����+�/�{��A�sBK�, = 0x0; // 
            public const nint  = 0x7AAE050; // 
            public const nint 	 = 0x0; // 
            public const nint  = 0x0; // 
            public const nint 
             = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7AAE0C0; // 
            public const nint �c����}l�a]N	�dB
            6��2� = 0x0; // 
            public const nint  = 0x7AAE210; // 
            public const nint ���PxEW�IpI��]��S6�G�W�X��+�C�`v���hv�z����~'�}��I ��0g緉��:�[F�q��qtg��:/��D�-���	��B�c�"pg�{oS-DC��k�w&�|S����*C�W<��2L��]��S6�G�W�X��+��\�_����k���+�R��ñG��]�B���]�M���Zs\����m�~ ��a4�瑫�v��WVK8�~d�����1�w�-���@�C~����2���=>��'�G����k��y�5B|9�r���.稇���r�y�E~�#pD{���ӽo��'E�P�#�=�!�޿;y&y����Us�.���{�w��]����~ߖ��w�u�[��?����{8��>���^�?9j)K�}���W��	��擧]����yӊ�<�f���N?�Yk����%ͺ����(;[2��Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
            FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A10; // 
            public const nint  = 0x7AAE3D0; // 
            public const nint �Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
            FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A90; // 
            public const nint  = 0x2B544AD0; // 
            public const nint  = 0x6349820; // 
            public const nint  = 0x2B544B50; // 
            public const nint  = 0x7AAE610; // 
            public const nint |�%���앗u/����'�����T8��@�P��1x,.���a�ﮒj="��<H&�����h�!���V���!W�нh����ܣ����j�b[x��U��;e{C��W���I�[��@���0N0vѧ=,ˡ�;U�+5*=�F��ШPwW��^V���n��]+7��Xy�R��`��� ��?x�w@�r��X�o�v�5?V|-���A��'7�e[��`Vn����ُ98� ��N��_��=&.>�jqH��ypuw������m� = 0x2B544BD0; // 
            public const nint  = 0x7AAE760; // 
            public const nint a2]����_?�/���h���g�7�]8x@l�O��p�{���Gp\���<�eK?ѷA6p耼�xRf_`����p� y��Z���4^��߿���+���A��`������h��.}������E���|}���fy<��eґ���aE��1����[��y��0h�E&N���6����ҟ+~�={��_0�n��y��K�����t�������4�M��һo���4g8��/pD��ɼ�}���<mM^�*ب&z:&Fԭ�3onv{��� = 0x2B544C50; // 
            public const nint  = 0x7AAE8C0; // 
            public const nint \9$�-
            �/ = 0x2B544CD0; // 
            public const nint  = 0x7AAEA30; // 
            public const nint �m��u��Lp��]��>wO��:uk��Yo^�T�(id�g�aN.����(!B�!�̨@   � = 0x2B544D50; // 
            public const nint  = 0x2B544D90; // 
            public const nint NoteamDot.AddClass('hidden');
                    elTDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elCtDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elNoteamDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elFavoriteIconNoteam.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('noteam', id));
                    elFavoriteIconCt.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('ct', id));
                    elFavoriteIconT.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                functi = 0x2B544DD0; // 
            public const nint  = 0x2B544E10; // 
            public const nint item-tile__equipped__radiodot--filled');
                    elNoteamDot.RemoveClass('item-tile__equipped__radiodot--filled');
                    elFavoriteIconNoteam.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('noteam', id));
                    elFavoriteIconCt.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('ct', id));
                    elFavoriteIconT.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capabilit = 0x2B544E50; // 
            public const nint  = 0x7AAEAD0; // 
            public const nint ��96���x��K�R�?[a|c��S��.-��wf��`8�Pz��G�S���n�9�gx_U|~��:�3��oH*�Z]�}q���(�!�z��O�˸�x".��~C>}~���x-�]�>���Ӆ(c&��,�|9 = 0x2B544ED0; // 
            public const nint  = 0x7AAEFF0; // 
            public const nint en', !InventoryAPI.ItemIsInFavorites('ct', id));
                    elFavoriteIconT.SetHasClass('hidden', !InventoryAPI.ItemIsInFavorites('t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_p = 0x2B544F50; // 
            public const nint  = 0x2B544F90; // 
            public const nint t', id));
                    for (let team of ['t', 'ct', 'noteam']) {
                        if (_ItemIsInShuffle(id, team)) {
                            _SetEquipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > Inventor = 0x2B544FD0; // 
            public const nint  = 0x2B545010; // 
            public const nint uipIcon(true, team);
                        }
                        else if (InventoryAPI.IsEquipped(id, team)) {
                            _SetEquipIcon(false, team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !Ite = 0x2B545050; // 
            public const nint  = 0x2B545090; // 
            public const nint , team);
                        }
                    }
                }
                ;
                function _ItemIsInShuffle(id, team) {
                    let slot = InventoryAPI.GetRawDefinitionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !ItemInfo.IsKeychain(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemKeychainSlotCount(id) > InventoryAPI.GetI = 0x2B5450D0; // 
            public const nint  = 0x2B545110; // 
            public const nint initionKey(id, 'flexible_loadout_group');
                    if (['secondary0', 'secondary', 'smg', 'rifle'].includes(slot)) {
                        let itemDefIndex = InventoryAPI.GetItemDefinitionIndex(id);
                        slot = LoadoutAPI.GetSlotEquippedWithDefIndex(team, itemDefIndex);
                    }
                    return LoadoutAPI.IsShuffleEnabled(team, slot) && InventoryAPI.ItemIsInFavorites(team, id);
                }
                ;
                function _SetEquipIcon(isShuffle, team) {
                    let elCtDot = $.GetContextPanel().FindChildInLayoutFile('ItemEquipped-' + team);
                    elCtDot.RemoveClass('hidden');
                    elCtDot.AddClass('item-tile__equipped__radiodot--filled');
                    elCtDot.SetHasClass('shuffle', isShuffle);
                }
                ;
                function _SetStickers(id) {
                    let elParentStickers = $.GetContextPanel().FindChildInLayoutFile('StickersOnWeapon');
                    elParentStickers.RemoveAndDeleteChildren();
                    let elParentKeychains = $.GetContextPanel().FindChildInLayoutFile('KeychainsOnWeapon');
                    elParentKeychains.RemoveAndDeleteChildren();
                    let listStickers = ItemInfo.GetitemStickerList(id);
                    for (let entry of listStickers) {
                        $.CreatePanel('Image', elParentStickers, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentStickers.SetHasClass('hidden', listStickers.length <= 0 || listStickers === undefined);
                    let listKeychains = ItemInfo.GetitemKeychainList(id);
                    for (let entry of listKeychains) {
                        $.CreatePanel('Image', elParentKeychains, 'ItemImage' + entry.image, {
                            src: 'file://{images}' + entry.image + '.png',
                            scaling: 'stretch-to-fit-preserve-aspect',
                            class: 'item-tile__stickers__image'
                        });
                    }
                    elParentKeychains.SetHasClass('hidden', listKeychains.length <= 0 || listKeychains === undefined);
                }
                ;
                function _SetRecentLabel(id) {
                    let isRecentValue = InventoryAPI.GetItemSessionPropertyValue(id, 'recent');
                    let isUpdatedValue = InventoryAPI.GetItemSessionPropertyValue(id, 'updated');
                    let elLabel = $.GetContextPanel().FindChildInLayoutFile('JsRecent');
                    if (isUpdatedValue === '1' || isRecentValue === '1') {
                        let locString = 'recent';
                        if (isRecentValue === '1') {
                            let strItemPickupMethod = InventoryAPI.GetItemSessionPropertyValue(id, 'item_pickup_method');
                            if (strItemPickupMethod && ['xpshopredeem', 'quest_reward'].includes(strItemPickupMethod)) {
                                locString = strItemPickupMethod;
                            }
                        }
                        else {
                            locString = 'updated';
                        }
                        elLabel.RemoveClass('hidden');
                        elLabel.text = $.Localize('#inv_session_prop_' + locString);
                        return;
                    }
                    elLabel.AddClass('hidden');
                }
                ;
                function _TintSprayImage(id) {
                    let elImage = $.GetContextPanel().FindChildInLayoutFile('ItemImage');
                    TintSprayIcon.CheckIsSprayAndTint(id, elImage);
                }
                ;
                function _DisableTile(id) {
                    let capabilityInfo = _GetPopUpCapability();
                    if (capabilityInfo && capabilityInfo.capability === 'can_sticker' && !ItemInfo.IsSticker(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_patch' && !ItemInfo.IsPatch(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > InventoryAPI.GetItemStickerCount(id));
                    }
                    else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !ItemInfo.IsKeychain(id)) {
                        $.GetContextPanel().enabled = (InventoryAPI.GetItemKeychainSlotCount(id) > InventoryAPI.GetItemKeychainCount(id));
                    }
                }
                ;
                function _SetRentalTime(id) {
                    let elLabel = $.GetContextPanel().FindChi = 0x2B545150; // 
            public const nint  = 0x7AB0320; // 
            public const nint %����K\P3Au$<�4p��q2�c~)�� = 0x0; // 
            public const nint  = 0x634D830; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7AB09E0; // 
            public const nint Ƞj* = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x634DA10; // 
            public const nint  = 0x634DA50; // 
            public const nint  = 0x634DA90; // 
            public const nint  = 0x634DAD0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint csgo_simple.vfx = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint @B�L* = 0x0; // 
            public const nint  = 0x3F000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x3F800000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x634DE10; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint ��j* = 0x10000; // 
            public const nint  = 0x20000; // 
            public const nint �j* = 0xFF; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x634DEA0; // 
            public const nint  = 0x55555555; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x6349040; // 
            public const nint �j* = 0x6349110; // 
            public const nint  = 0x55555555; // 
            public const nint  = 0x0; // 
            public const nint  = 0x55555555; // 
            public const nint  = 0x63459B0; // 
            public const nint  = 0x76AAAC8; // 
            public const nint  = 0x6345A60; // 
            public const nint ���� = 0x6345AA0; // 
            public const nint  = 0x6345AE0; // 
            public const nint  = 0x6345B20; // 
            public const nint  = 0x6345B90; // 
            public const nint �[4* = 0x6345BD0; // 
            public const nint ثj* = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6345C30; // 
            public const nint  = 0x6345C70; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x75426563; // 
            public const nint  = 0xFFFFFF00; // 
            public const nint  = 0x0; // 
            public const nint  = 0x72; // 
            public const nint  = 0x6675426D; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3; // 
            public const nint  = 0xCE6E6B28; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6E695465; // 
            public const nint  = 0x6F6E6749; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0xC4653601; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x66667542; // 
            public const nint  = 0x0; // 
            public const nint  = 0xFFFFFFFF; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x4; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7810D60; // 
            public const nint  = 0x7811F60; // 
            public const nint  = 0x20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63DAB20; // 
            public const nint  = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint � = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0xB; // 
            public const nint  = 0x6; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7810300; // 
            public const nint  = 0x78118A0; // 
            public const nint  = 0x20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63D8BE0; // 
            public const nint  = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint � = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0xA0000000; // 
            public const nint Z�(.�� = 0xB; // 
            public const nint  = 0x0; // 
            public const nint  = 0x7810540; // 
            public const nint  = 0x7810340; // 
            public const nint  = 0x20; // 
            public const nint  = 0x0; // 
            public const nint  = 0x13BBBD2E; // 
            public const nint  = 0x63D8C80; // 
            public const nint  = 0xB; // 
            public const nint  = 0x7AA4E90; // 
            public const nint ���A�<�;��,B�.I�t8�M�F�(�d��r�+�m��MS|z&�j_`�$md&�Έ�sF�fi)��N�����Q3�>�tC�p��,���k_O�7|�ם�<w��o = 0x0; // 
            public const nint ��j* = 0x7AA5030; // 
            public const nint 0�j* = 0x0; // 
            public const nint p�j* = 0x97EFD278; // 
            public const nint �4* = 0x6341ED0; // 
            public const nint ��j* = 0x7AA50A0; // 
            public const nint :�x���3k��"�^�_X�y���s���?�_i=�x}�uRh���6i<�?����)Q�1���uD�΂��M = 0x0; // 
            public const nint ��j* = 0x7AA51F0; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x7AA5370; // 
            public const nint ��Ak�HhJ�D^�'�kt@�ɢxL�{;����]�։�9��KqY�|�n�(_gW�`}�@5=]cB�3Nx��!xo�_�z�o��s6L�*�6$;����![���h�v�U,�#�M�w4-s,����Wf���uG����~�"��C�4��kG�X}�������1������`u��p�O��h��[�](����6Z���p]#�3C = 0x0; // 
            public const nint p�j* = 0x7AA54E0; // 
            public const nint Mc� = 0x7AA5520; // 
            public const nint ��j* = 0x6345090; // 
            public const nint ��j* = 0x0; // 
            public const nint 0�j* = 0x7AA55A0; // 
            public const nint �M�DB< ��Ӵ�?1��� ��M��L��a��fk��.t�6xM�R�}�t�q��%�� = 0x0; // 
            public const nint p�j* = 0x7AA56F0; // 
            public const nint Į��ܾ�V��F�?y��!Q��&ω@8p��ir�9ƍ�0e�]���i��V������DZ��Dt�U���a�Lhk"6V�AyNHᐚ��2<«�eܰ{:X���B��
            �����������$�M�����0a�y,�] H�����]"I�H�N���]��C�|�Q~-䂡sj�H���
            �e��=�qU�i�!B��!B�B�A�	h�&@ = 0x0; // 
            public const nint ��j* = 0x7AA5850; // 
            public const nint ��|�|�`\�f�0�b��:����uis3��1�U1���b��se4�uކ�/��������~��Ρ�������{�����������l��U���Ϸ������x�{ȡ���)����.G�n�����Sn:�>�r�}?�_y����<�����)�H�b���������X���S¦�c��ȋ!�r���>�u��x���Rٜ�2���TV]�O��_ϯǽg��xޑHG䏿�`���y��튫�������y����{�z���������W>��s3ɲXgn�	.<*z�����j2�*�خ��ӊŬ������߇IO�E}�y.�*՝+<��m�����E/��8$��+�u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
            public const nint ��j* = 0x7AA59C0; // 
            public const nint �u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
            public const nint 0�j* = 0x6345370; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x7AA5A60; // 
            public const nint ����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x6345490; // 
            public const nint ��j* = 0x7AA5F80; // 
            public const nint 0�j* = 0x6345590; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x0; // 
            public const nint ��j* = 0x6345620; // 
            public const nint 0�j* = 0x7AA72B0; // 
            public const nint -��?_�Q�z4����������g���2�	�j�f�"|ָ����Tq?�>+Ô5Fd���
            l�#xV�S���
            ��@F���F@�£��_?��_ B0TZ = 0x0; // 
            public const nint p�j* = 0x6345790; // 
            public const nint ��j* = 0x6345860; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x7AA7970; // 
            public const nint 0�j* = 0x0; // 
            public const nint p�j* = 0x6345900; // 
            public const nint ��j* = 0x0; // 
            public const nint ��j* = 0x63459E0; // 
            public const nint Ho��� = 0x6345A20; // 
            public const nint  = 0x7AA8C70; // 
            public const nint K0�bhc�i9�dY�k��!���d�F�@}k�N%9�Z��Hh�>�A�m�H����-נ���ɚi��<~�VZ�BC^�ܭ���A[�5�)�h�B�V擑BX�<$g=�����sąu5e��5�O�$34���>�@uen�IlZ�����j�9k-�[� = 0x0; // 
            public const nint  = 0x6345B20; // 
            public const nint  = 0x63490F0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x6345BB0; // 
            public const nint  = 0x63493D0; // 
            public const nint �V��� = 0x0; // 
            public const nint  = 0x6349420; // 
            public const nint P�4* = 0x0; // 
            public const nint  = 0x6349470; // 
            public const nint  = 0x0; // 
            public const nint  = 0x63495E0; // 
            public const nint p�j* = 0x0; // 
            public const nint ��j* = 0x6345E90; // 
            public const nint ��j* = 0x6349650; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x63497A0; // 
            public const nint  = 0x0; // 
            public const nint p�j* = 0x6349920; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x6349A90; // 
            public const nint  = 0x6349AD0; // 
            public const nint ��j* = 0x2B13D470; // 
            public const nint 0�j* = 0x0; // 
            public const nint p�j* = 0x6349B50; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x6349CA0; // 
            public const nint  = 0x0; // 
            public const nint ��j* = 0x6349E00; // 
            public const nint  = 0x0; // 
            public const nint 0�j* = 0x6349F70; // 
            public const nint ��4* = 0x0; // 
        }
        // Parent: None
        // Field count: 0
        public static class PF_NOISE_MODIFIER_NONE {
        }
        // Parent: None
        // Field count: 0
        public static class _ {
        }
        // Parent: None
        // Field count: 146
        public static class _ {
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x68B2600; // 
            public const nint  = 0x2; // 
            public const nint  = 0x41C00000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
            public const nint  = 0x76A5630; // 
            public const nint  = 0x6; // 
            public const nint  = 0xFFFFFFFE; // 
            public const nint  = 0x0; // 
            public const nint  = 0x3F000000; // 
            public const nint  = 0x3F000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
            public const nint  = 0x76A5910; // 
            public const nint  = 0x6; // 
            public const nint  = 0xFFFFFFFE; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
            public const nint  = 0x76A5A90; // 
            public const nint  = 0x6; // 
            public const nint  = 0xFFFFFFFE; // 
            public const nint  = 0x0; // 
            public const nint  = 0x41200000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
            public const nint  = 0x0; // 
        }
        // Parent: None
        // Field count: 0
        public static class PF_NOISE_MODIFIER_NONE {
        }
    }
}
