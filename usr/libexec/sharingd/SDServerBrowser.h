/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDBonjourBrowserDelegate.h>
#import <sharingd/SDWindowsBrowserDelegate.h>

@class NSMutableDictionary, NSString;

@interface SDServerBrowser : NSObject <SDBonjourBrowserDelegate, SDWindowsBrowserDelegate> {

	long long _mode;
	NSMutableDictionary* _odiskBrowsers;
	NSMutableDictionary* _bonjourBrowsers;
	NSMutableDictionary* _windowsBrowsers;
	NSMutableDictionary* _airDropBrowsers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBrowser;
-(void)bonjourNodesDidChange:(id)arg1 ;
-(void)setIconData:(id)arg1 iconHash:(id)arg2 forPerson:(SFNodeRef)arg3 ;
-(void)stopBrowsingWorkgroup:(id)arg1 ;
-(void)setBonjourBrowserMode:(long long)arg1 ;
-(void)startBrowsingDomain:(id)arg1 ;
-(id)bonjourNodesForDomain:(id)arg1 ;
-(void)startBrowsingWorkgroup:(id)arg1 ;
-(id)windowsNodesForWorkgroup:(id)arg1 ;
-(void)startODiskBrowsing:(id)arg1 ;
-(id)odiskNodesForDomain:(id)arg1 ;
-(void)startAirDropBrowsing:(id)arg1 bundleID:(id)arg2 ;
-(id)airDropNodesForDomain:(id)arg1 ;
-(void)stopBrowsingDomain:(id)arg1 ;
-(void)stopODiskBrowsing:(id)arg1 ;
-(void)stopAirDropBrowsing:(id)arg1 ;
-(void)postNotification:(id)arg1 forNeighborhood:(id)arg2 ;
-(void)windowsNodesDidChange:(id)arg1 ;
-(SFNodeRef)copyAirDropNodeForID:(id)arg1 ;
-(BOOL)isAirDropEnabled;
-(id)init;
@end
