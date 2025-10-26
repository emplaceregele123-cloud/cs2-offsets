// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-26 10:47:39.226903900 UTC

#![allow(non_upper_case_globals, non_camel_case_types, non_snake_case, unused)]

pub mod cs2_dumper {
    pub mod schemas {
        // Module: client.dll
        // Class count: 83
        // Enum count: 5
        pub mod client_dll {
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod GeneratedTextureHandle_t {
                pub const m_strBitmapName: usize = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputContainer_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nCompositeMaterialInputContainerSourceType: usize = 0x4; // CompositeMaterialInputContainerSourceType_t
                pub const m_strSpecificContainerMaterial: usize = 0x8; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strAttrName: usize = 0xE8; // CUtlString
                pub const m_strAlias: usize = 0xF0; // CUtlString
                pub const m_vecLooseVariables: usize = 0xF8; // CUtlVector<CompositeMaterialInputLooseVariable_t>
                pub const m_strAttrNameForVar: usize = 0x110; // CUtlString
                pub const m_bExposeExternally: usize = 0x118; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialAssemblyProcedure_t {
                pub const m_vecCompMatIncludes: usize = 0x0; // CUtlVector<CResourceNameTyped<CWeakHandle<InfoForResourceTypeCCompositeMaterialKit>>>
                pub const m_vecMatchFilters: usize = 0x18; // CUtlVector<CompositeMaterialMatchFilter_t>
                pub const m_vecCompositeInputContainers: usize = 0x30; // CUtlVector<CompositeMaterialInputContainer_t>
                pub const m_vecPropertyMutators: usize = 0x48; // CUtlVector<CompMatPropertyMutator_t>
            }
            // Parent: None
            // Field count: 37
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialInputLooseVariable_t {
                pub const m_strName: usize = 0x0; // CUtlString
                pub const m_bExposeExternally: usize = 0x8; // bool
                pub const m_strExposedFriendlyName: usize = 0x10; // CUtlString
                pub const m_strExposedFriendlyGroupName: usize = 0x18; // CUtlString
                pub const m_bExposedVariableIsFixedRange: usize = 0x20; // bool
                pub const m_strExposedVisibleWhenTrue: usize = 0x28; // CUtlString
                pub const m_strExposedHiddenWhenTrue: usize = 0x30; // CUtlString
                pub const m_strExposedValueList: usize = 0x38; // CUtlString
                pub const m_nVariableType: usize = 0x40; // CompositeMaterialInputLooseVariableType_t
                pub const m_bValueBoolean: usize = 0x44; // bool
                pub const m_nValueIntX: usize = 0x48; // int32
                pub const m_nValueIntY: usize = 0x4C; // int32
                pub const m_nValueIntZ: usize = 0x50; // int32
                pub const m_nValueIntW: usize = 0x54; // int32
                pub const m_bHasFloatBounds: usize = 0x58; // bool
                pub const m_flValueFloatX: usize = 0x5C; // float32
                pub const m_flValueFloatX_Min: usize = 0x60; // float32
                pub const m_flValueFloatX_Max: usize = 0x64; // float32
                pub const m_flValueFloatY: usize = 0x68; // float32
                pub const m_flValueFloatY_Min: usize = 0x6C; // float32
                pub const m_flValueFloatY_Max: usize = 0x70; // float32
                pub const m_flValueFloatZ: usize = 0x74; // float32
                pub const m_flValueFloatZ_Min: usize = 0x78; // float32
                pub const m_flValueFloatZ_Max: usize = 0x7C; // float32
                pub const m_flValueFloatW: usize = 0x80; // float32
                pub const m_flValueFloatW_Min: usize = 0x84; // float32
                pub const m_flValueFloatW_Max: usize = 0x88; // float32
                pub const m_cValueColor4: usize = 0x8C; // Color
                pub const m_nValueSystemVar: usize = 0x90; // CompositeMaterialVarSystemVar_t
                pub const m_strResourceMaterial: usize = 0x98; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeIMaterial2>>
                pub const m_strTextureContentAssetPath: usize = 0x178; // CUtlString
                pub const m_strTextureRuntimeResourcePath: usize = 0x180; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCTextureBase>>
                pub const m_strTextureCompilationVtexTemplate: usize = 0x260; // CUtlString
                pub const m_nTextureType: usize = 0x268; // CompositeMaterialInputTextureType_t
                pub const m_strString: usize = 0x270; // CUtlString
                pub const m_strPanoramaPanelPath: usize = 0x278; // CUtlString
                pub const m_nPanoramaRenderRes: usize = 0x280; // int32
            }
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CNmEventConsumerHudModelArmsAttributes {
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_barn_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
                pub const orbit_distance: usize = 0x1C; // float32
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_map_t {
                pub const map_name: usize = 0x0; // CUtlString
                pub const map_rotation: usize = 0x8; // float32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_fill_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 5
            pub mod CInterpolatedValue {
                pub const m_flStartTime: usize = 0x0; // float32
                pub const m_flEndTime: usize = 0x4; // float32
                pub const m_flStartValue: usize = 0x8; // float32
                pub const m_flEndValue: usize = 0xC; // float32
                pub const m_nInterpType: usize = 0x10; // int32
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_item_t {
                pub const position: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const pose_sequence: usize = 0x18; // CUtlString
            }
            // Parent: None
            // Field count: 4
            pub mod C_Chicken_GraphController {
                pub const m_paramActivity: usize = 0x268; // CAnimGraphParamRef<char*>
                pub const m_paramEndActivityImmediately: usize = 0x290; // CAnimGraphParamRef<bool>
                pub const m_paramSnapToSquatting: usize = 0x2B0; // CAnimGraphParamRef<bool>
                pub const m_sActivityFinished: usize = 0x2D0; // CAnimGraphTagRef
            }
            // Parent: None
            // Field count: 2
            pub mod TimedEvent {
                pub const m_TimeBetweenEvents: usize = 0x0; // float32
                pub const m_fNextEvent: usize = 0x4; // float32
            }
            // Parent: None
            // Field count: 13
            pub mod CFlashlightEffect {
                pub const m_bIsOn: usize = 0x10; // bool
                pub const m_bMuzzleFlashEnabled: usize = 0x20; // bool
                pub const m_flMuzzleFlashBrightness: usize = 0x24; // float32
                pub const m_quatMuzzleFlashOrientation: usize = 0x30; // Quaternion
                pub const m_vecMuzzleFlashOrigin: usize = 0x40; // Vector
                pub const m_flFov: usize = 0x4C; // float32
                pub const m_flFarZ: usize = 0x50; // float32
                pub const m_flLinearAtten: usize = 0x54; // float32
                pub const m_bCastsShadows: usize = 0x58; // bool
                pub const m_flCurrentPullBackDist: usize = 0x5C; // float32
                pub const m_FlashlightTexture: usize = 0x60; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_MuzzleFlashTexture: usize = 0x68; // CStrongHandle<InfoForResourceTypeCTextureBase>
                pub const m_textureName: usize = 0x70; // char[64]
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_camera_t {
                pub const angle: usize = 0x0; // QAngle
                pub const fov: usize = 0xC; // float32
                pub const znear: usize = 0x10; // float32
                pub const zfar: usize = 0x14; // float32
                pub const target: usize = 0x18; // Vector
                pub const target_nudge: usize = 0x24; // Vector
                pub const orbit_distance: usize = 0x30; // float32
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
            pub mod CInventoryImageData {
                pub const m_nNodeType: usize = 0x0; // InventoryNodeType_t
                pub const name: usize = 0x8; // CUtlString
                pub const inventory_image_data: usize = 0x10; // inv_image_data_t
            }
            // Parent: None
            // Field count: 8
            pub mod C_CSGO_PreviewPlayer_GraphController {
                pub const m_pszCharacterMode: usize = 0x268; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszTeamPreviewVariant: usize = 0x290; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszTeamPreviewPosition: usize = 0x2B8; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszEndOfMatchCelebration: usize = 0x2E0; // CAnimGraphParamOptionalRef<char*>
                pub const m_nTeamPreviewRandom: usize = 0x308; // CAnimGraphParamOptionalRef<int32>
                pub const m_pszWeaponState: usize = 0x328; // CAnimGraphParamOptionalRef<char*>
                pub const m_pszWeaponType: usize = 0x350; // CAnimGraphParamOptionalRef<char*>
                pub const m_bCT: usize = 0x378; // CAnimGraphParamOptionalRef<bool>
            }
            // Parent: None
            // Field count: 2
            pub mod C_CommandContext {
                pub const needsprocessing: usize = 0x0; // bool
                pub const command_number: usize = 0xA0; // int32
            }
            // Parent: None
            // Field count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CompositeMaterialEditorPoint_t {
                pub const m_ModelName: usize = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_nSequenceIndex: usize = 0xE0; // int32
                pub const m_flCycle: usize = 0xE4; // float32
                pub const m_KVModelStateChoices: usize = 0xE8; // KeyValues3
                pub const m_bEnableChildModel: usize = 0xF8; // bool
                pub const m_ChildModelName: usize = 0x100; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                pub const m_vecCompositeMaterialAssemblyProcedures: usize = 0x1E0; // CUtlVector<CompositeMaterialAssemblyProcedure_t>
                pub const m_vecCompositeMaterials: usize = 0x1F8; // CUtlVector<CompositeMaterial_t>
            }
            // Parent: None
            // Field count: 0
            pub mod CPlayerSprayDecalRenderHelper {
            }
            // Parent: None
            // Field count: 13
            pub mod C_IronSightController {
                pub const m_bIronSightAvailable: usize = 0x10; // bool
                pub const m_flIronSightAmount: usize = 0x14; // float32
                pub const m_flIronSightAmountGained: usize = 0x18; // float32
                pub const m_flIronSightAmountBiased: usize = 0x1C; // float32
                pub const m_flIronSightAmount_Interpolated: usize = 0x20; // float32
                pub const m_flIronSightAmountGained_Interpolated: usize = 0x24; // float32
                pub const m_flIronSightAmountBiased_Interpolated: usize = 0x28; // float32
                pub const m_flInterpolationLastUpdated: usize = 0x2C; // float32
                pub const m_angDeltaAverage: usize = 0x30; // QAngle[8]
                pub const m_angViewLast: usize = 0x90; // QAngle
                pub const m_vecDotCoords: usize = 0x9C; // Vector2D
                pub const m_flFiringInaccuracyExtraWidthMultiplier: usize = 0xA4; // float32
                pub const m_flSpeedRatio: usize = 0xA8; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatMutatorCondition_t {
                pub const m_nMutatorCondition: usize = 0x0; // CompMatPropertyMutatorConditionType_t
                pub const m_strMutatorConditionContainerName: usize = 0x8; // CUtlString
                pub const m_strMutatorConditionContainerVarName: usize = 0x10; // CUtlString
                pub const m_strMutatorConditionContainerVarValue: usize = 0x18; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x20; // bool
            }
            // Parent: None
            // Field count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_data_t {
                pub const map: usize = 0x0; // inv_image_map_t
                pub const item: usize = 0x10; // inv_image_item_t
                pub const camera: usize = 0x30; // inv_image_camera_t
                pub const lightsun: usize = 0x64; // inv_image_light_sun_t
                pub const lightfill: usize = 0x80; // inv_image_light_fill_t
                pub const light0: usize = 0x9C; // inv_image_light_barn_t
                pub const light1: usize = 0xBC; // inv_image_light_barn_t
            }
            // Parent: None
            // Field count: 29
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompMatPropertyMutator_t {
                pub const m_bEnabled: usize = 0x0; // bool
                pub const m_nMutatorCommandType: usize = 0x4; // CompMatPropertyMutatorType_t
                pub const m_strInitWith_Container: usize = 0x8; // CUtlString
                pub const m_strCopyProperty_InputContainerSrc: usize = 0x10; // CUtlString
                pub const m_strCopyProperty_InputContainerProperty: usize = 0x18; // CUtlString
                pub const m_strCopyProperty_TargetProperty: usize = 0x20; // CUtlString
                pub const m_strRandomRollInputVars_SeedInputVar: usize = 0x28; // CUtlString
                pub const m_vecRandomRollInputVars_InputVarsToRoll: usize = 0x30; // CUtlVector<CUtlString>
                pub const m_strCopyMatchingKeys_InputContainerSrc: usize = 0x48; // CUtlString
                pub const m_strCopyKeysWithSuffix_InputContainerSrc: usize = 0x50; // CUtlString
                pub const m_strCopyKeysWithSuffix_FindSuffix: usize = 0x58; // CUtlString
                pub const m_strCopyKeysWithSuffix_ReplaceSuffix: usize = 0x60; // CUtlString
                pub const m_nSetValue_Value: usize = 0x68; // CompositeMaterialInputLooseVariable_t
                pub const m_strGenerateTexture_TargetParam: usize = 0x2F0; // CUtlString
                pub const m_strGenerateTexture_InitialContainer: usize = 0x2F8; // CUtlString
                pub const m_nResolution: usize = 0x300; // int32
                pub const m_bIsScratchTarget: usize = 0x304; // bool
                pub const m_strCompressionFormat: usize = 0x308; // CUtlString
                pub const m_bSplatDebugInfo: usize = 0x310; // bool
                pub const m_bCaptureInRenderDoc: usize = 0x311; // bool
                pub const m_vecTexGenInstructions: usize = 0x318; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_vecConditionalMutators: usize = 0x330; // CUtlVector<CompMatPropertyMutator_t>
                pub const m_strPopInputQueue_Container: usize = 0x348; // CUtlString
                pub const m_strDrawText_InputContainerSrc: usize = 0x350; // CUtlString
                pub const m_strDrawText_InputContainerProperty: usize = 0x358; // CUtlString
                pub const m_vecDrawText_Position: usize = 0x360; // Vector2D
                pub const m_colDrawText_Color: usize = 0x368; // Color
                pub const m_strDrawText_Font: usize = 0x370; // CUtlString
                pub const m_vecConditions: usize = 0x378; // CUtlVector<CompMatMutatorCondition_t>
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod CCompositeMaterialEditorDoc {
                pub const m_nVersion: usize = 0x8; // int32
                pub const m_Points: usize = 0x10; // CUtlVector<CompositeMaterialEditorPoint_t>
                pub const m_KVthumbnail: usize = 0x28; // KeyValues3
            }
            // Parent: None
            // Field count: 13
            pub mod CClientAlphaProperty {
                pub const m_nRenderFX: usize = 0x10; // uint8
                pub const m_nRenderMode: usize = 0x11; // uint8
                pub const m_bAlphaOverride: usize = 0x0; // bitfield:1
                pub const m_bShadowAlphaOverride: usize = 0x0; // bitfield:1
                pub const m_nReserved: usize = 0x0; // bitfield:6
                pub const m_nAlpha: usize = 0x13; // uint8
                pub const m_nDesyncOffset: usize = 0x14; // uint16
                pub const m_nReserved2: usize = 0x16; // uint16
                pub const m_nDistFadeStart: usize = 0x18; // uint16
                pub const m_nDistFadeEnd: usize = 0x1A; // uint16
                pub const m_flFadeScale: usize = 0x1C; // float32
                pub const m_flRenderFxStartTime: usize = 0x20; // GameTime_t
                pub const m_flRenderFxDuration: usize = 0x24; // float32
            }
            // Parent: None
            // Field count: 43
            pub mod CGlobalLightBase {
                pub const m_bSpotLight: usize = 0x10; // bool
                pub const m_SpotLightOrigin: usize = 0x14; // Vector
                pub const m_SpotLightAngles: usize = 0x20; // QAngle
                pub const m_ShadowDirection: usize = 0x2C; // Vector
                pub const m_AmbientDirection: usize = 0x38; // Vector
                pub const m_SpecularDirection: usize = 0x44; // Vector
                pub const m_InspectorSpecularDirection: usize = 0x50; // Vector
                pub const m_flSpecularPower: usize = 0x5C; // float32
                pub const m_flSpecularIndependence: usize = 0x60; // float32
                pub const m_SpecularColor: usize = 0x64; // Color
                pub const m_bStartDisabled: usize = 0x68; // bool
                pub const m_bEnabled: usize = 0x69; // bool
                pub const m_LightColor: usize = 0x6A; // Color
                pub const m_AmbientColor1: usize = 0x6E; // Color
                pub const m_AmbientColor2: usize = 0x72; // Color
                pub const m_AmbientColor3: usize = 0x76; // Color
                pub const m_flSunDistance: usize = 0x7C; // float32
                pub const m_flFOV: usize = 0x80; // float32
                pub const m_flNearZ: usize = 0x84; // float32
                pub const m_flFarZ: usize = 0x88; // float32
                pub const m_bEnableShadows: usize = 0x8C; // bool
                pub const m_bOldEnableShadows: usize = 0x8D; // bool
                pub const m_bBackgroundClearNotRequired: usize = 0x8E; // bool
                pub const m_flCloudScale: usize = 0x90; // float32
                pub const m_flCloud1Speed: usize = 0x94; // float32
                pub const m_flCloud1Direction: usize = 0x98; // float32
                pub const m_flCloud2Speed: usize = 0x9C; // float32
                pub const m_flCloud2Direction: usize = 0xA0; // float32
                pub const m_flAmbientScale1: usize = 0xB0; // float32
                pub const m_flAmbientScale2: usize = 0xB4; // float32
                pub const m_flGroundScale: usize = 0xB8; // float32
                pub const m_flLightScale: usize = 0xBC; // float32
                pub const m_flFoWDarkness: usize = 0xC0; // float32
                pub const m_bEnableSeparateSkyboxFog: usize = 0xC4; // bool
                pub const m_vFowColor: usize = 0xC8; // Vector
                pub const m_ViewOrigin: usize = 0xD4; // Vector
                pub const m_ViewAngles: usize = 0xE0; // QAngle
                pub const m_flViewFoV: usize = 0xEC; // float32
                pub const m_WorldPoints: usize = 0xF0; // Vector[8]
                pub const m_vFogOffsetLayer0: usize = 0x4A8; // Vector2D
                pub const m_vFogOffsetLayer1: usize = 0x4B0; // Vector2D
                pub const m_hEnvWind: usize = 0x4B8; // CHandle<C_BaseEntity>
                pub const m_hEnvSky: usize = 0x4BC; // CHandle<C_BaseEntity>
            }
            // Parent: None
            // Field count: 0
            pub mod IClientAlphaProperty {
            }
            // Parent: None
            // Field count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            pub mod inv_image_light_sun_t {
                pub const color: usize = 0x0; // Vector
                pub const angle: usize = 0xC; // QAngle
                pub const brightness: usize = 0x18; // float32
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyElementNameFn
            pub mod CompositeMaterialMatchFilter_t {
                pub const m_nCompositeMaterialMatchFilterType: usize = 0x0; // CompositeMaterialMatchFilterType_t
                pub const m_strMatchFilter: usize = 0x8; // CUtlString
                pub const m_strMatchValue: usize = 0x10; // CUtlString
                pub const m_bPassWhenTrue: usize = 0x18; // bool
            }
            // Parent: None
            // Field count: 4
            //
            // Metadata:
            // MPropertyElementNameFn
            pub mod CompositeMaterial_t {
                pub const m_TargetKVs: usize = 0x8; // KeyValues3
                pub const m_PreGenerationKVs: usize = 0x18; // KeyValues3
                pub const m_FinalKVs: usize = 0x58; // KeyValues3
                pub const m_vecGeneratedTextures: usize = 0x80; // CUtlVector<GeneratedTextureHandle_t>
            }
            // Parent: None
            // Field count: 183
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // CUtlVector<int32>
                pub const �p�f�: usize = 0xF4345D70; // 
                pub const �͖f�: usize = 0x15EF000; // 
                pub const �t�f�: usize = 0x669B76B8; // 
                pub const �p�f�: usize = 0x1FFDF40; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // int32
                pub const �p�f�: usize = 0x8; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // GameTime_t
                pub const �p�f�: usize = 0x20; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // int32
                pub const �p�f�: usize = 0x64; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �f4��: usize = 0x669B76B8; // 
                pub const �p�f�: usize = 0x1FFE5A0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const ��4��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4397340; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF4396540; // 
                pub const @�p*: usize = 0x63077E0; // �$�*
                pub const : usize = 0x6F746F; // 
                pub const : usize = 0x616C7073; // 
                pub const : usize = 0x656C6269; // 
                pub const : usize = 0x656C776F; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x70696365; // 
                pub const : usize = 0x656C776F; // 
                pub const : usize = 0x746E756F; // 
                pub const : usize = 0x65757169; // 
                pub const : usize = 0x7473; // 
                pub const : usize = 0x65736552; // 
                pub const : usize = 0x6E6F7073; // 
                pub const : usize = 0x65736552; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x692E7400; // 
                pub const : usize = 0x65736552; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6D6F7473; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x50656D69; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x50656D69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x6E756F63; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x2E6E6F69; // 
                pub const : usize = 0x6F4C676E; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x2E6E6F69; // 
                pub const : usize = 0x6F4C676E; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x2E6E6F69; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x54414345; // 
                pub const : usize = 0x426F5474; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x444554; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x5045445F; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x65744965; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x726576; // 
                pub const : usize = 0x616C7073; // 
                pub const : usize = 0x65747562; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x69747563; // 
                pub const : usize = 0x6D69546B; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x7A696D6F; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x64616552; // 
                pub const : usize = 0x6773; // 
                pub const : usize = 0x64617254; // 
                pub const : usize = 0x72657672; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x65767265; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x53776569; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x52776569; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x45776569; // 
                pub const : usize = 0x63696669; // 
                pub const : usize = 0x49776569; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x526D6574; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x6552616D; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x45445F65; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x747361; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x64; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x6C754D79; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x65747375; // 
                pub const : usize = 0x646E61; // 
                pub const : usize = 0x73616364; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63414950; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x756F6E6E; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70737361; // 
                pub const : usize = 0x737574; // 
                pub const : usize = 0x62755367; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x52656764; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6D657449; // 
                pub const �p�f�: usize = 0x20; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AB8E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const ��:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43AA4E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AB020; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AC210; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43A3930; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA1E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43A9AF0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA750; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x2010D00; // 
                pub const : usize = 0x2010080; // 
                pub const : usize = 0x2026400; // 
                pub const : usize = 0x2020000; // 
                pub const : usize = 0x2030100; // 
                pub const : usize = 0x20300C0; // 
                pub const : usize = 0x2040140; // 
                pub const : usize = 0x20400D0; // 
            }
            // Parent: None
            // Field count: 169
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // float32
                pub const �p�f�: usize = 0x20; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // float32
                pub const �p�f�: usize = 0x1E; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // uint16
                pub const �p�f�: usize = 0xF43466E0; // 
                pub const �͖f�: usize = 0x15EF000; // 
                pub const �t�f�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF434A780; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43962E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const econ_gcmessages.proto: usize = 0x2B41A038; // 
                pub const : usize = 0x656C006E; // 
                pub const : usize = 0x616D2E73; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x756E2E73; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x65722E73; // 
                pub const : usize = 0x6E6F7073; // 
                pub const : usize = 0x65736552; // 
                pub const : usize = 0x7473; // 
                pub const : usize = 0x65757169; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x632E7473; // 
                pub const : usize = 0x7372656B; // 
                pub const : usize = 0x692E7473; // 
                pub const : usize = 0x7372656B; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x50656D69; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x6D6F7473; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x6E756F63; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x2E6E0065; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45544143; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45544143; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x726576; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x426F5474; // 
                pub const : usize = 0x54414345; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x444554; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x5045445F; // 
                pub const : usize = 0x65744965; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x6E; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65747562; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x6D69546B; // 
                pub const : usize = 0x69747563; // 
                pub const : usize = 0x7A696D6F; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x64616552; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x64617254; // 
                pub const : usize = 0x6773; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x72657672; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x65767265; // 
                pub const : usize = 0x53776569; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x52776569; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x45776569; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x49776569; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x63696669; // 
                pub const : usize = 0x526D6574; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x6552616D; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45445F65; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x747361; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x64; // 
                pub const : usize = 0x6C754D79; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x65747375; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616364; // 
                pub const : usize = 0x646E61; // 
                pub const : usize = 0x63414950; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x756F6E6E; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x70737361; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x62755367; // 
                pub const : usize = 0x737574; // 
                pub const : usize = 0x52656764; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x6D657449; // 
                pub const : usize = 0x0; // 
                pub const �Ζf�: usize = 0x15EF000; // 
                pub const : usize = 0x669B74F8; // CHandle<CBaseEntity>
                pub const �p�f�: usize = 0xF43AA040; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA0B0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43ABC60; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA3C0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA600; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const 09:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43AC440; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43A9D70; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43A9DE0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const : usize = 0x2000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xCE762278; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x1; // 
            }
            // Parent: None
            // Field count: 166
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // float32
                pub const �p�f�: usize = 0x1E; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // uint16
                pub const �p�f�: usize = 0xF43466E0; // 
                pub const �͖f�: usize = 0x15EF000; // 
                pub const �t�f�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF434A780; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43962E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const econ_gcmessages.proto: usize = 0x2B41A038; // 
                pub const : usize = 0x656C006E; // 
                pub const : usize = 0x616D2E73; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x756E2E73; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x65722E73; // 
                pub const : usize = 0x6E6F7073; // 
                pub const : usize = 0x65736552; // 
                pub const : usize = 0x7473; // 
                pub const : usize = 0x65757169; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x632E7473; // 
                pub const : usize = 0x7372656B; // 
                pub const : usize = 0x692E7473; // 
                pub const : usize = 0x7372656B; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x50656D69; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x6D6F7473; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x6E756F63; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x2E6E0065; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45544143; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45544143; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x726576; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x426F5474; // 
                pub const : usize = 0x54414345; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x444554; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x5045445F; // 
                pub const : usize = 0x65744965; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x6E; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65747562; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x6D69546B; // 
                pub const : usize = 0x69747563; // 
                pub const : usize = 0x7A696D6F; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x64616552; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x64617254; // 
                pub const : usize = 0x6773; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x72657672; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x65767265; // 
                pub const : usize = 0x53776569; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x52776569; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x45776569; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x49776569; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x63696669; // 
                pub const : usize = 0x526D6574; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x6552616D; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45445F65; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x747361; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x64; // 
                pub const : usize = 0x6C754D79; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x65747375; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616364; // 
                pub const : usize = 0x646E61; // 
                pub const : usize = 0x63414950; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x756F6E6E; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x70737361; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x62755367; // 
                pub const : usize = 0x737574; // 
                pub const : usize = 0x52656764; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x6D657449; // 
                pub const : usize = 0x0; // 
                pub const �Ζf�: usize = 0x15EF000; // 
                pub const : usize = 0x669B74F8; // CHandle<CBaseEntity>
                pub const �p�f�: usize = 0xF43AA040; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA0B0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43ABC60; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA3C0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA600; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const 09:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43AC440; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43A9D70; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43A9DE0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const : usize = 0x2000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xCE762278; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x1; // 
            }
            // Parent: None
            // Field count: 163
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // uint16
                pub const �p�f�: usize = 0xF43466E0; // 
                pub const �͖f�: usize = 0x15EF000; // 
                pub const �t�f�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF434A780; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43962E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const econ_gcmessages.proto: usize = 0x2B41A038; // 
                pub const : usize = 0x656C006E; // 
                pub const : usize = 0x616D2E73; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x756E2E73; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x65722E73; // 
                pub const : usize = 0x6E6F7073; // 
                pub const : usize = 0x65736552; // 
                pub const : usize = 0x7473; // 
                pub const : usize = 0x65757169; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x632E7473; // 
                pub const : usize = 0x7372656B; // 
                pub const : usize = 0x692E7473; // 
                pub const : usize = 0x7372656B; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x50656D69; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x6D6F7473; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x65766974; // 
                pub const : usize = 0x6E756F63; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x2E6E0065; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45544143; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45544143; // 
                pub const : usize = 0x74617A69; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x726576; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x636F536F; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x426F5474; // 
                pub const : usize = 0x54414345; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4445; // 
                pub const : usize = 0x496F5474; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x52504544; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x444554; // 
                pub const : usize = 0x74656B63; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x5045445F; // 
                pub const : usize = 0x65744965; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x52746669; // 
                pub const : usize = 0x6E; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65747562; // 
                pub const : usize = 0x694B746E; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x6D69546B; // 
                pub const : usize = 0x69747563; // 
                pub const : usize = 0x7A696D6F; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x74696E49; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x64616552; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x64617254; // 
                pub const : usize = 0x6773; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x72657672; // 
                pub const : usize = 0x6573776F; // 
                pub const : usize = 0x65767265; // 
                pub const : usize = 0x53776569; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x52776569; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x45776569; // 
                pub const : usize = 0x6F697461; // 
                pub const : usize = 0x49776569; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x63696669; // 
                pub const : usize = 0x526D6574; // 
                pub const : usize = 0x6573; // 
                pub const : usize = 0x6552616D; // 
                pub const : usize = 0x74736575; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x44455441; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x4D455F6B; // 
                pub const : usize = 0x45445F65; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x736E6F70; // 
                pub const : usize = 0x73616863; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x747361; // 
                pub const : usize = 0x6F576465; // 
                pub const : usize = 0x64; // 
                pub const : usize = 0x6C754D79; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x65747375; // 
                pub const : usize = 0x65736E; // 
                pub const : usize = 0x73616364; // 
                pub const : usize = 0x646E61; // 
                pub const : usize = 0x63414950; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x756F6E6E; // 
                pub const : usize = 0x65736E6F; // 
                pub const : usize = 0x70737361; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x62755367; // 
                pub const : usize = 0x737574; // 
                pub const : usize = 0x52656764; // 
                pub const : usize = 0x6E6F69; // 
                pub const : usize = 0x6D657449; // 
                pub const : usize = 0x0; // 
                pub const �Ζf�: usize = 0x15EF000; // 
                pub const : usize = 0x669B74F8; // CHandle<CBaseEntity>
                pub const �p�f�: usize = 0xF43AA040; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA0B0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43ABC60; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA3C0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43AA600; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const 09:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43AC440; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43A9D70; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43A9DE0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const : usize = 0x2000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xCE762278; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x1; // 
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 164
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B6C48; // uint64
                pub const �p�f�: usize = 0xF42F9490; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const ��2��: usize = 0x669B6CD8; // 
                pub const �p�f�: usize = 0x2; // 
                pub const �͖f�: usize = 0x15EF000; // 
                pub const �t�f�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF432BD90; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �2��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43295B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `%3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43325F0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4335B90; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const  [3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42EEBA0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �63��: usize = 0x669B6C48; // 
                pub const �p�f�: usize = 0xF42F94E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0\3��: usize = 0x669B76B8; // 
                pub const �p�f�: usize = 0x2BFF92A0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �:3��: usize = 0x73614243; // 
                pub const : usize = 0x62697274; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const P�/��: usize = 0x6C755043; // 
                pub const : usize = 0x1006E69; // 
                pub const : usize = 0x473A3A73; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4337550; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const ��/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F9EA0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �n/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F9E10; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �m/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F8E20; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �R/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F75C0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const : usize = 0x7261746E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const Pw3��: usize = 0x6C745543; // 
                pub const : usize = 0x1003E20; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F76E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0p/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4337620; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  r/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4337880; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �p/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F7160; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const p�/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4337690; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const po/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F83D0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @{/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43D3670; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �
                3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F5CD0; // 
                pub const : usize = 0x74637572; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F7CB0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const @F3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43348B0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const ��/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F8970; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const x/��: usize = 0x6C745543; // 
                pub const : usize = 0x3E20745F; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x6C745543; // CUtlSymbolLarge
                pub const : usize = 0x20745F74; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const P�/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF42F86D0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const P*3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4330BD0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const ��/��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43D2490; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43D2260; // 
                pub const : usize = 0x41746553; // 
                pub const �p�f�: usize = 0xF43D3530; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 1:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43DDAA0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�=��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43BA800; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43DF0E0; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0xF43A3670; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��=��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43B9850; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��;��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4396DA0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �3:��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF437D350; // 
                pub const �͖f�: usize = 0x15EF000; // 
                pub const �p�f�: usize = 0x2BFF61E0; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // float32
                pub const �p�f�: usize = 0xF4320C70; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const G4��: usize = 0x74654E43; // 
                pub const : usize = 0x6C6F626D; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @J4��: usize = 0x669B7628; // 
                pub const �p�f�: usize = 0xC0; // 
                pub const �͖f�: usize = 0x669D20D0; // 
                pub const �p�f�: usize = 0xF4344890; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��7��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF43447E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �C4��: usize = 0x74654E43; // 
                pub const : usize = 0x3E206E; // 
                pub const `֖f�: usize = 0x15EF000; // 
                pub const : usize = 0x3433E600; // 
                pub const : usize = 0x73614272; // 
                pub const : usize = 0x6C6F626D; // 
                pub const : usize = 0x73614272; // 
                pub const �p�f�: usize = 0xF43365C0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const Pd3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4336540; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �c3��: usize = 0x74654E43; // 
                pub const : usize = 0x65003E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �d3��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xF4334F90; // 
                pub const : usize = 0x73614272; // 
                pub const �p�f�: usize = 0xF4334990; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @H3��: usize = 0x669B76B8; // 
                pub const �p�f�: usize = 0x2BFF1F80; // 
                pub const `֖f�: usize = 0x669D20D0; // 
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 711
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // int32[3]
                pub const �p�f�: usize = 0x9; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �V: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x35C90; // 
                pub const : usize = 0x654D6E6F; // 
                pub const �p�f�: usize = 0x235D0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �p: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x371F0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ps: usize = 0x6C745543; // 
                pub const : usize = 0x70556E6F; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const Py: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x23940; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `?: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x24030; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x3E; // 
                pub const : usize = 0x6F4E6574; // 
                pub const �p�f�: usize = 0x38770; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �B: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x24E20; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const P�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x38FF0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x669B7628; // 
                pub const �p�f�: usize = 0xB; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x39710; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const pT: usize = 0x696E4143; // 
                pub const : usize = 0x61426576; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const PU: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x25630; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const W: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x25810; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �X: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x398B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F370; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F470; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F5E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F8B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5FC30; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5A330; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5FEA0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x506D4E43; // 
                pub const : usize = 0x6974696E; // 
                pub const : usize = 0x61776F72; // 
                pub const �p�f�: usize = 0x609A0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  
                : usize = 0x566D4E43; // 
                pub const : usize = 0x6E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x6C745543; // 
                pub const : usize = 0x31202C44; // 
                pub const : usize = 0x61776F72; // 
                pub const : usize = 0x3E203031; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x60CC0; // 
                pub const : usize = 0x614D656E; // 
                pub const �p�f�: usize = 0x60DA0; // 
                pub const : usize = 0x65646F4E; // 
                pub const �p�f�: usize = 0x60EE0; // 
                pub const : usize = 0x4E726F74; // 
                pub const : usize = 0x3E2037; // 
                pub const : usize = 0x61776F72; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x60F80; // 
                pub const : usize = 0x47646578; // 
                pub const �p�f�: usize = 0x61020; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5AE70; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5AFF0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x436D4E43; // 
                pub const : usize = 0x0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const p�: usize = 0x436D4E43; // 
                pub const : usize = 0x0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  : usize = 0x436D4E43; // 
                pub const : usize = 0x6E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x615A0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x616E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x61820; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x436D4E43; // 
                pub const : usize = 0x696E6966; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @: usize = 0x436D4E43; // 
                pub const : usize = 0x6974696E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x436D4E43; // 
                pub const : usize = 0x6E696665; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @: usize = 0x436D4E43; // 
                pub const : usize = 0x69666544; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x436D4E43; // 
                pub const : usize = 0x69666544; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `: usize = 0x566D4E43; // 
                pub const : usize = 0x696E6966; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x566D4E43; // 
                pub const : usize = 0x6974696E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `: usize = 0x566D4E43; // 
                pub const : usize = 0x6E696665; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x566D4E43; // 
                pub const : usize = 0x69666544; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x566D4E43; // 
                pub const : usize = 0x69666544; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @: usize = 0x566D4E43; // 
                pub const : usize = 0x6544433A; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x456D4E43; // 
                pub const : usize = 0x6E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @�: usize = 0x496D4E43; // 
                pub const : usize = 0x6E6F6974; // 
                pub const : usize = 0x61776F72; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5B420; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x496D4E43; // 
                pub const : usize = 0x6544433A; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x476D4E43; // 
                pub const : usize = 0x74696E69; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const p�: usize = 0x466D4E43; // 
                pub const : usize = 0x6974696E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const P�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5B910; // 
                pub const : usize = 0x6F4E4449; // 
                pub const �p�f�: usize = 0x5B9F0; // 
                pub const : usize = 0x6E6F4378; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5BA90; // 
                pub const : usize = 0x49746E65; // 
                pub const �p�f�: usize = 0x5BB50; // 
                pub const : usize = 0x4E746E65; // 
                pub const �p�f�: usize = 0x5BC50; // 
                pub const : usize = 0x6F43746E; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5BD50; // 
                pub const : usize = 0x6F4E746E; // 
                pub const �p�f�: usize = 0x5BFD0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5C1B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const p�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5C3B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x466D4E43; // 
                pub const : usize = 0x6E6F69; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x466D4E43; // 
                pub const : usize = 0x696E6966; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5C790; // 
                pub const : usize = 0x646F4E68; // 
                pub const �p�f�: usize = 0x5C8B0; // 
                pub const : usize = 0x65646F4E; // 
                pub const : usize = 0x2035202C; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x496D4E43; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x47646578; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5CAE0; // 
                pub const : usize = 0x47646578; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x32337461; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5CCE0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x62180; // 
                pub const : usize = 0x6F4E7072; // 
                pub const �p�f�: usize = 0x622A0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �$: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x62320; // 
                pub const : usize = 0x65646F4E; // 
                pub const �p�f�: usize = 0x62440; // 
                pub const : usize = 0x65646F4E; // 
                pub const �p�f�: usize = 0x62580; // 
                pub const : usize = 0x6F4E6870; // 
                pub const �p�f�: usize = 0x5D1A0; // 
                pub const : usize = 0x64697272; // 
                pub const �p�f�: usize = 0x62640; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x202C3631; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �': usize = 0x436D4E43; // 
                pub const : usize = 0x0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �(: usize = 0x506D4E43; // 
                pub const : usize = 0x6E696665; // 
                pub const : usize = 0x47646578; // 
                pub const �p�f�: usize = 0x62A00; // 
                pub const : usize = 0x70696C43; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x62C40; // 
                pub const : usize = 0x646F4E65; // 
                pub const �p�f�: usize = 0x62CC0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x446D4E43; // 
                pub const : usize = 0x6E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �+: usize = 0x566D4E43; // 
                pub const : usize = 0x66654443; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x6C745543; // 
                pub const : usize = 0x6C61626F; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x536D4E43; // 
                pub const : usize = 0x66654443; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �: usize = 0x496D4E43; // 
                pub const : usize = 0x44433A3A; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�: usize = 0x546D4E43; // 
                pub const : usize = 0x6E; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �/: usize = 0x536D4E43; // 
                pub const : usize = 0x0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  �: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5DA00; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5DBC0; // 
                pub const : usize = 0x3A65646F; // 
                pub const �p�f�: usize = 0x63160; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x63320; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5E080; // 
                pub const : usize = 0x3A65646F; // 
                pub const �p�f�: usize = 0x5E120; // 
                pub const : usize = 0x3A65646F; // 
                pub const �p�f�: usize = 0x1E8F0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x31300; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x31B00; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x32470; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �': usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x32B90; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  /: usize = 0x669B7628; // 
                pub const �p�f�: usize = 0x8; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �2: usize = 0x6C745543; // 
                pub const : usize = 0x3E206174; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `5: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x33880; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �;: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x34000; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x21EC0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  #: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x345D0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �H: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x34B80; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const p': usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x35390; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const a: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x36430; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const pg: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x23130; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �j: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x36DB0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  v: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x37A10; // 
                pub const : usize = 0x4B496576; // 
                pub const �p�f�: usize = 0x37D30; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @:: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x38050; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x24890; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x24EC0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x61FE0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A8E30; // 
                pub const @זf�: usize = 0x669D20D0; // 
                pub const P^z��: usize = 0x6C745543; // 
                pub const : usize = 0x5F6D696E; // 
                pub const @זf�: usize = 0x669D20D0; // 
                pub const `_z��: usize = 0x669B6C48; // 
                pub const �p�f�: usize = 0xFF7A5FB0; // 
                pub const : usize = 0x6E6F4373; // 
                pub const �p�f�: usize = 0xFF7B3E90; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const Оz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7B3CB0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �={��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7B3FA0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A7F90; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7ABCF0; // 
                pub const : usize = 0x6F52646D; // 
                pub const : usize = 0x669B74F8; // CUtlVector<FeNodeBase_t>
                pub const �p�f�: usize = 0xFF7AA420; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A8740; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A9D20; // 
                pub const : usize = 0x43747369; // 
                pub const �p�f�: usize = 0xFF7A8FF0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A9930; // 
                pub const : usize = 0x75546974; // 
                pub const �p�f�: usize = 0xFF7A8940; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AB6E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const иz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7ABA30; // 
                pub const : usize = 0x73696C6C; // 
                pub const �p�f�: usize = 0xFF7AA6E0; // 
                pub const : usize = 0x6E496564; // 
                pub const �p�f�: usize = 0xFF7AAAB0; // 
                pub const : usize = 0x676E6972; // 
                pub const �p�f�: usize = 0xFF7AACC0; // 
                pub const : usize = 0x7053646D; // 
                pub const �p�f�: usize = 0xFF7ABC80; // 
                pub const : usize = 0x43646C72; // 
                pub const �p�f�: usize = 0xFF7A8830; // 
                pub const : usize = 0x65726570; // 
                pub const �p�f�: usize = 0xFF7ABFF0; // 
                pub const : usize = 0x65726570; // 
                pub const �p�f�: usize = 0xFF7A86D0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A97C0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AC060; // 
                pub const : usize = 0x65526564; // 
                pub const �p�f�: usize = 0xFF7AA080; // 
                pub const : usize = 0x74536D69; // 
                pub const �p�f�: usize = 0xFF7AA240; // 
                pub const : usize = 0x6E41646D; // 
                pub const �p�f�: usize = 0xFF7AAFE0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  �z��: usize = 0x6C745543; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7865646E; // 
                pub const �p�f�: usize = 0xFF7AB630; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A8A70; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @�z��: usize = 0x6C745543; // 
                pub const : usize = 0x745F7365; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x6C745543; // 
                pub const : usize = 0x0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const бz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AA510; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const p�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A96B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const p�z��: usize = 0x669B7628; // 
                pub const �p�f�: usize = 0x2; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  �z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AAD70; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // uint16
                pub const �p�f�: usize = 0xFF7AB370; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // uint32
                pub const �p�f�: usize = 0x3; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // Vector4D
                pub const �p�f�: usize = 0x4; // 
                pub const  Җf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // 
                pub const �p�f�: usize = 0x4; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B7628; // fltx4
                pub const �p�f�: usize = 0x6; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A9250; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A9600; // 
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // uint16[4]
                pub const �p�f�: usize = 0xFF7AB280; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const pfz��: usize = 0x669B7628; // 
                pub const �p�f�: usize = 0x2; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const `�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A91E0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const P�z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A9C10; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A9FB0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const Сz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AA2D0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AABB0; // 
                pub const �͖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x56676E69; // 
                pub const : usize = 0x78657472; // 
                pub const �p�f�: usize = 0xFF7AAE20; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const  �z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AC3B0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @�z��: usize = 0x669B7628; // 
                pub const �p�f�: usize = 0x1A; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �`z��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A6700; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �gz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A6880; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const 0iz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A6B60; // 
                pub const �͖f�: usize = 0x669D20D0; // 
                pub const �p�f�: usize = 0xFF7A6BF0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �lz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A6D70; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @oz��: usize = 0x669B71D8; // 
                pub const �p�f�: usize = 0x0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ppz��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7A5DC0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B76B8; // 
                pub const �p�f�: usize = 0x2B58C170; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const �ez��: usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0xFF7AC4F0; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const ��z��: usize = 0x6C745543; // 
                pub const : usize = 0x3E20; // 
                pub const : usize = 0x6F627466; // 
                pub const : usize = 0x3E; // 
                pub const : usize = 0x6F435873; // 
                pub const : usize = 0x65747562; // 
                pub const : usize = 0x72755373; // 
                pub const : usize = 0x72746E6F; // 
                pub const : usize = 0x65646F4D; // 
                pub const : usize = 0x3E2074; // 
                pub const : usize = 0x6E497265; // 
                pub const : usize = 0x3E2074; // 
                pub const : usize = 0x6F436C65; // 
                pub const : usize = 0x3E20; // 
                pub const : usize = 0x74614D43; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x3E20726F; // 
                pub const : usize = 0x61487265; // 
                pub const : usize = 0x3E20; // 
                pub const : usize = 0x6E6F4343; // 
                pub const : usize = 0x75202C67; // 
                pub const : usize = 0x74636556; // 
                pub const : usize = 0x423A3A74; // 
                pub const : usize = 0x6E6F7465; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x3E202A74; // 
                pub const : usize = 0x6E6F7465; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x5F746E65; // 
                pub const `֖f�: usize = 0x669D20D0; // 
                pub const @{��: usize = 0x6C745543; // 
                pub const : usize = 0x3E20; // 
                pub const : usize = 0x6F627466; // 
                pub const : usize = 0x3E; // 
                pub const : usize = 0x6F435873; // 
                pub const : usize = 0x65747562; // 
                pub const : usize = 0x72755373; // 
                pub const : usize = 0x72746E6F; // 
                pub const : usize = 0x65646F4D; // 
                pub const : usize = 0x3E2074; // 
                pub const : usize = 0x6E497265; // 
                pub const : usize = 0x3E2074; // 
                pub const : usize = 0x6F436C65; // 
                pub const : usize = 0x3E20; // 
                pub const : usize = 0x74614D43; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x3E20726F; // 
                pub const : usize = 0x61487265; // 
                pub const : usize = 0x3E20; // 
                pub const : usize = 0x6E6F4343; // 
                pub const : usize = 0x75202C67; // 
                pub const : usize = 0x74636556; // 
                pub const : usize = 0x423A3A74; // 
                pub const : usize = 0x6E6F7465; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x3E202A74; // 
                pub const : usize = 0x6E6F7465; // 
                pub const : usize = 0x6C745543; // 
                pub const : usize = 0x5F746E65; // 
                pub const : usize = 0x73636968; // 
                pub const : usize = 0x6E776F; // 
                pub const : usize = 0x73636968; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x73636968; // 
                pub const : usize = 0x53737365; // 
                pub const : usize = 0x7243656C; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x756C6156; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x61567461; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x56676E69; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x57676E69; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x6C6F436D; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x6168536D; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x49796172; // 
                pub const : usize = 0x7262694C; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x6F4E7365; // 
                pub const : usize = 0x545F776F; // 
                pub const : usize = 0x6C61; // 
                pub const : usize = 0x746C754D; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x6C756166; // 
                pub const : usize = 0x435F6465; // 
                pub const : usize = 0x73655443; // 
                pub const : usize = 0x726F7372; // 
                pub const : usize = 0x435F6465; // 
                pub const : usize = 0x73655443; // 
                pub const : usize = 0x726F7372; // 
                pub const : usize = 0x57746961; // 
                pub const : usize = 0x42797469; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x523A3A65; // 
                pub const : usize = 0x74736554; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x746E696F; // 
                pub const : usize = 0x745F4264; // 
                pub const : usize = 0x636E7546; // 
                pub const : usize = 0x6C754D3A; // 
                pub const : usize = 0x6575; // 
                pub const : usize = 0x7543726F; // 
                pub const : usize = 0x61487372; // 
                pub const : usize = 0x4B3A3A73; // 
                pub const : usize = 0x6F737275; // 
                pub const : usize = 0x523A3A73; // 
                pub const : usize = 0x646E4172; // 
                pub const : usize = 0x4B3A3A73; // 
                pub const : usize = 0x76697463; // 
                pub const : usize = 0x624F726F; // 
                pub const : usize = 0x6C65636E; // 
                pub const : usize = 0x546C6176; // 
                pub const : usize = 0x65684374; // 
                pub const : usize = 0x3A62694C; // 
                pub const : usize = 0x65; // 
                pub const : usize = 0x3A62694C; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6C615673; // 
                pub const : usize = 0x72; // 
                pub const : usize = 0x57656B61; // 
                pub const : usize = 0x6D72; // 
                pub const : usize = 0x6F746365; // 
                pub const : usize = 0x726F; // 
                pub const : usize = 0x41656B61; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x73746E; // 
                pub const : usize = 0x61727241; // 
                pub const : usize = 0x614D746E; // 
                pub const : usize = 0x61727241; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x65726975; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x6D657269; // 
                pub const : usize = 0x6E756F43; // 
                pub const : usize = 0x3A3A646F; // 
                pub const : usize = 0x6C6C6143; // 
                pub const : usize = 0x6C755043; // 
                pub const : usize = 0x6C61; // 
                pub const : usize = 0x6E61525F; // 
                pub const : usize = 0x75523A3A; // 
                pub const : usize = 0x435F776F; // 
                pub const : usize = 0x6E75523A; // 
                pub const : usize = 0x61575F77; // 
                pub const : usize = 0x6E; // 
                pub const @זf�: usize = 0x2B089000; // 
                pub const : usize = 0xA3003E20; // 
                pub const @זf�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487B3FF0; // 
                pub const @זf�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487B7A00; // 
                pub const `֖f�: usize = 0x2B089000; // 
                pub const : usize = 0x206F666E; // 
                pub const `֖f�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487C6E10; // 
                pub const `֖f�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487C9F90; // 
                pub const : usize = 0x7243656C; // 
                pub const �p�f�: usize = 0x487C86B0; // 
                pub const `֖f�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487B7700; // 
                pub const : usize = 0x49444750; // 
                pub const �p�f�: usize = 0x487B88B0; // 
                pub const : usize = 0x6C755043; // 
                pub const �p�f�: usize = 0x487B8C50; // 
                pub const `֖f�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487B53E0; // 
                pub const �͖f�: usize = 0x2B089000; // 
                pub const �p�f�: usize = 0x487C2BF0; // 
                pub const `֖f�: usize = 0x2B089000; // 
                pub const �,|H�: usize = 0x6C745543; // 
                pub const : usize = 0x3E; // 
                pub const �͖f�: usize = 0x2B089000; // 
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 0
            pub mod _v_f__ {
            }
            // Parent: None
            // Field count: 173
            pub mod _v_f__ {
                pub const �Ζf�: usize = 0x669D20D0; // 
                pub const : usize = 0x669B74F8; // Vector
                pub const �p�f�: usize = 0x5F37A5F0; // 
                pub const : usize = 0x74656E67; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F37A8B0; // 
                pub const : usize = 0x436C6163; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F37A580; // 
                pub const : usize = 0x61635367; // 
                pub const : usize = 0x669B74F8; // 
                pub const �p�f�: usize = 0x5F37A4A0; // 
                pub const : usize = 0x72656461; // 
                pub const : usize = 0x6E697250; // 
                pub const : usize = 0x6E656562; // 
                pub const : usize = 0x74726F73; // 
                pub const : usize = 0x6E697250; // 
                pub const : usize = 0x6C616972; // 
                pub const : usize = 0x646E6572; // 
                pub const : usize = 0x77657053; // 
                pub const : usize = 0x20726567; // 
                pub const : usize = 0x61657473; // 
                pub const : usize = 0x3; // H�\$H�t$WH���|$P
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xCD; // 
                pub const : usize = 0x6E694274; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x100; // 
                pub const : usize = 0x536D6F43; // 
                pub const : usize = 0x657865; // 
                pub const : usize = 0x100; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x184; // mat_shader_cache
                pub const P�5_�: usize = 0x81701251; // 
                pub const : usize = 0x6E656353; // 
                pub const : usize = 0x64656B61; // 
                pub const : usize = 0x3; // 
                pub const nVertexID: usize = 0x676F7250; // 
                pub const : usize = 0x28207365; // 
                pub const : usize = 0x6573555C; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x2D2D2D2D; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x5D0DD2E0; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x63616C70; // 
                pub const : usize = 0x696E6E69; // 
                pub const : usize = 0x75DE364E; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x29000002; // 
                pub const DefaultFontAliasGroup: usize = 0x4; // 
                pub const : usize = 0x2A3356C0; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x6563616C; // 
                pub const : usize = 0x52455355; // 
                pub const : usize = 0x4B432D50; // 
                pub const : usize = 0x706D655C; // 
                pub const : usize = 0x41455242; // 
                pub const : usize = 0x706D7564; // 
                pub const : usize = 0x61747320; // 
                pub const : usize = 0x72747441; // 
                pub const : usize = 0x6665645F; // 
                pub const : usize = 0x643D7865; // 
                pub const : usize = 0x6E656353; // 
                pub const : usize = 0x64657869; // 
                pub const : usize = 0x616D6D6F; // 
                pub const : usize = 0x32283631; // 
                pub const : usize = 0x20202020; // 
                pub const : usize = 0x564C4156; // 
                pub const : usize = 0x5F4C4453; // 
                pub const : usize = 0x534C4542; // 
                pub const : usize = 0x4341435F; // 
                pub const : usize = 0x42414E45; // 
                pub const : usize = 0x7A696C69; // 
                pub const : usize = 0x706D655C; // 
                pub const : usize = 0x41455242; // 
                pub const : usize = 0x706D7564; // 
                pub const : usize = 0x6573555C; // 
                pub const : usize = 0x536D6F43; // 
                pub const : usize = 0x657865; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x41434F4C; // 
                pub const : usize = 0x61447070; // 
                pub const : usize = 0x3A433D29; // 
                pub const : usize = 0x504D4554; // 
                pub const : usize = 0x5C6C6163; // 
                pub const : usize = 0x6563616C; // 
                pub const : usize = 0x52455355; // 
                pub const : usize = 0x4B432D50; // 
                pub const : usize = 0x73726573; // 
                pub const : usize = 0x766C6156; // 
                pub const : usize = 0x78652E6D; // 
                pub const : usize = 0x564C4156; // 
                pub const : usize = 0x5F4C4453; // 
                pub const : usize = 0x534C4542; // 
                pub const : usize = 0x4341435F; // 
                pub const : usize = 0x42414E45; // 
                pub const : usize = 0x7A696C69; // 
                pub const : usize = 0x706D655C; // 
                pub const : usize = 0x41455242; // 
                pub const : usize = 0x706D7564; // 
                pub const : usize = 0x6573555C; // 
                pub const : usize = 0x536D6F43; // 
                pub const : usize = 0x657865; // 
                pub const : usize = 0x72657355; // 
                pub const : usize = 0x41434F4C; // 
                pub const : usize = 0x61447070; // 
                pub const : usize = 0x3A433D29; // 
                pub const : usize = 0x504D4554; // 
                pub const : usize = 0x5C6C6163; // 
                pub const : usize = 0x6563616C; // 
                pub const : usize = 0x52455355; // 
                pub const : usize = 0x4B432D50; // 
                pub const : usize = 0x73726573; // 
                pub const : usize = 0x766C6156; // 
                pub const : usize = 0x78652E6D; // 
                pub const : usize = 0x564C4156; // 
                pub const : usize = 0x5F4C4453; // 
                pub const : usize = 0x534C4542; // 
                pub const : usize = 0x4341435F; // 
                pub const : usize = 0x42414E45; // 
                pub const : usize = 0x7A696C69; // 
                pub const P�sH�: usize = 0xF27F3900; // 
                pub const : usize = 0x44505041; // 
                pub const : usize = 0x616F525C; // 
                pub const : usize = 0x49544143; // 
                pub const : usize = 0x4D4D4F43; // 
                pub const : usize = 0x656D7563; // 
                pub const : usize = 0x735C5357; // 
                pub const : usize = 0x41434F4C; // 
                pub const : usize = 0x74614470; // 
                pub const : usize = 0x6573555C; // 
                pub const : usize = 0x676F7250; // 
                pub const : usize = 0x28207365; // 
                pub const : usize = 0x63616C70; // 
                pub const : usize = 0x3D504D54; // 
                pub const : usize = 0x545C6C61; // 
                pub const : usize = 0x5250474E; // 
                pub const : usize = 0x52455355; // 
                pub const : usize = 0x6E656D75; // 
                pub const : usize = 0x643D7865; // 
                pub const : usize = 0x42414E45; // 
                pub const : usize = 0x5F79616C; // 
                pub const : usize = 0x555F5245; // 
                pub const : usize = 0x4C475F5F; // 
                pub const : usize = 0x3D50554E; // 
                pub const : usize = 0x564C4156; // 
                pub const : usize = 0x44505041; // 
                pub const : usize = 0x616F525C; // 
                pub const : usize = 0x49544143; // 
                pub const : usize = 0x4D4D4F43; // 
                pub const : usize = 0x656D7563; // 
                pub const : usize = 0x735C5357; // 
                pub const : usize = 0x41434F4C; // 
                pub const : usize = 0x74614470; // 
                pub const : usize = 0x6573555C; // 
                pub const : usize = 0x676F7250; // 
                pub const : usize = 0x28207365; // 
                pub const : usize = 0x63616C70; // 
                pub const : usize = 0x3D504D54; // 
                pub const : usize = 0x545C6C61; // 
                pub const : usize = 0x5250474E; // 
                pub const : usize = 0x52455355; // 
                pub const : usize = 0x6E656D75; // 
                pub const : usize = 0x643D7865; // 
                pub const : usize = 0x42414E45; // 
                pub const : usize = 0x5F79616C; // 
                pub const : usize = 0x555F5245; // 
                pub const : usize = 0x4C475F5F; // 
                pub const : usize = 0x3D50554E; // 
                pub const : usize = 0x564C4156; // 
            }
            // Parent: None
            // Field count: 0
            pub mod tR {
            }
            // Parent: None
            // Field count: 0
            pub mod tR {
            }
            // Parent: None
            // Field count: 0
            pub mod tR {
            }
            // Parent: None
            // Field count: 58
            pub mod tR {
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
            }
            // Parent: None
            // Field count: 0
            pub mod tR {
            }
            // Parent: None
            // Field count: 0
            pub mod tR {
            }
            // Parent: None
            // Field count: 301
            pub mod tR {
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800F9E90; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x800FA0F0; // 
                pub const : usize = 0x44206D61; // 
                pub const : usize = 0xA; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const @UH��H�� I���QL�V���H���: usize = 0x801026D0; // 
                pub const @UH��H�� H�AH��H�� ]H�`������H�|$UH��H�� LcQA����Lc�M+�H��M;�s3�H�|$@H�� ]Ày(: usize = 0x8011BBD0; // 
                pub const @UH��H�� H�� ]�M����������������H��H�XH�pH�xUH��ATAUH��PE3�L��f�@�I��$0: usize = 0x800FD6D0; // 
                pub const @UH�싁$: usize = 0x80111B30; // 
                pub const @UH��H�� H�� ]�M����������������H��H�XH�pH�xUH��ATAUH��PE3�L��f�@�I��$0: usize = 0x800FBE80; // 
                pub const L�D$UH��SVAWH��h��: usize = 0x801128E0; // 
                pub const @UH�싁$: usize = 0x80110060; // 
                pub const : usize = 0x7469622D; // 
                pub const : usize = 0x66; // 
                pub const @UH�층�1]���������������������@UH���3: usize = 0x801052B0; // 
                pub const @UH�싁4: usize = 0x800FB7A0; // 
                pub const H�\$H�t$H�|$UH��H�� H��P: usize = 0x800FE990; // 
                pub const H�\$H�|$UH��H�� H���(: usize = 0x800FAB60; // 
                pub const @UH��SWH��P: usize = 0x800FAD80; // 
                pub const @UH��H����0: usize = 0x800FDEA0; // 
                pub const @UH��WATAUAVAW��: usize = 0x800FDA60; // 
                pub const @UH��SATH��0L���JH�ځ�: usize = 0x80135030; // 
                pub const @UH��H�� �J��: usize = 0x80135140; // 
                pub const : usize = 0x75667608; // 
                pub const H�\$UH��H�� H��H���sqL�AH���: usize = 0x75667608; // 
                pub const @UH��H�� H�� ]������������������@UH��QH�AL���Q;��: usize = 0x800FD3E0; // 
                pub const H�\$H�|$UH��H�� H�H���P0H��(: usize = 0x80102750; // 
                pub const H�\$H�|$UH��H�� H���: usize = 0x80101CD0; // 
                pub const H�\$ UH��VWATAUAVAWH��P: usize = 0x80105440; // 
                pub const H�\$UH��H�� ��0: usize = 0x80104050; // 
                pub const @UH���A����]�������������������@UH���AL�AD�QA�@I���������A+@Hc�I��H��A�HPI��A+HHL��I��Lc�I��H��D�E;���]���������������H�\$H�|$UH��H�� H���: usize = 0x80103FC0; // 
                pub const : usize = 0x3345; // 
                pub const : usize = 0x494B4F4F; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4E; // 
                pub const : usize = 0x45445F53; // 
                pub const : usize = 0x4F43535F; // 
                pub const : usize = 0x4C4552; // 
                pub const : usize = 0x45445F53; // 
                pub const : usize = 0x45445F53; // 
                pub const : usize = 0x4547; // 
                pub const : usize = 0x54415F53; // 
                pub const : usize = 0x54415F53; // 
                pub const : usize = 0x414D5F53; // 
                pub const : usize = 0x4D4C5F53; // 
                pub const : usize = 0x4F545F53; // 
                pub const : usize = 0x504C5F53; // 
                pub const : usize = 0x52505F53; // 
                pub const : usize = 0x414D5F53; // 
                pub const : usize = 0x414D5F53; // 
                pub const : usize = 0x414D5F53; // 
                pub const : usize = 0x4D475F53; // 
                pub const : usize = 0x41505F53; // 
                pub const : usize = 0x50475F53; // 
                pub const : usize = 0x414D5F53; // 
                pub const : usize = 0x50475F53; // 
                pub const : usize = 0x54475F53; // 
                pub const : usize = 0x45525F53; // 
                pub const : usize = 0x504C5F53; // 
                pub const : usize = 0x32; // 
                pub const : usize = 0x32; // 
                pub const : usize = 0x5444; // 
                pub const : usize = 0x45525F53; // 
                pub const : usize = 0x49575F53; // 
                pub const : usize = 0x48545F53; // 
                pub const : usize = 0x4E555F53; // 
                pub const : usize = 0x414D5F53; // 
                pub const : usize = 0x5F4C4552; // 
                pub const : usize = 0x54535F54; // 
                pub const : usize = 0x535F4154; // 
                pub const : usize = 0x344445; // 
                pub const : usize = 0x324445; // 
                pub const : usize = 0x535F434F; // 
                pub const : usize = 0x4E4F4954; // 
                pub const : usize = 0x5F544F4C; // 
                pub const : usize = 0x5F343641; // 
                pub const : usize = 0x535F3245; // 
                pub const : usize = 0x5F535049; // 
                pub const : usize = 0x5F323344; // 
                pub const : usize = 0x535F3233; // 
                pub const : usize = 0x54535F32; // 
                pub const : usize = 0x5453; // 
                pub const : usize = 0x54535F32; // 
                pub const : usize = 0x54535F47; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x535F5245; // 
                pub const : usize = 0x4C415F53; // 
                pub const : usize = 0x54535F46; // 
                pub const : usize = 0x5F535049; // 
                pub const : usize = 0x5F323344; // 
                pub const : usize = 0x315F3233; // 
                pub const : usize = 0x32334C45; // 
                pub const : usize = 0x54535F; // 
                pub const : usize = 0x54535F32; // 
                pub const : usize = 0x36315F32; // 
                pub const : usize = 0x36315F32; // 
                pub const : usize = 0x36315F32; // 
                pub const : usize = 0x363145; // 
                pub const : usize = 0x36; // 
                pub const : usize = 0x36; // 
                pub const : usize = 0x36; // 
                pub const : usize = 0x44475F53; // 
                pub const : usize = 0x50425F53; // 
                pub const : usize = 0x45525F53; // 
                pub const : usize = 0x4F435F53; // 
                pub const : usize = 0x5049; // 
                pub const : usize = 0x44555F53; // 
                pub const : usize = 0x45525F53; // 
                pub const : usize = 0x4D5F464C; // 
                pub const : usize = 0x4E5F464C; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5F46464F; // 
                pub const : usize = 0x5F524542; // 
                pub const : usize = 0x4E434644; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x315F5353; // 
                pub const : usize = 0x7436315F; // 
                pub const : usize = 0x315F5552; // 
                pub const : usize = 0x315F554E; // 
                pub const : usize = 0x53494C44; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x315F4445; // 
                pub const : usize = 0x743631; // 
                pub const : usize = 0x315F504D; // 
                pub const : usize = 0x5F594152; // 
                pub const : usize = 0x36315F30; // 
                pub const : usize = 0x743631; // 
                pub const : usize = 0x45525554; // 
                pub const : usize = 0x415F464C; // 
                pub const : usize = 0x4D5F464C; // 
                pub const : usize = 0x5453; // 
                pub const : usize = 0x4D5F464C; // 
                pub const : usize = 0x4D5F464C; // 
                pub const : usize = 0x445F464C; // 
                pub const : usize = 0x445F464C; // 
                pub const : usize = 0x415F464C; // 
                pub const : usize = 0x555F464C; // 
                pub const : usize = 0x435F464C; // 
                pub const : usize = 0x455F464C; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x45544152; // 
                pub const : usize = 0x44; // 
                pub const : usize = 0x424154; // 
                pub const : usize = 0x52; // 
                pub const : usize = 0x534C4344; // 
                pub const : usize = 0x5353; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x554C52; // 
                pub const : usize = 0x554C4E; // 
                pub const : usize = 0x444C45; // 
                pub const : usize = 0x5453494C; // 
                pub const : usize = 0x445F464C; // 
                pub const : usize = 0x535F464C; // 
                pub const : usize = 0x45565245; // 
                pub const : usize = 0x4D4F4345; // 
                pub const : usize = 0x4854; // 
                pub const : usize = 0x4C5F464C; // 
                pub const : usize = 0x435F464C; // 
                pub const : usize = 0x565F464C; // 
                pub const : usize = 0x505F464C; // 
                pub const : usize = 0x415F464C; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5245; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x8; // 
                pub const : usize = 0x1A; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xA; // 
                pub const : usize = 0x32; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0xE; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0xA; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x12; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x8; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x1001; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5; // 
                pub const @UH��L����tB��t��u	�A����3�]ËI��������v
                ��v��u����tڃ�u�I�@]�H�A]�������������@UH��3�]��������@UH��L����tB��t��u
                �A����3�]��I������<v<v<u����tۀ�u�I�@]�H�A]�������������@UH��H�� H�*: usize = 0x1503; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x1505; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x1507; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x1514; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x1009; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x100A; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            pub mod tR {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 0
            pub mod ____H___________H_I_H__H____ {
            }
            // Parent: None
            // Field count: 660
            pub mod _ {
                pub const D: usize = 0x17BD907; // 
                pub const : usize = 0x17BD82E; // 
                pub const ������������: usize = 0x17BD862; // ��$��
                pub const ������������: usize = 0x17BD89B; // ��$��
                pub const : usize = 0x17BD8D3; // 
                pub const : usize = 0x4003409; // m_flZOffset
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x729D9A0; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const ���_�: usize = 0x63DA260; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4002C23; // 
                pub const : usize = 0x4003409; // 
                pub const weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat: usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x2E676D64; // 
                pub const +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL>: usize = 0x4006415; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656B6162; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6174654D; // 
                pub const : usize = 0x65736162; // 
                pub const : usize = 0x706F7270; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6E6970; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x70616577; // 
                pub const +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL>: usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat: usize = 0x79646F62; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x69736F50; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E6970; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x70616577; // 
                pub const ���_�: usize = 0x70616577; // 
                pub const ���_�: usize = 0x70616577; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x646E6168; // 
                pub const : usize = 0x72EC640; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x79706F43; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0xA779851D; // 
                pub const : usize = 0x97E8F1D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x706F7270; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F62; // 
                pub const : usize = 0x2C20; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6C6C6162; // 
                pub const : usize = 0x646E6168; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x656B6162; // 
                pub const : usize = 0x6174654D; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x79706F63; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x72EC4C0; // 
                pub const : usize = 0x6B63656E; // 
                pub const : usize = 0x6C6C6162; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x62657965; // 
                pub const : usize = 0x6C6B6E61; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6F6C6C61; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x6F6C6F6D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x6F6C6F6D; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x7571696C; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x69736F50; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x0; // 
                pub const phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl: usize = 0x6F6C6F6D; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x766C6570; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x656E6F62; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6F6C6C61; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x0; // 
                pub const phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl: usize = 0x70616577; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x17BDE9D; // 
                pub const : usize = 0x17BDEEC; // 
                pub const : usize = 0x17BDF3E; // 
                pub const : usize = 0x17BDF90; // 
                pub const : usize = 0x6F677363; // 
                pub const : usize = 0x6C6C6163; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x726F6353; // 
                pub const : usize = 0x7270732B; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x635F6C63; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6574756D; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x65646968; // 
                pub const : usize = 0x65646968; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x696E6173; // 
                pub const : usize = 0x696E6173; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x61736964; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6E6F6349; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x72747865; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x77647568; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6461722B; // 
                pub const : usize = 0x6461722B; // 
                pub const : usize = 0x74756C43; // 
                pub const : usize = 0x67676F54; // 
                pub const : usize = 0x63696F56; // 
                pub const : usize = 0x7373656D; // 
                pub const : usize = 0x52647453; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x736E6F43; // 
                pub const : usize = 0x6D616554; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x5F647568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x746C754D; // 
                pub const : usize = 0xC3236A1D; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x736F6F42; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6E2D6469; // 
                pub const : usize = 0x6E3A737B; // 
                pub const : usize = 0x74657323; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x53766E49; // 
                pub const : usize = 0x63616C70; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x72474548; // 
                pub const : usize = 0x66696E4B; // 
                pub const : usize = 0x6D697250; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x7375655A; // 
                pub const : usize = 0xD20; // 
                pub const : usize = 0x7E163F1D; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x61646152; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x725F6C63; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6E65706F; // 
                pub const : usize = 0x6E65706F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x74646977; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0xE36D22CA; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x67676F74; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x67676F74; // 
                pub const : usize = 0x635F6C63; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x2D70616D; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x63696F56; // 
                pub const : usize = 0x5F646E73; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616548; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x7466656C; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x723A737B; // 
                pub const : usize = 0x673A737B; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x63736564; // 
                pub const : usize = 0x6F677363; // 
                pub const : usize = 0xA779851D; // 
                pub const : usize = 0x97E8F1D; // 
                pub const : usize = 0x600161A; // 
                pub const : usize = 0x626D6F42; // 
                pub const : usize = 0x5F646E73; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x63726570; // 
                pub const : usize = 0x74616544; // 
                pub const : usize = 0x736E6F63; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x63726570; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0xA5D9646E; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0xF5AD4CF4; // 
                pub const : usize = 0x74746968; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x2678EB8; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x6D756E23; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x74617473; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6E3A737B; // 
                pub const : usize = 0x63736564; // 
                pub const : usize = 0x16ED8FBF; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6C6C6F43; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x656D616E; // 
                pub const : usize = 0x7543736A; // 
                pub const : usize = 0x633A737B; // 
                pub const : usize = 0x6F666E49; // 
                pub const : usize = 0x69726172; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x69726172; // 
                pub const : usize = 0x74616863; // 
                pub const : usize = 0x74617661; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74696177; // 
                pub const : usize = 0x74617661; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6772616C; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x74736542; // 
                pub const : usize = 0x70616557; // 
                pub const : usize = 0x743A737B; // 
                pub const : usize = 0x733A737B; // 
                pub const : usize = 0x70616557; // 
                pub const : usize = 0x743A737B; // 
                pub const : usize = 0x733A737B; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x696D696C; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x763A737B; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x696D696C; // 
                pub const : usize = 0x74736542; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6566666F; // 
                pub const : usize = 0x6F2D6469; // 
                pub const : usize = 0x6E69616D; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x2D726162; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x74786554; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x65737523; // 
                pub const : usize = 0x65737523; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x72617473; // 
                pub const : usize = 0x656D6163; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x772D6469; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x70617267; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x633A737B; // 
                pub const : usize = 0x6B3A647B; // 
                pub const : usize = 0x64697053; // 
                pub const : usize = 0x95870F03; // 
                pub const : usize = 0x6374616D; // 
                pub const : usize = 0x6374614D; // 
                pub const : usize = 0x653A737B; // 
                pub const : usize = 0x6374614D; // 
                pub const : usize = 0x6374614D; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x352A344D; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x8E0E161B; // 
            }
            // Parent: None
            // Field count: 659
            pub mod _ {
                pub const : usize = 0x0; // 
                pub const D: usize = 0x17BD907; // 
                pub const : usize = 0x17BD82E; // 
                pub const ������������: usize = 0x17BD862; // ��$��
                pub const ������������: usize = 0x17BD89B; // ��$��
                pub const : usize = 0x17BD8D3; // 
                pub const : usize = 0x4003409; // m_flZOffset
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x729D9A0; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const ���_�: usize = 0x63DA260; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4002C23; // 
                pub const : usize = 0x4003409; // 
                pub const weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat: usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x2E676D64; // 
                pub const +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL>: usize = 0x4006415; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656B6162; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6174654D; // 
                pub const : usize = 0x65736162; // 
                pub const : usize = 0x706F7270; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6E6970; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x70616577; // 
                pub const +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL>: usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat: usize = 0x79646F62; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x69736F50; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E6970; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x70616577; // 
                pub const ���_�: usize = 0x70616577; // 
                pub const ���_�: usize = 0x70616577; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x646E6168; // 
                pub const : usize = 0x72EC640; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x79706F43; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0xA779851D; // 
                pub const : usize = 0x97E8F1D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x706F7270; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F62; // 
                pub const : usize = 0x2C20; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6C6C6162; // 
                pub const : usize = 0x646E6168; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x656B6162; // 
                pub const : usize = 0x6174654D; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x79706F63; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x72EC4C0; // 
                pub const : usize = 0x6B63656E; // 
                pub const : usize = 0x6C6C6162; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x62657965; // 
                pub const : usize = 0x6C6B6E61; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6F6C6C61; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x6F6C6F6D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x6F6C6F6D; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x7571696C; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x69736F50; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x0; // 
                pub const phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl: usize = 0x6F6C6F6D; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x766C6570; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x656E6F62; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6F6C6C61; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x0; // 
                pub const phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl: usize = 0x70616577; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x17BDE9D; // 
                pub const : usize = 0x17BDEEC; // 
                pub const : usize = 0x17BDF3E; // 
                pub const : usize = 0x17BDF90; // 
                pub const : usize = 0x6F677363; // 
                pub const : usize = 0x6C6C6163; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x726F6353; // 
                pub const : usize = 0x7270732B; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x635F6C63; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6574756D; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x65646968; // 
                pub const : usize = 0x65646968; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x696E6173; // 
                pub const : usize = 0x696E6173; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x61736964; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6E6F6349; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x72747865; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x77647568; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6461722B; // 
                pub const : usize = 0x6461722B; // 
                pub const : usize = 0x74756C43; // 
                pub const : usize = 0x67676F54; // 
                pub const : usize = 0x63696F56; // 
                pub const : usize = 0x7373656D; // 
                pub const : usize = 0x52647453; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x736E6F43; // 
                pub const : usize = 0x6D616554; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x5F647568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x746C754D; // 
                pub const : usize = 0xC3236A1D; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x736F6F42; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6E2D6469; // 
                pub const : usize = 0x6E3A737B; // 
                pub const : usize = 0x74657323; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x53766E49; // 
                pub const : usize = 0x63616C70; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x72474548; // 
                pub const : usize = 0x66696E4B; // 
                pub const : usize = 0x6D697250; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x7375655A; // 
                pub const : usize = 0xD20; // 
                pub const : usize = 0x7E163F1D; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x61646152; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x725F6C63; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6E65706F; // 
                pub const : usize = 0x6E65706F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x74646977; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0xE36D22CA; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x67676F74; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x67676F74; // 
                pub const : usize = 0x635F6C63; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x2D70616D; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x63696F56; // 
                pub const : usize = 0x5F646E73; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616548; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x7466656C; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x723A737B; // 
                pub const : usize = 0x673A737B; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x63736564; // 
                pub const : usize = 0x6F677363; // 
                pub const : usize = 0xA779851D; // 
                pub const : usize = 0x97E8F1D; // 
                pub const : usize = 0x600161A; // 
                pub const : usize = 0x626D6F42; // 
                pub const : usize = 0x5F646E73; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x63726570; // 
                pub const : usize = 0x74616544; // 
                pub const : usize = 0x736E6F63; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x63726570; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0xA5D9646E; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0xF5AD4CF4; // 
                pub const : usize = 0x74746968; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x2678EB8; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x6D756E23; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x74617473; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6E3A737B; // 
                pub const : usize = 0x63736564; // 
                pub const : usize = 0x16ED8FBF; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6C6C6F43; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x656D616E; // 
                pub const : usize = 0x7543736A; // 
                pub const : usize = 0x633A737B; // 
                pub const : usize = 0x6F666E49; // 
                pub const : usize = 0x69726172; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x69726172; // 
                pub const : usize = 0x74616863; // 
                pub const : usize = 0x74617661; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74696177; // 
                pub const : usize = 0x74617661; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6772616C; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x74736542; // 
                pub const : usize = 0x70616557; // 
                pub const : usize = 0x743A737B; // 
                pub const : usize = 0x733A737B; // 
                pub const : usize = 0x70616557; // 
                pub const : usize = 0x743A737B; // 
                pub const : usize = 0x733A737B; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x696D696C; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x763A737B; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x696D696C; // 
                pub const : usize = 0x74736542; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6566666F; // 
                pub const : usize = 0x6F2D6469; // 
                pub const : usize = 0x6E69616D; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x2D726162; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x74786554; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x65737523; // 
                pub const : usize = 0x65737523; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x72617473; // 
                pub const : usize = 0x656D6163; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x772D6469; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x70617267; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x633A737B; // 
                pub const : usize = 0x6B3A647B; // 
                pub const : usize = 0x64697053; // 
                pub const : usize = 0x95870F03; // 
                pub const : usize = 0x6374616D; // 
                pub const : usize = 0x6374614D; // 
                pub const : usize = 0x653A737B; // 
                pub const : usize = 0x6374614D; // 
                pub const : usize = 0x6374614D; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x352A344D; // 
            }
            // Parent: None
            // Field count: 0
            pub mod PF_BIAS_TYPE_STANDARD {
            }
            // Parent: None
            // Field count: 807
            pub mod PF_NOISE_TURB_NONE {
                pub const : usize = 0x4F4E5F52; // 
                pub const default: usize = 0x45504D41; // 
                pub const : usize = 0x45504D41; // 
                pub const : usize = 0x7137750; // ��{*
                pub const : usize = 0x53455241; // 
                pub const  �*��: usize = 0x362BA760; // 
                pub const : usize = 0x5241444E; // 
                pub const ���*: usize = 0x7137660; // ��{*
                pub const : usize = 0x444E454C; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x17060001; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7910001; // 
                pub const : usize = 0x43; // 
                pub const `��*: usize = 0xFF00574F; // 
                pub const : usize = 0xFF00574F; // 
                pub const : usize = 0xFFFF004C; // 
                pub const : usize = 0x74736566; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x4F; // 
                pub const : usize = 0x4C5F6174; // 
                pub const : usize = 0x4F465F4E; // 
                pub const first_or_third_person_@0_#&thirdperson_default: usize = 0x19769640; // 
                pub const : usize = 0x52; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x7541348; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x63E7D50; // 
                pub const �o���: usize = 0x63E8250; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x2B869890; // 
                pub const  �*��: usize = 0x665BF50; // 
                pub const �o���: usize = 0x63E8750; // 
                pub const �o���: usize = 0x63E8C50; // 
                pub const  �*��: usize = 0x7290C00; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x63E9148; // 
                pub const �o���: usize = 0x63E9648; // 
                pub const �o���: usize = 0x7541A48; // 
                pub const �o���: usize = 0x7540C48; // F_RANDOM_MODE_CONSTANT
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x76A55F8; // 
                pub const  �*��: usize = 0xF2F148; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x140; // 
                pub const : usize = 0x100; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291D30; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0x6D6165; // 
                pub const  �*��: usize = 0x7290E80; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x736E6F63; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7290E80; // 
                pub const : usize = 0x746E69; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291470; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291470; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x6E6F6974; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291E70; // 
                pub const  �*��: usize = 0x72912E0; // 
                pub const : usize = 0xFF007475; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7BB0001; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x65687774; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291AB0; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0x5F32D401; // 
                pub const : usize = 0x76A9810; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x76A9810; // 
                pub const : usize = 0x5F6D6165; // 
                pub const : usize = 0x76A9810; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const : usize = 0x7592ACD; // 
                pub const : usize = 0x5F32D401; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x558C; // 
                pub const : usize = 0x482C; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7545610; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x2A6C8A01; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0x97EFCF08; // 
                pub const : usize = 0x75E4801; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x97EFCF58; // 
                pub const : usize = 0x75E4801; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x6AF0; // 
                pub const : usize = 0x685F6761; // 
                pub const : usize = 0x2A6C8A01; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x97EFD518; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x5264726F; // 
                pub const : usize = 0x7545610; // P�.��
                pub const : usize = 0x7545610; // 
                pub const : usize = 0x5F32D401; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x616D726F; // 
                pub const : usize = 0x97EFD1C8; // �H-��
                pub const : usize = 0x1; // 
                pub const : usize = 0x63E9D9E; // P�.��
                pub const : usize = 0x6; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x63E9D9E; // �#-��
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x7592A01; // weapon_offset
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0x7545610; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x1; // ����
                pub const : usize = 0x7007376; // 
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x63E9D01; // 
                pub const : usize = 0x7545610; // 
                pub const : usize = 0x63E9D9E; // 
                pub const : usize = 0x7592A01; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0x44207265; // 
                pub const : usize = 0x616D726F; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0xFFFF004C; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x72D0074; // 
                pub const  �*��: usize = 0x362BADF0; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const  �*��: usize = 0x362BADF0; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const `�*: usize = 0x7543310; // �H-��
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7592ACD; // 
                pub const  �*��: usize = 0x2B544001; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x616D726F; // 
                pub const  �*��: usize = 0x362BB020; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x6E69616D; // 
                pub const : usize = 0x7592ACD; // {,��
                pub const : usize = 0x664F6472; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0x74616566; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const PaintKit_handwrap_leathery_snakeskin_orange_tag: usize = 0xFFFFFFFF; // 
                pub const PaintKit_handwrap_leathery_caution: usize = 0xFFFFFFFF; // 
                pub const PaintKit_handwrap_leathery_caution_tag: usize = 0xFFFFFFFF; // 
                pub const PaintKit_operation10_metalic_green: usize = 0xFFFFFFFF; // 
                pub const PaintKit_operation10_metalic_green_tag: usize = 0x65735543; // 
                pub const : usize = 0x6F6E0000; // 
                pub const : usize = 0x65706D6F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x7463615F; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65725F6C; // 
                pub const : usize = 0x73556172; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const �Ⱦ�u>�뚾b�>}E��-�>����.�>: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const �{�����&��./�,�+�@�#��W%��9*>5L��>�>�G��6�>fƪ���	?��>���?8���@?�}�=�J?[�s>�?�>���>���>n��>�!�>�a>,�?���=�<?Rt�"��>J���>�C���~�>b��=u>��ƾP/>�Dؾ<�&=JW޾ҥp��ؾS6�dHƾ�qd��)�������������>�X��h��*��	s˾
                mC�6˾��O=����&)>/<��R�`>��x�n�>h)7�:M�>L��v$�>J�U���>�Z�<��>6�=���>�'>#O�>��f>�^�>uӎ>��]>^̥>�
                >Q�><�=�C�>E����>܉��d��>$+��ƍ>�=W�xt>&����>>ͷ���Y�=�����*�;�оيҽ�ʾ4�I�����k燾
                M��;T��ɚc��ֳ��?"���ž�﷽QվP��ȥܾD��=d�־�R>P��]��>�����v�>��n�?�׶���?ϥ>�?��>�[�>���>���>���>��>'?��Q>�T?Hk�=�!?6���a?�؝����>n: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const ����ᙾ�꨾e�J�֟����ɽ����HG��ݔ���:=�?�����=�Mq�V: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const �X��.�>��2��>"�<���>>�=rW�>K,>���>���>��>$��>�P�>��?h� >��?��w�V�?�3�����>��о��S>J�F+�=Hv侠���Z�־VuͽjJ̾~`C�.a���Y���1��W��/�c��MҾν�;���<�U��CJ�=x���6�4>Ξ�� Rp>w]d��0�>T�SF�>�K?�P�>�%�=�J�>1?>���>T��>�ח>�Ѫ>j�Z>ݾ>\>���>�=Qu�>�d��ma�>T�9��ê>�ɗ���l>.�ƾF��=: usize = 0x65735543; // 
                pub const : usize = 0x6F6E0000; // 
                pub const : usize = 0x55747365; // 
                pub const �6?���>`�@?.Ҧ=�,:?������%?�H��A�?�⾰��>	�
                �/x>~��Y��=��!�6<����EZ���gt��|����#߾{tξ(��v�����x�0����B���+��G�=f��Qʇ>�: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0xFFFF0063; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x635F6D65; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0xFF003263; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x635F6D65; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x61705F63; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x61705F63; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x746E6569; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F667461; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65646D65; // 
                pub const : usize = 0x73556172; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x72676D65; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x5F6C6174; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x5F6C6174; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x76736F2E; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x74616C70; // 
                pub const : usize = 0x73556172; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x66726570; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x74617453; // 
                pub const �=�K�>��I>&�>"��>綮>���>|�P>.H�>�4�=�ܸ>$�/���>O�
                >9�&���K>�|I���>�e����=4Fz��\=|i���yx��"���􇽄�v��*�1g��R3��L�0�l��������D?��ܭ���Iw;: usize = 0x65735543; // 
                pub const : usize = 0x6576736F; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6174732E; // 
                pub const : usize = 0x74617453; // 
                pub const cents.: usize = 0x65735543; // 
                pub const : usize = 0x6D657469; // 
                pub const : usize = 0x74617453; // 
                pub const le cry</i>: usize = 0x65735543; // 
                pub const : usize = 0x6100316C; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x637263; // 
                pub const : usize = 0x74617453; // 
                pub const a�: usize = 0x65735543; // 
                pub const : usize = 0x636974; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x2E636974; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x2E636974; // 
                pub const : usize = 0x49747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x2E636974; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x746573; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6169642E; // 
                pub const : usize = 0x74617453; // 
                pub const �����=�����ɽ�	��: usize = 0x65735543; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x74617453; // 
                pub const j1��a侂蜾ɥþ,0Ӿ�W��w���9������V���~�>��ھ\��>�����3�>�hw����>I你�?�e=��
                ?��B>��?�_�>5��>���>�y�>�.?q�Y>x�?��\=�?�R�_�
                ?x���\f�>�lؾ��>q�	���>gO�����%"��TT�;��򙾾{�����J˾E6��#q��%��[W�'l!�r$	>*��Ӝ>Y��H��>�=��5?p��F=?#�@=��?�_>}?���>bM�>���>푳>oU?��W>`?��=��
                ?�و�.�?z�K�:��>5���>�پ+[[>����t��=�V�Ƒ��)���I��9��%����۾�׾�奄@��W���	��,����	��&�=.��t#i>0LӾ�Զ>�������>z#��?Pߜ���?'>ۃ?G�>���>���>�P�>��>�lm>KP�>U	�=B��>,�Q�x��>.�8�3��>: usize = 0x67734D43; // 
                pub const : usize = 0x756F7268; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6975622E; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x61746E65; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C61762E; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x762E6C61; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x6D787600; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6972432E; // 
                pub const : usize = 0x746E6576; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6972432E; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6F006469; // 
                pub const : usize = 0x73655279; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D72615F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D72615F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x706D6F43; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x646D762E; // 
                pub const : usize = 0x746E6576; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x69745F72; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0xFF004554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0xFF004554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x4F5F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x455F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x4F5F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const ��vL���4��JG=�H����>Wm����T>ʒ>�ء�>||�E��>�L�~�>� _=��>��>(E�>�i>9
                y>w<�>I: usize = 0x454D4147; // 
                pub const : usize = 0x594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const ���>Y�>
                �Y��>xy۽`��>p%�<_�>�9,>h��>P�>d��>��>D�>ȇ
                ?�B>��?��d�?�vk���>dMо,�>LT
                ��E�=�*��<���U�ں��=�: usize = 0x454D4147; // 
                pub const : usize = 0x455341; // 
                pub const : usize = 0x4547414E; // 
                pub const =��Ͻu֔=&S����=����0	>���<4�>�a=L��=&��=|e�=�i�=�k=a�>z��<��=�����: usize = 0x454D4147; // 
                pub const : usize = 0x59434E; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x445F444C; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0xFF004E45; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F574F46; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x54584554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F4F545F; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x45455246; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x545F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x495F455A; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x505F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x54414456; // 
                pub const : usize = 0x4547414E; // 
                pub const �=�<f;���=�=3Q�=hy�=.:�=�\�=��K=���=Fd�<'��=8d�` �=Qg3��=$�����:=`��Z:<�,ؽ��޼��ֽ�偽���V|���)x��I׽�dѼ�۽��1<ڥɽa;=0����؝=uhK��C�=^�+��~�=�r=�V�=�=9��=0��=��p=�3�=�z�<�j�=#ҷ��J�=��e��Ȁ=pH�����<L���$d���_ƽ!��/=��ׯ���������py�@E���H���'����<��c���0=e��n=b=�sT�Q2s=���;�e=*~�<w==�N=���<�*=b�[<�4=�A.�R��<jg���<͋��(,<| ����W;�t��@5��ŏ�\�Ȼ$ao�N��|6��y8���軠�C�9~1�04��d�:\���ê;|����=�;��L��H�;: usize = 0x454D4147; // 
                pub const : usize = 0x4E4146; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x53554C43; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4556; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C61762E; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x36AFF600; // 
                pub const : usize = 0x7; // 
                pub const : usize = 0x72615F74; // 
                pub const : usize = 0x0; // 
                pub const OnNetUInt16VarChanged: usize = 0x0; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x1F; // 
                pub const : usize = 0x6F72702E; // 
                pub const : usize = 0x73694C79; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x79746974; // 
                pub const : usize = 0x6E657645; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x2E006C64; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x18FCC90; // 
                pub const te.proto: usize = 0x2B624038; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x685F6B63; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x6C64; // 
                pub const : usize = 0x6E657645; // 
                pub const : usize = 0x0; // 
                pub const OnWaterLevelChangeNetworked: usize = 0x0; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C61762E; // 
                pub const : usize = 0x6E657645; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x5F64656B; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x6C006C64; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x5D3430; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x19; // 
                pub const : usize = 0xFFFFFF00; // 
                pub const : usize = 0x6C616365; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x745F7965; // 
                pub const : usize = 0x61745379; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x745F7965; // 
                pub const : usize = 0x746E6576; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x745F7965; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x36315B20; // 
                pub const : usize = 0x73655279; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x35005D31; // 
                pub const : usize = 0x6E45726F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x79746900; // 
                pub const : usize = 0x6E45726F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x74005D33; // 
                pub const : usize = 0x70614365; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C636F74; // 
                pub const : usize = 0x70614365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C005D34; // 
                pub const : usize = 0x736C6163; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65005D35; // 
                pub const : usize = 0x4D736369; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x630065; // 
                pub const : usize = 0x4D736369; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x35315B20; // 
                pub const : usize = 0x2E746E65; // 
            }
            // Parent: None
            // Field count: 314
            pub mod 7 {
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6F6C6F43; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x4E6E6B28; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x66667542; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7AADAB0; // 
                pub const S������v:j����VM?�:j��"��N�j���H?�QL��=tRCi���F��X�S/�������#�M��U7�9+�w��$�����<�t�K��
                )���;@`  �: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x7AADC20; // 
                pub const �O�w�
                 ^�K'k�OP�x��JzH	3���,����\&���|#n�: usize = 0x76A98C0; // 
                pub const : usize = 0x76A98E0; // 
                pub const : usize = 0x76A9900; // 
                pub const : usize = 0x76A9920; // 
                pub const : usize = 0x76A9940; // 
                pub const : usize = 0x7AADCC0; // 
                pub const i�������4�໴�wܟ�+g�ޤ6������W�i�K?�+f|��O1Ǚ~ծ�D��+�����$9�>�+��%��W: usize = 0x76A99B8; // 
                pub const : usize = 0x7AADE10; // 
                pub const /���: usize = 0x2B544320; // 
                pub const : usize = 0x7AADE60; // 
                pub const ˩���ҙ�-%_���+{"��]1>X|J�ܿ�Q������������J�w�s}�~: usize = 0x2B544430; // 
                pub const : usize = 0x7AADEB0; // 
                pub const �Ə���u�6^�F�&�R^7B�M�;�AK��L��bF�nA�0h�KCs8C�]�c2�!���ɔ���+�͗���^�'�!Ur/4�6�芇���W�w��~�*T4�oߢ��%�y��F�l�u컵r��x":�D��ns�~�\{o��8:����Ec4���3c�͝ Jts��3��ag��٩�������ί_�Q���՟@/�m��*0�����7b��_�e��=Bр�R����+�/�{��A�sBK�,: usize = 0x0; // 
                pub const : usize = 0x7AAE050; // 
                pub const 	: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const 
                : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7AAE0C0; // 
                pub const �c����}l�a]N	�dB
                6��2�: usize = 0x0; // 
                pub const : usize = 0x7AAE210; // 
                pub const ���PxEW�IpI��]��S6�G�W�X��+�C�`v���hv�z����~'�}��I ��0g緉��:�[F�q��qtg��:/��D�-���	��B�c�"pg�{oS-DC��k�w&�|S����*C�W<��2L��]��S6�G�W�X��+��\�_����k���+�R��ñG��]�B���]�M���Zs\����m�~ ��a4�瑫�v��WVK8�~d�����1�w�-���@�C~����2���=>��'�G����k��y�5B|9�r���.稇���r�y�E~�#pD{���ӽo��'E�P�#�=�!�޿;y&y����Us�.���{�w��]����~ߖ��w�u�[��?����{8��>���^�?9j)K�}���W��	��擧]����yӊ�<�f���N?�Yk����%ͺ����(;[2��Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA��: usize = 0x2B544A10; // 
                pub const : usize = 0x7AAE3D0; // 
                pub const �Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA��: usize = 0x2B544A90; // 
                pub const : usize = 0x2B544AD0; // 
                pub const : usize = 0x6349820; // 
                pub const : usize = 0x2B544B50; // 
                pub const : usize = 0x7AAE610; // 
                pub const |�%���앗u/����'�����T8��@�P��1x,.���a�ﮒj="��<H&�����h�!���V���!W�нh����ܣ����j�b[x��U��;e{C��W���I�[��@���0N0vѧ=,ˡ�;U�+5*=�F��ШPwW��^V���n��]+7��Xy�R��`��� ��?x�w@�r��X�o�v�5?V|-���A��'7�e[��`Vn����ُ98� ��N��_��=&.>�jqH��ypuw������m�: usize = 0x2B544BD0; // 
                pub const : usize = 0x7AAE760; // 
                pub const a2]����_?�/���h���g�7�]8x@l�O��p�{���Gp\���<�eK?ѷA6p耼�xRf_`����p� y��Z���4^��߿���+���A��`������h��.}������E���|}���fy<��eґ���aE��1����[��y��0h�E&N���6����ҟ+~�={��_0�n��y��K�����t�������4�M��һo���4g8��/pD��ɼ�}���<mM^�*ب&z:&Fԭ�3onv{���: usize = 0x2B544C50; // 
                pub const : usize = 0x7AAE8C0; // 
                pub const \9$�-
                �/: usize = 0x2B544CD0; // 
                pub const : usize = 0x7AAEA30; // 
                pub const �m��u��Lp��]��>wO��:uk��Yo^�T�(id�g�aN.����(!B�!�̨@   �: usize = 0x2B544D50; // 
                pub const : usize = 0x2B544D90; // 
                pub const NoteamDot.AddClass('hidden');
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
                    functi: usize = 0x2B544DD0; // 
                pub const : usize = 0x2B544E10; // 
                pub const item-tile__equipped__radiodot--filled');
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
                        if (capabilityInfo && capabilityInfo.capabilit: usize = 0x2B544E50; // 
                pub const : usize = 0x7AAEAD0; // 
                pub const ��96���x��K�R�?[a|c��S��.-��wf��`8�Pz��G�S���n�9�gx_U|~��:�3��oH*�Z]�}q���(�!�z��O�˸�x".��~C>}~���x-�]�>���Ӆ(c&��,�|9: usize = 0x2B544ED0; // 
                pub const : usize = 0x7AAEFF0; // 
                pub const en', !InventoryAPI.ItemIsInFavorites('ct', id));
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
                        else if (capabilityInfo && capabilityInfo.capability === 'can_p: usize = 0x2B544F50; // 
                pub const : usize = 0x2B544F90; // 
                pub const t', id));
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
                            $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > Inventor: usize = 0x2B544FD0; // 
                pub const : usize = 0x2B545010; // 
                pub const uipIcon(true, team);
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
                        else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !Ite: usize = 0x2B545050; // 
                pub const : usize = 0x2B545090; // 
                pub const , team);
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
                            $.GetContextPanel().enabled = (InventoryAPI.GetItemKeychainSlotCount(id) > InventoryAPI.GetI: usize = 0x2B5450D0; // 
                pub const : usize = 0x2B545110; // 
                pub const initionKey(id, 'flexible_loadout_group');
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
                        let elLabel = $.GetContextPanel().FindChi: usize = 0x2B545150; // 
                pub const : usize = 0x7AB0320; // 
                pub const %����K\P3Au$<�4p��q2�c~)��: usize = 0x0; // 
                pub const : usize = 0x634D830; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7AB09E0; // 
                pub const Ƞj*: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x634DA10; // 
                pub const : usize = 0x634DA50; // 
                pub const : usize = 0x634DA90; // 
                pub const : usize = 0x634DAD0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const csgo_simple.vfx: usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const @B�L*: usize = 0x0; // 
                pub const : usize = 0x3F000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x634DE10; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const ��j*: usize = 0x10000; // 
                pub const : usize = 0x20000; // 
                pub const �j*: usize = 0xFF; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x634DEA0; // 
                pub const : usize = 0x55555555; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x6349040; // 
                pub const �j*: usize = 0x6349110; // 
                pub const : usize = 0x55555555; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x55555555; // 
                pub const : usize = 0x63459B0; // 
                pub const : usize = 0x76AAAC8; // 
                pub const : usize = 0x6345A60; // 
                pub const ����: usize = 0x6345AA0; // 
                pub const : usize = 0x6345AE0; // 
                pub const : usize = 0x6345B20; // 
                pub const : usize = 0x6345B90; // 
                pub const �[4*: usize = 0x6345BD0; // 
                pub const ثj*: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6345C30; // 
                pub const : usize = 0x6345C70; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x75426563; // 
                pub const : usize = 0xFFFFFF00; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x72; // 
                pub const : usize = 0x6675426D; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xCE6E6B28; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6E695465; // 
                pub const : usize = 0x6F6E6749; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xC4653601; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x66667542; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7810D60; // 
                pub const : usize = 0x7811F60; // 
                pub const : usize = 0x20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63DAB20; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const �: usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7810300; // 
                pub const : usize = 0x78118A0; // 
                pub const : usize = 0x20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63D8BE0; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const �: usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xA0000000; // 
                pub const Z�(.��: usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7810540; // 
                pub const : usize = 0x7810340; // 
                pub const : usize = 0x20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x13BBBD2E; // 
                pub const : usize = 0x63D8C80; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x7AA4E90; // 
                pub const ���A�<�;��,B�.I�t8�M�F�(�d��r�+�m��MS|z&�j_`�$md&�Έ�sF�fi)��N�����Q3�>�tC�p��,���k_O�7|�ם�<w��o: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA5030; // 
                pub const 0�j*: usize = 0x0; // 
                pub const p�j*: usize = 0x97EFD278; // 
                pub const �4*: usize = 0x6341ED0; // 
                pub const ��j*: usize = 0x7AA50A0; // 
                pub const :�x���3k��"�^�_X�y���s���?�_i=�x}�uRh���6i<�?����)Q�1���uD�΂��M: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA51F0; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x7AA5370; // 
                pub const ��Ak�HhJ�D^�'�kt@�ɢxL�{;����]�։�9��KqY�|�n�(_gW�`}�@5=]cB�3Nx��!xo�_�z�o��s6L�*�6$;����![���h�v�U,�#�M�w4-s,����Wf���uG����~�"��C�4��kG�X}�������1������`u��p�O��h��[�](����6Z���p]#�3C: usize = 0x0; // 
                pub const p�j*: usize = 0x7AA54E0; // 
                pub const Mc�: usize = 0x7AA5520; // 
                pub const ��j*: usize = 0x6345090; // 
                pub const ��j*: usize = 0x0; // 
                pub const 0�j*: usize = 0x7AA55A0; // 
                pub const �M�DB< ��Ӵ�?1��� ��M��L��a��fk��.t�6xM�R�}�t�q��%��: usize = 0x0; // 
                pub const p�j*: usize = 0x7AA56F0; // 
                pub const Į��ܾ�V��F�?y��!Q��&ω@8p��ir�9ƍ�0e�]���i��V������DZ��Dt�U���a�Lhk"6V�AyNHᐚ��2<«�eܰ{:X���B��
                �����������$�M�����0a�y,�] H�����]"I�H�N���]��C�|�Q~-䂡sj�H���
                �e��=�qU�i�!B��!B�B�A�	h�&@: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA5850; // 
                pub const ��|�|�`\�f�0�b��:����uis3��1�U1���b��se4�uކ�/��������~��Ρ�������{�����������l��U���Ϸ������x�{ȡ���)����.G�n�����Sn:�>�r�}?�_y����<�����)�H�b���������X���S¦�c��ȋ!�r���>�u��x���Rٜ�2���TV]�O��_ϯǽg��xޑHG䏿�`���y��튫�������y����{�z���������W>��s3ɲXgn�	.<*z�����j2�*�خ��ӊŬ������߇IO�E}�y.�*՝+<��m�����E/��8$��+�u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA59C0; // 
                pub const �u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J: usize = 0x0; // 
                pub const 0�j*: usize = 0x6345370; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA5A60; // 
                pub const ����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J: usize = 0x6345490; // 
                pub const ��j*: usize = 0x7AA5F80; // 
                pub const 0�j*: usize = 0x6345590; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x0; // 
                pub const ��j*: usize = 0x6345620; // 
                pub const 0�j*: usize = 0x7AA72B0; // 
                pub const -��?_�Q�z4����������g���2�	�j�f�"|ָ����Tq?�>+Ô5Fd���
                l�#xV�S���
                ��@F���F@�£��_?��_ B0TZ: usize = 0x0; // 
                pub const p�j*: usize = 0x6345790; // 
                pub const ��j*: usize = 0x6345860; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x7AA7970; // 
                pub const 0�j*: usize = 0x0; // 
                pub const p�j*: usize = 0x6345900; // 
                pub const ��j*: usize = 0x0; // 
                pub const ��j*: usize = 0x63459E0; // 
                pub const Ho���: usize = 0x6345A20; // 
                pub const : usize = 0x7AA8C70; // 
                pub const K0�bhc�i9�dY�k��!���d�F�@}k�N%9�Z��Hh�>�A�m�H����-נ���ɚi��<~�VZ�BC^�ܭ���A[�5�)�h�B�V擑BX�<$g=�����sąu5e��5�O�$34���>�@uen�IlZ�����j�9k-�[�: usize = 0x0; // 
                pub const : usize = 0x6345B20; // 
                pub const : usize = 0x63490F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6345BB0; // 
                pub const : usize = 0x63493D0; // 
                pub const �V���: usize = 0x0; // 
                pub const : usize = 0x6349420; // 
                pub const P�4*: usize = 0x0; // 
                pub const : usize = 0x6349470; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63495E0; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x6345E90; // 
                pub const ��j*: usize = 0x6349650; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x63497A0; // 
                pub const : usize = 0x0; // 
                pub const p�j*: usize = 0x6349920; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x6349A90; // 
                pub const : usize = 0x6349AD0; // 
                pub const ��j*: usize = 0x2B13D470; // 
                pub const 0�j*: usize = 0x0; // 
                pub const p�j*: usize = 0x6349B50; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x6349CA0; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x6349E00; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x6349F70; // 
                pub const ��4*: usize = 0x0; // 
                pub const p�j*: usize = 0x2B13D520; // 
                pub const ��j*: usize = 0x2B13D540; // 
                pub const ��j*: usize = 0x6341040; // 
                pub const ����*: usize = 0x0; // 
                pub const 0�j*: usize = 0x6341190; // 
                pub const : usize = 0x0; // �$���
            }
            // Parent: None
            // Field count: 0
            pub mod PF_NOISE_MODIFIER_NONE {
            }
            // Parent: None
            // Field count: 0
            pub mod PF_TYPE_LITERAL {
            }
            // Parent: None
            // Field count: 656
            pub mod _ {
                pub const : usize = 0x0; // 
                pub const ������������: usize = 0x545F4650; // ��$��
                pub const : usize = 0x0; // 
                pub const D: usize = 0x17BD907; // 
                pub const : usize = 0x17BD82E; // 
                pub const ������������: usize = 0x17BD862; // ��$��
                pub const ������������: usize = 0x17BD89B; // ��$��
                pub const : usize = 0x17BD8D3; // 
                pub const : usize = 0x4003409; // m_flZOffset
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x729D9A0; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const ���_�: usize = 0x63DA260; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4002C23; // 
                pub const : usize = 0x4003409; // 
                pub const weapons/models/grenade/hegrenade/materials/weapon_hegrenade.vmat: usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x2E676D64; // 
                pub const +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL>: usize = 0x4006415; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656B6162; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6174654D; // 
                pub const : usize = 0x65736162; // 
                pub const : usize = 0x706F7270; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6E6970; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x70616577; // 
                pub const +��>������><���O��>=,Ⱦ�]Y>�5��m�=f����� 5� �v�9��x
                ���ܵ���߾�g�42𾚨��J��?=:M�\�&>0������>�����>.���~�>��<�`�>�->��>Ѭm>�Ω>�|�>��~>��>s�&>���>���=�c�>B�.����>���L��>�|���8>�Ĝ����=�F��,�`����B�ν�ݚ�:7��؂��;u�%b?�|(���Gӽ6��fc�������>q=q�\���=� *�%>���y@>�>i��kL>: usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x0; // 
                pub const weapons/models/grenade/flashbang/materials/weapon_flashbang.vmat: usize = 0x79646F62; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x69736F50; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E6970; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x70616577; // 
                pub const ���_�: usize = 0x70616577; // 
                pub const ���_�: usize = 0x70616577; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x646E6168; // 
                pub const : usize = 0x72EC640; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x79706F43; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0xA779851D; // 
                pub const : usize = 0x97E8F1D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x706F7270; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F62; // 
                pub const : usize = 0x2C20; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4006819; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6C6C6162; // 
                pub const : usize = 0x646E6168; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x656B6162; // 
                pub const : usize = 0x6174654D; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x79706F63; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x72EC4C0; // 
                pub const : usize = 0x6B63656E; // 
                pub const : usize = 0x6C6C6162; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x62657965; // 
                pub const : usize = 0x6C6B6E61; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6F6C6C61; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x2E676D64; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6E696F70; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x6F6C6F6D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x61545F6D; // 
                pub const : usize = 0x6F6C6F6D; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x7571696C; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x69736F50; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x6867696C; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x0; // 
                pub const phase2/weapons/models/grenade/molotov/weapon_molotov_ag2.vmdl: usize = 0x6F6C6F6D; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x766C6570; // 
                pub const : usize = 0x6E697073; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x656E6F62; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x6C616568; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x6E657267; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x4006859; // 
                pub const : usize = 0x4003027; // 
                pub const : usize = 0x6F6C6C61; // 
                pub const : usize = 0x4003409; // 
                pub const : usize = 0x4006415; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x656E6F42; // 
                pub const : usize = 0x5F316761; // 
                pub const : usize = 0x70616577; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x0; // 
                pub const phase2/weapons/models/grenade/smokegrenade/weapon_smokegrenade_ag2.vmdl: usize = 0x70616577; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x17BDE9D; // 
                pub const : usize = 0x17BDEEC; // 
                pub const : usize = 0x17BDF3E; // 
                pub const : usize = 0x17BDF90; // 
                pub const : usize = 0x6F677363; // 
                pub const : usize = 0x6C6C6163; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x726F6353; // 
                pub const : usize = 0x7270732B; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x73616F74; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x635F6C63; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6574756D; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x65646968; // 
                pub const : usize = 0x65646968; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x696E6173; // 
                pub const : usize = 0x696E6173; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x61736964; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6E6F6349; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6274656E; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x72747865; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x77647568; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6461722B; // 
                pub const : usize = 0x6461722B; // 
                pub const : usize = 0x74756C43; // 
                pub const : usize = 0x67676F54; // 
                pub const : usize = 0x63696F56; // 
                pub const : usize = 0x7373656D; // 
                pub const : usize = 0x52647453; // 
                pub const : usize = 0x79616C70; // 
                pub const : usize = 0x736E6F43; // 
                pub const : usize = 0x6D616554; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x5F647568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x746C754D; // 
                pub const : usize = 0xC3236A1D; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x736F6F42; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6E2D6469; // 
                pub const : usize = 0x6E3A737B; // 
                pub const : usize = 0x74657323; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x53766E49; // 
                pub const : usize = 0x63616C70; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x72474548; // 
                pub const : usize = 0x66696E4B; // 
                pub const : usize = 0x6D697250; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x55465323; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x7375655A; // 
                pub const : usize = 0xD20; // 
                pub const : usize = 0x7E163F1D; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x63647568; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x6D676573; // 
                pub const : usize = 0x69646172; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x61646152; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x725F6C63; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6E65706F; // 
                pub const : usize = 0x6E65706F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x74646977; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0xE36D22CA; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6F6D6E6F; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x776F6873; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x67676F74; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x61766E6F; // 
                pub const : usize = 0x67676F74; // 
                pub const : usize = 0x635F6C63; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x69616858; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x736F7263; // 
                pub const : usize = 0x2D70616D; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x61646172; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x63616E6F; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6E696E6F; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x63696F56; // 
                pub const : usize = 0x5F646E73; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x62616E65; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616548; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x7466656C; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x723A737B; // 
                pub const : usize = 0x673A737B; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74746553; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x63736564; // 
                pub const : usize = 0x6F677363; // 
                pub const : usize = 0xA779851D; // 
                pub const : usize = 0x97E8F1D; // 
                pub const : usize = 0x600161A; // 
                pub const : usize = 0x626D6F42; // 
                pub const : usize = 0x5F646E73; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x64616568; // 
                pub const : usize = 0x666C6168; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6D614723; // 
                pub const : usize = 0x63726570; // 
                pub const : usize = 0x74616544; // 
                pub const : usize = 0x736E6F63; // 
                pub const : usize = 0x69647561; // 
                pub const : usize = 0x6E657665; // 
                pub const : usize = 0x63726570; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0xA5D9646E; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0xF5AD4CF4; // 
                pub const : usize = 0x74746968; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x2678EB8; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x6D756E23; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x74617473; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x58585858; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6E3A737B; // 
                pub const : usize = 0x63736564; // 
                pub const : usize = 0x16ED8FBF; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6C6C6F43; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x656D616E; // 
                pub const : usize = 0x7543736A; // 
                pub const : usize = 0x633A737B; // 
                pub const : usize = 0x6F666E49; // 
                pub const : usize = 0x69726172; // 
                pub const : usize = 0x6D616574; // 
                pub const : usize = 0x69726172; // 
                pub const : usize = 0x74616863; // 
                pub const : usize = 0x74617661; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74696177; // 
                pub const : usize = 0x74617661; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6772616C; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x74736542; // 
                pub const : usize = 0x70616557; // 
                pub const : usize = 0x743A737B; // 
                pub const : usize = 0x733A737B; // 
                pub const : usize = 0x70616557; // 
                pub const : usize = 0x743A737B; // 
                pub const : usize = 0x733A737B; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x696D696C; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x763A737B; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x696D696C; // 
                pub const : usize = 0x74736542; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x4F475343; // 
                pub const : usize = 0x61666564; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x6F746E6F; // 
                pub const : usize = 0x6F6C6E75; // 
                pub const : usize = 0x6566666F; // 
                pub const : usize = 0x6F2D6469; // 
                pub const : usize = 0x6E69616D; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x2D726162; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x6C6C7566; // 
                pub const : usize = 0x74786554; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x65737523; // 
                pub const : usize = 0x65737523; // 
                pub const : usize = 0x74786574; // 
                pub const : usize = 0x72617473; // 
                pub const : usize = 0x656D6163; // 
                pub const : usize = 0x2D706F74; // 
                pub const : usize = 0x772D6469; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6C6F6F74; // 
                pub const : usize = 0x2D637273; // 
                pub const : usize = 0x61747323; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x6D726F6E; // 
                pub const : usize = 0x70617267; // 
                pub const : usize = 0x6C6F6F54; // 
                pub const : usize = 0x69646152; // 
                pub const : usize = 0x633A737B; // 
                pub const : usize = 0x6B3A647B; // 
                pub const : usize = 0x64697053; // 
                pub const : usize = 0x95870F03; // 
                pub const : usize = 0x6374616D; // 
                pub const : usize = 0x6374614D; // 
            }
            // Parent: None
            // Field count: 0
            pub mod PF_BIAS_TYPE_STANDARD {
            }
            // Parent: None
            // Field count: 806
            pub mod PF_NOISE_TURB_NONE {
                pub const : usize = 0x4F4E5F52; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x45504D41; // 
                pub const : usize = 0x7007370; // 
                pub const : usize = 0x53455241; // 
                pub const : usize = 0x5241444E; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const : usize = 0xFF005443; // 
                pub const : usize = 0x54534E01; // 
                pub const : usize = 0x54534E4F; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0xFF00454E; // 
                pub const  �*��: usize = 0x362BAA30; // 
                pub const : usize = 0x4E494C52; // 
                pub const : usize = 0x75E4801; // 
                pub const : usize = 0x4F4E5F52; // 
                pub const  �*��: usize = 0x16510010; // �*��
                pub const : usize = 0x45504D41; // 
                pub const : usize = 0x6C6101; // 
                pub const : usize = 0x53455241; // 
                pub const : usize = 0x97EFD8B8; // 
                pub const : usize = 0x5241444E; // 
                pub const : usize = 0x6C6101; // 
                pub const : usize = 0xFF005443; // 
                pub const : usize = 0x7545610; // �H-��
                pub const : usize = 0x54534E4F; // 
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0xFF00454E; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x4E494C52; // 
                pub const : usize = 0x520; // 
                pub const : usize = 0x4F4E5F52; // 
                pub const default: usize = 0x45504D41; // 
                pub const : usize = 0x45504D41; // 
                pub const : usize = 0x7137750; // ��{*
                pub const : usize = 0x53455241; // 
                pub const  �*��: usize = 0x362BA760; // 
                pub const : usize = 0x5241444E; // 
                pub const ���*: usize = 0x7137660; // ��{*
                pub const : usize = 0x444E454C; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x17060001; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7910001; // 
                pub const : usize = 0x43; // 
                pub const `��*: usize = 0xFF00574F; // 
                pub const : usize = 0xFF00574F; // 
                pub const : usize = 0xFFFF004C; // 
                pub const : usize = 0x74736566; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x4F; // 
                pub const : usize = 0x4C5F6174; // 
                pub const : usize = 0x4F465F4E; // 
                pub const first_or_third_person_@0_#&thirdperson_default: usize = 0x19769640; // 
                pub const : usize = 0x52; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x7541348; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x63E7D50; // 
                pub const �o���: usize = 0x63E8250; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x2B869890; // 
                pub const  �*��: usize = 0x665BF50; // 
                pub const �o���: usize = 0x63E8750; // 
                pub const �o���: usize = 0x63E8C50; // 
                pub const  �*��: usize = 0x7290C00; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const �o���: usize = 0x63E9148; // 
                pub const �o���: usize = 0x63E9648; // 
                pub const �o���: usize = 0x7541A48; // 
                pub const �o���: usize = 0x7540C48; // F_RANDOM_MODE_CONSTANT
                pub const �o���: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x76A55F8; // 
                pub const  �*��: usize = 0xF2F148; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x140; // 
                pub const : usize = 0x100; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291D30; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0x6D6165; // 
                pub const  �*��: usize = 0x7290E80; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x736E6F63; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7290E80; // 
                pub const : usize = 0x746E69; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291470; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291470; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x6E6F6974; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291E70; // 
                pub const  �*��: usize = 0x72912E0; // 
                pub const : usize = 0xFF007475; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7BB0001; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x65687774; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const  �*��: usize = 0x7291AB0; // 
                pub const  �*��: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0x5F32D401; // 
                pub const : usize = 0x76A9810; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x76A9810; // 
                pub const : usize = 0x5F6D6165; // 
                pub const : usize = 0x76A9810; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const : usize = 0x7592ACD; // 
                pub const : usize = 0x5F32D401; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x558C; // 
                pub const : usize = 0x482C; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7545610; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x2A6C8A01; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0x97EFCF08; // 
                pub const : usize = 0x75E4801; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x97EFCF58; // 
                pub const : usize = 0x75E4801; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x6AF0; // 
                pub const : usize = 0x685F6761; // 
                pub const : usize = 0x2A6C8A01; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x97EFD518; // 
                pub const : usize = 0x5F32D4F8; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x5264726F; // 
                pub const : usize = 0x7545610; // P�.��
                pub const : usize = 0x7545610; // 
                pub const : usize = 0x5F32D401; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x616D726F; // 
                pub const : usize = 0x97EFD1C8; // �H-��
                pub const : usize = 0x1; // 
                pub const : usize = 0x63E9D9E; // P�.��
                pub const : usize = 0x6; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x63E9D9E; // �#-��
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x7592A01; // weapon_offset
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0x7545610; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x1; // ����
                pub const : usize = 0x7007376; // 
                pub const : usize = 0x762E6572; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x63E9D01; // 
                pub const : usize = 0x7545610; // 
                pub const : usize = 0x63E9D9E; // 
                pub const : usize = 0x7592A01; // 
                pub const : usize = 0x762E6432; // 
                pub const : usize = 0x44207265; // 
                pub const : usize = 0x616D726F; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0xFFFF004C; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x72D0074; // 
                pub const  �*��: usize = 0x362BADF0; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const  �*��: usize = 0x362BADF0; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const  �*��: usize = 0x16510010; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const `�*: usize = 0x7543310; // �H-��
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0xFFFFFF01; // 
                pub const : usize = 0x7592ACD; // 
                pub const  �*��: usize = 0x2B544001; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x616D726F; // 
                pub const  �*��: usize = 0x362BB020; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0x6E69616D; // 
                pub const : usize = 0x7592ACD; // {,��
                pub const : usize = 0x664F6472; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0x74616566; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0x1; // 
                pub const : usize = 0x7543310; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x10000; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xFFFF0001; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const PaintKit_handwrap_leathery_snakeskin_orange_tag: usize = 0xFFFFFFFF; // 
                pub const PaintKit_handwrap_leathery_caution: usize = 0xFFFFFFFF; // 
                pub const PaintKit_handwrap_leathery_caution_tag: usize = 0xFFFFFFFF; // 
                pub const PaintKit_operation10_metalic_green: usize = 0xFFFFFFFF; // 
                pub const PaintKit_operation10_metalic_green_tag: usize = 0x65735543; // 
                pub const : usize = 0x6F6E0000; // 
                pub const : usize = 0x65706D6F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x7463615F; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65725F6C; // 
                pub const : usize = 0x73556172; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const �Ⱦ�u>�뚾b�>}E��-�>����.�>: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const �{�����&��./�,�+�@�#��W%��9*>5L��>�>�G��6�>fƪ���	?��>���?8���@?�}�=�J?[�s>�?�>���>���>n��>�!�>�a>,�?���=�<?Rt�"��>J���>�C���~�>b��=u>��ƾP/>�Dؾ<�&=JW޾ҥp��ؾS6�dHƾ�qd��)�������������>�X��h��*��	s˾
                mC�6˾��O=����&)>/<��R�`>��x�n�>h)7�:M�>L��v$�>J�U���>�Z�<��>6�=���>�'>#O�>��f>�^�>uӎ>��]>^̥>�
                >Q�><�=�C�>E����>܉��d��>$+��ƍ>�=W�xt>&����>>ͷ���Y�=�����*�;�оيҽ�ʾ4�I�����k燾
                M��;T��ɚc��ֳ��?"���ž�﷽QվP��ȥܾD��=d�־�R>P��]��>�����v�>��n�?�׶���?ϥ>�?��>�[�>���>���>���>��>'?��Q>�T?Hk�=�!?6���a?�؝����>n: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const ����ᙾ�꨾e�J�֟����ɽ����HG��ݔ���:=�?�����=�Mq�V: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x55747365; // 
                pub const �X��.�>��2��>"�<���>>�=rW�>K,>���>���>��>$��>�P�>��?h� >��?��w�V�?�3�����>��о��S>J�F+�=Hv侠���Z�־VuͽjJ̾~`C�.a���Y���1��W��/�c��MҾν�;���<�U��CJ�=x���6�4>Ξ�� Rp>w]d��0�>T�SF�>�K?�P�>�%�=�J�>1?>���>T��>�ח>�Ѫ>j�Z>ݾ>\>���>�=Qu�>�d��ma�>T�9��ê>�ɗ���l>.�ƾF��=: usize = 0x65735543; // 
                pub const : usize = 0x6F6E0000; // 
                pub const : usize = 0x55747365; // 
                pub const �6?���>`�@?.Ҧ=�,:?������%?�H��A�?�⾰��>	�
                �/x>~��Y��=��!�6<����EZ���gt��|����#߾{tξ(��v�����x�0����B���+��G�=f��Qʇ>�: usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0xFFFF0063; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x635F6D65; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0xFF003263; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x635F6D65; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x61705F63; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x61705F63; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x746E6569; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F667461; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65646D65; // 
                pub const : usize = 0x73556172; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x72676D65; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x5F6C6174; // 
                pub const : usize = 0x44747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x5F6C6174; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x76736F2E; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x65766E69; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x67734D6C; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x74616C70; // 
                pub const : usize = 0x73556172; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x66726570; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6F6E6761; // 
                pub const : usize = 0x74617453; // 
                pub const �=�K�>��I>&�>"��>綮>���>|�P>.H�>�4�=�ܸ>$�/���>O�
                >9�&���K>�|I���>�e����=4Fz��\=|i���yx��"���􇽄�v��*�1g��R3��L�0�l��������D?��ܭ���Iw;: usize = 0x65735543; // 
                pub const : usize = 0x6576736F; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6174732E; // 
                pub const : usize = 0x74617453; // 
                pub const cents.: usize = 0x65735543; // 
                pub const : usize = 0x6D657469; // 
                pub const : usize = 0x74617453; // 
                pub const le cry</i>: usize = 0x65735543; // 
                pub const : usize = 0x6100316C; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x637263; // 
                pub const : usize = 0x74617453; // 
                pub const a�: usize = 0x65735543; // 
                pub const : usize = 0x636974; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x2E636974; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x2E636974; // 
                pub const : usize = 0x49747365; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x2E636974; // 
                pub const : usize = 0x736F6E67; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x746573; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6169642E; // 
                pub const : usize = 0x74617453; // 
                pub const �����=�����ɽ�	��: usize = 0x65735543; // 
                pub const : usize = 0x6F746E65; // 
                pub const : usize = 0x74617453; // 
                pub const j1��a侂蜾ɥþ,0Ӿ�W��w���9������V���~�>��ھ\��>�����3�>�hw����>I你�?�e=��
                ?��B>��?�_�>5��>���>�y�>�.?q�Y>x�?��\=�?�R�_�
                ?x���\f�>�lؾ��>q�	���>gO�����%"��TT�;��򙾾{�����J˾E6��#q��%��[W�'l!�r$	>*��Ӝ>Y��H��>�=��5?p��F=?#�@=��?�_>}?���>bM�>���>푳>oU?��W>`?��=��
                ?�و�.�?z�K�:��>5���>�پ+[[>����t��=�V�Ƒ��)���I��9��%����۾�׾�奄@��W���	��,����	��&�=.��t#i>0LӾ�Զ>�������>z#��?Pߜ���?'>ۃ?G�>���>���>�P�>��>�lm>KP�>U	�=B��>,�Q�x��>.�8�3��>: usize = 0x67734D43; // 
                pub const : usize = 0x756F7268; // 
                pub const : usize = 0x74617453; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6975622E; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x61746E65; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C61762E; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x762E6C61; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x6D787600; // 
                pub const : usize = 0x52796669; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6972432E; // 
                pub const : usize = 0x746E6576; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6972432E; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6F006469; // 
                pub const : usize = 0x73655279; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D72615F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D72615F; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x706D6F43; // 
                pub const : usize = 0x65735543; // 
                pub const : usize = 0x6C616E6F; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x646D762E; // 
                pub const : usize = 0x746E6576; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x69745F72; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0xFF004554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0xFF004554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x4F5F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x455F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x4F5F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const ��vL���4��JG=�H����>Wm����T>ʒ>�ء�>||�E��>�L�~�>� _=��>��>(E�>�i>9
                y>w<�>I: usize = 0x454D4147; // 
                pub const : usize = 0x594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const ���>Y�>
                �Y��>xy۽`��>p%�<_�>�9,>h��>P�>d��>��>D�>ȇ
                ?�B>��?��d�?�vk���>dMо,�>LT
                ��E�=�*��<���U�ں��=�: usize = 0x454D4147; // 
                pub const : usize = 0x455341; // 
                pub const : usize = 0x4547414E; // 
                pub const =��Ͻu֔=&S����=����0	>���<4�>�a=L��=&��=|e�=�i�=�k=a�>z��<��=�����: usize = 0x454D4147; // 
                pub const : usize = 0x59434E; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x445F444C; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0xFF004E45; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F574F46; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x54584554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F4F545F; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x45455246; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x545F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x495F455A; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x505F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x5F594F52; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x54414456; // 
                pub const : usize = 0x4547414E; // 
                pub const �=�<f;���=�=3Q�=hy�=.:�=�\�=��K=���=Fd�<'��=8d�` �=Qg3��=$�����:=`��Z:<�,ؽ��޼��ֽ�偽���V|���)x��I׽�dѼ�۽��1<ڥɽa;=0����؝=uhK��C�=^�+��~�=�r=�V�=�=9��=0��=��p=�3�=�z�<�j�=#ҷ��J�=��e��Ȁ=pH�����<L���$d���_ƽ!��/=��ׯ���������py�@E���H���'����<��c���0=e��n=b=�sT�Q2s=���;�e=*~�<w==�N=���<�*=b�[<�4=�A.�R��<jg���<͋��(,<| ����W;�t��@5��ŏ�\�Ȼ$ao�N��|6��y8���軠�C�9~1�04��d�:\���ê;|����=�;��L��H�;: usize = 0x454D4147; // 
                pub const : usize = 0x4E4146; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4554; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x53554C43; // 
                pub const : usize = 0x4547414E; // 
                pub const : usize = 0x454D4147; // 
                pub const : usize = 0x465F4556; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C61762E; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x36AFF600; // 
                pub const : usize = 0x7; // 
                pub const : usize = 0x72615F74; // 
                pub const : usize = 0x0; // 
                pub const OnNetUInt16VarChanged: usize = 0x0; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x1F; // 
                pub const : usize = 0x6F72702E; // 
                pub const : usize = 0x73694C79; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x79746974; // 
                pub const : usize = 0x6E657645; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x2E006C64; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x18FCC90; // 
                pub const te.proto: usize = 0x2B624038; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x685F6B63; // 
                pub const : usize = 0x65764564; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x6C64; // 
                pub const : usize = 0x6E657645; // 
                pub const : usize = 0x0; // 
                pub const OnWaterLevelChangeNetworked: usize = 0x0; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x6C61762E; // 
                pub const : usize = 0x6E657645; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x5F64656B; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x65646F6D; // 
                pub const : usize = 0x6C006C64; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x5D3430; // 
                pub const : usize = 0x6D614779; // 
                pub const : usize = 0x19; // 
                pub const : usize = 0xFFFFFF00; // 
                pub const : usize = 0x6C616365; // 
                pub const : usize = 0x67734D43; // 
                pub const : usize = 0x745F7965; // 
                pub const : usize = 0x61745379; // 
                pub const : usize = 0x67734D43; // 
            }
            // Parent: None
            // Field count: 312
            pub mod 3 {
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6F6C6F43; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x4E6E6B28; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x66667542; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7AADAB0; // 
                pub const S������v:j����VM?�:j��"��N�j���H?�QL��=tRCi���F��X�S/�������#�M��U7�9+�w��$�����<�t�K��
                )���;@`  �: usize = 0xFFFFFFFF; // 
                pub const : usize = 0x7AADC20; // 
                pub const �O�w�
                 ^�K'k�OP�x��JzH	3���,����\&���|#n�: usize = 0x76A98C0; // 
                pub const : usize = 0x76A98E0; // 
                pub const : usize = 0x76A9900; // 
                pub const : usize = 0x76A9920; // 
                pub const : usize = 0x76A9940; // 
                pub const : usize = 0x7AADCC0; // 
                pub const i�������4�໴�wܟ�+g�ޤ6������W�i�K?�+f|��O1Ǚ~ծ�D��+�����$9�>�+��%��W: usize = 0x76A99B8; // 
                pub const : usize = 0x7AADE10; // 
                pub const /���: usize = 0x2B544320; // 
                pub const : usize = 0x7AADE60; // 
                pub const ˩���ҙ�-%_���+{"��]1>X|J�ܿ�Q������������J�w�s}�~: usize = 0x2B544430; // 
                pub const : usize = 0x7AADEB0; // 
                pub const �Ə���u�6^�F�&�R^7B�M�;�AK��L��bF�nA�0h�KCs8C�]�c2�!���ɔ���+�͗���^�'�!Ur/4�6�芇���W�w��~�*T4�oߢ��%�y��F�l�u컵r��x":�D��ns�~�\{o��8:����Ec4���3c�͝ Jts��3��ag��٩�������ί_�Q���՟@/�m��*0�����7b��_�e��=Bр�R����+�/�{��A�sBK�,: usize = 0x0; // 
                pub const : usize = 0x7AAE050; // 
                pub const 	: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const 
                : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7AAE0C0; // 
                pub const �c����}l�a]N	�dB
                6��2�: usize = 0x0; // 
                pub const : usize = 0x7AAE210; // 
                pub const ���PxEW�IpI��]��S6�G�W�X��+�C�`v���hv�z����~'�}��I ��0g緉��:�[F�q��qtg��:/��D�-���	��B�c�"pg�{oS-DC��k�w&�|S����*C�W<��2L��]��S6�G�W�X��+��\�_����k���+�R��ñG��]�B���]�M���Zs\����m�~ ��a4�瑫�v��WVK8�~d�����1�w�-���@�C~����2���=>��'�G����k��y�5B|9�r���.稇���r�y�E~�#pD{���ӽo��'E�P�#�=�!�޿;y&y����Us�.���{�w��]����~ߖ��w�u�[��?����{8��>���^�?9j)K�}���W��	��擧]����yӊ�<�f���N?�Yk����%ͺ����(;[2��Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA��: usize = 0x2B544A10; // 
                pub const : usize = 0x7AAE3D0; // 
                pub const �Ue�;���㣷�$uR�������ؓ����=�dh�b��m*� ����/uq����|A2�y8r��k}��>��x�辌���!s馊㒣�M�{A�E�Ţ�B��qAԻ0��f�����x�3^����9�&"��v&�׷$|X������]Ϡi<D|]sd<g`�s����tY��ǂį�&��'�k�B>t�y��\�_p��I)���֪+�`5�w�u���-D_?�N��^�#%�%`��2(���Ѷ����Rǋh��殽�4O
                FO>(�#����i8��[�1�܊m���8*S���WO����+��~c��%�Y[���@}�]!W8`�ytA������	�~\���S_H�uA��: usize = 0x2B544A90; // 
                pub const : usize = 0x2B544AD0; // 
                pub const : usize = 0x6349820; // 
                pub const : usize = 0x2B544B50; // 
                pub const : usize = 0x7AAE610; // 
                pub const |�%���앗u/����'�����T8��@�P��1x,.���a�ﮒj="��<H&�����h�!���V���!W�нh����ܣ����j�b[x��U��;e{C��W���I�[��@���0N0vѧ=,ˡ�;U�+5*=�F��ШPwW��^V���n��]+7��Xy�R��`��� ��?x�w@�r��X�o�v�5?V|-���A��'7�e[��`Vn����ُ98� ��N��_��=&.>�jqH��ypuw������m�: usize = 0x2B544BD0; // 
                pub const : usize = 0x7AAE760; // 
                pub const a2]����_?�/���h���g�7�]8x@l�O��p�{���Gp\���<�eK?ѷA6p耼�xRf_`����p� y��Z���4^��߿���+���A��`������h��.}������E���|}���fy<��eґ���aE��1����[��y��0h�E&N���6����ҟ+~�={��_0�n��y��K�����t�������4�M��һo���4g8��/pD��ɼ�}���<mM^�*ب&z:&Fԭ�3onv{���: usize = 0x2B544C50; // 
                pub const : usize = 0x7AAE8C0; // 
                pub const \9$�-
                �/: usize = 0x2B544CD0; // 
                pub const : usize = 0x7AAEA30; // 
                pub const �m��u��Lp��]��>wO��:uk��Yo^�T�(id�g�aN.����(!B�!�̨@   �: usize = 0x2B544D50; // 
                pub const : usize = 0x2B544D90; // 
                pub const NoteamDot.AddClass('hidden');
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
                    functi: usize = 0x2B544DD0; // 
                pub const : usize = 0x2B544E10; // 
                pub const item-tile__equipped__radiodot--filled');
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
                        if (capabilityInfo && capabilityInfo.capabilit: usize = 0x2B544E50; // 
                pub const : usize = 0x7AAEAD0; // 
                pub const ��96���x��K�R�?[a|c��S��.-��wf��`8�Pz��G�S���n�9�gx_U|~��:�3��oH*�Z]�}q���(�!�z��O�˸�x".��~C>}~���x-�]�>���Ӆ(c&��,�|9: usize = 0x2B544ED0; // 
                pub const : usize = 0x7AAEFF0; // 
                pub const en', !InventoryAPI.ItemIsInFavorites('ct', id));
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
                        else if (capabilityInfo && capabilityInfo.capability === 'can_p: usize = 0x2B544F50; // 
                pub const : usize = 0x2B544F90; // 
                pub const t', id));
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
                            $.GetContextPanel().enabled = (InventoryAPI.GetItemStickerSlotCount(id) > Inventor: usize = 0x2B544FD0; // 
                pub const : usize = 0x2B545010; // 
                pub const uipIcon(true, team);
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
                        else if (capabilityInfo && capabilityInfo.capability === 'can_keychain' && !Ite: usize = 0x2B545050; // 
                pub const : usize = 0x2B545090; // 
                pub const , team);
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
                            $.GetContextPanel().enabled = (InventoryAPI.GetItemKeychainSlotCount(id) > InventoryAPI.GetI: usize = 0x2B5450D0; // 
                pub const : usize = 0x2B545110; // 
                pub const initionKey(id, 'flexible_loadout_group');
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
                        let elLabel = $.GetContextPanel().FindChi: usize = 0x2B545150; // 
                pub const : usize = 0x7AB0320; // 
                pub const %����K\P3Au$<�4p��q2�c~)��: usize = 0x0; // 
                pub const : usize = 0x634D830; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7AB09E0; // 
                pub const Ƞj*: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x634DA10; // 
                pub const : usize = 0x634DA50; // 
                pub const : usize = 0x634DA90; // 
                pub const : usize = 0x634DAD0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const csgo_simple.vfx: usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const @B�L*: usize = 0x0; // 
                pub const : usize = 0x3F000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x3F800000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x634DE10; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const ��j*: usize = 0x10000; // 
                pub const : usize = 0x20000; // 
                pub const �j*: usize = 0xFF; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x634DEA0; // 
                pub const : usize = 0x55555555; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x6349040; // 
                pub const �j*: usize = 0x6349110; // 
                pub const : usize = 0x55555555; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x55555555; // 
                pub const : usize = 0x63459B0; // 
                pub const : usize = 0x76AAAC8; // 
                pub const : usize = 0x6345A60; // 
                pub const ����: usize = 0x6345AA0; // 
                pub const : usize = 0x6345AE0; // 
                pub const : usize = 0x6345B20; // 
                pub const : usize = 0x6345B90; // 
                pub const �[4*: usize = 0x6345BD0; // 
                pub const ثj*: usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6345C30; // 
                pub const : usize = 0x6345C70; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x75426563; // 
                pub const : usize = 0xFFFFFF00; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x72; // 
                pub const : usize = 0x6675426D; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3; // 
                pub const : usize = 0xCE6E6B28; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6E695465; // 
                pub const : usize = 0x6F6E6749; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0xC4653601; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x66667542; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xFFFFFFFF; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x4; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7810D60; // 
                pub const : usize = 0x7811F60; // 
                pub const : usize = 0x20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63DAB20; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const �: usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7810300; // 
                pub const : usize = 0x78118A0; // 
                pub const : usize = 0x20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63D8BE0; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const �: usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0xA0000000; // 
                pub const Z�(.��: usize = 0xB; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x7810540; // 
                pub const : usize = 0x7810340; // 
                pub const : usize = 0x20; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x13BBBD2E; // 
                pub const : usize = 0x63D8C80; // 
                pub const : usize = 0xB; // 
                pub const : usize = 0x7AA4E90; // 
                pub const ���A�<�;��,B�.I�t8�M�F�(�d��r�+�m��MS|z&�j_`�$md&�Έ�sF�fi)��N�����Q3�>�tC�p��,���k_O�7|�ם�<w��o: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA5030; // 
                pub const 0�j*: usize = 0x0; // 
                pub const p�j*: usize = 0x97EFD278; // 
                pub const �4*: usize = 0x6341ED0; // 
                pub const ��j*: usize = 0x7AA50A0; // 
                pub const :�x���3k��"�^�_X�y���s���?�_i=�x}�uRh���6i<�?����)Q�1���uD�΂��M: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA51F0; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x7AA5370; // 
                pub const ��Ak�HhJ�D^�'�kt@�ɢxL�{;����]�։�9��KqY�|�n�(_gW�`}�@5=]cB�3Nx��!xo�_�z�o��s6L�*�6$;����![���h�v�U,�#�M�w4-s,����Wf���uG����~�"��C�4��kG�X}�������1������`u��p�O��h��[�](����6Z���p]#�3C: usize = 0x0; // 
                pub const p�j*: usize = 0x7AA54E0; // 
                pub const Mc�: usize = 0x7AA5520; // 
                pub const ��j*: usize = 0x6345090; // 
                pub const ��j*: usize = 0x0; // 
                pub const 0�j*: usize = 0x7AA55A0; // 
                pub const �M�DB< ��Ӵ�?1��� ��M��L��a��fk��.t�6xM�R�}�t�q��%��: usize = 0x0; // 
                pub const p�j*: usize = 0x7AA56F0; // 
                pub const Į��ܾ�V��F�?y��!Q��&ω@8p��ir�9ƍ�0e�]���i��V������DZ��Dt�U���a�Lhk"6V�AyNHᐚ��2<«�eܰ{:X���B��
                �����������$�M�����0a�y,�] H�����]"I�H�N���]��C�|�Q~-䂡sj�H���
                �e��=�qU�i�!B��!B�B�A�	h�&@: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA5850; // 
                pub const ��|�|�`\�f�0�b��:����uis3��1�U1���b��se4�uކ�/��������~��Ρ�������{�����������l��U���Ϸ������x�{ȡ���)����.G�n�����Sn:�>�r�}?�_y����<�����)�H�b���������X���S¦�c��ȋ!�r���>�u��x���Rٜ�2���TV]�O��_ϯǽg��xޑHG䏿�`���y��튫�������y����{�z���������W>��s3ɲXgn�	.<*z�����j2�*�خ��ӊŬ������߇IO�E}�y.�*՝+<��m�����E/��8$��+�u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA59C0; // 
                pub const �u�<�.�Q�p�42���v�a	�?t�il�r%��kD[���y��J����!�7H9<Ϯ����q6ᦜ��1���h���@�H#����^H���{C�1A���'�^1���-���S xG����;�&�O(__yB�����u4���g�c����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J: usize = 0x0; // 
                pub const 0�j*: usize = 0x6345370; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x7AA5A60; // 
                pub const ����ii>j�oڃp�Fٙ��+I�m)�1qM��*L>t�+�t�ߚ5�%���<?s^��܃��}�o�ђ�(�/��X��J: usize = 0x6345490; // 
                pub const ��j*: usize = 0x7AA5F80; // 
                pub const 0�j*: usize = 0x6345590; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x0; // 
                pub const ��j*: usize = 0x6345620; // 
                pub const 0�j*: usize = 0x7AA72B0; // 
                pub const -��?_�Q�z4����������g���2�	�j�f�"|ָ����Tq?�>+Ô5Fd���
                l�#xV�S���
                ��@F���F@�£��_?��_ B0TZ: usize = 0x0; // 
                pub const p�j*: usize = 0x6345790; // 
                pub const ��j*: usize = 0x6345860; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x7AA7970; // 
                pub const 0�j*: usize = 0x0; // 
                pub const p�j*: usize = 0x6345900; // 
                pub const ��j*: usize = 0x0; // 
                pub const ��j*: usize = 0x63459E0; // 
                pub const Ho���: usize = 0x6345A20; // 
                pub const : usize = 0x7AA8C70; // 
                pub const K0�bhc�i9�dY�k��!���d�F�@}k�N%9�Z��Hh�>�A�m�H����-נ���ɚi��<~�VZ�BC^�ܭ���A[�5�)�h�B�V擑BX�<$g=�����sąu5e��5�O�$34���>�@uen�IlZ�����j�9k-�[�: usize = 0x0; // 
                pub const : usize = 0x6345B20; // 
                pub const : usize = 0x63490F0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x6345BB0; // 
                pub const : usize = 0x63493D0; // 
                pub const �V���: usize = 0x0; // 
                pub const : usize = 0x6349420; // 
                pub const P�4*: usize = 0x0; // 
                pub const : usize = 0x6349470; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x63495E0; // 
                pub const p�j*: usize = 0x0; // 
                pub const ��j*: usize = 0x6345E90; // 
                pub const ��j*: usize = 0x6349650; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x63497A0; // 
                pub const : usize = 0x0; // 
                pub const p�j*: usize = 0x6349920; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x6349A90; // 
                pub const : usize = 0x6349AD0; // 
                pub const ��j*: usize = 0x2B13D470; // 
                pub const 0�j*: usize = 0x0; // 
                pub const p�j*: usize = 0x6349B50; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x6349CA0; // 
                pub const : usize = 0x0; // 
                pub const ��j*: usize = 0x6349E00; // 
                pub const : usize = 0x0; // 
                pub const 0�j*: usize = 0x6349F70; // 
                pub const ��4*: usize = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            pub mod PF_NOISE_MODIFIER_NONE {
            }
            // Parent: None
            // Field count: 0
            pub mod _ {
            }
            // Parent: None
            // Field count: 146
            pub mod _ {
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x68B2600; // 
                pub const : usize = 0x2; // 
                pub const : usize = 0x41C00000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
                pub const : usize = 0x76A5630; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0xFFFFFFFE; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x3F000000; // 
                pub const : usize = 0x3F000000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
                pub const : usize = 0x76A5910; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0xFFFFFFFE; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x1; // H�\$WH��D�AH��H��A�@���vA�@��vA��uH��P(��u�S`A�A�
                pub const : usize = 0x76A5A90; // 
                pub const : usize = 0x6; // 
                pub const : usize = 0xFFFFFFFE; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x41200000; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
                pub const : usize = 0x0; // 
            }
            // Parent: None
            // Field count: 0
            pub mod PF_NOISE_MODIFIER_NONE {
            }
        }
    }
}
