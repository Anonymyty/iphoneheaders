/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCallCapabilitiesXPCServerActions <NSObject>
@required
-(void)setWiFiCallingEnabled:(BOOL)arg1;
-(void)setVoLTECallingEnabled:(BOOL)arg1;
-(void)setThumperCallingEnabled:(BOOL)arg1;
-(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2;
-(void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1;
-(void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(void)invalidateAndRefreshThumperCallingProvisioningURL;
-(void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
-(void)requestPinFromPrimaryDevice;
-(void)cancelPinRequestFromPrimaryDevice;
-(void)setRelayCallingEnabled:(BOOL)arg1;

@end

