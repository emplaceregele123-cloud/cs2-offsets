// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-26 10:47:39.226903900 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: client.dll
        // Class count: 83
        // Enum count: 5
        namespace client_dll {
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace GeneratedTextureHandle_t {
                constexpr std::ptrdiff_t m_strBitmapName = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputContainer_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nCompositeMaterialInputContainerSourceType = 0x4; // CompositeMaterialInputContainerSourceType_t
                constexpr std::ptrdiff_t m_strSpecificContainerMaterial = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                constexpr std::ptrdiff_t m_strAttrName = 0xE8; // CUtlString
                constexpr std::ptrdiff_t m_strAlias = 0xF0; // CUtlString
                constexpr std::ptrdiff_t m_vecLooseVariables = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                constexpr std::ptrdiff_t m_strAttrNameForVar = 0x110; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x118; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialAssemblyProcedure_t {
                constexpr std::ptrdiff_t m_vecCompMatIncludes = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                constexpr std::ptrdiff_t m_vecMatchFilters = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                constexpr std::ptrdiff_t m_vecCompositeInputContainers = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                constexpr std::ptrdiff_t m_vecPropertyMutators = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialInputLooseVariable_t {
                constexpr std::ptrdiff_t m_strName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bExposeExternally = 0x8; // bool
                constexpr std::ptrdiff_t m_strExposedFriendlyName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strExposedFriendlyGroupName = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bExposedVariableIsFixedRange = 0x20; // bool
                constexpr std::ptrdiff_t m_strExposedVisibleWhenTrue = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_strExposedHiddenWhenTrue = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_strExposedValueList = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_nVariableType = 0x40; // CompositeMaterialInputLooseVariableType_t
                constexpr std::ptrdiff_t m_bValueBoolean = 0x44; // bool
                constexpr std::ptrdiff_t m_nValueIntX = 0x48; // int32
                constexpr std::ptrdiff_t m_nValueIntY = 0x4C; // int32
                constexpr std::ptrdiff_t m_nValueIntZ = 0x50; // int32
                constexpr std::ptrdiff_t m_nValueIntW = 0x54; // int32
                constexpr std::ptrdiff_t m_bHasFloatBounds = 0x58; // bool
                constexpr std::ptrdiff_t m_flValueFloatX = 0x5C; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Min = 0x60; // float32
                constexpr std::ptrdiff_t m_flValueFloatX_Max = 0x64; // float32
                constexpr std::ptrdiff_t m_flValueFloatY = 0x68; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Min = 0x6C; // float32
                constexpr std::ptrdiff_t m_flValueFloatY_Max = 0x70; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ = 0x74; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Min = 0x78; // float32
                constexpr std::ptrdiff_t m_flValueFloatZ_Max = 0x7C; // float32
                constexpr std::ptrdiff_t m_flValueFloatW = 0x80; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Min = 0x84; // float32
                constexpr std::ptrdiff_t m_flValueFloatW_Max = 0x88; // float32
                constexpr std::ptrdiff_t m_cValueColor4 = 0x8C; // Color
                constexpr std::ptrdiff_t m_nValueSystemVar = 0x90; // CompositeMaterialVarSystemVar_t
                constexpr std::ptrdiff_t m_strResourceMaterial = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                constexpr std::ptrdiff_t m_strTextureContentAssetPath = 0x178; // CUtlString
                constexpr std::ptrdiff_t m_strTextureRuntimeResourcePath = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
                constexpr std::ptrdiff_t m_strTextureCompilationVtexTemplate = 0x260; // CUtlString
                constexpr std::ptrdiff_t m_nTextureType = 0x268; // CompositeMaterialInputTextureType_t
                constexpr std::ptrdiff_t m_strString = 0x270; // CUtlString
                constexpr std::ptrdiff_t m_strPanoramaPanelPath = 0x278; // CUtlString
                constexpr std::ptrdiff_t m_nPanoramaRenderRes = 0x280; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEventConsumerHudModelArmsAttributes {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_barn_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t brightness = 0x18; // float32
                constexpr std::ptrdiff_t orbit_distance = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_map_t {
                constexpr std::ptrdiff_t map_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t map_rotation = 0x8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_fill_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t brightness = 0x18; // float32
            }
            // Parent: None
            // Field count: 5
            namespace CInterpolatedValue {
                constexpr std::ptrdiff_t m_flStartTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEndTime = 0x4; // float32
                constexpr std::ptrdiff_t m_flStartValue = 0x8; // float32
                constexpr std::ptrdiff_t m_flEndValue = 0xC; // float32
                constexpr std::ptrdiff_t m_nInterpType = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_item_t {
                constexpr std::ptrdiff_t position = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t pose_sequence = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 4
            namespace C_Chicken_GraphController {
                constexpr std::ptrdiff_t m_paramActivity = 0x268; // CAnimGraphParamRef<char*>
                constexpr std::ptrdiff_t m_paramEndActivityImmediately = 0x290; // CAnimGraphParamRef<bool>
                constexpr std::ptrdiff_t m_paramSnapToSquatting = 0x2B0; // CAnimGraphParamRef<bool>
                constexpr std::ptrdiff_t m_sActivityFinished = 0x2D0; // CAnimGraphTagRef
            }
            // Parent: None
            // Field count: 2
            namespace TimedEvent {
                constexpr std::ptrdiff_t m_TimeBetweenEvents = 0x0; // float32
                constexpr std::ptrdiff_t m_fNextEvent = 0x4; // float32
            }
            // Parent: None
            // Field count: 13
            namespace CFlashlightEffect {
                constexpr std::ptrdiff_t m_bIsOn = 0x10; // bool
                constexpr std::ptrdiff_t m_bMuzzleFlashEnabled = 0x20; // bool
                constexpr std::ptrdiff_t m_flMuzzleFlashBrightness = 0x24; // float32
                constexpr std::ptrdiff_t m_quatMuzzleFlashOrientation = 0x30; // Quaternion
                constexpr std::ptrdiff_t m_vecMuzzleFlashOrigin = 0x40; // Vector
                constexpr std::ptrdiff_t m_flFov = 0x4C; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x50; // float32
                constexpr std::ptrdiff_t m_flLinearAtten = 0x54; // float32
                constexpr std::ptrdiff_t m_bCastsShadows = 0x58; // bool
                constexpr std::ptrdiff_t m_flCurrentPullBackDist = 0x5C; // float32
                constexpr std::ptrdiff_t m_FlashlightTexture = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_MuzzleFlashTexture = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_textureName = 0x70; // char[64]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_camera_t {
                constexpr std::ptrdiff_t angle = 0x0; // QAngle
                constexpr std::ptrdiff_t fov = 0xC; // float32
                constexpr std::ptrdiff_t znear = 0x10; // float32
                constexpr std::ptrdiff_t zfar = 0x14; // float32
                constexpr std::ptrdiff_t target = 0x18; // Vector
                constexpr std::ptrdiff_t target_nudge = 0x24; // Vector
                constexpr std::ptrdiff_t orbit_distance = 0x30; // float32
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
            namespace CInventoryImageData {
                constexpr std::ptrdiff_t m_nNodeType = 0x0; // InventoryNodeType_t
                constexpr std::ptrdiff_t name = 0x8; // CUtlString
                constexpr std::ptrdiff_t inventory_image_data = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 8
            namespace C_CSGO_PreviewPlayer_GraphController {
                constexpr std::ptrdiff_t m_pszCharacterMode = 0x268; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszTeamPreviewVariant = 0x290; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszTeamPreviewPosition = 0x2B8; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszEndOfMatchCelebration = 0x2E0; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_nTeamPreviewRandom = 0x308; // CAnimGraphParamOptionalRef<int32>
                constexpr std::ptrdiff_t m_pszWeaponState = 0x328; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_pszWeaponType = 0x350; // CAnimGraphParamOptionalRef<char*>
                constexpr std::ptrdiff_t m_bCT = 0x378; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 2
            namespace C_CommandContext {
                constexpr std::ptrdiff_t needsprocessing = 0x0; // bool
                constexpr std::ptrdiff_t command_number = 0xA0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CompositeMaterialEditorPoint_t {
                constexpr std::ptrdiff_t m_ModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_nSequenceIndex = 0xE0; // int32
                constexpr std::ptrdiff_t m_flCycle = 0xE4; // float32
                constexpr std::ptrdiff_t m_KVModelStateChoices = 0xE8; // KeyValues3
                constexpr std::ptrdiff_t m_bEnableChildModel = 0xF8; // bool
                constexpr std::ptrdiff_t m_ChildModelName = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                constexpr std::ptrdiff_t m_vecCompositeMaterials = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Field count: 0
            namespace CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            namespace C_IronSightController {
                constexpr std::ptrdiff_t m_bIronSightAvailable = 0x10; // bool
                constexpr std::ptrdiff_t m_flIronSightAmount = 0x14; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained = 0x18; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased = 0x1C; // float32
                constexpr std::ptrdiff_t m_flIronSightAmount_Interpolated = 0x20; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountGained_Interpolated = 0x24; // float32
                constexpr std::ptrdiff_t m_flIronSightAmountBiased_Interpolated = 0x28; // float32
                constexpr std::ptrdiff_t m_flInterpolationLastUpdated = 0x2C; // float32
                constexpr std::ptrdiff_t m_angDeltaAverage = 0x30; // QAngle[8]
                constexpr std::ptrdiff_t m_angViewLast = 0x90; // QAngle
                constexpr std::ptrdiff_t m_vecDotCoords = 0x9C; // Vector2D
                constexpr std::ptrdiff_t m_flFiringInaccuracyExtraWidthMultiplier = 0xA4; // float32
                constexpr std::ptrdiff_t m_flSpeedRatio = 0xA8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatMutatorCondition_t {
                constexpr std::ptrdiff_t m_nMutatorCondition = 0x0; // CompMatPropertyMutatorConditionType_t
                constexpr std::ptrdiff_t m_strMutatorConditionContainerName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strMutatorConditionContainerVarName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strMutatorConditionContainerVarValue = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bPassWhenTrue = 0x20; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_data_t {
                constexpr std::ptrdiff_t map = 0x0; // inv_image_map_t
                constexpr std::ptrdiff_t item = 0x10; // inv_image_item_t
                constexpr std::ptrdiff_t camera = 0x30; // inv_image_camera_t
                constexpr std::ptrdiff_t lightsun = 0x64; // inv_image_light_sun_t
                constexpr std::ptrdiff_t lightfill = 0x80; // inv_image_light_fill_t
                constexpr std::ptrdiff_t light0 = 0x9C; // inv_image_light_barn_t
                constexpr std::ptrdiff_t light1 = 0xBC; // inv_image_light_barn_t
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompMatPropertyMutator_t {
                constexpr std::ptrdiff_t m_bEnabled = 0x0; // bool
                constexpr std::ptrdiff_t m_nMutatorCommandType = 0x4; // CompMatPropertyMutatorType_t
                constexpr std::ptrdiff_t m_strInitWith_Container = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_InputContainerSrc = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_InputContainerProperty = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_strCopyProperty_TargetProperty = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_strRandomRollInputVars_SeedInputVar = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_strCopyMatchingKeys_InputContainerSrc = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_FindSuffix = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_nSetValue_Value = 0x68; // CompositeMaterialInputLooseVariable_t
                constexpr std::ptrdiff_t m_strGenerateTexture_TargetParam = 0x2F0; // CUtlString
                constexpr std::ptrdiff_t m_strGenerateTexture_InitialContainer = 0x2F8; // CUtlString
                constexpr std::ptrdiff_t m_nResolution = 0x300; // int32
                constexpr std::ptrdiff_t m_bIsScratchTarget = 0x304; // bool
                constexpr std::ptrdiff_t m_strCompressionFormat = 0x308; // CUtlString
                constexpr std::ptrdiff_t m_bSplatDebugInfo = 0x310; // bool
                constexpr std::ptrdiff_t m_bCaptureInRenderDoc = 0x311; // bool
                constexpr std::ptrdiff_t m_vecTexGenInstructions = 0x318; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_vecConditionalMutators = 0x330; // CUtlVector<CompMatPropertyMutator_t>
                constexpr std::ptrdiff_t m_strPopInputQueue_Container = 0x348; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerSrc = 0x350; // CUtlString
                constexpr std::ptrdiff_t m_strDrawText_InputContainerProperty = 0x358; // CUtlString
                constexpr std::ptrdiff_t m_vecDrawText_Position = 0x360; // Vector2D
                constexpr std::ptrdiff_t m_colDrawText_Color = 0x368; // Color
                constexpr std::ptrdiff_t m_strDrawText_Font = 0x370; // CUtlString
                constexpr std::ptrdiff_t m_vecConditions = 0x378; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCompositeMaterialEditorDoc {
                constexpr std::ptrdiff_t m_nVersion = 0x8; // int32
                constexpr std::ptrdiff_t m_Points = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                constexpr std::ptrdiff_t m_KVthumbnail = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 13
            namespace CClientAlphaProperty {
                constexpr std::ptrdiff_t m_nRenderFX = 0x10; // uint8
                constexpr std::ptrdiff_t m_nRenderMode = 0x11; // uint8
                constexpr std::ptrdiff_t m_bAlphaOverride = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bShadowAlphaOverride = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_nReserved = 0x0; // bitfield:6
                constexpr std::ptrdiff_t m_nAlpha = 0x13; // uint8
                constexpr std::ptrdiff_t m_nDesyncOffset = 0x14; // uint16
                constexpr std::ptrdiff_t m_nReserved2 = 0x16; // uint16
                constexpr std::ptrdiff_t m_nDistFadeStart = 0x18; // uint16
                constexpr std::ptrdiff_t m_nDistFadeEnd = 0x1A; // uint16
                constexpr std::ptrdiff_t m_flFadeScale = 0x1C; // float32
                constexpr std::ptrdiff_t m_flRenderFxStartTime = 0x20; // GameTime_t
                constexpr std::ptrdiff_t m_flRenderFxDuration = 0x24; // float32
            }
            // Parent: None
            // Field count: 43
            namespace CGlobalLightBase {
                constexpr std::ptrdiff_t m_bSpotLight = 0x10; // bool
                constexpr std::ptrdiff_t m_SpotLightOrigin = 0x14; // Vector
                constexpr std::ptrdiff_t m_SpotLightAngles = 0x20; // QAngle
                constexpr std::ptrdiff_t m_ShadowDirection = 0x2C; // Vector
                constexpr std::ptrdiff_t m_AmbientDirection = 0x38; // Vector
                constexpr std::ptrdiff_t m_SpecularDirection = 0x44; // Vector
                constexpr std::ptrdiff_t m_InspectorSpecularDirection = 0x50; // Vector
                constexpr std::ptrdiff_t m_flSpecularPower = 0x5C; // float32
                constexpr std::ptrdiff_t m_flSpecularIndependence = 0x60; // float32
                constexpr std::ptrdiff_t m_SpecularColor = 0x64; // Color
                constexpr std::ptrdiff_t m_bStartDisabled = 0x68; // bool
                constexpr std::ptrdiff_t m_bEnabled = 0x69; // bool
                constexpr std::ptrdiff_t m_LightColor = 0x6A; // Color
                constexpr std::ptrdiff_t m_AmbientColor1 = 0x6E; // Color
                constexpr std::ptrdiff_t m_AmbientColor2 = 0x72; // Color
                constexpr std::ptrdiff_t m_AmbientColor3 = 0x76; // Color
                constexpr std::ptrdiff_t m_flSunDistance = 0x7C; // float32
                constexpr std::ptrdiff_t m_flFOV = 0x80; // float32
                constexpr std::ptrdiff_t m_flNearZ = 0x84; // float32
                constexpr std::ptrdiff_t m_flFarZ = 0x88; // float32
                constexpr std::ptrdiff_t m_bEnableShadows = 0x8C; // bool
                constexpr std::ptrdiff_t m_bOldEnableShadows = 0x8D; // bool
                constexpr std::ptrdiff_t m_bBackgroundClearNotRequired = 0x8E; // bool
                constexpr std::ptrdiff_t m_flCloudScale = 0x90; // float32
                constexpr std::ptrdiff_t m_flCloud1Speed = 0x94; // float32
                constexpr std::ptrdiff_t m_flCloud1Direction = 0x98; // float32
                constexpr std::ptrdiff_t m_flCloud2Speed = 0x9C; // float32
                constexpr std::ptrdiff_t m_flCloud2Direction = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale1 = 0xB0; // float32
                constexpr std::ptrdiff_t m_flAmbientScale2 = 0xB4; // float32
                constexpr std::ptrdiff_t m_flGroundScale = 0xB8; // float32
                constexpr std::ptrdiff_t m_flLightScale = 0xBC; // float32
                constexpr std::ptrdiff_t m_flFoWDarkness = 0xC0; // float32
                constexpr std::ptrdiff_t m_bEnableSeparateSkyboxFog = 0xC4; // bool
                constexpr std::ptrdiff_t m_vFowColor = 0xC8; // Vector
                constexpr std::ptrdiff_t m_ViewOrigin = 0xD4; // Vector
                constexpr std::ptrdiff_t m_ViewAngles = 0xE0; // QAngle
                constexpr std::ptrdiff_t m_flViewFoV = 0xEC; // float32
                constexpr std::ptrdiff_t m_WorldPoints = 0xF0; // Vector[8]
                constexpr std::ptrdiff_t m_vFogOffsetLayer0 = 0x4A8; // Vector2D
                constexpr std::ptrdiff_t m_vFogOffsetLayer1 = 0x4B0; // Vector2D
                constexpr std::ptrdiff_t m_hEnvWind = 0x4B8; // CHandle<C_BaseEntity>
                constexpr std::ptrdiff_t m_hEnvSky = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            namespace IClientAlphaProperty {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace inv_image_light_sun_t {
                constexpr std::ptrdiff_t color = 0x0; // Vector
                constexpr std::ptrdiff_t angle = 0xC; // QAngle
                constexpr std::ptrdiff_t brightness = 0x18; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            namespace CompositeMaterialMatchFilter_t {
                constexpr std::ptrdiff_t m_nCompositeMaterialMatchFilterType = 0x0; // CompositeMaterialMatchFilterType_t
                constexpr std::ptrdiff_t m_strMatchFilter = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_strMatchValue = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bPassWhenTrue = 0x18; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            namespace CompositeMaterial_t {
                constexpr std::ptrdiff_t m_TargetKVs = 0x8; // KeyValues3
                constexpr std::ptrdiff_t m_PreGenerationKVs = 0x18; // KeyValues3
                constexpr std::ptrdiff_t m_FinalKVs = 0x58; // KeyValues3
                constexpr std::ptrdiff_t m_vecGeneratedTextures = 0x80; // CUtlVector<GeneratedTextureHandle_t>
            }
            // Parent: None
            // Field count: 183
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // CUtlVector<int32>
                constexpr std::ptrdiff_t �p�f� = 0xF4345D70; // 
                constexpr std::ptrdiff_t �͖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �t�f� = 0x669B76B8; // 
                constexpr std::ptrdiff_t �p�f� = 0x1FFDF40; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // int32
                constexpr std::ptrdiff_t �p�f� = 0x8; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // GameTime_t
                constexpr std::ptrdiff_t �p�f� = 0x20; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // int32
                constexpr std::ptrdiff_t �p�f� = 0x64; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �f4�� = 0x669B76B8; // 
                constexpr std::ptrdiff_t �p�f� = 0x1FFE5A0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t ��4�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4397340; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4396540; // 
                constexpr std::ptrdiff_t @�p* = 0x63077E0; // �$�*
                constexpr std::ptrdiff_t  = 0x6F746F; // 
                constexpr std::ptrdiff_t  = 0x616C7073; // 
                constexpr std::ptrdiff_t  = 0x656C6269; // 
                constexpr std::ptrdiff_t  = 0x656C776F; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x70696365; // 
                constexpr std::ptrdiff_t  = 0x656C776F; // 
                constexpr std::ptrdiff_t  = 0x746E756F; // 
                constexpr std::ptrdiff_t  = 0x65757169; // 
                constexpr std::ptrdiff_t  = 0x7473; // 
                constexpr std::ptrdiff_t  = 0x65736552; // 
                constexpr std::ptrdiff_t  = 0x6E6F7073; // 
                constexpr std::ptrdiff_t  = 0x65736552; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x692E7400; // 
                constexpr std::ptrdiff_t  = 0x65736552; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6D6F7473; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x50656D69; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x50656D69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x6E756F63; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x2E6E6F69; // 
                constexpr std::ptrdiff_t  = 0x6F4C676E; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x2E6E6F69; // 
                constexpr std::ptrdiff_t  = 0x6F4C676E; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x2E6E6F69; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x54414345; // 
                constexpr std::ptrdiff_t  = 0x426F5474; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x444554; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x5045445F; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x65744965; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x726576; // 
                constexpr std::ptrdiff_t  = 0x616C7073; // 
                constexpr std::ptrdiff_t  = 0x65747562; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x69747563; // 
                constexpr std::ptrdiff_t  = 0x6D69546B; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x7A696D6F; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x64616552; // 
                constexpr std::ptrdiff_t  = 0x6773; // 
                constexpr std::ptrdiff_t  = 0x64617254; // 
                constexpr std::ptrdiff_t  = 0x72657672; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x65767265; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x53776569; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x52776569; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x45776569; // 
                constexpr std::ptrdiff_t  = 0x63696669; // 
                constexpr std::ptrdiff_t  = 0x49776569; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x526D6574; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x6552616D; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x45445F65; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x747361; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x64; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x6C754D79; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x65747375; // 
                constexpr std::ptrdiff_t  = 0x646E61; // 
                constexpr std::ptrdiff_t  = 0x73616364; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63414950; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x756F6E6E; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70737361; // 
                constexpr std::ptrdiff_t  = 0x737574; // 
                constexpr std::ptrdiff_t  = 0x62755367; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x52656764; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6D657449; // 
                constexpr std::ptrdiff_t �p�f� = 0x20; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AB8E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t ��:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA4E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AB020; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AC210; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A3930; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA1E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9AF0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA750; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x2010D00; // 
                constexpr std::ptrdiff_t  = 0x2010080; // 
                constexpr std::ptrdiff_t  = 0x2026400; // 
                constexpr std::ptrdiff_t  = 0x2020000; // 
                constexpr std::ptrdiff_t  = 0x2030100; // 
                constexpr std::ptrdiff_t  = 0x20300C0; // 
                constexpr std::ptrdiff_t  = 0x2040140; // 
                constexpr std::ptrdiff_t  = 0x20400D0; // 
            }
            // Parent: None
            // Field count: 169
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // float32
                constexpr std::ptrdiff_t �p�f� = 0x20; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // float32
                constexpr std::ptrdiff_t �p�f� = 0x1E; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // uint16
                constexpr std::ptrdiff_t �p�f� = 0xF43466E0; // 
                constexpr std::ptrdiff_t �͖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �t�f� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF434A780; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43962E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t econ_gcmessages.proto = 0x2B41A038; // 
                constexpr std::ptrdiff_t  = 0x656C006E; // 
                constexpr std::ptrdiff_t  = 0x616D2E73; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x756E2E73; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x65722E73; // 
                constexpr std::ptrdiff_t  = 0x6E6F7073; // 
                constexpr std::ptrdiff_t  = 0x65736552; // 
                constexpr std::ptrdiff_t  = 0x7473; // 
                constexpr std::ptrdiff_t  = 0x65757169; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x632E7473; // 
                constexpr std::ptrdiff_t  = 0x7372656B; // 
                constexpr std::ptrdiff_t  = 0x692E7473; // 
                constexpr std::ptrdiff_t  = 0x7372656B; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x50656D69; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x6D6F7473; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x6E756F63; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x2E6E0065; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45544143; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45544143; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x726576; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x426F5474; // 
                constexpr std::ptrdiff_t  = 0x54414345; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x444554; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x5045445F; // 
                constexpr std::ptrdiff_t  = 0x65744965; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65747562; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x6D69546B; // 
                constexpr std::ptrdiff_t  = 0x69747563; // 
                constexpr std::ptrdiff_t  = 0x7A696D6F; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x64616552; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x64617254; // 
                constexpr std::ptrdiff_t  = 0x6773; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x72657672; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x65767265; // 
                constexpr std::ptrdiff_t  = 0x53776569; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x52776569; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x45776569; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x49776569; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x63696669; // 
                constexpr std::ptrdiff_t  = 0x526D6574; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x6552616D; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45445F65; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x747361; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x64; // 
                constexpr std::ptrdiff_t  = 0x6C754D79; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x65747375; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616364; // 
                constexpr std::ptrdiff_t  = 0x646E61; // 
                constexpr std::ptrdiff_t  = 0x63414950; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x756F6E6E; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x70737361; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x62755367; // 
                constexpr std::ptrdiff_t  = 0x737574; // 
                constexpr std::ptrdiff_t  = 0x52656764; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x6D657449; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t �Ζf� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t �p�f� = 0xF43AA040; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA0B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43ABC60; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA3C0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA600; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t 09:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AC440; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9D70; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9DE0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x2000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xCE762278; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x1; // 
            }
            // Parent: None
            // Field count: 166
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // float32
                constexpr std::ptrdiff_t �p�f� = 0x1E; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // uint16
                constexpr std::ptrdiff_t �p�f� = 0xF43466E0; // 
                constexpr std::ptrdiff_t �͖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �t�f� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF434A780; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43962E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t econ_gcmessages.proto = 0x2B41A038; // 
                constexpr std::ptrdiff_t  = 0x656C006E; // 
                constexpr std::ptrdiff_t  = 0x616D2E73; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x756E2E73; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x65722E73; // 
                constexpr std::ptrdiff_t  = 0x6E6F7073; // 
                constexpr std::ptrdiff_t  = 0x65736552; // 
                constexpr std::ptrdiff_t  = 0x7473; // 
                constexpr std::ptrdiff_t  = 0x65757169; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x632E7473; // 
                constexpr std::ptrdiff_t  = 0x7372656B; // 
                constexpr std::ptrdiff_t  = 0x692E7473; // 
                constexpr std::ptrdiff_t  = 0x7372656B; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x50656D69; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x6D6F7473; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x6E756F63; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x2E6E0065; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45544143; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45544143; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x726576; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x426F5474; // 
                constexpr std::ptrdiff_t  = 0x54414345; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x444554; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x5045445F; // 
                constexpr std::ptrdiff_t  = 0x65744965; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65747562; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x6D69546B; // 
                constexpr std::ptrdiff_t  = 0x69747563; // 
                constexpr std::ptrdiff_t  = 0x7A696D6F; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x64616552; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x64617254; // 
                constexpr std::ptrdiff_t  = 0x6773; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x72657672; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x65767265; // 
                constexpr std::ptrdiff_t  = 0x53776569; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x52776569; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x45776569; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x49776569; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x63696669; // 
                constexpr std::ptrdiff_t  = 0x526D6574; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x6552616D; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45445F65; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x747361; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x64; // 
                constexpr std::ptrdiff_t  = 0x6C754D79; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x65747375; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616364; // 
                constexpr std::ptrdiff_t  = 0x646E61; // 
                constexpr std::ptrdiff_t  = 0x63414950; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x756F6E6E; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x70737361; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x62755367; // 
                constexpr std::ptrdiff_t  = 0x737574; // 
                constexpr std::ptrdiff_t  = 0x52656764; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x6D657449; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t �Ζf� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t �p�f� = 0xF43AA040; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA0B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43ABC60; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA3C0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA600; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t 09:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AC440; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9D70; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9DE0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x2000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xCE762278; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x1; // 
            }
            // Parent: None
            // Field count: 163
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // uint16
                constexpr std::ptrdiff_t �p�f� = 0xF43466E0; // 
                constexpr std::ptrdiff_t �͖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �t�f� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF434A780; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43962E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t econ_gcmessages.proto = 0x2B41A038; // 
                constexpr std::ptrdiff_t  = 0x656C006E; // 
                constexpr std::ptrdiff_t  = 0x616D2E73; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x756E2E73; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x65722E73; // 
                constexpr std::ptrdiff_t  = 0x6E6F7073; // 
                constexpr std::ptrdiff_t  = 0x65736552; // 
                constexpr std::ptrdiff_t  = 0x7473; // 
                constexpr std::ptrdiff_t  = 0x65757169; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x632E7473; // 
                constexpr std::ptrdiff_t  = 0x7372656B; // 
                constexpr std::ptrdiff_t  = 0x692E7473; // 
                constexpr std::ptrdiff_t  = 0x7372656B; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x50656D69; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x6D6F7473; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x65766974; // 
                constexpr std::ptrdiff_t  = 0x6E756F63; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x2E6E0065; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45544143; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45544143; // 
                constexpr std::ptrdiff_t  = 0x74617A69; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x726576; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x636F536F; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x426F5474; // 
                constexpr std::ptrdiff_t  = 0x54414345; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4445; // 
                constexpr std::ptrdiff_t  = 0x496F5474; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x52504544; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x444554; // 
                constexpr std::ptrdiff_t  = 0x74656B63; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x5045445F; // 
                constexpr std::ptrdiff_t  = 0x65744965; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x52746669; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65747562; // 
                constexpr std::ptrdiff_t  = 0x694B746E; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x6D69546B; // 
                constexpr std::ptrdiff_t  = 0x69747563; // 
                constexpr std::ptrdiff_t  = 0x7A696D6F; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x74696E49; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x64616552; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x64617254; // 
                constexpr std::ptrdiff_t  = 0x6773; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x72657672; // 
                constexpr std::ptrdiff_t  = 0x6573776F; // 
                constexpr std::ptrdiff_t  = 0x65767265; // 
                constexpr std::ptrdiff_t  = 0x53776569; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x52776569; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x45776569; // 
                constexpr std::ptrdiff_t  = 0x6F697461; // 
                constexpr std::ptrdiff_t  = 0x49776569; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x63696669; // 
                constexpr std::ptrdiff_t  = 0x526D6574; // 
                constexpr std::ptrdiff_t  = 0x6573; // 
                constexpr std::ptrdiff_t  = 0x6552616D; // 
                constexpr std::ptrdiff_t  = 0x74736575; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x44455441; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x4D455F6B; // 
                constexpr std::ptrdiff_t  = 0x45445F65; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x736E6F70; // 
                constexpr std::ptrdiff_t  = 0x73616863; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x747361; // 
                constexpr std::ptrdiff_t  = 0x6F576465; // 
                constexpr std::ptrdiff_t  = 0x64; // 
                constexpr std::ptrdiff_t  = 0x6C754D79; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x65747375; // 
                constexpr std::ptrdiff_t  = 0x65736E; // 
                constexpr std::ptrdiff_t  = 0x73616364; // 
                constexpr std::ptrdiff_t  = 0x646E61; // 
                constexpr std::ptrdiff_t  = 0x63414950; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x756F6E6E; // 
                constexpr std::ptrdiff_t  = 0x65736E6F; // 
                constexpr std::ptrdiff_t  = 0x70737361; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x62755367; // 
                constexpr std::ptrdiff_t  = 0x737574; // 
                constexpr std::ptrdiff_t  = 0x52656764; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t  = 0x6D657449; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t �Ζf� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // CHandle<CBaseEntity>
                constexpr std::ptrdiff_t �p�f� = 0xF43AA040; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA0B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43ABC60; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA3C0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AA600; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t 09:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43AC440; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9D70; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A9DE0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x2000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xCE762278; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x1; // 
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 164
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B6C48; // uint64
                constexpr std::ptrdiff_t �p�f� = 0xF42F9490; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t ��2�� = 0x669B6CD8; // 
                constexpr std::ptrdiff_t �p�f� = 0x2; // 
                constexpr std::ptrdiff_t �͖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �t�f� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF432BD90; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �2�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43295B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `%3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43325F0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4335B90; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  [3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42EEBA0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �63�� = 0x669B6C48; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F94E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0\3�� = 0x669B76B8; // 
                constexpr std::ptrdiff_t �p�f� = 0x2BFF92A0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �:3�� = 0x73614243; // 
                constexpr std::ptrdiff_t  = 0x62697274; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t P�/�� = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x1006E69; // 
                constexpr std::ptrdiff_t  = 0x473A3A73; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4337550; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t ��/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F9EA0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �n/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F9E10; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �m/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F8E20; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �R/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F75C0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x7261746E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t Pw3�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x1003E20; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0�/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F76E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0p/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4337620; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  r/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4337880; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �p/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F7160; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t p�/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4337690; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t po/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F83D0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @{/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43D3670; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �
                3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F5CD0; // 
                constexpr std::ptrdiff_t  = 0x74637572; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F7CB0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t @F3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43348B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t ��/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F8970; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t x/�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E20745F; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // CUtlSymbolLarge
                constexpr std::ptrdiff_t  = 0x20745F74; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t P�/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF42F86D0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t P*3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4330BD0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t ��/�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43D2490; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43D2260; // 
                constexpr std::ptrdiff_t  = 0x41746553; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43D3530; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 1:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43DDAA0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0�=�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43BA800; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43DF0E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43A3670; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��=�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43B9850; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��;�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4396DA0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �3:�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF437D350; // 
                constexpr std::ptrdiff_t �͖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t �p�f� = 0x2BFF61E0; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // float32
                constexpr std::ptrdiff_t �p�f� = 0xF4320C70; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t G4�� = 0x74654E43; // 
                constexpr std::ptrdiff_t  = 0x6C6F626D; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @J4�� = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0xC0; // 
                constexpr std::ptrdiff_t �͖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4344890; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��7�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43447E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �C4�� = 0x74654E43; // 
                constexpr std::ptrdiff_t  = 0x3E206E; // 
                constexpr std::ptrdiff_t `֖f� = 0x15EF000; // 
                constexpr std::ptrdiff_t  = 0x3433E600; // 
                constexpr std::ptrdiff_t  = 0x73614272; // 
                constexpr std::ptrdiff_t  = 0x6C6F626D; // 
                constexpr std::ptrdiff_t  = 0x73614272; // 
                constexpr std::ptrdiff_t �p�f� = 0xF43365C0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t Pd3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4336540; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �c3�� = 0x74654E43; // 
                constexpr std::ptrdiff_t  = 0x65003E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �d3�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4334F90; // 
                constexpr std::ptrdiff_t  = 0x73614272; // 
                constexpr std::ptrdiff_t �p�f� = 0xF4334990; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @H3�� = 0x669B76B8; // 
                constexpr std::ptrdiff_t �p�f� = 0x2BFF1F80; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 711
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // int32[3]
                constexpr std::ptrdiff_t �p�f� = 0x9; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �V = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x35C90; // 
                constexpr std::ptrdiff_t  = 0x654D6E6F; // 
                constexpr std::ptrdiff_t �p�f� = 0x235D0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �p = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x371F0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ps = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x70556E6F; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t Py = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x23940; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `? = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x24030; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E; // 
                constexpr std::ptrdiff_t  = 0x6F4E6574; // 
                constexpr std::ptrdiff_t �p�f� = 0x38770; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �B = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x24E20; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t P� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x38FF0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0xB; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x39710; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t pT = 0x696E4143; // 
                constexpr std::ptrdiff_t  = 0x61426576; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t PU = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x25630; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t W = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x25810; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �X = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x398B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F370; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F470; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F5E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F8B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5FC30; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5A330; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5FEA0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x506D4E43; // 
                constexpr std::ptrdiff_t  = 0x6974696E; // 
                constexpr std::ptrdiff_t  = 0x61776F72; // 
                constexpr std::ptrdiff_t �p�f� = 0x609A0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  
                 = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x31202C44; // 
                constexpr std::ptrdiff_t  = 0x61776F72; // 
                constexpr std::ptrdiff_t  = 0x3E203031; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t   = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x60CC0; // 
                constexpr std::ptrdiff_t  = 0x614D656E; // 
                constexpr std::ptrdiff_t �p�f� = 0x60DA0; // 
                constexpr std::ptrdiff_t  = 0x65646F4E; // 
                constexpr std::ptrdiff_t �p�f� = 0x60EE0; // 
                constexpr std::ptrdiff_t  = 0x4E726F74; // 
                constexpr std::ptrdiff_t  = 0x3E2037; // 
                constexpr std::ptrdiff_t  = 0x61776F72; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x60F80; // 
                constexpr std::ptrdiff_t  = 0x47646578; // 
                constexpr std::ptrdiff_t �p�f� = 0x61020; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5AE70; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5AFF0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t p� = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t   = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x615A0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @ = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x616E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x61820; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x696E6966; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @ = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x6974696E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E696665; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @ = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x69666544; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x69666544; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ` = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x696E6966; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x6974696E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ` = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E696665; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x69666544; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x69666544; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @ = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x6544433A; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x456D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @� = 0x496D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E6F6974; // 
                constexpr std::ptrdiff_t  = 0x61776F72; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5B420; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x496D4E43; // 
                constexpr std::ptrdiff_t  = 0x6544433A; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x476D4E43; // 
                constexpr std::ptrdiff_t  = 0x74696E69; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t p� = 0x466D4E43; // 
                constexpr std::ptrdiff_t  = 0x6974696E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t P� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5B910; // 
                constexpr std::ptrdiff_t  = 0x6F4E4449; // 
                constexpr std::ptrdiff_t �p�f� = 0x5B9F0; // 
                constexpr std::ptrdiff_t  = 0x6E6F4378; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5BA90; // 
                constexpr std::ptrdiff_t  = 0x49746E65; // 
                constexpr std::ptrdiff_t �p�f� = 0x5BB50; // 
                constexpr std::ptrdiff_t  = 0x4E746E65; // 
                constexpr std::ptrdiff_t �p�f� = 0x5BC50; // 
                constexpr std::ptrdiff_t  = 0x6F43746E; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5BD50; // 
                constexpr std::ptrdiff_t  = 0x6F4E746E; // 
                constexpr std::ptrdiff_t �p�f� = 0x5BFD0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5C1B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t p� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5C3B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x466D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E6F69; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x466D4E43; // 
                constexpr std::ptrdiff_t  = 0x696E6966; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5C790; // 
                constexpr std::ptrdiff_t  = 0x646F4E68; // 
                constexpr std::ptrdiff_t �p�f� = 0x5C8B0; // 
                constexpr std::ptrdiff_t  = 0x65646F4E; // 
                constexpr std::ptrdiff_t  = 0x2035202C; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x496D4E43; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x47646578; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5CAE0; // 
                constexpr std::ptrdiff_t  = 0x47646578; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x32337461; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5CCE0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x62180; // 
                constexpr std::ptrdiff_t  = 0x6F4E7072; // 
                constexpr std::ptrdiff_t �p�f� = 0x622A0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �$ = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x62320; // 
                constexpr std::ptrdiff_t  = 0x65646F4E; // 
                constexpr std::ptrdiff_t �p�f� = 0x62440; // 
                constexpr std::ptrdiff_t  = 0x65646F4E; // 
                constexpr std::ptrdiff_t �p�f� = 0x62580; // 
                constexpr std::ptrdiff_t  = 0x6F4E6870; // 
                constexpr std::ptrdiff_t �p�f� = 0x5D1A0; // 
                constexpr std::ptrdiff_t  = 0x64697272; // 
                constexpr std::ptrdiff_t �p�f� = 0x62640; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x202C3631; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �' = 0x436D4E43; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �( = 0x506D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E696665; // 
                constexpr std::ptrdiff_t  = 0x47646578; // 
                constexpr std::ptrdiff_t �p�f� = 0x62A00; // 
                constexpr std::ptrdiff_t  = 0x70696C43; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x62C40; // 
                constexpr std::ptrdiff_t  = 0x646F4E65; // 
                constexpr std::ptrdiff_t �p�f� = 0x62CC0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x446D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �+ = 0x566D4E43; // 
                constexpr std::ptrdiff_t  = 0x66654443; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x6C61626F; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x536D4E43; // 
                constexpr std::ptrdiff_t  = 0x66654443; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t � = 0x496D4E43; // 
                constexpr std::ptrdiff_t  = 0x44433A3A; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0� = 0x546D4E43; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �/ = 0x536D4E43; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  � = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5DA00; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5DBC0; // 
                constexpr std::ptrdiff_t  = 0x3A65646F; // 
                constexpr std::ptrdiff_t �p�f� = 0x63160; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x63320; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5E080; // 
                constexpr std::ptrdiff_t  = 0x3A65646F; // 
                constexpr std::ptrdiff_t �p�f� = 0x5E120; // 
                constexpr std::ptrdiff_t  = 0x3A65646F; // 
                constexpr std::ptrdiff_t �p�f� = 0x1E8F0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x31300; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @ = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x31B00; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x32470; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �' = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x32B90; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  / = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0x8; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �2 = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E206174; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `5 = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x33880; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �; = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x34000; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x21EC0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  # = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x345D0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �H = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x34B80; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t p' = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x35390; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t a = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x36430; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t pg = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x23130; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �j = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x36DB0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  v = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x37A10; // 
                constexpr std::ptrdiff_t  = 0x4B496576; // 
                constexpr std::ptrdiff_t �p�f� = 0x37D30; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @: = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x38050; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x24890; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x24EC0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t   = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x61FE0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A8E30; // 
                constexpr std::ptrdiff_t @זf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t P^z�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x5F6D696E; // 
                constexpr std::ptrdiff_t @זf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `_z�� = 0x669B6C48; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A5FB0; // 
                constexpr std::ptrdiff_t  = 0x6E6F4373; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7B3E90; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t Оz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7B3CB0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �={�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7B3FA0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A7F90; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7ABCF0; // 
                constexpr std::ptrdiff_t  = 0x6F52646D; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // CUtlVector<FeNodeBase_t>
                constexpr std::ptrdiff_t �p�f� = 0xFF7AA420; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A8740; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A9D20; // 
                constexpr std::ptrdiff_t  = 0x43747369; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A8FF0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A9930; // 
                constexpr std::ptrdiff_t  = 0x75546974; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A8940; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AB6E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t иz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7ABA30; // 
                constexpr std::ptrdiff_t  = 0x73696C6C; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AA6E0; // 
                constexpr std::ptrdiff_t  = 0x6E496564; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AAAB0; // 
                constexpr std::ptrdiff_t  = 0x676E6972; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AACC0; // 
                constexpr std::ptrdiff_t  = 0x7053646D; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7ABC80; // 
                constexpr std::ptrdiff_t  = 0x43646C72; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A8830; // 
                constexpr std::ptrdiff_t  = 0x65726570; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7ABFF0; // 
                constexpr std::ptrdiff_t  = 0x65726570; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A86D0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A97C0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AC060; // 
                constexpr std::ptrdiff_t  = 0x65526564; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AA080; // 
                constexpr std::ptrdiff_t  = 0x74536D69; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AA240; // 
                constexpr std::ptrdiff_t  = 0x6E41646D; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AAFE0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  �z�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7865646E; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AB630; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A8A70; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @�z�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x745F7365; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t бz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AA510; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t p�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A96B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t p�z�� = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0x2; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  �z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AAD70; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // uint16
                constexpr std::ptrdiff_t �p�f� = 0xFF7AB370; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // uint32
                constexpr std::ptrdiff_t �p�f� = 0x3; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // Vector4D
                constexpr std::ptrdiff_t �p�f� = 0x4; // 
                constexpr std::ptrdiff_t  Җf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0x4; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B7628; // fltx4
                constexpr std::ptrdiff_t �p�f� = 0x6; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A9250; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A9600; // 
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // uint16[4]
                constexpr std::ptrdiff_t �p�f� = 0xFF7AB280; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t pfz�� = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0x2; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t `�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A91E0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t P�z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A9C10; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A9FB0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t Сz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AA2D0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AABB0; // 
                constexpr std::ptrdiff_t �͖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x56676E69; // 
                constexpr std::ptrdiff_t  = 0x78657472; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AAE20; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  �z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AC3B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @�z�� = 0x669B7628; // 
                constexpr std::ptrdiff_t �p�f� = 0x1A; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �`z�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A6700; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �gz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A6880; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t 0iz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A6B60; // 
                constexpr std::ptrdiff_t �͖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A6BF0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �lz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A6D70; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @oz�� = 0x669B71D8; // 
                constexpr std::ptrdiff_t �p�f� = 0x0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ppz�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7A5DC0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B76B8; // 
                constexpr std::ptrdiff_t �p�f� = 0x2B58C170; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t �ez�� = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0xFF7AC4F0; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t ��z�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E20; // 
                constexpr std::ptrdiff_t  = 0x6F627466; // 
                constexpr std::ptrdiff_t  = 0x3E; // 
                constexpr std::ptrdiff_t  = 0x6F435873; // 
                constexpr std::ptrdiff_t  = 0x65747562; // 
                constexpr std::ptrdiff_t  = 0x72755373; // 
                constexpr std::ptrdiff_t  = 0x72746E6F; // 
                constexpr std::ptrdiff_t  = 0x65646F4D; // 
                constexpr std::ptrdiff_t  = 0x3E2074; // 
                constexpr std::ptrdiff_t  = 0x6E497265; // 
                constexpr std::ptrdiff_t  = 0x3E2074; // 
                constexpr std::ptrdiff_t  = 0x6F436C65; // 
                constexpr std::ptrdiff_t  = 0x3E20; // 
                constexpr std::ptrdiff_t  = 0x74614D43; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E20726F; // 
                constexpr std::ptrdiff_t  = 0x61487265; // 
                constexpr std::ptrdiff_t  = 0x3E20; // 
                constexpr std::ptrdiff_t  = 0x6E6F4343; // 
                constexpr std::ptrdiff_t  = 0x75202C67; // 
                constexpr std::ptrdiff_t  = 0x74636556; // 
                constexpr std::ptrdiff_t  = 0x423A3A74; // 
                constexpr std::ptrdiff_t  = 0x6E6F7465; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E202A74; // 
                constexpr std::ptrdiff_t  = 0x6E6F7465; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x5F746E65; // 
                constexpr std::ptrdiff_t `֖f� = 0x669D20D0; // 
                constexpr std::ptrdiff_t @{�� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E20; // 
                constexpr std::ptrdiff_t  = 0x6F627466; // 
                constexpr std::ptrdiff_t  = 0x3E; // 
                constexpr std::ptrdiff_t  = 0x6F435873; // 
                constexpr std::ptrdiff_t  = 0x65747562; // 
                constexpr std::ptrdiff_t  = 0x72755373; // 
                constexpr std::ptrdiff_t  = 0x72746E6F; // 
                constexpr std::ptrdiff_t  = 0x65646F4D; // 
                constexpr std::ptrdiff_t  = 0x3E2074; // 
                constexpr std::ptrdiff_t  = 0x6E497265; // 
                constexpr std::ptrdiff_t  = 0x3E2074; // 
                constexpr std::ptrdiff_t  = 0x6F436C65; // 
                constexpr std::ptrdiff_t  = 0x3E20; // 
                constexpr std::ptrdiff_t  = 0x74614D43; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E20726F; // 
                constexpr std::ptrdiff_t  = 0x61487265; // 
                constexpr std::ptrdiff_t  = 0x3E20; // 
                constexpr std::ptrdiff_t  = 0x6E6F4343; // 
                constexpr std::ptrdiff_t  = 0x75202C67; // 
                constexpr std::ptrdiff_t  = 0x74636556; // 
                constexpr std::ptrdiff_t  = 0x423A3A74; // 
                constexpr std::ptrdiff_t  = 0x6E6F7465; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E202A74; // 
                constexpr std::ptrdiff_t  = 0x6E6F7465; // 
                constexpr std::ptrdiff_t  = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x5F746E65; // 
                constexpr std::ptrdiff_t  = 0x73636968; // 
                constexpr std::ptrdiff_t  = 0x6E776F; // 
                constexpr std::ptrdiff_t  = 0x73636968; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x73636968; // 
                constexpr std::ptrdiff_t  = 0x53737365; // 
                constexpr std::ptrdiff_t  = 0x7243656C; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x756C6156; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x61567461; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x56676E69; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x57676E69; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x6C6F436D; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x6168536D; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x49796172; // 
                constexpr std::ptrdiff_t  = 0x7262694C; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x6F4E7365; // 
                constexpr std::ptrdiff_t  = 0x545F776F; // 
                constexpr std::ptrdiff_t  = 0x6C61; // 
                constexpr std::ptrdiff_t  = 0x746C754D; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x6C756166; // 
                constexpr std::ptrdiff_t  = 0x435F6465; // 
                constexpr std::ptrdiff_t  = 0x73655443; // 
                constexpr std::ptrdiff_t  = 0x726F7372; // 
                constexpr std::ptrdiff_t  = 0x435F6465; // 
                constexpr std::ptrdiff_t  = 0x73655443; // 
                constexpr std::ptrdiff_t  = 0x726F7372; // 
                constexpr std::ptrdiff_t  = 0x57746961; // 
                constexpr std::ptrdiff_t  = 0x42797469; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x523A3A65; // 
                constexpr std::ptrdiff_t  = 0x74736554; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x746E696F; // 
                constexpr std::ptrdiff_t  = 0x745F4264; // 
                constexpr std::ptrdiff_t  = 0x636E7546; // 
                constexpr std::ptrdiff_t  = 0x6C754D3A; // 
                constexpr std::ptrdiff_t  = 0x6575; // 
                constexpr std::ptrdiff_t  = 0x7543726F; // 
                constexpr std::ptrdiff_t  = 0x61487372; // 
                constexpr std::ptrdiff_t  = 0x4B3A3A73; // 
                constexpr std::ptrdiff_t  = 0x6F737275; // 
                constexpr std::ptrdiff_t  = 0x523A3A73; // 
                constexpr std::ptrdiff_t  = 0x646E4172; // 
                constexpr std::ptrdiff_t  = 0x4B3A3A73; // 
                constexpr std::ptrdiff_t  = 0x76697463; // 
                constexpr std::ptrdiff_t  = 0x624F726F; // 
                constexpr std::ptrdiff_t  = 0x6C65636E; // 
                constexpr std::ptrdiff_t  = 0x546C6176; // 
                constexpr std::ptrdiff_t  = 0x65684374; // 
                constexpr std::ptrdiff_t  = 0x3A62694C; // 
                constexpr std::ptrdiff_t  = 0x65; // 
                constexpr std::ptrdiff_t  = 0x3A62694C; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6C615673; // 
                constexpr std::ptrdiff_t  = 0x72; // 
                constexpr std::ptrdiff_t  = 0x57656B61; // 
                constexpr std::ptrdiff_t  = 0x6D72; // 
                constexpr std::ptrdiff_t  = 0x6F746365; // 
                constexpr std::ptrdiff_t  = 0x726F; // 
                constexpr std::ptrdiff_t  = 0x41656B61; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x73746E; // 
                constexpr std::ptrdiff_t  = 0x61727241; // 
                constexpr std::ptrdiff_t  = 0x614D746E; // 
                constexpr std::ptrdiff_t  = 0x61727241; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x65726975; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x6D657269; // 
                constexpr std::ptrdiff_t  = 0x6E756F43; // 
                constexpr std::ptrdiff_t  = 0x3A3A646F; // 
                constexpr std::ptrdiff_t  = 0x6C6C6143; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t  = 0x6C61; // 
                constexpr std::ptrdiff_t  = 0x6E61525F; // 
                constexpr std::ptrdiff_t  = 0x75523A3A; // 
                constexpr std::ptrdiff_t  = 0x435F776F; // 
                constexpr std::ptrdiff_t  = 0x6E75523A; // 
                constexpr std::ptrdiff_t  = 0x61575F77; // 
                constexpr std::ptrdiff_t  = 0x6E; // 
                constexpr std::ptrdiff_t @זf� = 0x2B089000; // 
                constexpr std::ptrdiff_t  = 0xA3003E20; // 
                constexpr std::ptrdiff_t @זf� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487B3FF0; // 
                constexpr std::ptrdiff_t @זf� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487B7A00; // 
                constexpr std::ptrdiff_t `֖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t  = 0x206F666E; // 
                constexpr std::ptrdiff_t `֖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487C6E10; // 
                constexpr std::ptrdiff_t `֖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487C9F90; // 
                constexpr std::ptrdiff_t  = 0x7243656C; // 
                constexpr std::ptrdiff_t �p�f� = 0x487C86B0; // 
                constexpr std::ptrdiff_t `֖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487B7700; // 
                constexpr std::ptrdiff_t  = 0x49444750; // 
                constexpr std::ptrdiff_t �p�f� = 0x487B88B0; // 
                constexpr std::ptrdiff_t  = 0x6C755043; // 
                constexpr std::ptrdiff_t �p�f� = 0x487B8C50; // 
                constexpr std::ptrdiff_t `֖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487B53E0; // 
                constexpr std::ptrdiff_t �͖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t �p�f� = 0x487C2BF0; // 
                constexpr std::ptrdiff_t `֖f� = 0x2B089000; // 
                constexpr std::ptrdiff_t �,|H� = 0x6C745543; // 
                constexpr std::ptrdiff_t  = 0x3E; // 
                constexpr std::ptrdiff_t �͖f� = 0x2B089000; // 
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 0
            namespace _v_f__ {
            }
            // Parent: None
            // Field count: 173
            namespace _v_f__ {
                constexpr std::ptrdiff_t �Ζf� = 0x669D20D0; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // Vector
                constexpr std::ptrdiff_t �p�f� = 0x5F37A5F0; // 
                constexpr std::ptrdiff_t  = 0x74656E67; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F37A8B0; // 
                constexpr std::ptrdiff_t  = 0x436C6163; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F37A580; // 
                constexpr std::ptrdiff_t  = 0x61635367; // 
                constexpr std::ptrdiff_t  = 0x669B74F8; // 
                constexpr std::ptrdiff_t �p�f� = 0x5F37A4A0; // 
                constexpr std::ptrdiff_t  = 0x72656461; // 
                constexpr std::ptrdiff_t  = 0x6E697250; // 
                constexpr std::ptrdiff_t  = 0x6E656562; // 
                constexpr std::ptrdiff_t  = 0x74726F73; // 
                constexpr std::ptrdiff_t  = 0x6E697250; // 
                constexpr std::ptrdiff_t  = 0x6C616972; // 
                constexpr std::ptrdiff_t  = 0x646E6572; // 
                constexpr std::ptrdiff_t  = 0x77657053; // 
                constexpr std::ptrdiff_t  = 0x20726567; // 
                constexpr std::ptrdiff_t  = 0x61657473; // 
                constexpr std::ptrdiff_t  = 0x3; // H�\$H�t$WH���|$P
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xCD; // 
                constexpr std::ptrdiff_t  = 0x6E694274; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x100; // 
                constexpr std::ptrdiff_t  = 0x536D6F43; // 
                constexpr std::ptrdiff_t  = 0x657865; // 
                constexpr std::ptrdiff_t  = 0x100; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x184; // mat_shader_cache
                constexpr std::ptrdiff_t P�5_� = 0x81701251; // 
                constexpr std::ptrdiff_t  = 0x6E656353; // 
                constexpr std::ptrdiff_t  = 0x64656B61; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t nVertexID = 0x676F7250; // 
                constexpr std::ptrdiff_t  = 0x28207365; // 
                constexpr std::ptrdiff_t  = 0x6573555C; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x2D2D2D2D; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x5D0DD2E0; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x63616C70; // 
                constexpr std::ptrdiff_t  = 0x696E6E69; // 
                constexpr std::ptrdiff_t  = 0x75DE364E; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x29000002; // 
                constexpr std::ptrdiff_t DefaultFontAliasGroup = 0x4; // 
                constexpr std::ptrdiff_t  = 0x2A3356C0; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x6563616C; // 
                constexpr std::ptrdiff_t  = 0x52455355; // 
                constexpr std::ptrdiff_t  = 0x4B432D50; // 
                constexpr std::ptrdiff_t  = 0x706D655C; // 
                constexpr std::ptrdiff_t  = 0x41455242; // 
                constexpr std::ptrdiff_t  = 0x706D7564; // 
                constexpr std::ptrdiff_t  = 0x61747320; // 
                constexpr std::ptrdiff_t  = 0x72747441; // 
                constexpr std::ptrdiff_t  = 0x6665645F; // 
                constexpr std::ptrdiff_t  = 0x643D7865; // 
                constexpr std::ptrdiff_t  = 0x6E656353; // 
                constexpr std::ptrdiff_t  = 0x64657869; // 
                constexpr std::ptrdiff_t  = 0x616D6D6F; // 
                constexpr std::ptrdiff_t  = 0x32283631; // 
                constexpr std::ptrdiff_t  = 0x20202020; // 
                constexpr std::ptrdiff_t  = 0x564C4156; // 
                constexpr std::ptrdiff_t  = 0x5F4C4453; // 
                constexpr std::ptrdiff_t  = 0x534C4542; // 
                constexpr std::ptrdiff_t  = 0x4341435F; // 
                constexpr std::ptrdiff_t  = 0x42414E45; // 
                constexpr std::ptrdiff_t  = 0x7A696C69; // 
                constexpr std::ptrdiff_t  = 0x706D655C; // 
                constexpr std::ptrdiff_t  = 0x41455242; // 
                constexpr std::ptrdiff_t  = 0x706D7564; // 
                constexpr std::ptrdiff_t  = 0x6573555C; // 
                constexpr std::ptrdiff_t  = 0x536D6F43; // 
                constexpr std::ptrdiff_t  = 0x657865; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x41434F4C; // 
                constexpr std::ptrdiff_t  = 0x61447070; // 
                constexpr std::ptrdiff_t  = 0x3A433D29; // 
                constexpr std::ptrdiff_t  = 0x504D4554; // 
                constexpr std::ptrdiff_t  = 0x5C6C6163; // 
                constexpr std::ptrdiff_t  = 0x6563616C; // 
                constexpr std::ptrdiff_t  = 0x52455355; // 
                constexpr std::ptrdiff_t  = 0x4B432D50; // 
                constexpr std::ptrdiff_t  = 0x73726573; // 
                constexpr std::ptrdiff_t  = 0x766C6156; // 
                constexpr std::ptrdiff_t  = 0x78652E6D; // 
                constexpr std::ptrdiff_t  = 0x564C4156; // 
                constexpr std::ptrdiff_t  = 0x5F4C4453; // 
                constexpr std::ptrdiff_t  = 0x534C4542; // 
                constexpr std::ptrdiff_t  = 0x4341435F; // 
                constexpr std::ptrdiff_t  = 0x42414E45; // 
                constexpr std::ptrdiff_t  = 0x7A696C69; // 
                constexpr std::ptrdiff_t  = 0x706D655C; // 
                constexpr std::ptrdiff_t  = 0x41455242; // 
                constexpr std::ptrdiff_t  = 0x706D7564; // 
                constexpr std::ptrdiff_t  = 0x6573555C; // 
                constexpr std::ptrdiff_t  = 0x536D6F43; // 
                constexpr std::ptrdiff_t  = 0x657865; // 
                constexpr std::ptrdiff_t  = 0x72657355; // 
                constexpr std::ptrdiff_t  = 0x41434F4C; // 
                constexpr std::ptrdiff_t  = 0x61447070; // 
                constexpr std::ptrdiff_t  = 0x3A433D29; // 
                constexpr std::ptrdiff_t  = 0x504D4554; // 
                constexpr std::ptrdiff_t  = 0x5C6C6163; // 
                constexpr std::ptrdiff_t  = 0x6563616C; // 
                constexpr std::ptrdiff_t  = 0x52455355; // 
                constexpr std::ptrdiff_t  = 0x4B432D50; // 
                constexpr std::ptrdiff_t  = 0x73726573; // 
                constexpr std::ptrdiff_t  = 0x766C6156; // 
                constexpr std::ptrdiff_t  = 0x78652E6D; // 
                constexpr std::ptrdiff_t  = 0x564C4156; // 
                constexpr std::ptrdiff_t  = 0x5F4C4453; // 
                constexpr std::ptrdiff_t  = 0x534C4542; // 
                constexpr std::ptrdiff_t  = 0x4341435F; // 
                constexpr std::ptrdiff_t  = 0x42414E45; // 
                constexpr std::ptrdiff_t  = 0x7A696C69; // 
                constexpr std::ptrdiff_t P�sH� = 0xF27F3900; // 
                constexpr std::ptrdiff_t  = 0x44505041; // 
                constexpr std::ptrdiff_t  = 0x616F525C; // 
                constexpr std::ptrdiff_t  = 0x49544143; // 
                constexpr std::ptrdiff_t  = 0x4D4D4F43; // 
                constexpr std::ptrdiff_t  = 0x656D7563; // 
                constexpr std::ptrdiff_t  = 0x735C5357; // 
                constexpr std::ptrdiff_t  = 0x41434F4C; // 
                constexpr std::ptrdiff_t  = 0x74614470; // 
                constexpr std::ptrdiff_t  = 0x6573555C; // 
                constexpr std::ptrdiff_t  = 0x676F7250; // 
                constexpr std::ptrdiff_t  = 0x28207365; // 
                constexpr std::ptrdiff_t  = 0x63616C70; // 
                constexpr std::ptrdiff_t  = 0x3D504D54; // 
                constexpr std::ptrdiff_t  = 0x545C6C61; // 
                constexpr std::ptrdiff_t  = 0x5250474E; // 
                constexpr std::ptrdiff_t  = 0x52455355; // 
                constexpr std::ptrdiff_t  = 0x6E656D75; // 
                constexpr std::ptrdiff_t  = 0x643D7865; // 
                constexpr std::ptrdiff_t  = 0x42414E45; // 
                constexpr std::ptrdiff_t  = 0x5F79616C; // 
                constexpr std::ptrdiff_t  = 0x555F5245; // 
                constexpr std::ptrdiff_t  = 0x4C475F5F; // 
                constexpr std::ptrdiff_t  = 0x3D50554E; // 
                constexpr std::ptrdiff_t  = 0x564C4156; // 
                constexpr std::ptrdiff_t  = 0x44505041; // 
                constexpr std::ptrdiff_t  = 0x616F525C; // 
                constexpr std::ptrdiff_t  = 0x49544143; // 
                constexpr std::ptrdiff_t  = 0x4D4D4F43; // 
                constexpr std::ptrdiff_t  = 0x656D7563; // 
                constexpr std::ptrdiff_t  = 0x735C5357; // 
                constexpr std::ptrdiff_t  = 0x41434F4C; // 
                constexpr std::ptrdiff_t  = 0x74614470; // 
                constexpr std::ptrdiff_t  = 0x6573555C; // 
                constexpr std::ptrdiff_t  = 0x676F7250; // 
                constexpr std::ptrdiff_t  = 0x28207365; // 
                constexpr std::ptrdiff_t  = 0x63616C70; // 
                constexpr std::ptrdiff_t  = 0x3D504D54; // 
                constexpr std::ptrdiff_t  = 0x545C6C61; // 
                constexpr std::ptrdiff_t  = 0x5250474E; // 
                constexpr std::ptrdiff_t  = 0x52455355; // 
                constexpr std::ptrdiff_t  = 0x6E656D75; // 
                constexpr std::ptrdiff_t  = 0x643D7865; // 
                constexpr std::ptrdiff_t  = 0x42414E45; // 
                constexpr std::ptrdiff_t  = 0x5F79616C; // 
                constexpr std::ptrdiff_t  = 0x555F5245; // 
                constexpr std::ptrdiff_t  = 0x4C475F5F; // 
                constexpr std::ptrdiff_t  = 0x3D50554E; // 
                constexpr std::ptrdiff_t  = 0x564C4156; // 
            }
            // Parent: None
            // Field count: 0
            namespace tR {
            }
            // Parent: None
            // Field count: 0
            namespace tR {
            }
            // Parent: None
            // Field count: 0
            namespace tR {
            }
            // Parent: None
            // Field count: 58
            namespace tR {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
            }
            // Parent: None
            // Field count: 0
            namespace tR {
            }
            // Parent: None
            // Field count: 0
            namespace tR {
            }
            // Parent: None
            // Field count: 301
            namespace tR {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800F9E90; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x800FA0F0; // 
                constexpr std::ptrdiff_t  = 0x44206D61; // 
                constexpr std::ptrdiff_t  = 0xA; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t @UH��H�� I���QL�V���H��� = 0x801026D0; // 
                constexpr std::ptrdiff_t @UH��H�� H�AH��H�� ]H�`������H�|$UH��H�� LcQA����Lc�M+�H��M;�s3�H�|$@H�� ]Ày( = 0x8011BBD0; // 
                constexpr std::ptrdiff_t @UH��H�� H�� ]�M����������������H��H�XH�pH�xUH��ATAUH��PE3�L��f�@�I��$0 = 0x800FD6D0; // 
                constexpr std::ptrdiff_t @UH�싁$ = 0x80111B30; // 
                constexpr std::ptrdiff_t @UH��H�� H�� ]�M����������������H��H�XH�pH�xUH��ATAUH��PE3�L��f�@�I��$0 = 0x800FBE80; // 
                constexpr std::ptrdiff_t L�D$UH��SVAWH��h�� = 0x801128E0; // 
                constexpr std::ptrdiff_t @UH�싁$ = 0x80110060; // 
                constexpr std::ptrdiff_t  = 0x7469622D; // 
                constexpr std::ptrdiff_t  = 0x66; // 
                constexpr std::ptrdiff_t @UH�층�1]���������������������@UH���3 = 0x801052B0; // 
                constexpr std::ptrdiff_t @UH�싁4 = 0x800FB7A0; // 
                constexpr std::ptrdiff_t H�\$H�t$H�|$UH��H�� H��P = 0x800FE990; // 
                constexpr std::ptrdiff_t H�\$H�|$UH��H�� H���( = 0x800FAB60; // 
                constexpr std::ptrdiff_t @UH��SWH��P = 0x800FAD80; // 
                constexpr std::ptrdiff_t @UH��H����0 = 0x800FDEA0; // 
                constexpr std::ptrdiff_t @UH��WATAUAVAW�� = 0x800FDA60; // 
                constexpr std::ptrdiff_t @UH��SATH��0L���JH�ځ� = 0x80135030; // 
                constexpr std::ptrdiff_t @UH��H�� �J�� = 0x80135140; // 
                constexpr std::ptrdiff_t  = 0x75667608; // 
                constexpr std::ptrdiff_t H�\$UH��H�� H��H���sqL�AH��� = 0x75667608; // 
                constexpr std::ptrdiff_t @UH��H�� H�� ]������������������@UH��QH�AL���Q;�� = 0x800FD3E0; // 
                constexpr std::ptrdiff_t H�\$H�|$UH��H�� H�H���P0H��( = 0x80102750; // 
                constexpr std::ptrdiff_t H�\$H�|$UH��H�� H��� = 0x80101CD0; // 
                constexpr std::ptrdiff_t H�\$ UH��VWATAUAVAWH��P = 0x80105440; // 
                constexpr std::ptrdiff_t H�\$UH��H�� ��0 = 0x80104050; // 
                constexpr std::ptrdiff_t @UH���A����]�������������������@UH���AL�AD�QA�@I���������A+@Hc�I��H��A�HPI��A+HHL��I��Lc�I��H��D�E;���]���������������H�\$H�|$UH��H�� H��� = 0x80103FC0; // 
                constexpr std::ptrdiff_t  = 0x3345; // 
                constexpr std::ptrdiff_t  = 0x494B4F4F; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4E; // 
                constexpr std::ptrdiff_t  = 0x45445F53; // 
                constexpr std::ptrdiff_t  = 0x4F43535F; // 
                constexpr std::ptrdiff_t  = 0x4C4552; // 
                constexpr std::ptrdiff_t  = 0x45445F53; // 
                constexpr std::ptrdiff_t  = 0x45445F53; // 
                constexpr std::ptrdiff_t  = 0x4547; // 
                constexpr std::ptrdiff_t  = 0x54415F53; // 
                constexpr std::ptrdiff_t  = 0x54415F53; // 
                constexpr std::ptrdiff_t  = 0x414D5F53; // 
                constexpr std::ptrdiff_t  = 0x4D4C5F53; // 
                constexpr std::ptrdiff_t  = 0x4F545F53; // 
                constexpr std::ptrdiff_t  = 0x504C5F53; // 
                constexpr std::ptrdiff_t  = 0x52505F53; // 
                constexpr std::ptrdiff_t  = 0x414D5F53; // 
                constexpr std::ptrdiff_t  = 0x414D5F53; // 
                constexpr std::ptrdiff_t  = 0x414D5F53; // 
                constexpr std::ptrdiff_t  = 0x4D475F53; // 
                constexpr std::ptrdiff_t  = 0x41505F53; // 
                constexpr std::ptrdiff_t  = 0x50475F53; // 
                constexpr std::ptrdiff_t  = 0x414D5F53; // 
                constexpr std::ptrdiff_t  = 0x50475F53; // 
                constexpr std::ptrdiff_t  = 0x54475F53; // 
                constexpr std::ptrdiff_t  = 0x45525F53; // 
                constexpr std::ptrdiff_t  = 0x504C5F53; // 
                constexpr std::ptrdiff_t  = 0x32; // 
                constexpr std::ptrdiff_t  = 0x32; // 
                constexpr std::ptrdiff_t  = 0x5444; // 
                constexpr std::ptrdiff_t  = 0x45525F53; // 
                constexpr std::ptrdiff_t  = 0x49575F53; // 
                constexpr std::ptrdiff_t  = 0x48545F53; // 
                constexpr std::ptrdiff_t  = 0x4E555F53; // 
                constexpr std::ptrdiff_t  = 0x414D5F53; // 
                constexpr std::ptrdiff_t  = 0x5F4C4552; // 
                constexpr std::ptrdiff_t  = 0x54535F54; // 
                constexpr std::ptrdiff_t  = 0x535F4154; // 
                constexpr std::ptrdiff_t  = 0x344445; // 
                constexpr std::ptrdiff_t  = 0x324445; // 
                constexpr std::ptrdiff_t  = 0x535F434F; // 
                constexpr std::ptrdiff_t  = 0x4E4F4954; // 
                constexpr std::ptrdiff_t  = 0x5F544F4C; // 
                constexpr std::ptrdiff_t  = 0x5F343641; // 
                constexpr std::ptrdiff_t  = 0x535F3245; // 
                constexpr std::ptrdiff_t  = 0x5F535049; // 
                constexpr std::ptrdiff_t  = 0x5F323344; // 
                constexpr std::ptrdiff_t  = 0x535F3233; // 
                constexpr std::ptrdiff_t  = 0x54535F32; // 
                constexpr std::ptrdiff_t  = 0x5453; // 
                constexpr std::ptrdiff_t  = 0x54535F32; // 
                constexpr std::ptrdiff_t  = 0x54535F47; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x535F5245; // 
                constexpr std::ptrdiff_t  = 0x4C415F53; // 
                constexpr std::ptrdiff_t  = 0x54535F46; // 
                constexpr std::ptrdiff_t  = 0x5F535049; // 
                constexpr std::ptrdiff_t  = 0x5F323344; // 
                constexpr std::ptrdiff_t  = 0x315F3233; // 
                constexpr std::ptrdiff_t  = 0x32334C45; // 
                constexpr std::ptrdiff_t  = 0x54535F; // 
                constexpr std::ptrdiff_t  = 0x54535F32; // 
                constexpr std::ptrdiff_t  = 0x36315F32; // 
                constexpr std::ptrdiff_t  = 0x36315F32; // 
                constexpr std::ptrdiff_t  = 0x36315F32; // 
                constexpr std::ptrdiff_t  = 0x363145; // 
                constexpr std::ptrdiff_t  = 0x36; // 
                constexpr std::ptrdiff_t  = 0x36; // 
                constexpr std::ptrdiff_t  = 0x36; // 
                constexpr std::ptrdiff_t  = 0x44475F53; // 
                constexpr std::ptrdiff_t  = 0x50425F53; // 
                constexpr std::ptrdiff_t  = 0x45525F53; // 
                constexpr std::ptrdiff_t  = 0x4F435F53; // 
                constexpr std::ptrdiff_t  = 0x5049; // 
                constexpr std::ptrdiff_t  = 0x44555F53; // 
                constexpr std::ptrdiff_t  = 0x45525F53; // 
                constexpr std::ptrdiff_t  = 0x4D5F464C; // 
                constexpr std::ptrdiff_t  = 0x4E5F464C; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5F46464F; // 
                constexpr std::ptrdiff_t  = 0x5F524542; // 
                constexpr std::ptrdiff_t  = 0x4E434644; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x315F5353; // 
                constexpr std::ptrdiff_t  = 0x7436315F; // 
                constexpr std::ptrdiff_t  = 0x315F5552; // 
                constexpr std::ptrdiff_t  = 0x315F554E; // 
                constexpr std::ptrdiff_t  = 0x53494C44; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x315F4445; // 
                constexpr std::ptrdiff_t  = 0x743631; // 
                constexpr std::ptrdiff_t  = 0x315F504D; // 
                constexpr std::ptrdiff_t  = 0x5F594152; // 
                constexpr std::ptrdiff_t  = 0x36315F30; // 
                constexpr std::ptrdiff_t  = 0x743631; // 
                constexpr std::ptrdiff_t  = 0x45525554; // 
                constexpr std::ptrdiff_t  = 0x415F464C; // 
                constexpr std::ptrdiff_t  = 0x4D5F464C; // 
                constexpr std::ptrdiff_t  = 0x5453; // 
                constexpr std::ptrdiff_t  = 0x4D5F464C; // 
                constexpr std::ptrdiff_t  = 0x4D5F464C; // 
                constexpr std::ptrdiff_t  = 0x445F464C; // 
                constexpr std::ptrdiff_t  = 0x445F464C; // 
                constexpr std::ptrdiff_t  = 0x415F464C; // 
                constexpr std::ptrdiff_t  = 0x555F464C; // 
                constexpr std::ptrdiff_t  = 0x435F464C; // 
                constexpr std::ptrdiff_t  = 0x455F464C; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x45544152; // 
                constexpr std::ptrdiff_t  = 0x44; // 
                constexpr std::ptrdiff_t  = 0x424154; // 
                constexpr std::ptrdiff_t  = 0x52; // 
                constexpr std::ptrdiff_t  = 0x534C4344; // 
                constexpr std::ptrdiff_t  = 0x5353; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x554C52; // 
                constexpr std::ptrdiff_t  = 0x554C4E; // 
                constexpr std::ptrdiff_t  = 0x444C45; // 
                constexpr std::ptrdiff_t  = 0x5453494C; // 
                constexpr std::ptrdiff_t  = 0x445F464C; // 
                constexpr std::ptrdiff_t  = 0x535F464C; // 
                constexpr std::ptrdiff_t  = 0x45565245; // 
                constexpr std::ptrdiff_t  = 0x4D4F4345; // 
                constexpr std::ptrdiff_t  = 0x4854; // 
                constexpr std::ptrdiff_t  = 0x4C5F464C; // 
                constexpr std::ptrdiff_t  = 0x435F464C; // 
                constexpr std::ptrdiff_t  = 0x565F464C; // 
                constexpr std::ptrdiff_t  = 0x505F464C; // 
                constexpr std::ptrdiff_t  = 0x415F464C; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5245; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x8; // 
                constexpr std::ptrdiff_t  = 0x1A; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xA; // 
                constexpr std::ptrdiff_t  = 0x32; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0xE; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0xA; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x12; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x8; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x1001; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5; // 
                constexpr std::ptrdiff_t @UH��L����tB��t��u	�A����3�]ËI��������v
                ��v��u����tڃ�u�I�@]�H�A]�������������@UH��3�]��������@UH��L����tB��t��u
                �A����3�]��I������<v<v<u����tۀ�u�I�@]�H�A]�������������@UH��H�� H�* = 0x1503; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x1505; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x1507; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x1514; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x1009; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x100A; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            namespace tR {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            namespace ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 660
            namespace _ {
                constexpr std::ptrdiff_t D = 0x17BD907; // 
                constexpr std::ptrdiff_t  = 0x17BD82E; // 
                constexpr std::ptrdiff_t ������������ = 0x17BD862; // ��$��
                constexpr std::ptrdiff_t ������������ = 0x17BD89B; // ��$��
                constexpr std::ptrdiff_t  = 0x17BD8D3; // 
                constexpr std::ptrdiff_t  = 0x4003409; // m_flZOffset
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x729D9A0; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ���_� = 0x63DA260; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4002C23; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656B6162; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6174654D; // 
                constexpr std::ptrdiff_t  = 0x65736162; // 
                constexpr std::ptrdiff_t  = 0x706F7270; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6E6970; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat = 0x79646F62; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x69736F50; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E6970; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t ���_� = 0x70616577; // 
                constexpr std::ptrdiff_t ���_� = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x646E6168; // 
                constexpr std::ptrdiff_t  = 0x72EC640; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x79706F43; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0xA779851D; // 
                constexpr std::ptrdiff_t  = 0x97E8F1D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x706F7270; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F62; // 
                constexpr std::ptrdiff_t  = 0x2C20; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6C6C6162; // 
                constexpr std::ptrdiff_t  = 0x646E6168; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x656B6162; // 
                constexpr std::ptrdiff_t  = 0x6174654D; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x79706F63; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x72EC4C0; // 
                constexpr std::ptrdiff_t  = 0x6B63656E; // 
                constexpr std::ptrdiff_t  = 0x6C6C6162; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x62657965; // 
                constexpr std::ptrdiff_t  = 0x6C6B6E61; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6F6C6C61; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x7571696C; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x69736F50; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x766C6570; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x656E6F62; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6F6C6C61; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x17BDE9D; // 
                constexpr std::ptrdiff_t  = 0x17BDEEC; // 
                constexpr std::ptrdiff_t  = 0x17BDF3E; // 
                constexpr std::ptrdiff_t  = 0x17BDF90; // 
                constexpr std::ptrdiff_t  = 0x6F677363; // 
                constexpr std::ptrdiff_t  = 0x6C6C6163; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x726F6353; // 
                constexpr std::ptrdiff_t  = 0x7270732B; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x635F6C63; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6574756D; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x65646968; // 
                constexpr std::ptrdiff_t  = 0x65646968; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x696E6173; // 
                constexpr std::ptrdiff_t  = 0x696E6173; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x61736964; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6E6F6349; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x72747865; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x77647568; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6461722B; // 
                constexpr std::ptrdiff_t  = 0x6461722B; // 
                constexpr std::ptrdiff_t  = 0x74756C43; // 
                constexpr std::ptrdiff_t  = 0x67676F54; // 
                constexpr std::ptrdiff_t  = 0x63696F56; // 
                constexpr std::ptrdiff_t  = 0x7373656D; // 
                constexpr std::ptrdiff_t  = 0x52647453; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x736E6F43; // 
                constexpr std::ptrdiff_t  = 0x6D616554; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x5F647568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x746C754D; // 
                constexpr std::ptrdiff_t  = 0xC3236A1D; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x736F6F42; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6E2D6469; // 
                constexpr std::ptrdiff_t  = 0x6E3A737B; // 
                constexpr std::ptrdiff_t  = 0x74657323; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x53766E49; // 
                constexpr std::ptrdiff_t  = 0x63616C70; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x72474548; // 
                constexpr std::ptrdiff_t  = 0x66696E4B; // 
                constexpr std::ptrdiff_t  = 0x6D697250; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x7375655A; // 
                constexpr std::ptrdiff_t  = 0xD20; // 
                constexpr std::ptrdiff_t  = 0x7E163F1D; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x61646152; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x725F6C63; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6E65706F; // 
                constexpr std::ptrdiff_t  = 0x6E65706F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x74646977; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0xE36D22CA; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x67676F74; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x67676F74; // 
                constexpr std::ptrdiff_t  = 0x635F6C63; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x2D70616D; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x63696F56; // 
                constexpr std::ptrdiff_t  = 0x5F646E73; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616548; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x7466656C; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x723A737B; // 
                constexpr std::ptrdiff_t  = 0x673A737B; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x63736564; // 
                constexpr std::ptrdiff_t  = 0x6F677363; // 
                constexpr std::ptrdiff_t  = 0xA779851D; // 
                constexpr std::ptrdiff_t  = 0x97E8F1D; // 
                constexpr std::ptrdiff_t  = 0x600161A; // 
                constexpr std::ptrdiff_t  = 0x626D6F42; // 
                constexpr std::ptrdiff_t  = 0x5F646E73; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x63726570; // 
                constexpr std::ptrdiff_t  = 0x74616544; // 
                constexpr std::ptrdiff_t  = 0x736E6F63; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x63726570; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0xA5D9646E; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0xF5AD4CF4; // 
                constexpr std::ptrdiff_t  = 0x74746968; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x2678EB8; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x6D756E23; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x74617473; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6E3A737B; // 
                constexpr std::ptrdiff_t  = 0x63736564; // 
                constexpr std::ptrdiff_t  = 0x16ED8FBF; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6C6F43; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x656D616E; // 
                constexpr std::ptrdiff_t  = 0x7543736A; // 
                constexpr std::ptrdiff_t  = 0x633A737B; // 
                constexpr std::ptrdiff_t  = 0x6F666E49; // 
                constexpr std::ptrdiff_t  = 0x69726172; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x69726172; // 
                constexpr std::ptrdiff_t  = 0x74616863; // 
                constexpr std::ptrdiff_t  = 0x74617661; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74696177; // 
                constexpr std::ptrdiff_t  = 0x74617661; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6772616C; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x74736542; // 
                constexpr std::ptrdiff_t  = 0x70616557; // 
                constexpr std::ptrdiff_t  = 0x743A737B; // 
                constexpr std::ptrdiff_t  = 0x733A737B; // 
                constexpr std::ptrdiff_t  = 0x70616557; // 
                constexpr std::ptrdiff_t  = 0x743A737B; // 
                constexpr std::ptrdiff_t  = 0x733A737B; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x696D696C; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x763A737B; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x696D696C; // 
                constexpr std::ptrdiff_t  = 0x74736542; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6566666F; // 
                constexpr std::ptrdiff_t  = 0x6F2D6469; // 
                constexpr std::ptrdiff_t  = 0x6E69616D; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x2D726162; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x74786554; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x65737523; // 
                constexpr std::ptrdiff_t  = 0x65737523; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x72617473; // 
                constexpr std::ptrdiff_t  = 0x656D6163; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x772D6469; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x70617267; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x633A737B; // 
                constexpr std::ptrdiff_t  = 0x6B3A647B; // 
                constexpr std::ptrdiff_t  = 0x64697053; // 
                constexpr std::ptrdiff_t  = 0x95870F03; // 
                constexpr std::ptrdiff_t  = 0x6374616D; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
                constexpr std::ptrdiff_t  = 0x653A737B; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x352A344D; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x8E0E161B; // 
            }
            // Parent: None
            // Field count: 659
            namespace _ {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t D = 0x17BD907; // 
                constexpr std::ptrdiff_t  = 0x17BD82E; // 
                constexpr std::ptrdiff_t ������������ = 0x17BD862; // ��$��
                constexpr std::ptrdiff_t ������������ = 0x17BD89B; // ��$��
                constexpr std::ptrdiff_t  = 0x17BD8D3; // 
                constexpr std::ptrdiff_t  = 0x4003409; // m_flZOffset
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x729D9A0; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ���_� = 0x63DA260; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4002C23; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656B6162; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6174654D; // 
                constexpr std::ptrdiff_t  = 0x65736162; // 
                constexpr std::ptrdiff_t  = 0x706F7270; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6E6970; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat = 0x79646F62; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x69736F50; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E6970; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t ���_� = 0x70616577; // 
                constexpr std::ptrdiff_t ���_� = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x646E6168; // 
                constexpr std::ptrdiff_t  = 0x72EC640; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x79706F43; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0xA779851D; // 
                constexpr std::ptrdiff_t  = 0x97E8F1D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x706F7270; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F62; // 
                constexpr std::ptrdiff_t  = 0x2C20; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6C6C6162; // 
                constexpr std::ptrdiff_t  = 0x646E6168; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x656B6162; // 
                constexpr std::ptrdiff_t  = 0x6174654D; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x79706F63; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x72EC4C0; // 
                constexpr std::ptrdiff_t  = 0x6B63656E; // 
                constexpr std::ptrdiff_t  = 0x6C6C6162; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x62657965; // 
                constexpr std::ptrdiff_t  = 0x6C6B6E61; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6F6C6C61; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x7571696C; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x69736F50; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x766C6570; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x656E6F62; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6F6C6C61; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x17BDE9D; // 
                constexpr std::ptrdiff_t  = 0x17BDEEC; // 
                constexpr std::ptrdiff_t  = 0x17BDF3E; // 
                constexpr std::ptrdiff_t  = 0x17BDF90; // 
                constexpr std::ptrdiff_t  = 0x6F677363; // 
                constexpr std::ptrdiff_t  = 0x6C6C6163; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x726F6353; // 
                constexpr std::ptrdiff_t  = 0x7270732B; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x635F6C63; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6574756D; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x65646968; // 
                constexpr std::ptrdiff_t  = 0x65646968; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x696E6173; // 
                constexpr std::ptrdiff_t  = 0x696E6173; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x61736964; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6E6F6349; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x72747865; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x77647568; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6461722B; // 
                constexpr std::ptrdiff_t  = 0x6461722B; // 
                constexpr std::ptrdiff_t  = 0x74756C43; // 
                constexpr std::ptrdiff_t  = 0x67676F54; // 
                constexpr std::ptrdiff_t  = 0x63696F56; // 
                constexpr std::ptrdiff_t  = 0x7373656D; // 
                constexpr std::ptrdiff_t  = 0x52647453; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x736E6F43; // 
                constexpr std::ptrdiff_t  = 0x6D616554; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x5F647568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x746C754D; // 
                constexpr std::ptrdiff_t  = 0xC3236A1D; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x736F6F42; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6E2D6469; // 
                constexpr std::ptrdiff_t  = 0x6E3A737B; // 
                constexpr std::ptrdiff_t  = 0x74657323; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x53766E49; // 
                constexpr std::ptrdiff_t  = 0x63616C70; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x72474548; // 
                constexpr std::ptrdiff_t  = 0x66696E4B; // 
                constexpr std::ptrdiff_t  = 0x6D697250; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x7375655A; // 
                constexpr std::ptrdiff_t  = 0xD20; // 
                constexpr std::ptrdiff_t  = 0x7E163F1D; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x61646152; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x725F6C63; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6E65706F; // 
                constexpr std::ptrdiff_t  = 0x6E65706F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x74646977; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0xE36D22CA; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x67676F74; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x67676F74; // 
                constexpr std::ptrdiff_t  = 0x635F6C63; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x2D70616D; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x63696F56; // 
                constexpr std::ptrdiff_t  = 0x5F646E73; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616548; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x7466656C; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x723A737B; // 
                constexpr std::ptrdiff_t  = 0x673A737B; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x63736564; // 
                constexpr std::ptrdiff_t  = 0x6F677363; // 
                constexpr std::ptrdiff_t  = 0xA779851D; // 
                constexpr std::ptrdiff_t  = 0x97E8F1D; // 
                constexpr std::ptrdiff_t  = 0x600161A; // 
                constexpr std::ptrdiff_t  = 0x626D6F42; // 
                constexpr std::ptrdiff_t  = 0x5F646E73; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x63726570; // 
                constexpr std::ptrdiff_t  = 0x74616544; // 
                constexpr std::ptrdiff_t  = 0x736E6F63; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x63726570; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0xA5D9646E; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0xF5AD4CF4; // 
                constexpr std::ptrdiff_t  = 0x74746968; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x2678EB8; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x6D756E23; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x74617473; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6E3A737B; // 
                constexpr std::ptrdiff_t  = 0x63736564; // 
                constexpr std::ptrdiff_t  = 0x16ED8FBF; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6C6F43; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x656D616E; // 
                constexpr std::ptrdiff_t  = 0x7543736A; // 
                constexpr std::ptrdiff_t  = 0x633A737B; // 
                constexpr std::ptrdiff_t  = 0x6F666E49; // 
                constexpr std::ptrdiff_t  = 0x69726172; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x69726172; // 
                constexpr std::ptrdiff_t  = 0x74616863; // 
                constexpr std::ptrdiff_t  = 0x74617661; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74696177; // 
                constexpr std::ptrdiff_t  = 0x74617661; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6772616C; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x74736542; // 
                constexpr std::ptrdiff_t  = 0x70616557; // 
                constexpr std::ptrdiff_t  = 0x743A737B; // 
                constexpr std::ptrdiff_t  = 0x733A737B; // 
                constexpr std::ptrdiff_t  = 0x70616557; // 
                constexpr std::ptrdiff_t  = 0x743A737B; // 
                constexpr std::ptrdiff_t  = 0x733A737B; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x696D696C; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x763A737B; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x696D696C; // 
                constexpr std::ptrdiff_t  = 0x74736542; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6566666F; // 
                constexpr std::ptrdiff_t  = 0x6F2D6469; // 
                constexpr std::ptrdiff_t  = 0x6E69616D; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x2D726162; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x74786554; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x65737523; // 
                constexpr std::ptrdiff_t  = 0x65737523; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x72617473; // 
                constexpr std::ptrdiff_t  = 0x656D6163; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x772D6469; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x70617267; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x633A737B; // 
                constexpr std::ptrdiff_t  = 0x6B3A647B; // 
                constexpr std::ptrdiff_t  = 0x64697053; // 
                constexpr std::ptrdiff_t  = 0x95870F03; // 
                constexpr std::ptrdiff_t  = 0x6374616D; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
                constexpr std::ptrdiff_t  = 0x653A737B; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x352A344D; // 
            }
            // Parent: None
            // Field count: 0
            namespace PF_BIAS_TYPE_STANDARD {
            }
            // Parent: None
            // Field count: 807
            namespace PF_NOISE_TURB_NONE {
                constexpr std::ptrdiff_t  = 0x4F4E5F52; // 
                constexpr std::ptrdiff_t default = 0x45504D41; // 
                constexpr std::ptrdiff_t  = 0x45504D41; // 
                constexpr std::ptrdiff_t  = 0x7137750; // ��{*
                constexpr std::ptrdiff_t  = 0x53455241; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BA760; // 
                constexpr std::ptrdiff_t  = 0x5241444E; // 
                constexpr std::ptrdiff_t ���* = 0x7137660; // ��{*
                constexpr std::ptrdiff_t  = 0x444E454C; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x17060001; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7910001; // 
                constexpr std::ptrdiff_t  = 0x43; // 
                constexpr std::ptrdiff_t `��* = 0xFF00574F; // 
                constexpr std::ptrdiff_t  = 0xFF00574F; // 
                constexpr std::ptrdiff_t  = 0xFFFF004C; // 
                constexpr std::ptrdiff_t  = 0x74736566; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x4F; // 
                constexpr std::ptrdiff_t  = 0x4C5F6174; // 
                constexpr std::ptrdiff_t  = 0x4F465F4E; // 
                constexpr std::ptrdiff_t first_or_third_person_@0_#&thirdperson_default = 0x19769640; // 
                constexpr std::ptrdiff_t  = 0x52; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x7541348; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x63E7D50; // 
                constexpr std::ptrdiff_t �o��� = 0x63E8250; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x2B869890; // 
                constexpr std::ptrdiff_t  �*�� = 0x665BF50; // 
                constexpr std::ptrdiff_t �o��� = 0x63E8750; // 
                constexpr std::ptrdiff_t �o��� = 0x63E8C50; // 
                constexpr std::ptrdiff_t  �*�� = 0x7290C00; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x63E9148; // 
                constexpr std::ptrdiff_t �o��� = 0x63E9648; // 
                constexpr std::ptrdiff_t �o��� = 0x7541A48; // 
                constexpr std::ptrdiff_t �o��� = 0x7540C48; // F_RANDOM_MODE_CONSTANT
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x76A55F8; // 
                constexpr std::ptrdiff_t  �*�� = 0xF2F148; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x140; // 
                constexpr std::ptrdiff_t  = 0x100; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291D30; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0x6D6165; // 
                constexpr std::ptrdiff_t  �*�� = 0x7290E80; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x736E6F63; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7290E80; // 
                constexpr std::ptrdiff_t  = 0x746E69; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291470; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291470; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x6E6F6974; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291E70; // 
                constexpr std::ptrdiff_t  �*�� = 0x72912E0; // 
                constexpr std::ptrdiff_t  = 0xFF007475; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7BB0001; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x65687774; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291AB0; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0x5F32D401; // 
                constexpr std::ptrdiff_t  = 0x76A9810; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x76A9810; // 
                constexpr std::ptrdiff_t  = 0x5F6D6165; // 
                constexpr std::ptrdiff_t  = 0x76A9810; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  = 0x7592ACD; // 
                constexpr std::ptrdiff_t  = 0x5F32D401; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x558C; // 
                constexpr std::ptrdiff_t  = 0x482C; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x2A6C8A01; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0x97EFCF08; // 
                constexpr std::ptrdiff_t  = 0x75E4801; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x97EFCF58; // 
                constexpr std::ptrdiff_t  = 0x75E4801; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x6AF0; // 
                constexpr std::ptrdiff_t  = 0x685F6761; // 
                constexpr std::ptrdiff_t  = 0x2A6C8A01; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x97EFD518; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x5264726F; // 
                constexpr std::ptrdiff_t  = 0x7545610; // P�.��
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0x5F32D401; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x616D726F; // 
                constexpr std::ptrdiff_t  = 0x97EFD1C8; // �H-��
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x63E9D9E; // P�.��
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x63E9D9E; // �#-��
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x7592A01; // weapon_offset
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x1; // ����
                constexpr std::ptrdiff_t  = 0x7007376; // 
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x63E9D01; // 
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0x63E9D9E; // 
                constexpr std::ptrdiff_t  = 0x7592A01; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0x44207265; // 
                constexpr std::ptrdiff_t  = 0x616D726F; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0xFFFF004C; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x72D0074; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BADF0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BADF0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t `�* = 0x7543310; // �H-��
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7592ACD; // 
                constexpr std::ptrdiff_t  �*�� = 0x2B544001; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x616D726F; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BB020; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x6E69616D; // 
                constexpr std::ptrdiff_t  = 0x7592ACD; // {,��
                constexpr std::ptrdiff_t  = 0x664F6472; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0x74616566; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_handwrap_leathery_snakeskin_orange_tag = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_handwrap_leathery_caution = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_handwrap_leathery_caution_tag = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_operation10_metalic_green = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_operation10_metalic_green_tag = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E0000; // 
                constexpr std::ptrdiff_t  = 0x65706D6F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x7463615F; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65725F6C; // 
                constexpr std::ptrdiff_t  = 0x73556172; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �Ⱦ�u>�뚾b�>}E��-�>����.�> = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �{�����&��./�,�+�@�#��W%��9*>5L��>�>�G��6�>fƪ���	?��>���?8���@?�}�=�J?[�s>�?�>���>���>n��>�!�>�a>,�?���=�<?Rt�"��>J���>�C���~�>b��=u>��ƾP/>�Dؾ<�&=JW޾ҥp��ؾS6�dHƾ�qd��)�������������>�X��h��*��	s˾
                mC�6˾��O=����&)>/<��R�`>��x�n�>h)7�:M�>L��v$�>J�U���>�Z�<��>6�=���>�'>#O�>��f>�^�>uӎ>��]>^̥>�
                >Q�><�=�C�>E����>܉��d��>$+��ƍ>�=W�xt>&����>>ͷ���Y�=�����*�;�оيҽ�ʾ4�I�����k燾
                M��;T��ɚc��ֳ��?"���ž�﷽QվP��ȥܾD��=d�־�R>P��]��>�����v�>��n�?�׶���?ϥ>�?��>�[�>���>���>���>��>'?��Q>�T?Hk�=�!?6���a?�؝����>n = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t ����ᙾ�꨾e�J�֟����ɽ����HG��ݔ���:=�?�����=�Mq�V = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �X��.�>��2��>"�<���>>�=rW�>K,>���>���>��>$��>�P�>��?h� >��?��w�V�?�3�����>��о��S>J�F+�=Hv侠���Z�־VuͽjJ̾~`C�.a���Y���1��W��/�c��MҾν�;���<�U��CJ�=x���6�4>Ξ�� Rp>w]d��0�>T�SF�>�K?�P�>�%�=�J�>1?>���>T��>�ח>�Ѫ>j�Z>ݾ>\>���>�=Qu�>�d��ma�>T�9��ê>�ɗ���l>.�ƾF��= = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E0000; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �6?���>`�@?.Ҧ=�,:?������%?�H��A�?�⾰��>	�
                �/x>~��Y��=��!�6<����EZ���gt��|����#߾{tξ(��v�����x�0����B���+��G�=f��Qʇ>� = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0xFFFF0063; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x635F6D65; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0xFF003263; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x635F6D65; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x61705F63; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x61705F63; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x746E6569; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F667461; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65646D65; // 
                constexpr std::ptrdiff_t  = 0x73556172; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x72676D65; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x5F6C6174; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x5F6C6174; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x76736F2E; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x74616C70; // 
                constexpr std::ptrdiff_t  = 0x73556172; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x66726570; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t �=�K�>��I>&�>"��>綮>���>|�P>.H�>�4�=�ܸ>$�/���>O�
                >9�&���K>�|I���>�e����=4Fz��\=|i���yx��"���􇽄�v��*�1g��R3��L�0�l��������D?��ܭ���Iw; = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6576736F; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6174732E; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t cents. = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6D657469; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t le cry</i> = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6100316C; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x637263; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t a� = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x636974; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x2E636974; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x2E636974; // 
                constexpr std::ptrdiff_t  = 0x49747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x2E636974; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x746573; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6169642E; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t �����=�����ɽ�	�� = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t j1��a侂蜾ɥþ,0Ӿ�W��w���9������V���~�>��ھ\��>�����3�>�hw����>I你�?�e=��
                ?��B>��?�_�>5��>���>�y�>�.?q�Y>x�?��\=�?�R�_�
                ?x���\f�>�lؾ��>q�	���>gO�����%"��TT�;��򙾾{�����J˾E6��#q��%��[W�'l!�r$	>*��Ӝ>Y��H��>�=��5?p��F=?#�@=��?�_>}?���>bM�>���>푳>oU?��W>`?��=��
                ?�و�.�?z�K�:��>5���>�پ+[[>����t��=�V�Ƒ��)���I��9��%����۾�׾�奄@��W���	��,����	��&�=.��t#i>0LӾ�Զ>�������>z#��?Pߜ���?'>ۃ?G�>���>���>�P�>��>�lm>KP�>U	�=B��>,�Q�x��>.�8�3��> = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x756F7268; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6975622E; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x61746E65; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C61762E; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x762E6C61; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x6D787600; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6972432E; // 
                constexpr std::ptrdiff_t  = 0x746E6576; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6972432E; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6F006469; // 
                constexpr std::ptrdiff_t  = 0x73655279; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D72615F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D72615F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x706D6F43; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x646D762E; // 
                constexpr std::ptrdiff_t  = 0x746E6576; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x69745F72; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0xFF004554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0xFF004554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x4F5F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x455F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x4F5F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t ��vL���4��JG=�H����>Wm����T>ʒ>�ء�>||�E��>�L�~�>� _=��>��>(E�>�i>9
                y>w<�>I = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t ���>Y�>
                �Y��>xy۽`��>p%�<_�>�9,>h��>P�>d��>��>D�>ȇ
                ?�B>��?��d�?�vk���>dMо,�>LT
                ��E�=�*��<���U�ں��=� = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x455341; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t =��Ͻu֔=&S����=����0	>���<4�>�a=L��=&��=|e�=�i�=�k=a�>z��<��=����� = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x59434E; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x445F444C; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0xFF004E45; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F574F46; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x54584554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F4F545F; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x45455246; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x545F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x495F455A; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x505F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x54414456; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t �=�<f;���=�=3Q�=hy�=.:�=�\�=��K=���=Fd�<'��=8d�` �=Qg3��=$�����:=`��Z:<�,ؽ��޼��ֽ�偽���V|���)x��I׽�dѼ�۽��1<ڥɽa;=0����؝=uhK��C�=^�+��~�=�r=�V�=�=9��=0��=��p=�3�=�z�<�j�=#ҷ��J�=��e��Ȁ=pH�����<L���$d���_ƽ!��/=��ׯ���������py�@E���H���'����<��c���0=e��n=b=�sT�Q2s=���;�e=*~�<w==�N=���<�*=b�[<�4=�A.�R��<jg���<͋��(,<| ����W;�t��@5��ŏ�\�Ȼ$ao�N��|6��y8���軠�C�9~1�04��d�:\���ê;|����=�;��L��H�; = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x4E4146; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x53554C43; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4556; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C61762E; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x36AFF600; // 
                constexpr std::ptrdiff_t  = 0x7; // 
                constexpr std::ptrdiff_t  = 0x72615F74; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t OnNetUInt16VarChanged = 0x0; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x1F; // 
                constexpr std::ptrdiff_t  = 0x6F72702E; // 
                constexpr std::ptrdiff_t  = 0x73694C79; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x79746974; // 
                constexpr std::ptrdiff_t  = 0x6E657645; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x2E006C64; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x18FCC90; // 
                constexpr std::ptrdiff_t te.proto = 0x2B624038; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x685F6B63; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x6C64; // 
                constexpr std::ptrdiff_t  = 0x6E657645; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t OnWaterLevelChangeNetworked = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C61762E; // 
                constexpr std::ptrdiff_t  = 0x6E657645; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x5F64656B; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x6C006C64; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x5D3430; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x19; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF00; // 
                constexpr std::ptrdiff_t  = 0x6C616365; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x745F7965; // 
                constexpr std::ptrdiff_t  = 0x61745379; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x745F7965; // 
                constexpr std::ptrdiff_t  = 0x746E6576; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x745F7965; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x36315B20; // 
                constexpr std::ptrdiff_t  = 0x73655279; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x35005D31; // 
                constexpr std::ptrdiff_t  = 0x6E45726F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x79746900; // 
                constexpr std::ptrdiff_t  = 0x6E45726F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x74005D33; // 
                constexpr std::ptrdiff_t  = 0x70614365; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C636F74; // 
                constexpr std::ptrdiff_t  = 0x70614365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C005D34; // 
                constexpr std::ptrdiff_t  = 0x736C6163; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65005D35; // 
                constexpr std::ptrdiff_t  = 0x4D736369; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x630065; // 
                constexpr std::ptrdiff_t  = 0x4D736369; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x35315B20; // 
                constexpr std::ptrdiff_t  = 0x2E746E65; // 
            }
            // Parent: None
            // Field count: 314
            namespace 7 {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F43; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x4E6E6B28; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x66667542; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AADAB0; // 
                constexpr std::ptrdiff_t S������v:j����VM?�:j��"��N�j���H?�QL��=tRCi���F��X�S/�������#�M��U7�9+�w��$�����<�t�K��
                )���;@`  � = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x7AADC20; // 
                constexpr std::ptrdiff_t �O�w�
                 ^�K'k�OP�x��JzH	3���,����\&���|#n� = 0x76A98C0; // 
                constexpr std::ptrdiff_t  = 0x76A98E0; // 
                constexpr std::ptrdiff_t  = 0x76A9900; // 
                constexpr std::ptrdiff_t  = 0x76A9920; // 
                constexpr std::ptrdiff_t  = 0x76A9940; // 
                constexpr std::ptrdiff_t  = 0x7AADCC0; // 
                constexpr std::ptrdiff_t i�������4�໴�wܟ�+g�ޤ6������W�i�K?�+f|��O1Ǚ~ծ�D��+�����$9�>�+��%��W = 0x76A99B8; // 
                constexpr std::ptrdiff_t  = 0x7AADE10; // 
                constexpr std::ptrdiff_t /��� = 0x2B544320; // 
                constexpr std::ptrdiff_t  = 0x7AADE60; // 
                constexpr std::ptrdiff_t ˩���ҙ�-%_���+{"��]1>X|J�ܿ�Q������������J�w�s}�~ = 0x2B544430; // 
                constexpr std::ptrdiff_t  = 0x7AADEB0; // 
                constexpr std::ptrdiff_t �Ə���u�6^�F�&�R^7B�M�;�AK��L��bF�nA�0h�KCs8C�]�c2�!���ɔ���+�͗���^�'�!Ur/4�6�芇���W�w��~�*T4�oߢ��%�y��F�l�u컵r��x":�D��ns�~�\{o��8:����Ec4���3c�͝ Jts��3��ag��٩�������ί_�Q���՟@/�m��*0�����7b��_�e��=Bр�R����+�/�{��A�sBK�, = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AAE050; // 
                constexpr std::ptrdiff_t 	 = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 
                 = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AAE0C0; // 
                constexpr std::ptrdiff_t �c����}l�a]N	�dB
                6��2� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AAE210; // 
                constexpr std::ptrdiff_t ���PxEW�IpI��]��S6�G�W�X��+�C�`v���hv�z����~'�}��I ��0g緉��:�[F�q��qtg��:/��D�-���	��B�c�"pg�{oS-DC��k�w&�|S����*C�W<��2L��]��S6�G�W�X��+��\�_����k���+�R��ñG��]�B���]�M���Zs\����m�~ ��a4�瑫�v��WVK8�~d�����1�w�-���@�C~����2���=>��'�G����k��y�5B|9�r���.稇���r�y�E~�#pD{���ӽo��'E�P�#�=�!�޿;y&y����Us�.���{�w��]����~ߖ��w�u�[��?����{8��>���^�?9j)K�}���W��	��擧]����yӊ�<�f���N?�Yk����%ͺ����(;[2��Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A10; // 
                constexpr std::ptrdiff_t  = 0x7AAE3D0; // 
                constexpr std::ptrdiff_t �Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A90; // 
                constexpr std::ptrdiff_t  = 0x2B544AD0; // 
                constexpr std::ptrdiff_t  = 0x6349820; // 
                constexpr std::ptrdiff_t  = 0x2B544B50; // 
                constexpr std::ptrdiff_t  = 0x7AAE610; // 
                constexpr std::ptrdiff_t |�%���앗u/����'�����T8��@�P��1x,.���a�ﮒj="��<H&�����h�!���V���!W�нh����ܣ����j�b[x��U��;e{C��W���I�[��@���0N0vѧ=,ˡ�;U�+5*=�F��ШPwW��^V���n��]+7��Xy�R��`��� ��?x�w@�r��X�o�v�5?V|-���A��'7�e[��`Vn����ُ98� ��N��_��=&.>�jqH��ypuw������m� = 0x2B544BD0; // 
                constexpr std::ptrdiff_t  = 0x7AAE760; // 
                constexpr std::ptrdiff_t a2]����_?�/���h���g�7�]8x@l�O��p�{���Gp\���<�eK?ѷA6p耼�xRf_`����p� y��Z���4^��߿���+���A��`������h��.}������E���|}���fy<��eґ���aE��1����[��y��0h�E&N���6����ҟ+~�={��_0�n��y��K�����t�������4�M��һo���4g8��/pD��ɼ�}���<mM^�*ب&z:&Fԭ�3onv{��� = 0x2B544C50; // 
                constexpr std::ptrdiff_t  = 0x7AAE8C0; // 
                constexpr std::ptrdiff_t \9$�-
                �/ = 0x2B544CD0; // 
                constexpr std::ptrdiff_t  = 0x7AAEA30; // 
                constexpr std::ptrdiff_t �m��u��Lp��]��>wO��:uk��Yo^�T�(id�g�aN.����(!B�!�̨@   � = 0x2B544D50; // 
                constexpr std::ptrdiff_t  = 0x2B544D90; // 
                constexpr std::ptrdiff_t NoteamDot.AddClass('hidden');
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
                constexpr std::ptrdiff_t  = 0x2B544E10; // 
                constexpr std::ptrdiff_t item-tile__equipped__radiodot--filled');
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
                constexpr std::ptrdiff_t  = 0x7AAEAD0; // 
                constexpr std::ptrdiff_t ��96���x��K�R�?[a|c��S��.-��wf��`8�Pz��G�S���n�9�gx_U|~��:�3��oH*�Z]�}q���(�!�z��O�˸�x".��~C>}~���x-�]�>���Ӆ(c&��,�|9 = 0x2B544ED0; // 
                constexpr std::ptrdiff_t  = 0x7AAEFF0; // 
                constexpr std::ptrdiff_t en', !InventoryAPI.ItemIsInFavorites('ct', id));
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
                constexpr std::ptrdiff_t  = 0x2B544F90; // 
                constexpr std::ptrdiff_t t', id));
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
                constexpr std::ptrdiff_t  = 0x2B545010; // 
                constexpr std::ptrdiff_t uipIcon(true, team);
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
                constexpr std::ptrdiff_t  = 0x2B545090; // 
                constexpr std::ptrdiff_t , team);
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
                constexpr std::ptrdiff_t  = 0x2B545110; // 
                constexpr std::ptrdiff_t initionKey(id, 'flexible_loadout_group');
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
                constexpr std::ptrdiff_t  = 0x7AB0320; // 
                constexpr std::ptrdiff_t %����K\P3Au$<�4p��q2�c~)�� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x634D830; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AB09E0; // 
                constexpr std::ptrdiff_t Ƞj* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x634DA10; // 
                constexpr std::ptrdiff_t  = 0x634DA50; // 
                constexpr std::ptrdiff_t  = 0x634DA90; // 
                constexpr std::ptrdiff_t  = 0x634DAD0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t csgo_simple.vfx = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t @B�L* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x634DE10; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t ��j* = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x20000; // 
                constexpr std::ptrdiff_t �j* = 0xFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x634DEA0; // 
                constexpr std::ptrdiff_t  = 0x55555555; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349040; // 
                constexpr std::ptrdiff_t �j* = 0x6349110; // 
                constexpr std::ptrdiff_t  = 0x55555555; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x55555555; // 
                constexpr std::ptrdiff_t  = 0x63459B0; // 
                constexpr std::ptrdiff_t  = 0x76AAAC8; // 
                constexpr std::ptrdiff_t  = 0x6345A60; // 
                constexpr std::ptrdiff_t ���� = 0x6345AA0; // 
                constexpr std::ptrdiff_t  = 0x6345AE0; // 
                constexpr std::ptrdiff_t  = 0x6345B20; // 
                constexpr std::ptrdiff_t  = 0x6345B90; // 
                constexpr std::ptrdiff_t �[4* = 0x6345BD0; // 
                constexpr std::ptrdiff_t ثj* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6345C30; // 
                constexpr std::ptrdiff_t  = 0x6345C70; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x75426563; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF00; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x72; // 
                constexpr std::ptrdiff_t  = 0x6675426D; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xCE6E6B28; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6E695465; // 
                constexpr std::ptrdiff_t  = 0x6F6E6749; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xC4653601; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x66667542; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7810D60; // 
                constexpr std::ptrdiff_t  = 0x7811F60; // 
                constexpr std::ptrdiff_t  = 0x20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63DAB20; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t � = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7810300; // 
                constexpr std::ptrdiff_t  = 0x78118A0; // 
                constexpr std::ptrdiff_t  = 0x20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63D8BE0; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t � = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xA0000000; // 
                constexpr std::ptrdiff_t Z�(.�� = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7810540; // 
                constexpr std::ptrdiff_t  = 0x7810340; // 
                constexpr std::ptrdiff_t  = 0x20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x13BBBD2E; // 
                constexpr std::ptrdiff_t  = 0x63D8C80; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x7AA4E90; // 
                constexpr std::ptrdiff_t ���A�<�;��,B�.I�t8�M�F�(�d��r�+�m��MS|z&�j_`�$md&�Έ�sF�fi)��N�����Q3�>�tC�p��,���k_O�7|�ם�<w��o = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5030; // 
                constexpr std::ptrdiff_t 0�j* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x97EFD278; // 
                constexpr std::ptrdiff_t �4* = 0x6341ED0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA50A0; // 
                constexpr std::ptrdiff_t :�x���3k��"�^�_X�y���s���?�_i=�x}�uRh���6i<�?����)Q�1���uD�΂��M = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA51F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x7AA5370; // 
                constexpr std::ptrdiff_t ��Ak�HhJ�D^�'�kt@�ɢxL�{;����]�։�9��KqY�|�n�(_gW�`}�@5=]cB�3Nx��!xo�_�z�o��s6L�*�6$;����![���h�v�U,�#�M�w4-s,����Wf���uG����~�"��C�4��kG�X}�������1������`u��p�O��h��[�](����6Z���p]#�3C = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x7AA54E0; // 
                constexpr std::ptrdiff_t Mc� = 0x7AA5520; // 
                constexpr std::ptrdiff_t ��j* = 0x6345090; // 
                constexpr std::ptrdiff_t ��j* = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x7AA55A0; // 
                constexpr std::ptrdiff_t �M�DB< ��Ӵ�?1��� ��M��L��a��fk��.t�6xM�R�}�t�q��%�� = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x7AA56F0; // 
                constexpr std::ptrdiff_t Į��ܾ�V��F�?y��!Q��&ω@8p��ir�9ƍ�0e�]���i��V������DZ��Dt�U���a�Lhk"6V�AyNHᐚ��2<«�eܰ{:X���B��
                �����������$�M�����0a�y,�] H�����]"I�H�N���]��C�|�Q~-䂡sj�H���
                �e��=�qU�i�!B��!B�B�A�	h�&@ = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5850; // 
                constexpr std::ptrdiff_t ��|�|�`\�f�0�b��:����uis3��1�U1���b��se4�uކ�/��������~��Ρ�������{�����������l��U���Ϸ������x�{ȡ���)����.G�n�����Sn:�>�r�}?�_y����<�����)�H�b���������X���S¦�c��ȋ!�r���>�u��x���Rٜ�2���TV]�O��_ϯǽg��xޑHG䏿�`���y��튫�������y����{�z���������W>��s3ɲXgn�	.<*z�����j2�*�خ��ӊŬ������߇IO�E}�y.�*՝+<��m�����E/��8$��+�u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA59C0; // 
                constexpr std::ptrdiff_t �u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x6345370; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5A60; // 
                constexpr std::ptrdiff_t ����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x6345490; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5F80; // 
                constexpr std::ptrdiff_t 0�j* = 0x6345590; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6345620; // 
                constexpr std::ptrdiff_t 0�j* = 0x7AA72B0; // 
                constexpr std::ptrdiff_t -��?_�Q�z4����������g���2�	�j�f�"|ָ����Tq?�>+Ô5Fd���
                l�#xV�S���
                ��@F���F@�£��_?��_ B0TZ = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6345790; // 
                constexpr std::ptrdiff_t ��j* = 0x6345860; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA7970; // 
                constexpr std::ptrdiff_t 0�j* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6345900; // 
                constexpr std::ptrdiff_t ��j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x63459E0; // 
                constexpr std::ptrdiff_t Ho��� = 0x6345A20; // 
                constexpr std::ptrdiff_t  = 0x7AA8C70; // 
                constexpr std::ptrdiff_t K0�bhc�i9�dY�k��!���d�F�@}k�N%9�Z��Hh�>�A�m�H����-נ���ɚi��<~�VZ�BC^�ܭ���A[�5�)�h�B�V擑BX�<$g=�����sąu5e��5�O�$34���>�@uen�IlZ�����j�9k-�[� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6345B20; // 
                constexpr std::ptrdiff_t  = 0x63490F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6345BB0; // 
                constexpr std::ptrdiff_t  = 0x63493D0; // 
                constexpr std::ptrdiff_t �V��� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6349420; // 
                constexpr std::ptrdiff_t P�4* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6349470; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63495E0; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6345E90; // 
                constexpr std::ptrdiff_t ��j* = 0x6349650; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x63497A0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6349920; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349A90; // 
                constexpr std::ptrdiff_t  = 0x6349AD0; // 
                constexpr std::ptrdiff_t ��j* = 0x2B13D470; // 
                constexpr std::ptrdiff_t 0�j* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6349B50; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349CA0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349E00; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x6349F70; // 
                constexpr std::ptrdiff_t ��4* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x2B13D520; // 
                constexpr std::ptrdiff_t ��j* = 0x2B13D540; // 
                constexpr std::ptrdiff_t ��j* = 0x6341040; // 
                constexpr std::ptrdiff_t ����* = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x6341190; // 
                constexpr std::ptrdiff_t  = 0x0; // �$���
            }
            // Parent: None
            // Field count: 0
            namespace PF_NOISE_MODIFIER_NONE {
            }
            // Parent: None
            // Field count: 0
            namespace PF_TYPE_LITERAL {
            }
            // Parent: None
            // Field count: 656
            namespace _ {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ������������ = 0x545F4650; // ��$��
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t D = 0x17BD907; // 
                constexpr std::ptrdiff_t  = 0x17BD82E; // 
                constexpr std::ptrdiff_t ������������ = 0x17BD862; // ��$��
                constexpr std::ptrdiff_t ������������ = 0x17BD89B; // ��$��
                constexpr std::ptrdiff_t  = 0x17BD8D3; // 
                constexpr std::ptrdiff_t  = 0x4003409; // m_flZOffset
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x729D9A0; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ���_� = 0x63DA260; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4002C23; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656B6162; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6174654D; // 
                constexpr std::ptrdiff_t  = 0x65736162; // 
                constexpr std::ptrdiff_t  = 0x706F7270; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6E6970; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL> = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat = 0x79646F62; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x69736F50; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E6970; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t ���_� = 0x70616577; // 
                constexpr std::ptrdiff_t ���_� = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x646E6168; // 
                constexpr std::ptrdiff_t  = 0x72EC640; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x79706F43; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0xA779851D; // 
                constexpr std::ptrdiff_t  = 0x97E8F1D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x706F7270; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F62; // 
                constexpr std::ptrdiff_t  = 0x2C20; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4006819; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6C6C6162; // 
                constexpr std::ptrdiff_t  = 0x646E6168; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x656B6162; // 
                constexpr std::ptrdiff_t  = 0x6174654D; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x79706F63; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x72EC4C0; // 
                constexpr std::ptrdiff_t  = 0x6B63656E; // 
                constexpr std::ptrdiff_t  = 0x6C6C6162; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x62657965; // 
                constexpr std::ptrdiff_t  = 0x6C6B6E61; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6F6C6C61; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x2E676D64; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6E696F70; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x61545F6D; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x7571696C; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x69736F50; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x6867696C; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl = 0x6F6C6F6D; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x766C6570; // 
                constexpr std::ptrdiff_t  = 0x6E697073; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x656E6F62; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x6C616568; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x6E657267; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x4006859; // 
                constexpr std::ptrdiff_t  = 0x4003027; // 
                constexpr std::ptrdiff_t  = 0x6F6C6C61; // 
                constexpr std::ptrdiff_t  = 0x4003409; // 
                constexpr std::ptrdiff_t  = 0x4006415; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x656E6F42; // 
                constexpr std::ptrdiff_t  = 0x5F316761; // 
                constexpr std::ptrdiff_t  = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl = 0x70616577; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x17BDE9D; // 
                constexpr std::ptrdiff_t  = 0x17BDEEC; // 
                constexpr std::ptrdiff_t  = 0x17BDF3E; // 
                constexpr std::ptrdiff_t  = 0x17BDF90; // 
                constexpr std::ptrdiff_t  = 0x6F677363; // 
                constexpr std::ptrdiff_t  = 0x6C6C6163; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x726F6353; // 
                constexpr std::ptrdiff_t  = 0x7270732B; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x73616F74; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x635F6C63; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6574756D; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x65646968; // 
                constexpr std::ptrdiff_t  = 0x65646968; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x696E6173; // 
                constexpr std::ptrdiff_t  = 0x696E6173; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x61736964; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6E6F6349; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6274656E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x72747865; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x77647568; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6461722B; // 
                constexpr std::ptrdiff_t  = 0x6461722B; // 
                constexpr std::ptrdiff_t  = 0x74756C43; // 
                constexpr std::ptrdiff_t  = 0x67676F54; // 
                constexpr std::ptrdiff_t  = 0x63696F56; // 
                constexpr std::ptrdiff_t  = 0x7373656D; // 
                constexpr std::ptrdiff_t  = 0x52647453; // 
                constexpr std::ptrdiff_t  = 0x79616C70; // 
                constexpr std::ptrdiff_t  = 0x736E6F43; // 
                constexpr std::ptrdiff_t  = 0x6D616554; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x5F647568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x746C754D; // 
                constexpr std::ptrdiff_t  = 0xC3236A1D; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x736F6F42; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6E2D6469; // 
                constexpr std::ptrdiff_t  = 0x6E3A737B; // 
                constexpr std::ptrdiff_t  = 0x74657323; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x53766E49; // 
                constexpr std::ptrdiff_t  = 0x63616C70; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x72474548; // 
                constexpr std::ptrdiff_t  = 0x66696E4B; // 
                constexpr std::ptrdiff_t  = 0x6D697250; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x55465323; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x7375655A; // 
                constexpr std::ptrdiff_t  = 0xD20; // 
                constexpr std::ptrdiff_t  = 0x7E163F1D; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x63647568; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x6D676573; // 
                constexpr std::ptrdiff_t  = 0x69646172; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x61646152; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x725F6C63; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6E65706F; // 
                constexpr std::ptrdiff_t  = 0x6E65706F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x74646977; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0xE36D22CA; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6F6D6E6F; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x776F6873; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x67676F74; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x61766E6F; // 
                constexpr std::ptrdiff_t  = 0x67676F74; // 
                constexpr std::ptrdiff_t  = 0x635F6C63; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x69616858; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x736F7263; // 
                constexpr std::ptrdiff_t  = 0x2D70616D; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x61646172; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x63616E6F; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6E696E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x63696F56; // 
                constexpr std::ptrdiff_t  = 0x5F646E73; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x62616E65; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616548; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x7466656C; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x723A737B; // 
                constexpr std::ptrdiff_t  = 0x673A737B; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74746553; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x63736564; // 
                constexpr std::ptrdiff_t  = 0x6F677363; // 
                constexpr std::ptrdiff_t  = 0xA779851D; // 
                constexpr std::ptrdiff_t  = 0x97E8F1D; // 
                constexpr std::ptrdiff_t  = 0x600161A; // 
                constexpr std::ptrdiff_t  = 0x626D6F42; // 
                constexpr std::ptrdiff_t  = 0x5F646E73; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x64616568; // 
                constexpr std::ptrdiff_t  = 0x666C6168; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6D614723; // 
                constexpr std::ptrdiff_t  = 0x63726570; // 
                constexpr std::ptrdiff_t  = 0x74616544; // 
                constexpr std::ptrdiff_t  = 0x736E6F63; // 
                constexpr std::ptrdiff_t  = 0x69647561; // 
                constexpr std::ptrdiff_t  = 0x6E657665; // 
                constexpr std::ptrdiff_t  = 0x63726570; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0xA5D9646E; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0xF5AD4CF4; // 
                constexpr std::ptrdiff_t  = 0x74746968; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x2678EB8; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x6D756E23; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x74617473; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x58585858; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6E3A737B; // 
                constexpr std::ptrdiff_t  = 0x63736564; // 
                constexpr std::ptrdiff_t  = 0x16ED8FBF; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6C6C6F43; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x656D616E; // 
                constexpr std::ptrdiff_t  = 0x7543736A; // 
                constexpr std::ptrdiff_t  = 0x633A737B; // 
                constexpr std::ptrdiff_t  = 0x6F666E49; // 
                constexpr std::ptrdiff_t  = 0x69726172; // 
                constexpr std::ptrdiff_t  = 0x6D616574; // 
                constexpr std::ptrdiff_t  = 0x69726172; // 
                constexpr std::ptrdiff_t  = 0x74616863; // 
                constexpr std::ptrdiff_t  = 0x74617661; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74696177; // 
                constexpr std::ptrdiff_t  = 0x74617661; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6772616C; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x74736542; // 
                constexpr std::ptrdiff_t  = 0x70616557; // 
                constexpr std::ptrdiff_t  = 0x743A737B; // 
                constexpr std::ptrdiff_t  = 0x733A737B; // 
                constexpr std::ptrdiff_t  = 0x70616557; // 
                constexpr std::ptrdiff_t  = 0x743A737B; // 
                constexpr std::ptrdiff_t  = 0x733A737B; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x696D696C; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x763A737B; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x696D696C; // 
                constexpr std::ptrdiff_t  = 0x74736542; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x4F475343; // 
                constexpr std::ptrdiff_t  = 0x61666564; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x6F746E6F; // 
                constexpr std::ptrdiff_t  = 0x6F6C6E75; // 
                constexpr std::ptrdiff_t  = 0x6566666F; // 
                constexpr std::ptrdiff_t  = 0x6F2D6469; // 
                constexpr std::ptrdiff_t  = 0x6E69616D; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x2D726162; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x6C6C7566; // 
                constexpr std::ptrdiff_t  = 0x74786554; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x65737523; // 
                constexpr std::ptrdiff_t  = 0x65737523; // 
                constexpr std::ptrdiff_t  = 0x74786574; // 
                constexpr std::ptrdiff_t  = 0x72617473; // 
                constexpr std::ptrdiff_t  = 0x656D6163; // 
                constexpr std::ptrdiff_t  = 0x2D706F74; // 
                constexpr std::ptrdiff_t  = 0x772D6469; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F74; // 
                constexpr std::ptrdiff_t  = 0x2D637273; // 
                constexpr std::ptrdiff_t  = 0x61747323; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x6D726F6E; // 
                constexpr std::ptrdiff_t  = 0x70617267; // 
                constexpr std::ptrdiff_t  = 0x6C6F6F54; // 
                constexpr std::ptrdiff_t  = 0x69646152; // 
                constexpr std::ptrdiff_t  = 0x633A737B; // 
                constexpr std::ptrdiff_t  = 0x6B3A647B; // 
                constexpr std::ptrdiff_t  = 0x64697053; // 
                constexpr std::ptrdiff_t  = 0x95870F03; // 
                constexpr std::ptrdiff_t  = 0x6374616D; // 
                constexpr std::ptrdiff_t  = 0x6374614D; // 
            }
            // Parent: None
            // Field count: 0
            namespace PF_BIAS_TYPE_STANDARD {
            }
            // Parent: None
            // Field count: 806
            namespace PF_NOISE_TURB_NONE {
                constexpr std::ptrdiff_t  = 0x4F4E5F52; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x45504D41; // 
                constexpr std::ptrdiff_t  = 0x7007370; // 
                constexpr std::ptrdiff_t  = 0x53455241; // 
                constexpr std::ptrdiff_t  = 0x5241444E; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  = 0xFF005443; // 
                constexpr std::ptrdiff_t  = 0x54534E01; // 
                constexpr std::ptrdiff_t  = 0x54534E4F; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0xFF00454E; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BAA30; // 
                constexpr std::ptrdiff_t  = 0x4E494C52; // 
                constexpr std::ptrdiff_t  = 0x75E4801; // 
                constexpr std::ptrdiff_t  = 0x4F4E5F52; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // �*��
                constexpr std::ptrdiff_t  = 0x45504D41; // 
                constexpr std::ptrdiff_t  = 0x6C6101; // 
                constexpr std::ptrdiff_t  = 0x53455241; // 
                constexpr std::ptrdiff_t  = 0x97EFD8B8; // 
                constexpr std::ptrdiff_t  = 0x5241444E; // 
                constexpr std::ptrdiff_t  = 0x6C6101; // 
                constexpr std::ptrdiff_t  = 0xFF005443; // 
                constexpr std::ptrdiff_t  = 0x7545610; // �H-��
                constexpr std::ptrdiff_t  = 0x54534E4F; // 
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0xFF00454E; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x4E494C52; // 
                constexpr std::ptrdiff_t  = 0x520; // 
                constexpr std::ptrdiff_t  = 0x4F4E5F52; // 
                constexpr std::ptrdiff_t default = 0x45504D41; // 
                constexpr std::ptrdiff_t  = 0x45504D41; // 
                constexpr std::ptrdiff_t  = 0x7137750; // ��{*
                constexpr std::ptrdiff_t  = 0x53455241; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BA760; // 
                constexpr std::ptrdiff_t  = 0x5241444E; // 
                constexpr std::ptrdiff_t ���* = 0x7137660; // ��{*
                constexpr std::ptrdiff_t  = 0x444E454C; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x17060001; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7910001; // 
                constexpr std::ptrdiff_t  = 0x43; // 
                constexpr std::ptrdiff_t `��* = 0xFF00574F; // 
                constexpr std::ptrdiff_t  = 0xFF00574F; // 
                constexpr std::ptrdiff_t  = 0xFFFF004C; // 
                constexpr std::ptrdiff_t  = 0x74736566; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x4F; // 
                constexpr std::ptrdiff_t  = 0x4C5F6174; // 
                constexpr std::ptrdiff_t  = 0x4F465F4E; // 
                constexpr std::ptrdiff_t first_or_third_person_@0_#&thirdperson_default = 0x19769640; // 
                constexpr std::ptrdiff_t  = 0x52; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x7541348; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x63E7D50; // 
                constexpr std::ptrdiff_t �o��� = 0x63E8250; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x2B869890; // 
                constexpr std::ptrdiff_t  �*�� = 0x665BF50; // 
                constexpr std::ptrdiff_t �o��� = 0x63E8750; // 
                constexpr std::ptrdiff_t �o��� = 0x63E8C50; // 
                constexpr std::ptrdiff_t  �*�� = 0x7290C00; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t �o��� = 0x63E9148; // 
                constexpr std::ptrdiff_t �o��� = 0x63E9648; // 
                constexpr std::ptrdiff_t �o��� = 0x7541A48; // 
                constexpr std::ptrdiff_t �o��� = 0x7540C48; // F_RANDOM_MODE_CONSTANT
                constexpr std::ptrdiff_t �o��� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x76A55F8; // 
                constexpr std::ptrdiff_t  �*�� = 0xF2F148; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x140; // 
                constexpr std::ptrdiff_t  = 0x100; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291D30; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0x6D6165; // 
                constexpr std::ptrdiff_t  �*�� = 0x7290E80; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x736E6F63; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7290E80; // 
                constexpr std::ptrdiff_t  = 0x746E69; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291470; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291470; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x6E6F6974; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291E70; // 
                constexpr std::ptrdiff_t  �*�� = 0x72912E0; // 
                constexpr std::ptrdiff_t  = 0xFF007475; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7BB0001; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x65687774; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  �*�� = 0x7291AB0; // 
                constexpr std::ptrdiff_t  �*�� = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0x5F32D401; // 
                constexpr std::ptrdiff_t  = 0x76A9810; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x76A9810; // 
                constexpr std::ptrdiff_t  = 0x5F6D6165; // 
                constexpr std::ptrdiff_t  = 0x76A9810; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  = 0x7592ACD; // 
                constexpr std::ptrdiff_t  = 0x5F32D401; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x558C; // 
                constexpr std::ptrdiff_t  = 0x482C; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x2A6C8A01; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0x97EFCF08; // 
                constexpr std::ptrdiff_t  = 0x75E4801; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x97EFCF58; // 
                constexpr std::ptrdiff_t  = 0x75E4801; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x6AF0; // 
                constexpr std::ptrdiff_t  = 0x685F6761; // 
                constexpr std::ptrdiff_t  = 0x2A6C8A01; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x97EFD518; // 
                constexpr std::ptrdiff_t  = 0x5F32D4F8; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x5264726F; // 
                constexpr std::ptrdiff_t  = 0x7545610; // P�.��
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0x5F32D401; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x616D726F; // 
                constexpr std::ptrdiff_t  = 0x97EFD1C8; // �H-��
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x63E9D9E; // P�.��
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x63E9D9E; // �#-��
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x7592A01; // weapon_offset
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x1; // ����
                constexpr std::ptrdiff_t  = 0x7007376; // 
                constexpr std::ptrdiff_t  = 0x762E6572; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x63E9D01; // 
                constexpr std::ptrdiff_t  = 0x7545610; // 
                constexpr std::ptrdiff_t  = 0x63E9D9E; // 
                constexpr std::ptrdiff_t  = 0x7592A01; // 
                constexpr std::ptrdiff_t  = 0x762E6432; // 
                constexpr std::ptrdiff_t  = 0x44207265; // 
                constexpr std::ptrdiff_t  = 0x616D726F; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0xFFFF004C; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x72D0074; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BADF0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BADF0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  �*�� = 0x16510010; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t `�* = 0x7543310; // �H-��
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF01; // 
                constexpr std::ptrdiff_t  = 0x7592ACD; // 
                constexpr std::ptrdiff_t  �*�� = 0x2B544001; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x616D726F; // 
                constexpr std::ptrdiff_t  �*�� = 0x362BB020; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0x6E69616D; // 
                constexpr std::ptrdiff_t  = 0x7592ACD; // {,��
                constexpr std::ptrdiff_t  = 0x664F6472; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0x74616566; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0x1; // 
                constexpr std::ptrdiff_t  = 0x7543310; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xFFFF0001; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_handwrap_leathery_snakeskin_orange_tag = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_handwrap_leathery_caution = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_handwrap_leathery_caution_tag = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_operation10_metalic_green = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t PaintKit_operation10_metalic_green_tag = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E0000; // 
                constexpr std::ptrdiff_t  = 0x65706D6F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x7463615F; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65725F6C; // 
                constexpr std::ptrdiff_t  = 0x73556172; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �Ⱦ�u>�뚾b�>}E��-�>����.�> = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �{�����&��./�,�+�@�#��W%��9*>5L��>�>�G��6�>fƪ���	?��>���?8���@?�}�=�J?[�s>�?�>���>���>n��>�!�>�a>,�?���=�<?Rt�"��>J���>�C���~�>b��=u>��ƾP/>�Dؾ<�&=JW޾ҥp��ؾS6�dHƾ�qd��)�������������>�X��h��*��	s˾
                mC�6˾��O=����&)>/<��R�`>��x�n�>h)7�:M�>L��v$�>J�U���>�Z�<��>6�=���>�'>#O�>��f>�^�>uӎ>��]>^̥>�
                >Q�><�=�C�>E����>܉��d��>$+��ƍ>�=W�xt>&����>>ͷ���Y�=�����*�;�оيҽ�ʾ4�I�����k燾
                M��;T��ɚc��ֳ��?"���ž�﷽QվP��ȥܾD��=d�־�R>P��]��>�����v�>��n�?�׶���?ϥ>�?��>�[�>���>���>���>��>'?��Q>�T?Hk�=�!?6���a?�؝����>n = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t ����ᙾ�꨾e�J�֟����ɽ����HG��ݔ���:=�?�����=�Mq�V = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �X��.�>��2��>"�<���>>�=rW�>K,>���>���>��>$��>�P�>��?h� >��?��w�V�?�3�����>��о��S>J�F+�=Hv侠���Z�־VuͽjJ̾~`C�.a���Y���1��W��/�c��MҾν�;���<�U��CJ�=x���6�4>Ξ�� Rp>w]d��0�>T�SF�>�K?�P�>�%�=�J�>1?>���>T��>�ח>�Ѫ>j�Z>ݾ>\>���>�=Qu�>�d��ma�>T�9��ê>�ɗ���l>.�ƾF��= = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E0000; // 
                constexpr std::ptrdiff_t  = 0x55747365; // 
                constexpr std::ptrdiff_t �6?���>`�@?.Ҧ=�,:?������%?�H��A�?�⾰��>	�
                �/x>~��Y��=��!�6<����EZ���gt��|����#߾{tξ(��v�����x�0����B���+��G�=f��Qʇ>� = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0xFFFF0063; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x635F6D65; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0xFF003263; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x635F6D65; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x61705F63; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x61705F63; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x746E6569; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F667461; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65646D65; // 
                constexpr std::ptrdiff_t  = 0x73556172; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x72676D65; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x5F6C6174; // 
                constexpr std::ptrdiff_t  = 0x44747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x5F6C6174; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x76736F2E; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x65766E69; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x67734D6C; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x74616C70; // 
                constexpr std::ptrdiff_t  = 0x73556172; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x66726570; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F6E6761; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t �=�K�>��I>&�>"��>綮>���>|�P>.H�>�4�=�ܸ>$�/���>O�
                >9�&���K>�|I���>�e����=4Fz��\=|i���yx��"���􇽄�v��*�1g��R3��L�0�l��������D?��ܭ���Iw; = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6576736F; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6174732E; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t cents. = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6D657469; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t le cry</i> = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6100316C; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x637263; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t a� = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x636974; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x2E636974; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x2E636974; // 
                constexpr std::ptrdiff_t  = 0x49747365; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x2E636974; // 
                constexpr std::ptrdiff_t  = 0x736F6E67; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x746573; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6169642E; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t �����=�����ɽ�	�� = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6F746E65; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t j1��a侂蜾ɥþ,0Ӿ�W��w���9������V���~�>��ھ\��>�����3�>�hw����>I你�?�e=��
                ?��B>��?�_�>5��>���>�y�>�.?q�Y>x�?��\=�?�R�_�
                ?x���\f�>�lؾ��>q�	���>gO�����%"��TT�;��򙾾{�����J˾E6��#q��%��[W�'l!�r$	>*��Ӝ>Y��H��>�=��5?p��F=?#�@=��?�_>}?���>bM�>���>푳>oU?��W>`?��=��
                ?�و�.�?z�K�:��>5���>�پ+[[>����t��=�V�Ƒ��)���I��9��%����۾�׾�奄@��W���	��,����	��&�=.��t#i>0LӾ�Զ>�������>z#��?Pߜ���?'>ۃ?G�>���>���>�P�>��>�lm>KP�>U	�=B��>,�Q�x��>.�8�3��> = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x756F7268; // 
                constexpr std::ptrdiff_t  = 0x74617453; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6975622E; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x61746E65; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C61762E; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x762E6C61; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x6D787600; // 
                constexpr std::ptrdiff_t  = 0x52796669; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6972432E; // 
                constexpr std::ptrdiff_t  = 0x746E6576; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6972432E; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6F006469; // 
                constexpr std::ptrdiff_t  = 0x73655279; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D72615F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D72615F; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x706D6F43; // 
                constexpr std::ptrdiff_t  = 0x65735543; // 
                constexpr std::ptrdiff_t  = 0x6C616E6F; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x646D762E; // 
                constexpr std::ptrdiff_t  = 0x746E6576; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x69745F72; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0xFF004554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0xFF004554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x4F5F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x455F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x4F5F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t ��vL���4��JG=�H����>Wm����T>ʒ>�ء�>||�E��>�L�~�>� _=��>��>(E�>�i>9
                y>w<�>I = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t ���>Y�>
                �Y��>xy۽`��>p%�<_�>�9,>h��>P�>d��>��>D�>ȇ
                ?�B>��?��d�?�vk���>dMо,�>LT
                ��E�=�*��<���U�ں��=� = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x455341; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t =��Ͻu֔=&S����=����0	>���<4�>�a=L��=&��=|e�=�i�=�k=a�>z��<��=����� = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x59434E; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x445F444C; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0xFF004E45; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F574F46; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x54584554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F4F545F; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x45455246; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x545F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x495F455A; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x505F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x5F594F52; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x54414456; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t �=�<f;���=�=3Q�=hy�=.:�=�\�=��K=���=Fd�<'��=8d�` �=Qg3��=$�����:=`��Z:<�,ؽ��޼��ֽ�偽���V|���)x��I׽�dѼ�۽��1<ڥɽa;=0����؝=uhK��C�=^�+��~�=�r=�V�=�=9��=0��=��p=�3�=�z�<�j�=#ҷ��J�=��e��Ȁ=pH�����<L���$d���_ƽ!��/=��ׯ���������py�@E���H���'����<��c���0=e��n=b=�sT�Q2s=���;�e=*~�<w==�N=���<�*=b�[<�4=�A.�R��<jg���<͋��(,<| ����W;�t��@5��ŏ�\�Ȼ$ao�N��|6��y8���軠�C�9~1�04��d�:\���ê;|����=�;��L��H�; = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x4E4146; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4554; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x53554C43; // 
                constexpr std::ptrdiff_t  = 0x4547414E; // 
                constexpr std::ptrdiff_t  = 0x454D4147; // 
                constexpr std::ptrdiff_t  = 0x465F4556; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C61762E; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x36AFF600; // 
                constexpr std::ptrdiff_t  = 0x7; // 
                constexpr std::ptrdiff_t  = 0x72615F74; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t OnNetUInt16VarChanged = 0x0; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x1F; // 
                constexpr std::ptrdiff_t  = 0x6F72702E; // 
                constexpr std::ptrdiff_t  = 0x73694C79; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x79746974; // 
                constexpr std::ptrdiff_t  = 0x6E657645; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x2E006C64; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x18FCC90; // 
                constexpr std::ptrdiff_t te.proto = 0x2B624038; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x685F6B63; // 
                constexpr std::ptrdiff_t  = 0x65764564; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x6C64; // 
                constexpr std::ptrdiff_t  = 0x6E657645; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t OnWaterLevelChangeNetworked = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x6C61762E; // 
                constexpr std::ptrdiff_t  = 0x6E657645; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x5F64656B; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x65646F6D; // 
                constexpr std::ptrdiff_t  = 0x6C006C64; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x5D3430; // 
                constexpr std::ptrdiff_t  = 0x6D614779; // 
                constexpr std::ptrdiff_t  = 0x19; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF00; // 
                constexpr std::ptrdiff_t  = 0x6C616365; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
                constexpr std::ptrdiff_t  = 0x745F7965; // 
                constexpr std::ptrdiff_t  = 0x61745379; // 
                constexpr std::ptrdiff_t  = 0x67734D43; // 
            }
            // Parent: None
            // Field count: 312
            namespace 3 {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6F6C6F43; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x4E6E6B28; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x66667542; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AADAB0; // 
                constexpr std::ptrdiff_t S������v:j����VM?�:j��"��N�j���H?�QL��=tRCi���F��X�S/�������#�M��U7�9+�w��$�����<�t�K��
                )���;@`  � = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x7AADC20; // 
                constexpr std::ptrdiff_t �O�w�
                 ^�K'k�OP�x��JzH	3���,����\&���|#n� = 0x76A98C0; // 
                constexpr std::ptrdiff_t  = 0x76A98E0; // 
                constexpr std::ptrdiff_t  = 0x76A9900; // 
                constexpr std::ptrdiff_t  = 0x76A9920; // 
                constexpr std::ptrdiff_t  = 0x76A9940; // 
                constexpr std::ptrdiff_t  = 0x7AADCC0; // 
                constexpr std::ptrdiff_t i�������4�໴�wܟ�+g�ޤ6������W�i�K?�+f|��O1Ǚ~ծ�D��+�����$9�>�+��%��W = 0x76A99B8; // 
                constexpr std::ptrdiff_t  = 0x7AADE10; // 
                constexpr std::ptrdiff_t /��� = 0x2B544320; // 
                constexpr std::ptrdiff_t  = 0x7AADE60; // 
                constexpr std::ptrdiff_t ˩���ҙ�-%_���+{"��]1>X|J�ܿ�Q������������J�w�s}�~ = 0x2B544430; // 
                constexpr std::ptrdiff_t  = 0x7AADEB0; // 
                constexpr std::ptrdiff_t �Ə���u�6^�F�&�R^7B�M�;�AK��L��bF�nA�0h�KCs8C�]�c2�!���ɔ���+�͗���^�'�!Ur/4�6�芇���W�w��~�*T4�oߢ��%�y��F�l�u컵r��x":�D��ns�~�\{o��8:����Ec4���3c�͝ Jts��3��ag��٩�������ί_�Q���՟@/�m��*0�����7b��_�e��=Bр�R����+�/�{��A�sBK�, = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AAE050; // 
                constexpr std::ptrdiff_t 	 = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 
                 = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AAE0C0; // 
                constexpr std::ptrdiff_t �c����}l�a]N	�dB
                6��2� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AAE210; // 
                constexpr std::ptrdiff_t ���PxEW�IpI��]��S6�G�W�X��+�C�`v���hv�z����~'�}��I ��0g緉��:�[F�q��qtg��:/��D�-���	��B�c�"pg�{oS-DC��k�w&�|S����*C�W<��2L��]��S6�G�W�X��+��\�_����k���+�R��ñG��]�B���]�M���Zs\����m�~ ��a4�瑫�v��WVK8�~d�����1�w�-���@�C~����2���=>��'�G����k��y�5B|9�r���.稇���r�y�E~�#pD{���ӽo��'E�P�#�=�!�޿;y&y����Us�.���{�w��]����~ߖ��w�u�[��?����{8��>���^�?9j)K�}���W��	��擧]����yӊ�<�f���N?�Yk����%ͺ����(;[2��Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A10; // 
                constexpr std::ptrdiff_t  = 0x7AAE3D0; // 
                constexpr std::ptrdiff_t �Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA�� = 0x2B544A90; // 
                constexpr std::ptrdiff_t  = 0x2B544AD0; // 
                constexpr std::ptrdiff_t  = 0x6349820; // 
                constexpr std::ptrdiff_t  = 0x2B544B50; // 
                constexpr std::ptrdiff_t  = 0x7AAE610; // 
                constexpr std::ptrdiff_t |�%���앗u/����'�����T8��@�P��1x,.���a�ﮒj="��<H&�����h�!���V���!W�нh����ܣ����j�b[x��U��;e{C��W���I�[��@���0N0vѧ=,ˡ�;U�+5*=�F��ШPwW��^V���n��]+7��Xy�R��`��� ��?x�w@�r��X�o�v�5?V|-���A��'7�e[��`Vn����ُ98� ��N��_��=&.>�jqH��ypuw������m� = 0x2B544BD0; // 
                constexpr std::ptrdiff_t  = 0x7AAE760; // 
                constexpr std::ptrdiff_t a2]����_?�/���h���g�7�]8x@l�O��p�{���Gp\���<�eK?ѷA6p耼�xRf_`����p� y��Z���4^��߿���+���A��`������h��.}������E���|}���fy<��eґ���aE��1����[��y��0h�E&N���6����ҟ+~�={��_0�n��y��K�����t�������4�M��һo���4g8��/pD��ɼ�}���<mM^�*ب&z:&Fԭ�3onv{��� = 0x2B544C50; // 
                constexpr std::ptrdiff_t  = 0x7AAE8C0; // 
                constexpr std::ptrdiff_t \9$�-
                �/ = 0x2B544CD0; // 
                constexpr std::ptrdiff_t  = 0x7AAEA30; // 
                constexpr std::ptrdiff_t �m��u��Lp��]��>wO��:uk��Yo^�T�(id�g�aN.����(!B�!�̨@   � = 0x2B544D50; // 
                constexpr std::ptrdiff_t  = 0x2B544D90; // 
                constexpr std::ptrdiff_t NoteamDot.AddClass('hidden');
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
                constexpr std::ptrdiff_t  = 0x2B544E10; // 
                constexpr std::ptrdiff_t item-tile__equipped__radiodot--filled');
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
                constexpr std::ptrdiff_t  = 0x7AAEAD0; // 
                constexpr std::ptrdiff_t ��96���x��K�R�?[a|c��S��.-��wf��`8�Pz��G�S���n�9�gx_U|~��:�3��oH*�Z]�}q���(�!�z��O�˸�x".��~C>}~���x-�]�>���Ӆ(c&��,�|9 = 0x2B544ED0; // 
                constexpr std::ptrdiff_t  = 0x7AAEFF0; // 
                constexpr std::ptrdiff_t en', !InventoryAPI.ItemIsInFavorites('ct', id));
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
                constexpr std::ptrdiff_t  = 0x2B544F90; // 
                constexpr std::ptrdiff_t t', id));
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
                constexpr std::ptrdiff_t  = 0x2B545010; // 
                constexpr std::ptrdiff_t uipIcon(true, team);
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
                constexpr std::ptrdiff_t  = 0x2B545090; // 
                constexpr std::ptrdiff_t , team);
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
                constexpr std::ptrdiff_t  = 0x2B545110; // 
                constexpr std::ptrdiff_t initionKey(id, 'flexible_loadout_group');
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
                constexpr std::ptrdiff_t  = 0x7AB0320; // 
                constexpr std::ptrdiff_t %����K\P3Au$<�4p��q2�c~)�� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x634D830; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7AB09E0; // 
                constexpr std::ptrdiff_t Ƞj* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x634DA10; // 
                constexpr std::ptrdiff_t  = 0x634DA50; // 
                constexpr std::ptrdiff_t  = 0x634DA90; // 
                constexpr std::ptrdiff_t  = 0x634DAD0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t csgo_simple.vfx = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t @B�L* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x3F800000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x634DE10; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t ��j* = 0x10000; // 
                constexpr std::ptrdiff_t  = 0x20000; // 
                constexpr std::ptrdiff_t �j* = 0xFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x634DEA0; // 
                constexpr std::ptrdiff_t  = 0x55555555; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349040; // 
                constexpr std::ptrdiff_t �j* = 0x6349110; // 
                constexpr std::ptrdiff_t  = 0x55555555; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x55555555; // 
                constexpr std::ptrdiff_t  = 0x63459B0; // 
                constexpr std::ptrdiff_t  = 0x76AAAC8; // 
                constexpr std::ptrdiff_t  = 0x6345A60; // 
                constexpr std::ptrdiff_t ���� = 0x6345AA0; // 
                constexpr std::ptrdiff_t  = 0x6345AE0; // 
                constexpr std::ptrdiff_t  = 0x6345B20; // 
                constexpr std::ptrdiff_t  = 0x6345B90; // 
                constexpr std::ptrdiff_t �[4* = 0x6345BD0; // 
                constexpr std::ptrdiff_t ثj* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6345C30; // 
                constexpr std::ptrdiff_t  = 0x6345C70; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x75426563; // 
                constexpr std::ptrdiff_t  = 0xFFFFFF00; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x72; // 
                constexpr std::ptrdiff_t  = 0x6675426D; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3; // 
                constexpr std::ptrdiff_t  = 0xCE6E6B28; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6E695465; // 
                constexpr std::ptrdiff_t  = 0x6F6E6749; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0xC4653601; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x66667542; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFF; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x4; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7810D60; // 
                constexpr std::ptrdiff_t  = 0x7811F60; // 
                constexpr std::ptrdiff_t  = 0x20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63DAB20; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t � = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7810300; // 
                constexpr std::ptrdiff_t  = 0x78118A0; // 
                constexpr std::ptrdiff_t  = 0x20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63D8BE0; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t � = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xA0000000; // 
                constexpr std::ptrdiff_t Z�(.�� = 0xB; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x7810540; // 
                constexpr std::ptrdiff_t  = 0x7810340; // 
                constexpr std::ptrdiff_t  = 0x20; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x13BBBD2E; // 
                constexpr std::ptrdiff_t  = 0x63D8C80; // 
                constexpr std::ptrdiff_t  = 0xB; // 
                constexpr std::ptrdiff_t  = 0x7AA4E90; // 
                constexpr std::ptrdiff_t ���A�<�;��,B�.I�t8�M�F�(�d��r�+�m��MS|z&�j_`�$md&�Έ�sF�fi)��N�����Q3�>�tC�p��,���k_O�7|�ם�<w��o = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5030; // 
                constexpr std::ptrdiff_t 0�j* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x97EFD278; // 
                constexpr std::ptrdiff_t �4* = 0x6341ED0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA50A0; // 
                constexpr std::ptrdiff_t :�x���3k��"�^�_X�y���s���?�_i=�x}�uRh���6i<�?����)Q�1���uD�΂��M = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA51F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x7AA5370; // 
                constexpr std::ptrdiff_t ��Ak�HhJ�D^�'�kt@�ɢxL�{;����]�։�9��KqY�|�n�(_gW�`}�@5=]cB�3Nx��!xo�_�z�o��s6L�*�6$;����![���h�v�U,�#�M�w4-s,����Wf���uG����~�"��C�4��kG�X}�������1������`u��p�O��h��[�](����6Z���p]#�3C = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x7AA54E0; // 
                constexpr std::ptrdiff_t Mc� = 0x7AA5520; // 
                constexpr std::ptrdiff_t ��j* = 0x6345090; // 
                constexpr std::ptrdiff_t ��j* = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x7AA55A0; // 
                constexpr std::ptrdiff_t �M�DB< ��Ӵ�?1��� ��M��L��a��fk��.t�6xM�R�}�t�q��%�� = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x7AA56F0; // 
                constexpr std::ptrdiff_t Į��ܾ�V��F�?y��!Q��&ω@8p��ir�9ƍ�0e�]���i��V������DZ��Dt�U���a�Lhk"6V�AyNHᐚ��2<«�eܰ{:X���B��
                �����������$�M�����0a�y,�] H�����]"I�H�N���]��C�|�Q~-䂡sj�H���
                �e��=�qU�i�!B��!B�B�A�	h�&@ = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5850; // 
                constexpr std::ptrdiff_t ��|�|�`\�f�0�b��:����uis3��1�U1���b��se4�uކ�/��������~��Ρ�������{�����������l��U���Ϸ������x�{ȡ���)����.G�n�����Sn:�>�r�}?�_y����<�����)�H�b���������X���S¦�c��ȋ!�r���>�u��x���Rٜ�2���TV]�O��_ϯǽg��xޑHG䏿�`���y��튫�������y����{�z���������W>��s3ɲXgn�	.<*z�����j2�*�خ��ӊŬ������߇IO�E}�y.�*՝+<��m�����E/��8$��+�u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA59C0; // 
                constexpr std::ptrdiff_t �u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x6345370; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5A60; // 
                constexpr std::ptrdiff_t ����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J = 0x6345490; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA5F80; // 
                constexpr std::ptrdiff_t 0�j* = 0x6345590; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6345620; // 
                constexpr std::ptrdiff_t 0�j* = 0x7AA72B0; // 
                constexpr std::ptrdiff_t -��?_�Q�z4����������g���2�	�j�f�"|ָ����Tq?�>+Ô5Fd���
                l�#xV�S���
                ��@F���F@�£��_?��_ B0TZ = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6345790; // 
                constexpr std::ptrdiff_t ��j* = 0x6345860; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x7AA7970; // 
                constexpr std::ptrdiff_t 0�j* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6345900; // 
                constexpr std::ptrdiff_t ��j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x63459E0; // 
                constexpr std::ptrdiff_t Ho��� = 0x6345A20; // 
                constexpr std::ptrdiff_t  = 0x7AA8C70; // 
                constexpr std::ptrdiff_t K0�bhc�i9�dY�k��!���d�F�@}k�N%9�Z��Hh�>�A�m�H����-נ���ɚi��<~�VZ�BC^�ܭ���A[�5�)�h�B�V擑BX�<$g=�����sąu5e��5�O�$34���>�@uen�IlZ�����j�9k-�[� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6345B20; // 
                constexpr std::ptrdiff_t  = 0x63490F0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6345BB0; // 
                constexpr std::ptrdiff_t  = 0x63493D0; // 
                constexpr std::ptrdiff_t �V��� = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6349420; // 
                constexpr std::ptrdiff_t P�4* = 0x0; // 
                constexpr std::ptrdiff_t  = 0x6349470; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x63495E0; // 
                constexpr std::ptrdiff_t p�j* = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6345E90; // 
                constexpr std::ptrdiff_t ��j* = 0x6349650; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x63497A0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6349920; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349A90; // 
                constexpr std::ptrdiff_t  = 0x6349AD0; // 
                constexpr std::ptrdiff_t ��j* = 0x2B13D470; // 
                constexpr std::ptrdiff_t 0�j* = 0x0; // 
                constexpr std::ptrdiff_t p�j* = 0x6349B50; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349CA0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t ��j* = 0x6349E00; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t 0�j* = 0x6349F70; // 
                constexpr std::ptrdiff_t ��4* = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            namespace PF_NOISE_MODIFIER_NONE {
            }
            // Parent: None
            // Field count: 0
            namespace _ {
            }
            // Parent: None
            // Field count: 146
            namespace _ {
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x68B2600; // 
                constexpr std::ptrdiff_t  = 0x2; // 
                constexpr std::ptrdiff_t  = 0x41C00000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
                constexpr std::ptrdiff_t  = 0x76A5630; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFE; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x3F000000; // 
                constexpr std::ptrdiff_t  = 0x3F000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
                constexpr std::ptrdiff_t  = 0x76A5910; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFE; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
                constexpr std::ptrdiff_t  = 0x76A5A90; // 
                constexpr std::ptrdiff_t  = 0x6; // 
                constexpr std::ptrdiff_t  = 0xFFFFFFFE; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x41200000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            namespace PF_NOISE_MODIFIER_NONE {
            }
        }
    }
}
