/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/InterfacePlugins/CECIOCECInterfaceListener.plugin/CECIOCECInterfaceListener
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CECIOCECInterfaceListener/CECIOCECInterfaceListener-Structs.h>
#import <CoreRC/CoreRCInterfaceListener.h>

@interface CECIOCECInterfaceListener : CoreRCInterfaceListener {

	IOCECInterfaceListenerRef _listener;

}
-(void)addIOCECInterface:(IOCECInterfaceRef)arg1 ;
-(void)dealloc;
-(id)initWithInterfaceController:(id)arg1 ;
-(void)scheduleWithDispatchQueue:(id)arg1 ;
-(void)unscheduleFromDispatchQueue:(id)arg1 ;
@end
