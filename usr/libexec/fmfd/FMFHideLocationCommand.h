/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <fmfd/FMFBaseCmd.h>

@interface FMFHideLocationCommand : FMFBaseCmd {

	BOOL _hideLocation;

}

@property (assign,nonatomic) BOOL hideLocation;              //@synthesize hideLocation=_hideLocation - In the implementation block
-(void)setHideLocation:(BOOL)arg1 ;
-(BOOL)hideLocation;
-(id)initWithHideLocation:(BOOL)arg1 forSession:(id)arg2 ;
-(id)pathSuffix;
-(BOOL)isUserAction;
-(id)jsonBodyDictionary;
@end

