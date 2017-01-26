/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAudioElement, UIColor;

@interface IKBackgroundElement : IKViewElement

@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKAudioElement * audio; 
@property (nonatomic,readonly) double transitionInterval; 
@property (nonatomic,retain,readonly) UIColor * backgroundColor; 
-(UIColor *)backgroundColor;
-(NSArray *)images;
-(double)transitionInterval;
-(IKAudioElement *)audio;
@end
