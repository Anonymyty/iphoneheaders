/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class NSSet, EAWiFiUnconfiguredAccessory, NSExtension, WACUIRemoteViewController, UIViewController, NSMutableSet;

@interface EAWiFiUnconfiguredAccessoryBrowserManager : NSObject {

	BOOL __debugLog;
	BOOL _isConfiguring;
	NSSet* _unconfiguredAccessories;
	EAWiFiUnconfiguredAccessory* _accessoryBeingConfigured;
	NSExtension* _extension;
	WACUIRemoteViewController* _remoteViewController;
	UIViewController* _targetViewController;
	id<NSCopying> _currentRequestIdentifier;
	NSMutableSet* __accessories;
	long long _currentBrowserState;

}

@property (copy,readonly) NSSet * unconfiguredAccessories;                              //@synthesize unconfiguredAccessories=_unconfiguredAccessories - In the implementation block
@property (retain) EAWiFiUnconfiguredAccessory * accessoryBeingConfigured;              //@synthesize accessoryBeingConfigured=_accessoryBeingConfigured - In the implementation block
@property (retain) NSExtension * extension;                                             //@synthesize extension=_extension - In the implementation block
@property (retain) WACUIRemoteViewController * remoteViewController;                    //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (__weak) UIViewController * targetViewController;                             //@synthesize targetViewController=_targetViewController - In the implementation block
@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                    //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (retain) NSMutableSet * _accessories;                                         //@synthesize _accessories=__accessories - In the implementation block
@property (assign) long long currentBrowserState;                                       //@synthesize currentBrowserState=_currentBrowserState - In the implementation block
@property (assign) BOOL isConfiguring;                                                  //@synthesize isConfiguring=_isConfiguring - In the implementation block
+(id)sharedInstance;
-(void)setTargetViewController:(UIViewController *)arg1 ;
-(void)setAccessoryBeingConfigured:(EAWiFiUnconfiguredAccessory *)arg1 ;
-(void)setIsConfiguring:(BOOL)arg1 ;
-(void)dismissWithStatus:(int)arg1 ;
-(void)didFindNewUnconfiguredAccessories:(id)arg1 andRemovedUnconfiguredAccessories:(id)arg2 ;
-(void)wifiDidShutdown;
-(void)_signalPresentationComplete;
-(void)set_accessories:(NSMutableSet *)arg1 ;
-(void)cancelActiveConfiguration;
-(NSMutableSet *)_accessories;
-(long long)currentBrowserState;
-(EAWiFiUnconfiguredAccessory *)accessoryBeingConfigured;
-(void)purgeAccessoriesSet;
-(void)setCurrentBrowserState:(long long)arg1 ;
-(BOOL)isConfiguring;
-(id)init;
-(WACUIRemoteViewController *)remoteViewController;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setRemoteViewController:(WACUIRemoteViewController *)arg1 ;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(void)stopSearchingForUnconfiguredAccessories;
-(void)startSearchingForUnconfiguredAccessories;
-(void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2 ;
-(NSSet *)unconfiguredAccessories;
-(void)updateState:(long long)arg1 ;
-(UIViewController *)targetViewController;
-(void)setup;
@end
