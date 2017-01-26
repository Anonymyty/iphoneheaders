/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEHotspotNetwork, NSArray, NSString;

@interface NEHotspotHelperCommand : NSObject {

	CNPluginCommandRef _command;

}

@property (readonly) long long commandType; 
@property (readonly) NEHotspotNetwork * network; 
@property (readonly) NSArray * networkList; 
@property (assign) CNPluginCommandRef command;                //@synthesize command=_command - In the implementation block
@property (readonly) NSString * interfaceName; 
-(void)dealloc;
-(id)description;
-(NSArray *)networkList;
-(CNPluginCommandRef)command;
-(NSString *)interfaceName;
-(void)setCommand:(CNPluginCommandRef)arg1 ;
-(long long)commandType;
-(id)initWithCommand:(CNPluginCommandRef)arg1 ;
-(id)createResponse:(long long)arg1 ;
-(id)createTCPConnection:(id)arg1 ;
-(id)createUDPSession:(id)arg1 ;
-(NEHotspotNetwork *)network;
@end
