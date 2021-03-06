/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NCWidgetController_Service_IPC.h>

@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC> {

	NSXPCConnection* _connection;

}
+(id)widgetController;
-(void)dealloc;
-(void)_invalidateConnection;
-(void)__didReceiveHasContentRequest;
-(id)_connectionForRequest;
-(void)setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
@end

