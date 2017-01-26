/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXPlayerViewControllerHost;
@class AVPlayerViewController;

@interface SXPlayerViewControllerManager : NSObject {

	id<SXPlayerViewControllerHost> _host;
	AVPlayerViewController* _playerViewController;

}

@property (assign,nonatomic,__weak) id<SXPlayerViewControllerHost> host;                 //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
+(void)playerViewControllerForHost:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)releasePlayerViewControllerFromHost:(id)arg1 ;
+(id)manager;
+(id)host;
-(id<SXPlayerViewControllerHost>)host;
-(void)setHost:(id<SXPlayerViewControllerHost>)arg1 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayerViewController *)playerViewController;
@end
