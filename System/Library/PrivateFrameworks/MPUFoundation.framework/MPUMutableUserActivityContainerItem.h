/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContainerItem.h>

@class MPMediaEntity;

@interface MPUMutableUserActivityContainerItem : MPUUserActivityContainerItem

@property (assign,nonatomic) long long containerItemType; 
@property (nonatomic,retain) MPMediaEntity * selectedMediaEntity; 
@property (nonatomic,retain) MPMediaEntity * visualReferenceMediaEntity; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerItemType:(long long)arg1 ;
-(void)setSelectedMediaEntity:(MPMediaEntity *)arg1 ;
-(void)setVisualReferenceMediaEntity:(MPMediaEntity *)arg1 ;
@end
