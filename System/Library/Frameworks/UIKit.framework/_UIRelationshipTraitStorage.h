/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITraitStorage.h>

@class NSOrderedSet;

@interface _UIRelationshipTraitStorage : _UITraitStorage {

	NSOrderedSet* _relationshipCandidates;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3 ;
-(void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end
