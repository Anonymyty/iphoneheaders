/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/keybagd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <keybagd/RDClient.h>

@protocol RDClient <NSObject>
@required
-(void)uploadContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)willSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)readyToSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)userSwitchTaskListDidUpdate;
-(void)bubbleDidPop;

@end

#import <keybagd/BDBubbled.h>

@class NSString, NSArray, NSXPCConnection;

@interface RDClient : NSObject <RDClient, BDBubbled> {

	BOOL _stakeholderIsRegistered;
	BOOL _wasToldWillSwitchUser;
	BOOL _criticalStakeHolder;
	BOOL _bubbleStakeHolder;
	BOOL _bubblePopstakeholderIsRegistered;
	int _switchStakeHolderKind;
	NSString* _machServiceName;
	NSArray* _userSwitchTasks;
	NSArray* _userSyncTasks;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) int pid; 
@property (nonatomic,retain) NSString * machServiceName;                         //@synthesize machServiceName=_machServiceName - In the implementation block
@property (assign,nonatomic) BOOL stakeholderIsRegistered;                       //@synthesize stakeholderIsRegistered=_stakeholderIsRegistered - In the implementation block
@property (assign,nonatomic) BOOL wasToldWillSwitchUser;                         //@synthesize wasToldWillSwitchUser=_wasToldWillSwitchUser - In the implementation block
@property (assign,nonatomic) BOOL criticalStakeHolder;                           //@synthesize criticalStakeHolder=_criticalStakeHolder - In the implementation block
@property (assign,nonatomic) BOOL bubbleStakeHolder;                             //@synthesize bubbleStakeHolder=_bubbleStakeHolder - In the implementation block
@property (assign,nonatomic) BOOL bubblePopstakeholderIsRegistered;              //@synthesize bubblePopstakeholderIsRegistered=_bubblePopstakeholderIsRegistered - In the implementation block
@property (assign,nonatomic) int switchStakeHolderKind;                          //@synthesize switchStakeHolderKind=_switchStakeHolderKind - In the implementation block
@property (nonatomic,retain) NSArray * userSwitchTasks;                          //@synthesize userSwitchTasks=_userSwitchTasks - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSwitchTasks; 
@property (nonatomic,retain) NSArray * userSyncTasks;                            //@synthesize userSyncTasks=_userSyncTasks - In the implementation block
@property (nonatomic,readonly) BOOL hasUserSyncTasks; 
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedXPCInterface;
+(id)sharedBubbleXPCInterface;
+(id)clientWithXPCConnection:(id)arg1 ;
-(BOOL)criticalStakeHolder;
-(BOOL)bubbleStakeHolder;
-(void)setStakeholderIsRegistered:(BOOL)arg1 ;
-(void)setSwitchStakeHolderKind:(int)arg1 ;
-(void)setCriticalStakeHolder:(BOOL)arg1 ;
-(void)setBubblePopstakeholderIsRegistered:(BOOL)arg1 ;
-(void)bubbleShouldPop;
-(BOOL)bubblePopstakeholderIsRegistered;
-(void)setBubbleStakeHolder:(BOOL)arg1 ;
-(BOOL)stakeholderIsRegistered;
-(BOOL)hasUserSwitchTasks;
-(BOOL)wasToldWillSwitchUser;
-(NSArray *)userSyncTasks;
-(void)addUserSwitchTask:(id)arg1 ;
-(BOOL)removeUserSwitchTask:(id)arg1 ;
-(void)addUserSyncTask:(id)arg1 ;
-(BOOL)removeUserSyncTask:(id)arg1 ;
-(id)taskDictionaryInArray:(id)arg1 withUUIDString:(id)arg2 ;
-(void)setWasToldWillSwitchUser:(BOOL)arg1 ;
-(BOOL)hasUserSyncTasks;
-(void)clearTaskLists;
-(int)switchStakeHolderKind;
-(void)setUserSyncTasks:(NSArray *)arg1 ;
-(id)init;
-(id)proxy;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)uploadContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readyToSwitchToUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userSwitchTaskListDidUpdate;
-(void)bubbleDidPop;
-(int)pid;
-(NSArray *)userSwitchTasks;
-(void)setUserSwitchTasks:(NSArray *)arg1 ;
-(NSString *)machServiceName;
-(void)setMachServiceName:(NSString *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

