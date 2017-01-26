/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXSettingsVoiceAssetManagerDelegate.h>

@class AXSettingsVoiceAssetManager, NSString, AXSettingsPremiumVoiceCell, NSMutableArray, AXLangMap;

@interface AXSettingsVoiceDetailController : AccessibilityBaseListController <AXSettingsVoiceAssetManagerDelegate> {

	BOOL _showSpeakingRate;
	float _speakingRate;
	/*^block*/id _setSpeakingRateCallback;
	/*^block*/id _getSpeakingRateCallback;
	AXSettingsVoiceAssetManager* _assetManager;
	BOOL _isCompact;
	BOOL _receivedCompactAnswer;
	long long _storageSize;
	BOOL _isDownloading;
	BOOL _wantsDownload;
	BOOL _wantsDelete;
	BOOL _receivedIsDownloading;
	SCNetworkReachabilityRef _reachability;
	BOOL _allowedToDownload;
	BOOL _allowedToDownloadIsSet;
	NSString* _languageBeingDownloaded;
	AXSettingsPremiumVoiceCell* _testVoiceCell;
	NSMutableArray* _languagesDownloading;
	BOOL _showDialectPicker;
	BOOL _showDialectInTitle;
	BOOL _hideLanguageInDialect;
	NSString* _language;
	/*^block*/id _setDialectPreferencesCallback;
	/*^block*/id _getDialectPreferencesCallback;
	/*^block*/id _alternativeVoiceAllowedCallback;
	AXLangMap* _languageMap;

}

@property (nonatomic,retain) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL showSpeakingRate; 
@property (assign,nonatomic) float speakingRate;                            //@synthesize speakingRate=_speakingRate - In the implementation block
@property (assign,nonatomic) BOOL showDialectPicker;                        //@synthesize showDialectPicker=_showDialectPicker - In the implementation block
@property (assign,nonatomic) BOOL showDialectInTitle;                       //@synthesize showDialectInTitle=_showDialectInTitle - In the implementation block
@property (assign,nonatomic) BOOL hideLanguageInDialect;                    //@synthesize hideLanguageInDialect=_hideLanguageInDialect - In the implementation block
@property (nonatomic,copy) id setSpeakingRateCallback;                      //@synthesize setSpeakingRateCallback=_setSpeakingRateCallback - In the implementation block
@property (nonatomic,copy) id getSpeakingRateCallback;                      //@synthesize getSpeakingRateCallback=_getSpeakingRateCallback - In the implementation block
@property (nonatomic,copy) id setDialectPreferencesCallback;                //@synthesize setDialectPreferencesCallback=_setDialectPreferencesCallback - In the implementation block
@property (nonatomic,copy) id getDialectPreferencesCallback;                //@synthesize getDialectPreferencesCallback=_getDialectPreferencesCallback - In the implementation block
@property (nonatomic,copy) id alternativeVoiceAllowedCallback;              //@synthesize alternativeVoiceAllowedCallback=_alternativeVoiceAllowedCallback - In the implementation block
@property (nonatomic,retain) AXLangMap * languageMap;                       //@synthesize languageMap=_languageMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)showSpeakingRate;
-(void)setHideLanguageInDialect:(BOOL)arg1 ;
-(void)setShowDialectPicker:(BOOL)arg1 ;
-(id)setSpeakingRateCallback;
-(void)setShowSpeakingRate:(BOOL)arg1 ;
-(void)setSetSpeakingRateCallback:(id)arg1 ;
-(void)setGetSpeakingRateCallback:(id)arg1 ;
-(void)_editPressed:(id)arg1 ;
-(id)specifierLanguage:(id)arg1 ;
-(BOOL)specifierIsCompact:(id)arg1 ;
-(void)_manageEditButton;
-(void)setGetDialectPreferencesCallback:(id)arg1 ;
-(void)setShowDialectInTitle:(BOOL)arg1 ;
-(BOOL)showDialectInTitle;
-(void)_voiceServicesAssetStateChanged;
-(void)setSpeakingRateCallbackBlock:(/*^block*/id)arg1 ;
-(id)_getEnhancedQuality:(id)arg1 ;
-(BOOL)_allowedToDownload;
-(void)_setSelectedSpecifier:(id)arg1 ;
-(void)_updateSpeakingRate;
-(void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 alternateVoiceId:(id)arg2 progress:(float)arg3 storageSize:(long long)arg4 requiredDiskSpace:(BOOL)arg5 versionId:(id)arg6 ;
-(void)assetManagerVoiceLanguageInProgressDownload:(id)arg1 alternateVoiceId:(id)arg2 ;
-(void)assetManagerVoiceLanguageIsCompact:(id)arg1 alternateVoiceId:(id)arg2 compact:(BOOL)arg3 error:(id)arg4 ;
-(void)updateAssetInformation;
-(BOOL)hideLanguageInDialect;
-(id)getDialectPreferencesCallback;
-(BOOL)showDialectPicker;
-(void)_startAlternativeVoiceDownload:(id)arg1 ;
-(void)addVoiceFootprintsToSpecs:(id)arg1 dialect:(id)arg2 groupSpec:(id)arg3 ;
-(id)_speakingRate:(id)arg1 ;
-(void)setLanguageMap:(AXLangMap *)arg1 ;
-(void)_setSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(BOOL)specifierIsVoiceCell:(id)arg1 ;
-(id)specifierAltVoiceId:(id)arg1 ;
-(id)alternativeVoiceAllowedCallback;
-(id)getSpeakingRateCallback;
-(void)setAlternativeVoiceAllowedCallback:(id)arg1 ;
-(void)setSetDialectPreferencesCallback:(id)arg1 ;
-(void)_donePressed;
-(void)assetManagerVoiceLanguageIsDownloadingPaused:(id)arg1 alternateVoiceId:(id)arg2 paused:(BOOL)arg3 ;
-(void)_updateAllowedToDownload;
-(void)assetManagerVoiceLanguageIsDownloading:(id)arg1 alternateVoiceId:(id)arg2 downloading:(BOOL)arg3 ;
-(id)setDialectPreferencesCallback;
-(AXLangMap *)languageMap;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(float)speakingRate;
-(void)setSpeakingRate:(float)arg1 ;
-(id)specifiers;
@end
