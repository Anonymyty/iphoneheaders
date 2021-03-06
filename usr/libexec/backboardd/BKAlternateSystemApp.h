/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKAlternateSystemAppDelegate, OS_dispatch_queue;
@class NSString, NSDictionary, NSObject, BSPortDeathWatcher;

@interface BKAlternateSystemApp : NSObject {

	id<BKAlternateSystemAppDelegate> _delegate;
	NSString* _bundleID;
	NSDictionary* _options;
	NSString* _jobLabel;
	NSObject*<OS_dispatch_queue> _queue;
	BSPortDeathWatcher* _portDeathWatcher;

}

@property (assign,nonatomic) id<BKAlternateSystemAppDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                                      //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BSPortDeathWatcher * portDeathWatcher;                  //@synthesize portDeathWatcher=_portDeathWatcher - In the implementation block
+(id)bundleInfoOverrides;
+(void)deleteAllJobs;
-(void)setPortDeathWatcher:(BSPortDeathWatcher *)arg1 ;
-(void)setJobLabel:(NSString *)arg1 ;
-(void)_noteLaunchFailed:(int)arg1 ;
-(void)_noteExited:(unsigned long long)arg1 ;
-(void)_noteLaunchSucceeded;
-(id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3 ;
-(BSPortDeathWatcher *)portDeathWatcher;
-(BOOL)launch;
-(void)setDelegate:(id<BKAlternateSystemAppDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<BKAlternateSystemAppDelegate>)delegate;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)jobLabel;
-(BOOL)terminate;
@end

