/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {

	PDAnimationTarget* mTgtElement;
	NSMutableArray* mAttributeNames;

}

@property (nonatomic,retain) NSMutableArray * attributeNames; 
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSMutableArray *)attributeNames;
-(void)setAttributeNames:(NSMutableArray *)arg1 ;
@end
