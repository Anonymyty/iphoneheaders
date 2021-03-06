/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSArray, SFRemoteHotspotDevice, SFRemoteHotspotInfo;

@interface WiFiNetwork : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _dict;
	NSMutableDictionary* _customizedSettings;
	BOOL _available;
	BOOL _dirty;
	BOOL _needsFavoritesCheck;
	NSDictionary* _lastProxyDict;
	NSArray* _certificateChain;
	NSDictionary* _eapolProfile;
	NSArray* _requestedInformation;
	id _tlsIdentity;
	id _wapiRoot;
	id _wapiIdentity;
	BOOL _usernameIsManaged;
	BOOL _hidden;
	BOOL _adhoc;
	WiFiNetworkRef _HS20Network;
	BOOL _isHS20;
	BOOL _needsHS20Query;
	BOOL _isHotspotDevice;
	SFRemoteHotspotDevice* _hotspotDevice;
	SFRemoteHotspotInfo* _hotspotInfo;

}

@property (assign) BOOL isHotspotDevice;                               //@synthesize isHotspotDevice=_isHotspotDevice - In the implementation block
@property (retain) SFRemoteHotspotDevice * hotspotDevice;              //@synthesize hotspotDevice=_hotspotDevice - In the implementation block
@property (retain) SFRemoteHotspotInfo * hotspotInfo;                  //@synthesize hotspotInfo=_hotspotInfo - In the implementation block
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)proxyPort;
-(id)proxyUsername;
-(id)proxyPassword;
-(void)setProfile:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSecure;
-(id)proxy;
-(id)strength;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(BOOL)hidden;
-(id)certificateChain;
-(int)profile;
-(void)setAvailable:(BOOL)arg1 ;
-(int)age;
-(BOOL)available;
-(int)proxyType;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(BOOL)isFavorite;
-(id)ip;
-(id)router;
-(id)searchDomains;
-(id)BSSID;
-(id)scanResultDictionary;
-(int)configType;
-(void)setConfigType:(int)arg1 userEntered:(BOOL)arg2 ;
-(void)setIP:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setSubnetMask:(id)arg1 userEntered:(BOOL)arg2 ;
-(id)subnetMask;
-(void)setRouter:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setDNSServers:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)removeCustomDNSServers;
-(id)DNSServers;
-(void)setSearchDomains:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)removeCustomSearchDomains;
-(void)setDHCPClientID:(id)arg1 userEntered:(BOOL)arg2 ;
-(id)DHCPClientID;
-(void)setProxy:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyPort:(id)arg1 userEntered:(BOOL)arg2 ;
-(BOOL)proxyAuthenticated;
-(void)setProxyAuthenticated:(BOOL)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyUsername:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyPassword:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)setProxyType:(int)arg1 userEntered:(BOOL)arg2 ;
-(id)pacFile;
-(void)setPacFile:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)removeCustomIP;
-(void)removeCustomRouter;
-(void)removeCustomSubnet;
-(void)setIPv6Enabled:(BOOL)arg1 userEntered:(BOOL)arg2 ;
-(id)IPv6Enabled;
-(BOOL)isAdhoc;
-(BOOL)isEnterprise;
-(long long)compareAscending:(id)arg1 ;
-(long long)compareUnconfigAscending:(id)arg1 ;
-(BOOL)isPersonalHotspot;
-(BOOL)canAttemptJoin;
-(BOOL)isHotspotDevice;
-(void)setCertificateChain:(id)arg1 ;
-(SFRemoteHotspotInfo *)hotspotInfo;
-(void)resignActiveNetwork;
-(id)eapolProfile;
-(id)eapTypes;
-(BOOL)requiresTLSIdentityOnly;
-(id)TLSIdentity;
-(void)setEapolProfile:(id)arg1 ;
-(int)securityMode;
-(BOOL)isHostspot20;
-(BOOL)isHostspot20Provisioned;
-(WiFiNetworkRef)HS20Data;
-(id)WAPIRoot;
-(id)WAPIIdentityPEMBlob;
-(void)setTLSIdentity:(id)arg1 ;
-(void)setWAPIRoot:(id)arg1 ;
-(void)setWAPIIdentityPEMBlob:(id)arg1 ;
-(void)setRequestedInformation:(id)arg1 ;
-(void)resetCustomSettings;
-(int)proxyTypeForDict:(id)arg1 ;
-(void)loadIPv4Dict:(id)arg1 ;
-(void)loadIPv6Dict:(id)arg1 ;
-(void)loadProxyDict:(id)arg1 ;
-(void)loadDNSDict:(id)arg1 ;
-(id)initWithWirelessDict:(id)arg1 ;
-(void)setIsHotspotDevice:(BOOL)arg1 ;
-(void)setHotspotDevice:(SFRemoteHotspotDevice *)arg1 ;
-(SFRemoteHotspotDevice *)hotspotDevice;
-(void)setSecurityMode:(int)arg1 ;
-(void)setHotspotInfo:(SFRemoteHotspotInfo *)arg1 ;
-(BOOL)requiresSavedPassword;
-(void)setScanResultDictionary:(id)arg1 ;
-(BOOL)needsHotSpot20Query;
-(void)setHS20Data:(WiFiNetworkRef)arg1 ;
-(id)HS20Badge;
-(void)setUsername:(id)arg1 isManaged:(BOOL)arg2 ;
-(void)setIPv4Dict:(id)arg1 ;
-(void)setProxyDict:(id)arg1 ;
-(void)setDNSDict:(id)arg1 ;
-(id)customSettings;
-(id)_initWithDictionary:(id)arg1 available:(BOOL)arg2 ;
-(void)_setCustomValue:(id)arg1 forKey:(CFStringRef)arg2 protocol:(CFStringRef)arg3 ;
-(void)setBSSID:(id)arg1 ;
-(BOOL)profileContainsEAPSIM:(id)arg1 ;
-(BOOL)profileContainsEAPAKA:(id)arg1 ;
-(BOOL)profileContainsCarrierEAPType:(id)arg1 ;
-(BOOL)requiresPasswordOnly;
-(BOOL)requiresUsernameAndPassword;
-(void)setNeedsFavoritesCheck:(BOOL)arg1 ;
-(BOOL)needsFavoritesCheck;
-(void)setIsFavorite:(BOOL)arg1 ;
-(id)lastProxyDictionary;
-(BOOL)isWAPIEnterprise;
-(BOOL)usernameIsManaged;
-(id)requestedInformation;
-(long long)compareDescending:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
@end

