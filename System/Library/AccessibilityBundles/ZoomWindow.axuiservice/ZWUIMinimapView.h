/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface ZWUIMinimapView : UIView {

	UIView* _zoomedView;
	BOOL _enabled;
	CGRect _zoomedRect;

}

@property (assign,nonatomic) CGRect zoomedRect;              //@synthesize zoomedRect=_zoomedRect - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
-(void)hideSelf;
-(void)setZoomedRect:(CGRect)arg1 ;
-(void)setZoomedRect:(CGRect)arg1 screenRect:(CGRect)arg2 ;
-(CGRect)zoomedRect;
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
@end

