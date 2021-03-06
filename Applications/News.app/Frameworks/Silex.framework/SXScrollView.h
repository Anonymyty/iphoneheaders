/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDScrollView.h>

@protocol SXScrollViewDelegate;
@class SXAXCustomRotorProvider;

@interface SXScrollView : TSDScrollView {

	id<SXScrollViewDelegate> _scrollViewDelegate;
	SXAXCustomRotorProvider* _customRotorProvider;

}

@property (assign,nonatomic,__weak) id<SXScrollViewDelegate> scrollViewDelegate;              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isBouncing; 
@property (nonatomic,retain) SXAXCustomRotorProvider * customRotorProvider;                   //@synthesize customRotorProvider=_customRotorProvider - In the implementation block
-(BOOL)isBouncing;
-(SXAXCustomRotorProvider *)customRotorProvider;
-(void)setCustomRotorProvider:(SXAXCustomRotorProvider *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id<SXScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<SXScrollViewDelegate>)arg1 ;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(long long)arg1 ;
@end

