/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:07 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class DOMNode;

@interface UIWebOverflowScrollInfo : NSObject {

	BOOL _isUserScroll;
	DOMNode* _node;
	CGPoint _offset;

}

@property (nonatomic,retain) DOMNode * node;                 //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint offset;                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL isUserScroll;              //@synthesize isUserScroll=_isUserScroll - In the implementation block
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(DOMNode *)node;
-(id)initWithNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)coalesceScrollForNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(void)setNode:(DOMNode *)arg1 ;
-(BOOL)isUserScroll;
-(void)setIsUserScroll:(BOOL)arg1 ;
@end

