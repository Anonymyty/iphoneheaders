/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPUISearchPluginClientInterface
@property (getter=isFadingOut,nonatomic,readonly) BOOL fadingOut; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL _hasResults; 
@required
-(BOOL)isVisible;
-(void)dismiss;
-(BOOL)_hasResults;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2;
-(BOOL)isFadingOut;

@end

