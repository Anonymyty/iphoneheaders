/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:49 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIViewController.h>

@protocol AXUIService;
@class VOTUICursorView;

@interface VOTUICursorViewController : UIViewController {

	id<AXUIService> _axuiService;
	VOTUICursorView* _cursorView;
	CGPathRef _cursorPath;
	CGRect _cursorFrame;

}

@property (assign,nonatomic) id<AXUIService> axuiService;               //@synthesize axuiService=_axuiService - In the implementation block
@property (assign,nonatomic) BOOL cursorHidden; 
@property (nonatomic,retain) VOTUICursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
@property (assign,nonatomic) CGRect cursorFrame;                        //@synthesize cursorFrame=_cursorFrame - In the implementation block
@property (nonatomic,retain) CGPathRef cursorPath;                      //@synthesize cursorPath=_cursorPath - In the implementation block
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)_updateCursorPath;
-(void)setCursorPath:(CGPathRef)arg1 ;
-(VOTUICursorView *)cursorView;
-(void)setCursorView:(VOTUICursorView *)arg1 ;
-(void)setCursorHidden:(BOOL)arg1 ;
-(CGRect)cursorFrame;
-(void)setAxuiService:(id<AXUIService>)arg1 ;
-(void)_updateCursorFrameAnimated:(BOOL)arg1 ;
-(BOOL)cursorHidden;
-(void)setCursorFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(id)initWithAXUIService:(id)arg1 ;
-(id<AXUIService>)axuiService;
-(CGPathRef)cursorPath;
-(void)dealloc;
-(void)viewDidLoad;
@end

