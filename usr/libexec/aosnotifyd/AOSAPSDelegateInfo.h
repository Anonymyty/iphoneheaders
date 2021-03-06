/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AOSAPSDelegate;
@class NSString;

@interface AOSAPSDelegateInfo : NSObject {

	NSString* _topic;
	id<AOSAPSDelegate> _delegate;

}

@property (nonatomic,retain) NSString * topic;                                //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic,__weak) id<AOSAPSDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AOSAPSDelegate>)arg1 ;
-(id<AOSAPSDelegate>)delegate;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
@end

