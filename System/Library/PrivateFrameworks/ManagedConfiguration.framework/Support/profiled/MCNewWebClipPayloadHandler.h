/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class UIWebClip;

@interface MCNewWebClipPayloadHandler : MCNewPayloadHandler {

	UIWebClip* _setAsideClip;

}
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)savedWebClipIdentifier;
-(id)_findInstalledClipWithIdentifier:(id)arg1 ;
-(void)remove;
-(BOOL)isInstalled;
@end

